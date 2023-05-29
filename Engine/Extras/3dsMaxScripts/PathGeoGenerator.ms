macroScript EpicTools_PathGeoGenerator category:"Epic Tools" buttontext:"Path Geo Generator" tooltip:"Path Geo Generator"
(
	escapeEnable=true
	fn setVal &x val=if (x==undefined) do (x=val)
	global SplineGeoThickness=.2
	global internalSplineCopy
	global leafmeshes_Lst
	global canopyMesh
	global distanceConsideredConnected=0.5
	global canopyCreatorUIWidth = 500
	global RootBranchMesh
	global MainBranchSpline
	global deletelist
	global leafMeshArray
	global branchLeafMeshArray
	global uiOnlyMajorBranchMeshAndSplineArray
	global uiOnlyMinorBranchMeshAndSplineArray
	global choosenGeoSpline
	global DistanceForFinalBranchKinks
	global Process_rollout	
	global PathGeoGenerator_floater
	global MinorBranchScaleMultiplier 
	global idealMaxAngleForBranchVectors 
	global branchDeadZoneArea  
	global deadZoneInfluence  
	global BranchSplineKnotToLeafDistanceWeighting  
	global idealKnotVectorToLeafDOTProductResultInfluence 
	global LeafZAlignmentWithBranchVectorInfluence 
	global numberOfConnectionsPerMajorBranchPoint  
	global numberOfConnectionsPerMinorBranchPoint  
	global maxLevelsOfBranches  
	global MaxNumberOfMajorConnectionPoints 
	global bMergeSplineBranchWithMainBranch 
	global numberOfRecursivePasses
	global GeoSpline
	global randomBranchOffsetAmount
	global midpointKnotLerpAlphaVariance
	global rateOfTextureTiling
	global ThickestBranchRadius
	global connectionGeoModel
	global ConnectionModelRadiusMultiplier
	global minimumConnectionModelSize
	global ThickestFalloff
	global minBranchRadius
	global bSpawnInitialMeshes
	global bSpawnConnectionMeshes
	global hm=hairmod haircount:300 name:"Target Placement Modifier"
	--enable persistence amongst restarts
	setVal &bSpawnInitialMeshes true
	setVal &bSpawnConnectionMeshes true
	setVal &minBranchRadius .5
	setVal &minimumConnectionModelSize 2.0
	setVal &ThickestFalloff 1.0
	setVal &ConnectionModelRadiusMultiplier .5
	setVal &midpointKnotLerpAlphaVariance .1
	setVal &rateOfTextureTiling 260.0
	setVal &ThickestBranchRadius 16.0
	setVal &randomBranchOffsetAmount 10.0
	setVal &DistanceForFinalBranchKinks 100.0
	setVal &numberOfRecursivePasses 3.0
	setVal &MinorBranchScaleMultiplier 3.0
	setVal &idealMaxAngleForBranchVectors .5
	setVal &branchDeadZoneArea  .07 
	setVal &deadZoneInfluence  5.0  
	setVal &BranchSplineKnotToLeafDistanceWeighting 1.0
	setVal &idealKnotVectorToLeafDOTProductResultInfluence 50.0
	setVal &LeafZAlignmentWithBranchVectorInfluence 2.0
	setVal &numberOfConnectionsPerMajorBranchPoint 4 
	setVal &numberOfConnectionsPerMinorBranchPoint 6 
	setVal &maxLevelsOfBranches 4 
	setVal &MaxNumberOfMajorConnectionPoints 0
	setVal &leafMeshArray #()
	setVal &BranchLeafMeshArray #()
	setVal &uiOnlyMajorBranchMeshAndSplineArray #()
	setVal &uiOnlyMinorBranchMeshAndSplineArray #()
	setVal &deletelist #()
	global leafStringArray =#()
	global bMergeLeavesDown
	global bMergeSmallBranchesDown
	global bMergeMajorBranchesDown
	global clamp
	global currentTargetDistance=0
	global AlignPivotTo
	global RandomVOffset
	
	setVal &RandomVOffset 1.0
	setVal &bMergeLeavesDown false
	setVal &bMergeSmallBranchesDown true
	setVal &bMergeMajorBranchesDown false
	setVal &bMergeSplineBranchWithMainBranch true 

	fn clamp num cMin cMax = (
		/*REWRITTEN - Chris Wood*/
		result = num
		if result < cMin
		then result = cMin
		else (
			if result > cMax
			then result = cMax
		)
		return result
	)
	fn checkGeo geo setCheckGeoVar:true = (
		bValidobject = (isvalidobj geo and ClassOf geo == Editable_Poly and (getNumVerts geo > 0 ) and geo.modifiers.count == 0)
		if (bValidobject==false and setCheckGeoVar==true) do (geoCheckFail=true)
		bValidobject
	)
	fn DisplayErrorMessageBox = (
		format "*** % ***\n" (getCurrentException())
		message="An error has occured please send the following to Jonathan.Lindquist@EpicGames.com." 
		message=message+getCurrentException()
		MessageBox message
		ResumeEditing()
	)
	fn concatNameAndNumber prefixString num width= (
			numString = num as string
			while (numString.count < width) do (
				numString = "0" + numString
			)
			return prefixString + numString
		)
	fn createUniqueSelectionSetName = (
		foundUniqueName=false
		newName="TargetMeshSet_1"
		counter=1
		selectionSetNameArray=for i=1 to selectionSets.count collect (getNamedSelSetName i)
		while foundUniqueName==False and selectionSetNameArray.count!= 0 do 
			(
				newName="TargetMeshSet_"+(counter as string)
				if (appendifUnique selectionSetNameArray newName) then 
					(
						foundUniqueName=true
					)
				counter+=1
					
			)
		newName
	)		
	fn	seperateElementsIntoEditablePolys = (
			/*REWRITTEN - Chris Wood*/
			SuspendEditing()
			try
			with redraw off (
				delNodesArray = #()
				--if (itemsToProcess==undefined or classof itemsToProcess != Array) then (loopObjs=$) else (loopObjs=itemsToProcess)
				for obj in $
				do (
					if (canConvertTo obj Editable_Mesh) then (
						--ConvertToMesh obj
						global elementNodesArray = #()
						
						--Reset object offset before splitting otherwise the offset is lost
						obj.transform = obj.objectTransform
						obj.objectOffsetPos = [0,0,0]
						obj.objectOffsetRot = Quat 0 0 0 1
						obj.objectOffsetScale = [1,1,1]
						
						--Get object wire colour for use as child objects' colours
						wirecolor=obj.wirecolor as point3
						wirecolorMax=amax #(wirecolor[1],wirecolor[2],wirecolor[3]) 
						wirecolor= wirecolor * 255.0/wirecolorMax
						newWireColor=wirecolor
						
						nodeName=obj.name
						
						while (meshop.getNumFaces obj > 0) do (
							elementFaces = meshop.getElementsUsingFace obj 1
							newMesh = meshop.detachFaces obj elementFaces delete:true asMesh:true
							prefixName = nodeName + "_Detached_"
							newNode = Editable_Mesh prefix:prefixName
							append elementNodesArray newNode
							newNode.mesh = newMesh
							update newNode
							newNode.transform *= obj.transform
							convertTo newNode Editable_Poly
							ResetXForm newNode
							ResetTransform newNode
							ResetScale newNode
							ResetPivot newNode
							CenterPivot newNode
							maxOps.CollapseNode newNode true
						)
						append delNodesArray obj
						wireColourStep=255.0/(elementNodesArray.count + 1)
						for elementNode in elementNodesArray
						do (
							newWireColor -= wireColourStep
							newWireColor=[clamp newWireColor[1] 0 255,clamp newWireColor[2] 0 255,clamp newWireColor[3] 0 255]
							elementNode.wirecolor=newWireColor as color							
						)
						
						selectionSetPrefix = nodeName + "_Detached_Collection_"
						selectionUniqueIndex = 1
						selectionSetName = concatNameAndNumber selectionSetPrefix selectionUniqueIndex 3
						
						isUniqueName = false
						while (isUniqueName == false)
						do (
							isUniqueName = true
							for existingSet in selectionSets
							do (
								if (existingSet.name == selectionSetName) then (
									selectionUniqueIndex += 1
									selectionSetName = concatNameAndNumber selectionSetPrefix selectionUniqueIndex 3
									isUniqueName = false
								)
							)							
						)
						
						selectionSets[selectionSetName] = elementNodesArray
						select selectionSets[selectionSetName]
					)
				)
				delete delNodesArray
				ResumeEditing()
			)
			catch (
				format "*** % ***\n" (getCurrentException())
				ResumeEditing()
			)
		) -- end seperateElementsIntoEditablePolys
		
	fn recreateBoundingBoxCanopyCreator processSelectedMeshes:true= (
		suspendediting();
		try
		with redraw off (
			global recreateBoundingBoxReturnArray=#()
			if processSelectedMeshes== true do (
				-- collect all of the useable objects 
				warningMeshesCount=0
				--overrides perObjectPainterArray with the currect "cleaned" selection
				global perObjectPainterArray=#()
				for i in selection do 
					(
						if checkGeo i==true then 
							(
								append perObjectPainterArray i
							) 
						else 
							(
								warningMeshesCount+=1
							)										
					)
				if warningMeshesCount!=0 then (messageBox (warningMeshesCount +" of the selected meshes were not collapsed polygon objects or didn't contain vertices.")) 
					else if perObjectPainterArray.count == 0 do messagebox "Please select editable polygon meshes."
				
			)
			selsetArrays=#()
			global b
			--copy old selection sets into an array
			if selectionSets.count > 0 do(			
					for i=1 to selectionSets.count do append selsetArrays #(selectionSets[i].name,#())
					for i=1 to selectionSets.count do (for j in selectionSets[i] do append selsetArrays[i][2] j)
			)

			count=0
			
			for Obj in perObjectPainterArray do (
				count+=1
				pbMaxOperations=perObjectPainterArray.count
				--for every leaf create a box if it hasn't been created yet
				b=convertToPoly(box())
				b.transform =Obj.transform 
				b.wirecolor=Obj.wirecolor
				oldname=Obj.name
				currLayer= Obj.INodeLayerProperties.layer
				currLayer.addnode b
				
					
				for j=1 to selsetArrays.count do (-- cycle groups
					for i in selsetArrays[j][2] do ( -- cycle objects in each array group
						if Obj == i do (
							append selsetArrays[j][2] b
						)
					) 
				)
				polyop.attach b Obj
				polyop.deleteFaces b #{1..6}
				b.name=oldname
				
				
				append recreateBoundingBoxReturnArray b
				
			)

			-- delete deleted items from array
			tempselsetArrays= deepcopy selsetArrays
			for i=1 to selsetArrays.count do (
				selsetArrays[i][2]=#()
			)
			pbMaxOperations=tempselsetArrays.count 	
			for i=1 to tempselsetArrays.count do (
				for j=1 to tempselsetArrays[i][2].count do (
					if isvalidobj tempselsetArrays[i][2][j] do append selsetArrays[i][2] tempselsetArrays[i][2][j] 
				)
			)
			for i=1 to selsetArrays.count do (
				selectionsets[selsetArrays[i][1]]=selsetArrays[i][2] 
			)
			recreateBoundingBoxReturnArray
		)catch(
			displayAutoErrorMessage();
			resumeediting();
		)
		resumeediting();
	)

	fn AlignPivotTo Obj Trgt=
	(		
		/*REWRITTEN - Chris Wood*/
		
		assert (IsValidNode Obj) message: "AlignPivotTo expected Obj to be a valid Node"
		targetTM = Trgt
		if (IsValidNode Trgt) then targetTM = Trgt.transform
		assert (ClassOf targetTM == Matrix3) message: "AlignPivotTo expected Trgt to be a valid Node or Matrix3" 
		
		invTargetTM = inverse targetTM
		
		for c in Obj.children
		do (
			newChildLocalTM = c.transform * invTargetTM
			c.scale.controller.value = newChildLocalTM.scalepart
			c.rotation.controller.value = newChildLocalTM.rotationpart
			c.pos.controller.value = newChildLocalTM.translationpart
		)			
		
		newObjOffsetTM = Obj.objectTransform * invTargetTM
		Obj.transform = targetTM
		Obj.objectOffsetScale = newObjOffsetTM.scalepart
		Obj.objectOffsetRot = newObjOffsetTM.rotationpart
		Obj.objectOffsetPos = newObjOffsetTM.translationpart		
	)
	fn CreateNewMeshPivots myMesh=	(
		--try with undo off(
			vertexPivotPos=polyop.getVert myMesh 1
			vertexPivotPos2=polyop.getVert myMesh 2
			xVector=normalize(vertexPivotPos-vertexPivotPos2)
			currentTargetDistance=distance vertexPivotPos vertexPivotPos2 
			Nv = [0.0,0.0,1.0]
			Rv = normalize (vertexPivotPos-vertexPivotPos2)
			Uv = normalize (cross  Nv Rv)
			Nv = -normalize (cross Uv Rv)
			newAxis = matrix3 -Rv -Uv  Nv  vertexPivotPos
		--) 
		--catch(
			--messagebox "Models need to be collapsed editable polygon objects."
		--)
	)

	fn pickEditablePolys obj= (
		isvalidobj obj and ClassOf obj == Editable_Poly
	)
	fn pickEditablePolysRootBranch obj= (
		isvalidobj obj and ClassOf obj == Editable_Poly and finditem BranchLeafMeshArray obj==0
	)
	fn pickEditableSpline obj= (
		isvalidobj obj and (ClassOf obj == line or ClassOf obj == SplineShape)
	)


	
	
	
	--pickSplines
	labeloffset=[80,40]
	labelHeight =60	
	BoxHeight=6
	canopyStartString=" Target Placement Mesh: "
	canopyEmptyString=canopyStartString+"Undefined"

	
	rootMeshStartString=" Parent Geometry: "
	rootMeshEmptyString=rootMeshStartString+"Undefined"

	--ProjectionMeshStartingString=" Projection Mesh: "
	--ProjectionMeshEmptyString=ProjectionMeshStartingString+"Undefined"







		fn produceValidBoolAndCollapseToPoly Asset = (
			validBool=False
			if isvalidobj Asset do (
				convertto Asset Editable_Poly 
				validBool=true
			)
			validBool
		)

		
		
		
		
		
		
		
		
		
		
		
		/**********************************************************************************************************************************************************************

		Branch UI
			
		**********************************************************************************************************************************************************************/
		fn checkSpline spline = isvalidnode spline and (classof spline == SplineShape or classof spline == Line) and spline.modifiers.count == 0
		
		fn cleanTargetArrayMeshArray=(
			temparray=#()
			for i in leafMeshArray do if (checkgeo i)==true do append temparray i 
			leafMeshArray=temparray
		)


		----------------------------------------------------------------------------------------------------------------------------------------------------------------
		fn cleanBranchLeafMeshArray=(
			temparray=#()
			for i in BranchLeafMeshArray do if (checkgeo i)==true do append temparray i 
			BranchLeafMeshArray=temparray
		)

		fn produceLeafArrayFromSelection = (
			returnArray=#()
			failureArray=#()
			for i in selection do (
				if (checkgeo i) then 
				(
					append returnArray i 
				)
			else 
				(
					append failureArray i.name
				)
			)
			if failureArray.count > 0 do (
				failureString="The following meshes were not collapsed editable polygon objects:\r\r"
				for i in failureArray do (failureString=failureString+i+"\r")
				messagebox failureString 
			)
			returnArray	
		)
		fn getBranchLeafMeshArrayTextfieldString = (
			BranchLeafMeshArrayString= " Number Of Acceptable Targets: " + (BranchLeafMeshArray.count as string) 
		)
		global BranchLeafMeshArrayString=getBranchLeafMeshArrayTextfieldString ()

------------------------------------------------------------------------------- Leaf Generator 

	global populateListBox
	fn populateListBox itembox meshArray= (
		StringArray=#()
		for i in meshArray do (
			if isvalidnode i do append StringArray i.name
		)
		itembox.items = StringArray
	)

	fn pickFurMesh obj= (
		isvalidobj obj and (((finditem obj.modifiers hm)!=0) or validModifier obj hm) and ((finditem leafMeshArray obj)==0)
	)
	
	global choosenCanopyPlacement
	
	fn updateTargetPlacementUI=(
		cleanTargetArrayMeshArray()
		if LeafMeshGenerator_rollout!= undefined do (
			populateListBox LeafMeshGenerator_rollout.leafmeshes_Lst leafMeshArray
			if isvalidobj canopyMesh and (findItem canopyMesh.modifiers hm != 0) then (
				LeafMeshGenerator_rollout.choosenCanopyPlacement.text=canopyStartString +canopyMesh.Name
			)
		
			else (
				canopyMesh=undefined
				LeafMeshGenerator_rollout.choosenCanopyPlacement.text=canopyEmptyString
			)
		)
		if isvalidnode canopyMesh and leafMeshArray.count!=0 then true else false
	) 
	

	
	
	global LeafMeshGenerator_rollout
	rollout LeafMeshGenerator_rollout "Target Placement Tool" (
		label spacerlabel1 ""
		pickbutton chooseCanopyPlacement "Choose Target Placement Mesh" across:2 width:(canopyCreatorUIWidth/2) filter:pickFurMesh
		label choosenCanopyPlacement canopyEmptyString  style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
		--pickbutton chooseNormalVertexProjectionMesh "Optional: Vertex Normal Projection Mesh" across:2 width:(canopyCreatorUIWidth/2)  filter:pickEditablePolys
		--label choosenVertNormalProjection ProjectionMeshEmptyString style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
		group  "Target Meshes" (
			listbox leafmeshes_Lst "" height:BoxHeight width:(canopyCreatorUIWidth) 
			pickbutton addLeafMeshes_Btn "Add Proto Target Meshes" width:(canopyCreatorUIWidth) align:#left filter:pickEditablePolys 
		)

		button placeMeshes "Place Target Meshes"  width:(canopyCreatorUIWidth*.75) height:50
		label spacerLabel20 "" align:#left 
		--Canopy Placement Mesh
		on chooseCanopyPlacement picked obj do (
			canopyMesh=obj
			if findItem obj.modifiers hm == 0 do (
				addModifier obj hm
			)
			updateTargetPlacementUI()
		)
		on chooseCanopyPlacement rightclick do (
			--choosenCanopyPlacement.text=canopyEmptyString
			canopyMesh=undefined	
			updateTargetPlacementUI()			
		)

		
		on addLeafMeshes_Btn picked obj do (
			appendifUnique leafMeshArray obj
			updateTargetPlacementUI()
		)
		on leafmeshes_Lst rightclick item do
		(
			deleteitem leafMeshArray item
			updateTargetPlacementUI()
		)
			
	
		/*global projectionMesh=undefined	
		on chooseNormalVertexProjectionMesh picked obj do (
			projectionMesh=obj
			choosenVertNormalProjection.text=ProjectionMeshStartingString+obj.Name
		)
		on chooseNormalVertexProjectionMesh rightclick do (
			projectionMesh=undefined
			choosenVertNormalProjection.text=ProjectionMeshEmptyString
		)*/
		
		fn verifyData = (
			isvalidobj canopyMesh and \
			(isvalidobj canopyMesh.modifiers[hm.name as string]) and \
			(	
				leafTestBool=true
				if leafMeshArray.count == 0 do leafTestBool=false
				if leafTestBool==true do (
					for i in leafMeshArray do if (produceValidBoolAndCollapseToPoly i==false) do leafTestBool=false
				)
				leafTestBool	
			) 
		)
		fn processModels targetcanopyMesh leafModel= (
			targetTransform=CreateNewMeshPivots targetcanopyMesh
			targetXVectorLength=(nodeLocalBoundingBox leafModel)[1][1]
			newmodelScale=abs (targetXVectorLength/currentTargetDistance)-- current target distance is set in CreateNewMeshPivots
			newmodelScale=[newmodelScale,newmodelScale,newmodelScale]
			AlignPivotTo targetcanopyMesh targetTransform
			leafModel.transform=targetcanopyMesh.transform 
		)		
		fn MainLeafPlacementFunction =(
			if verifyData()==true then (
				SuspendEditing()
				try
				with redraw off (
					hairModifier=canopyMesh.modifiers[hm.name as string]
					currentPreviewKnotAmount = hairModifier.HairSegments
					hairModifier.HairSegments= 1
					hairStrands = hairModifier.ConvertToMesh instance:canopyMesh
					hairModifier.HairSegments=currentPreviewKnotAmount 
					select hairStrands
					
					seperateElementsIntoEditablePolys()
					hairStrands=elementNodesArray
					
					select leafMeshArray 
					recreateBoundingBoxCanopyCreator processSelectedMeshes:true
					leafMeshArray = recreateBoundingBoxReturnArray
					finalLeafArray=#()
					for i in hairStrands do (
						myleafmodel=copy leafMeshArray[(random 1 leafMeshArray.count)]
						processModels i myleafmodel
						append finalLeafArray myleafmodel
					)
					BranchLeafMeshArray=deepcopy finalLeafArray
					cleanBranchLeafMeshArray()
					
					
					newSelectionSetName=createUniqueSelectionSetName()
					selectionSets[newSelectionSetName] = finalLeafArray
					delete hairStrands
					finalLeafArray
				)
				catch (
					format "*** % ***\n" (getCurrentException())
					ResumeEditing()
				)
			)
			else 
			(
				MessageBox "The target placement script encountered an error. Please select valid target meshes and a target placement mesh."
			)
			ResumeEditing()
		)

		on placeMeshes pressed do (
			updateTargetPlacementUI() 
			if isvalidnode canopyMesh and leafMeshArray.count!=0 then true else false
			MainLeafPlacementFunction()
			Process_rollout.NumberOfLeafMeshes.text=getBranchLeafMeshArrayTextfieldString()
		)

	


			
		
	)
	

	
	
	
	
	
	
	

/*****************************************************************************************************************************************************
******************************************************************************************************************************************************

BRANCH CODE

******************************************************************************************************************************************************
*****************************************************************************************************************************************************/
	
	struct splineDistanceStruct (distanceTraveled, width, knot, spline, knotPosition, lerpAlpha, leaf, knotVector,targetPosition, Score)
	fn checkSplineValidity spline= (
		isvalidnode spline and (classof spline == SplineShape or classof spline == Line) and spline.modifiers.count == 0 and numKnots spline > 1
	)
	fn lerp a b alphaVal=(
		(A*(1.0-alphaVal))+(B*alphaVal)
	)
	fn qSortCompareScores a b = (
		if a.Score > b.Score then 1 else -1
	)
	--this is used to create splines in the correct order
	fn qSortSplineGenerationOrder a b = (
		if a.spline == b.spline then (
			if (a.knot == b.knot) then (
				if (distance a.targetPosition a.knotPosition) > (distance b.targetPosition b.knotPosition) then 1 else -1 
			) else (
				if a.knot > b.knot then 1 else -1
			)
		) else (
			if a.spline > b.spline then 1 else -1
		)
			
	)
	
	fn recursiveSplineFunction &arrayOfLeavesToConnect currentSequence:1.0 totalSequences:5.0 numberPerPass:5.0= (
		if numberPerPass>arrayOfLeavesToConnect.count then NumberToProcess=arrayOfLeavesToConnect.count else NumberToProcess=numberPerPass
		KnotPositionsForLeafPairings=#()
		for s=1 to (numSplines internalSplineCopy) do (
			totalNumberOfKnots=(numKnots internalSplineCopy s)
			totalNumberOfKnotsIterations=(if currentSequence==1 then totalNumberOfKnots else totalNumberOfKnots-1)
			for k=1 to totalNumberOfKnotsIterations do (
				if (k < totalNumberOfKnots) -- IS NOT THE LAST INDEX 
				then 
					(
						neighborKnot=k+1
						neighborKnotSign=-1
					)
				else -- IS THE LAST INDEX
					(
						neighborKnot=k-1
						neighborKnotSign=1
					)
				kPosition = getKnotPoint internalSplineCopy s k
				NeighborPosition = getKnotPoint internalSplineCopy s neighborKnot
				vectorToNeighboor = normalize ( (kPosition-NeighborPosition) * neighborKnotSign )							
				append KnotPositionsForLeafPairings #(kPosition,vectorToNeighboor, s,k)
			)
		)
		KnotLeafArray=#()
		KnotLeafDistanceArray=#()
		for l=1 to arrayOfLeavesToConnect.count  do (
			append KnotLeafDistanceArray #()
			for i=1 to KnotPositionsForLeafPairings.count do (
				currentleafMesh=arrayOfLeavesToConnect[l]
				knotPosition=KnotPositionsForLeafPairings[i][1]
				vectorToNeighboor=KnotPositionsForLeafPairings[i][2]
				currentspline=KnotPositionsForLeafPairings[i][4]
				currentKnot=KnotPositionsForLeafPairings[i][3]
				vectorToLeafTarget=currentleafMesh.position-knotPosition
				distanceAmount=distance vectorToLeafTarget [0,0,0]
				normalizedVectorToLeaf=normalize (vectorToLeafTarget)
				normalizedLeafXAxis=normalize (currentleafMesh.transform[1])
				--Black=a negative
				dotSplineVectorToLeaf=clamp (dot vectorToNeighboor normalizedVectorToLeaf) 0.0 1.0
				dotToLeaf=clamp (Dot normalizedVectorToLeaf normalizedLeafXAxis) 0.0 1.0
				LeafZAlignmentWithBranchVector=1.0-(abs(dot (currentleafMesh.transform[3]) normalizedVectorToLeaf)) -- checks to see if z fights with branch rotation
				deadzoneMask=clamp (1.0-((clamp (dotSplineVectorToLeaf-.9)0 1)*10.0)) 0 1 
				idealKnotVectorToLeafDOTProductResult=clamp ((dotToLeaf*-1.0)-idealMaxAngleForBranchVectors) -1.0 1.0 -- gradient values. negative where branches should be. Positive where they should not. 
				--Make white a negative then increase scale
				Score=((1.0-(dotSplineVectorToLeaf*dotToLeaf*LeafZAlignmentWithBranchVector*deadzoneMask))*idealKnotVectorToLeafDOTProductResultInfluence)+(distanceAmount*BranchSplineKnotToLeafDistanceWeighting)
				Append KnotLeafArray (splineDistanceStruct leaf:arrayOfLeavesToConnect[l] KnotPosition:KnotPositionsForLeafPairings[i][1] Score:score knot:currentKnot spline:currentspline targetPosition:currentleafMesh.position)-- this is the leave array that is used 
				Append KnotLeafDistanceArray[KnotLeafDistanceArray.count] (splineDistanceStruct leaf:arrayOfLeavesToConnect[l] KnotPosition:KnotPositionsForLeafPairings[i][1] Score:score knot:currentKnot spline:currentspline targetPosition:currentleafMesh.position)--distanceAmount
			)
		)	
	
		
		--SORT PAIRINGS AND GRAB BEST APPLICANTS
		tempBestDistancesArray=#()
		templeafKnotPair=#()
		tempScrapArray=#()
		leavesToProcessArray=#()
		if currentSequence==1 then (
			for i=1 to KnotLeafDistanceArray.count do qsort KnotLeafDistanceArray[i] qSortCompareScores -- find closest pairing per leaf
			for i=1 to KnotLeafDistanceArray.count do append tempBestDistancesArray KnotLeafDistanceArray[i][1]
			qsort tempBestDistancesArray qSortCompareScores
			leavesToProcessArray=for i=1 to NumberToProcess collect tempBestDistancesArray[i]
		)
		else (
			qsort KnotLeafArray qSortCompareScores --higher scores further up in array
			for i in KnotLeafArray do 
			(
				foundAnewLocation=appendIfUnique tempScrapArray i.leaf
				if foundAnewLocation==true do append templeafKnotPair i
			)
			for i=1 to NumberToProcess do append leavesToProcessArray templeafKnotPair[i]
		)
		
		--CREATE NEW SPLINES
		qsort leavesToProcessArray qSortSplineGenerationOrder
		for lk=1 to leavesToProcessArray.count do (
			beginningpos=leavesToProcessArray[lk].KnotPosition
			endingpos=leavesToProcessArray[lk].leaf.position
			addnewSpline internalSplineCopy
			currentSplineID=numSplines internalSplineCopy
			addKnot internalSplineCopy currentSplineID #corner #line beginningpos
			distanceToTarget=distance beginningpos endingpos
			global numberofPossibleKinks=floor distanceToTarget/DistanceForFinalBranchKinks
			RandomNumberOfMidPoints=random (clamp 1 0 numberofPossibleKinks) numberofPossibleKinks 
			for i=1 to RandomNumberOfMidPoints do (
				stepPercentage=1.0/(RandomNumberOfMidPoints+1.0)
				randomOffsetForLerp=(random (stepPercentage*-midpointKnotLerpAlphaVariance) (stepPercentage*midpointKnotLerpAlphaVariance))
				lerpPositionAlpha=((i as float)*stepPercentage)+randomOffsetForLerp
				NewPosition=lerp beginningpos endingpos lerpPositionAlpha
				NewPosition=NewPosition+([(random randomBranchOffsetAmount -randomBranchOffsetAmount),(random randomBranchOffsetAmount -randomBranchOffsetAmount),(random randomBranchOffsetAmount -randomBranchOffsetAmount)])
				addKnot internalSplineCopy currentSplineID #corner #line NewPosition
			)
			addKnot internalSplineCopy currentSplineID #corner #line endingpos
		)
		updateShape internalSplineCopy

		--PREPARE THE ARRAY FOR RECURSION
		global leavesToProcessArray
		for i=1 to leavesToProcessArray.count do deleteitem arrayOfLeavesToConnect (findItem arrayOfLeavesToConnect leavesToProcessArray[i].leaf)
		if arrayOfLeavesToConnect.count>0 and (currentSequence<100) do (
			recursiveSplineFunction &primaryRecursiveLeafArray currentSequence:(currentSequence+1.0) totalSequences:numberOfRecursivePasses numberPerPass:numberPerPass
		)
	) 
	
	global splineConnectionStartString=" Initial Spline: "
	global mainSplineEmptyString=splineConnectionStartString+"Undefined"
	global geoSplineStartString=" Geo Spline: "
	global geoSplineEmptyString=geoSplineStartString+"Undefined"
	global geoConnectionStartString=" Connection Mesh: "
	global geoConnectionEmptyString=geoConnectionStartString+"Undefined"
	global defaultMainSplineString
	global defaultGeoSplineString
	global defaultConnectionGeoString
	global Process_rollout
	global choosenMainConnectionSpline
	global choosenGeoSpline
	global choosenConnectionGeoModel
	fn defineBranchGeoInitializationStrings = (
		if isvalidobj geoSpline then defaultGeoSplineString=geoSplineStartString+(geoSpline.name) else defaultGeoSplineString=geoSplineEmptyString
		if isvalidobj MainBranchSpline then defaultMainSplineString=splineConnectionStartString+(MainBranchSpline.name) else defaultMainSplineString=mainSplineEmptyString
		if isvalidobj connectionGeoModel then defaultConnectionGeoString=geoConnectionStartString+(connectionGeoModel.name) else defaultConnectionGeoString=geoConnectionEmptyString
	)
	
	fn updateStringFields = (
		defineBranchGeoInitializationStrings()
		if Process_rollout!=undefined do (
			if Process_rollout.choosenMainConnectionSpline!=undefined do Process_rollout.choosenMainConnectionSpline.text=defaultMainSplineString
			if Process_rollout.choosenGeoSpline!=undefined do Process_rollout.choosenGeoSpline.text=defaultGeoSplineString
			if Process_rollout.choosenConnectionGeoModel!=undefined do Process_rollout.choosenConnectionGeoModel.text=defaultConnectionGeoString
			if Process_rollout.NumberOfLeafMeshes!=undefined do Process_rollout.NumberOfLeafMeshes.text=getBranchLeafMeshArrayTextfieldString()
		)
	)	
	defineBranchGeoInitializationStrings()
	
	fn BranchSplineMain = (
		if (checkSplineValidity MainBranchSpline) then (
			global internalSplineCopy=COPY MainBranchSpline
			SuspendEditing()
			try with redraw off (
				--FIND LEAF TO KNOT DISTANCES TO CREATE ADDITIONAL CONNECTION SPLINES
				global primaryRecursiveLeafArray=deepcopy BranchLeafMeshArray-- simply created to keep track of objects to hit
				numberPerPass=ceil((primaryRecursiveLeafArray.count as float)/numberOfRecursivePasses)
				recursiveSplineFunction &primaryRecursiveLeafArray currentSequence:1.0 totalSequences:numberOfRecursivePasses numberPerPass:numberPerPass
				geospline=internalSplineCopy
				select internalSplineCopy
				updateStringFields()
			)catch (
				DisplayErrorMessageBox()
			)
		) else (
			MessageBox "Please select a spline."	
		) 
		ResumeEditing()
		--updateBranchGeoUI()
	)
	
	fn printObjNameAndValue stringN valueN = (
		format "name:%, val:%\n" stringN valueN
	)
	fn alignModelToVector Model targetVector = (
		targetVector=normalize targetVector
		targetVector*=-1.0
		Nv = [0,0,1]
		Rv = normalize (targetVector)
		Uv = normalize (cross  Nv Rv)
		Nv = normalize (cross Uv Rv)
		newAxis = matrix3 Rv Uv  Nv  Model.position
		oldScale=Model.scale
		Model.transform=newAxis
		Model.scale=oldScale
	)


	
		fn BranchGeoMain = (
			if (checkSplineValidity geospline) then (
				
				SuspendEditing()
				try
				 with redraw off (
					
					maxDistance=0
					global internalSplineCopy=copy geospline
					global arrayOfSplineArrays_ForBranches=#()
					global arrayOfLastSplinePointPerSplineThatAttaches=#()
					global arrayOfSplineConnectionIndices=#()
					global localMaxDistancesPerSpline=#()

					-- INITIALIZE VARIABLES
					numberofSplines=numSplines internalSplineCopy
					for i=1 to numSplines internalSplineCopy do (
						append arrayOfLastSplinePointPerSplineThatAttaches 1
						append arrayOfSplineConnectionIndices #(i)
						append localMaxDistancesPerSpline 0
					)
					
					-- FIND DISTANCES AND VECTORS 
					for s=1 to numberofSplines do (
						append arrayOfSplineArrays_ForBranches #()
						distanceTraveled=0
						numberOfCurrentSplineKnots=numKnots internalSplineCopy s
						
						
						for k=1 to numberOfCurrentSplineKnots do (
							if (k < numberOfCurrentSplineKnots) -- IS NOT THE LAST INDEX 
								then 
									(
										neighborKnot=k+1
										neighborKnotSign=-1
									)
								else -- IS THE LAST INDEX
									(
										neighborKnot=k-1
										neighborKnotSign=1
									)
								kPosition = getKnotPoint internalSplineCopy s k
								NeighborPosition = getKnotPoint internalSplineCopy s neighborKnot
								vectorToNeighboor = normalize ( (kPosition-NeighborPosition) * neighborKnotSign )	
							
							if k!=1 do (
								distanceTraveled+=distance kPosition (getKnotPoint internalSplineCopy s (k-1))
							)
							append arrayOfSplineArrays_ForBranches[arrayOfSplineArrays_ForBranches.count] (splineDistanceStruct distanceTraveled:distanceTraveled knot:k spline:s knotPosition:kPosition knotVector:vectorToNeighboor)
						)
					)
					
					
					
					
					
					--PUSH DISTANCES + STORE NEIGHBOOR SPLINES
					trashArray=#()
					flatArrayOfSplineArrays_ForSpheres=#()
					for i=1 to arrayOfSplineArrays_ForBranches.count do ( -- loops through major splines first to feed into children
						for j=i+1 to (arrayOfSplineArrays_ForBranches.count) do ( -- loops through the children splines 
							for currentSplineKnotIndex=1 to arrayOfSplineArrays_ForBranches[i].count do (
								currentSplineKnot=arrayOfSplineArrays_ForBranches[i][currentSplineKnotIndex] 
								--ADD AN ATTACHMENT SPHERE TO EACH SPLINE STARTING POSITION
								if bSpawnInitialMeshes do (
									if currentSplineKnotIndex==1 do (
										currentKnotPosition=currentSplineKnot.knotPosition
										if ((appendIfUnique trashArray currentKnotPosition)== true)
										do (
											foundSimilarSphere=False
											for i in flatArrayOfSplineArrays_ForSpheres while foundSimilarSphere==false do if ((distance currentSplineKnot.knotposition i.knotposition) < 1.0) do foundSimilarSphere=true
											if foundSimilarSphere==false do append flatArrayOfSplineArrays_ForSpheres currentSplineKnot
										)
									)
								)
								for futureSplineKnotIndex=1 to arrayOfSplineArrays_ForBranches[j].count do (
									futureSplineKnot=arrayOfSplineArrays_ForBranches[j][futureSplineKnotIndex]
									distanceToOtherKnot=distance currentSplineKnot.knotPosition futureSplineKnot.knotPosition
									if distanceToOtherKnot< distanceConsideredConnected do (
										arrayOfLastSplinePointPerSplineThatAttaches[i]=currentSplineKnotIndex -- stores the last connection index to other branches
										appendIfUnique arrayOfSplineConnectionIndices[i] j -- should store the id of the attached spline
										appendIfUnique arrayOfSplineConnectionIndices[j] i --  mirror connection
										if (appendIfUnique trashArray currentSplineKnot.knotPosition)== true do (
											append flatArrayOfSplineArrays_ForSpheres currentSplineKnot 
										)
										if currentSplineKnotIndex!=1 do ( -- avoid feeding children into children
											for feedDistanceToChildIndex=futureSplineKnotIndex to arrayOfSplineArrays_ForBranches[j].count do ( -- pushes distances into attached verts subsequent verts
												futureKnot=arrayOfSplineArrays_ForBranches[j][feedDistanceToChildIndex]
												CurrentKnot=arrayOfSplineArrays_ForBranches[i][currentSplineKnotIndex]
												futureKnot.distanceTraveled=futureKnot.distanceTraveled+CurrentKnot.distanceTraveled
											)
										)
									)
								)
							)
						)
					)
					--FIND GLOBAL MAX DISTANCE FOR ALL SPLINES
					for i=1 to arrayOfSplineArrays_ForBranches.count do (
						CurrentSplineDistance=arrayOfSplineArrays_ForBranches[i][arrayOfSplineArrays_ForBranches[i].count].distanceTraveled
						if CurrentSplineDistance>MaxDistance do maxDistance=CurrentSplineDistance
					)	
					--FIND LOCAL MAX DISTANCE FOR BRANCH SET
					for i=1 to arrayOfSplineConnectionIndices.count do (
						for j in arrayOfSplineConnectionIndices[i] do (
							attachedSplineMaxDistance=arrayOfSplineArrays_ForBranches[j][arrayOfSplineArrays_ForBranches[j].count].distanceTraveled --find max distance traveled
							if attachedSplineMaxDistance>localMaxDistancesPerSpline[i] do (
								localMaxDistancesPerSpline[i]=attachedSplineMaxDistance
							)
						)
					)
					--FIND ALPHA VALUE FOR EACH KNOT
					for s=1 to arrayOfSplineArrays_ForBranches.count do ( -- each spline
						lastStruct=arrayOfSplineArrays_ForBranches[s][arrayOfSplineArrays_ForBranches[s].count]
						localMaxSharedBranchLength=localMaxDistancesPerSpline[s]
						localMaxDistance=lastStruct.distanceTraveled
						overallScaleMultiplier=(localMaxSharedBranchLength/maxDistance)*ThickestBranchRadius

						for k=1 to arrayOfSplineArrays_ForBranches[s].count do (	--each knot
							localLerpAmount=0
							localSharedBranchLerp=arrayOfSplineArrays_ForBranches[s][k].distanceTraveled/localMaxSharedBranchLength
							currentDistance=(arrayOfSplineArrays_ForBranches[s][k].distanceTraveled)
							beforeBreakPointAlpha=(currentDistance/localMaxSharedBranchLength)
							startLocalLerpDistance=arrayOfSplineArrays_ForBranches[s][arrayOfLastSplinePointPerSplineThatAttaches[s]].distanceTraveled
							afterBreakPointAlphaStartValue=(startLocalLerpDistance/localMaxSharedBranchLength)
							localMaxDistanceAfterBreak=localMaxDistance-startLocalLerpDistance --this == 0 for the first vert which then is used as a divide which is a bug but it only comes up in occasions where the value is ignored so it doesn't actually matter.
							currentpositionInAlphaArea=currentDistance-startLocalLerpDistance
							ZeroToOneAfterBreak=currentpositionInAlphaArea/localMaxDistanceAfterBreak
							afterBreakPointAlpha=lerp afterBreakPointAlphaStartValue 1.0 ZeroToOneAfterBreak
							DefaultFalloff=currentDistance/localMaxSharedBranchLength --0-1 per branch
							
							if k>arrayOfLastSplinePointPerSplineThatAttaches[s] then -- if current knot is past last connecting knot
								(
									AlphaToReference=afterBreakPointAlpha
								)
							else
								(
									AlphaToReference=DefaultFalloff
								)
								/*	
								--DEBUG 
								printObjNameAndValue "Spline" s
								printObjNameAndValue "knot" k	
								printObjNameAndValue "knot at which the two seperate" arrayOfLastSplinePointPerSplineThatAttaches[s]
								printObjNameAndValue "AlphaToReference" AlphaToReference								
								printObjNameAndValue "localSharedBranchLerp" localSharedBranchLerp
								printObjNameAndValue "currentDistance" currentDistance
								printObjNameAndValue "beforeBreakPointAlpha" beforeBreakPointAlpha
								printObjNameAndValue "startLocalLerpDistance" startLocalLerpDistance
								printObjNameAndValue "afterBreakPointAlphaStartValue" afterBreakPointAlphaStartValue
								printObjNameAndValue "localMaxDistanceAfterBreak" localMaxDistanceAfterBreak
								printObjNameAndValue "currentpositionInAlphaArea" currentpositionInAlphaArea
								printObjNameAndValue "ZeroToOneAfterBreak" ZeroToOneAfterBreak
								printObjNameAndValue "afterBreakPointAlpha" afterBreakPointAlpha
								printObjNameAndValue "DefaultFalloff" DefaultFalloff
								printObjNameAndValue "true or false" (k>arrayOfLastSplinePointPerSplineThatAttaches[s])
								print ""
								*/
							arrayOfSplineArrays_ForBranches[s][k].lerpAlpha=AlphaToReference
							arrayOfSplineArrays_ForBranches[s][k].width=AlphaToReference*overallScaleMultiplier
						)
					)
					
					--CREATE MESH GEOMETRY FOR EACH SPLINE
					internalSplineCopy.render_displayRenderMesh=true
					internalSplineCopy.render_useViewportSettings=true
					internalSplineCopy.render_viewport_rectangular=false
					internalSplineCopy.render_displayRenderSettings=false
					internalSplineCopy.render_viewport_thickness =SplineGeoThickness
					internalSplineCopy.render_viewport_sides=3
					SplineMeshArray=#()
					for i=1 to numSplines internalSplineCopy do append SplineMeshArray (copy internalSplineCopy)
					delete internalSplineCopy
					global numberOfSplinesPerSplineArray=numSplines SplineMeshArray[1]
					for i=1 to SplineMeshArray.count do (--for each duplicate
						targetID=1
						for s=1 to (numberOfSplinesPerSplineArray-1) do (
							if s==i do (targetID=2) -- perma set after initial occurance
							deleteSpline SplineMeshArray[i] targetID
						)
						updateShape SplineMeshArray[i] 
					)
					max modify mode
					for i in SplineMeshArray do (
						convertTo i Editable_Poly
						i.EditablePoly.SetSelection #Edge #{1}
						i.SelectEdgeLoop ()
						polyop.deleteEdges i (i.GetSelection 2)
						polyop.deleteVerts i #{((polyop.getNumVerts i)-2),1}
					)
					
					
					--SET VERT COLORS FOR TEXTURE SAMPLING AND REPOSITION VERTS
					for i=1 to SplineMeshArray.count do (
						For v=1 to (polyop.getNumVerts SplineMeshArray[i]) do (
							bIsEven=((mod v 2)==0)
							if bIsEven then (x1=0.0) else (x1=1.0)
							knotLookup=(ceil (v/2.0))
							currentAlpha=1.0-arrayOfSplineArrays_ForBranches[i][knotLookup].lerpAlpha
							
							--SET UV COLORS COLOR								
							y1=(arrayOfSplineArrays_ForBranches[i][knotLookup].distanceTraveled)/rateOfTextureTiling
							y3=currentAlpha
							x3=clamp ((pow currentAlpha ThickestFalloff)*ThickestBranchRadius) minBranchRadius 99999999999.0
							polyop.setVertColor SplineMeshArray[i] 1 #{v} [x1*255.0,y1*255.0,0]
							polyop.setVertColor SplineMeshArray[i] 3 #{v} [x3*255.0,y3*255.0,0]
							polyop.setVertColor SplineMeshArray[i] -2 #{v} [0,0,0] -- vert color 0 to indicate that the spline thickening technique should be used.
						)
					)
					--ATTACH SPLINE MESHES
					for i=2 to SplineMeshArray.count do (
						SplineMeshArray[1].EditablePoly.attach SplineMeshArray[i] SplineMeshArray[1]
					)
					FinalBranchMesh=SplineMeshArray[1]

					--SPAWN SPHERES AT CONNECTION POINTS
					if bSpawnConnectionMeshes==true do (
						sphereMeshes=#()
						for i in flatArrayOfSplineArrays_ForSpheres do (
							objectscale=((pow (1.0-i.lerpAlpha) ThickestFalloff)*(ThickestBranchRadius*ConnectionModelRadiusMultiplier))
							if objectscale>minimumConnectionModelSize do (
								if isvalidobj connectionGeoModel then (
									currentSphere=copy connectionGeoModel
									ResetScale currentSphere
									bounds=nodeGetBoundingBox currentSphere (matrix3 1)
									objectSize=bounds[2]-bounds[1]
									scaleMultiplier=[1.0,1.0,1.0]/objectSize
									currentSphere.pos=i.knotPosition
									currentSphere.scale=[1.0,1.0,1.0]*objectscale*scaleMultiplier*2.0
									ResetScale currentSphere	
								) else (
									currentSphere=(geoSphere radius:objectscale mapcoords:on pos:i.knotPosition segs:1)
								)
								
								alignModelToVector currentSphere i.knotVector
								append sphereMeshes currentSphere
								convertTo currentSphere Editable_Poly
								if (isvalidobj connectionGeoModel)==false then (
									polyop.setVertColor currentSphere 1 #all [128.0,(((i.distanceTraveled)/rateOfTextureTiling))*255.0,0]--!! +(RandomVOffset*rateOfTextureTiling*currentSplineRandomNumber)
								)
								polyop.setVertColor currentSphere -2 #all [128.0,128.0,128.0]--Vertex Alpha White
								FinalBranchMesh.EditablePoly.attach currentSphere FinalBranchMesh
							)
						)
					)
					if (bMergeSplineBranchWithMainBranch==true) 
					then (
						RootBranchMesh.EditablePoly.attach FinalBranchMesh RootBranchMesh
						BranchLeafMeshArray.parent=undefined
						BranchLeafMeshArray.parent=RootBranchMesh
						select RootBranchMesh
					)
					else (
						BranchLeafMeshArray.parent=undefined
						FinalBranchMesh.parent=undefined
						BranchLeafMeshArray.parent=FinalBranchMesh
						FinalBranchMesh.parent=RootBranchMesh
						select FinalBranchMesh
					)
					
					-- FORCE MATERIAL
					mMod=Materialmodifier()
					addModifier $ mMod
					mMod.materialID = 1
					convertTo $ Editable_Poly
				)
		catch (
				DisplayErrorMessageBox()
			)
			) 
			else (
					messagebox "An error within the spline branch creation script has occured. Please attempt the process again or contact Jonathan Lindquist."
			)
			ResumeEditing()
			updateStringFields()
		)


		

	
/*****************************************************************************************************************************************************
******************************************************************************************************************************************************

END BRANCH CODE

******************************************************************************************************************************************************
*****************************************************************************************************************************************************/
global NumberOfLeafMeshes
rollout Process_rollout "Spline Geometry Generator" (
		label spacerlabel9 ""

		button useSelectionAsLeafArray "Choose Editable Poly Targets" across:2 width:(canopyCreatorUIWidth/2) --filter:pickEditablePolys
		label NumberOfLeafMeshes BranchLeafMeshArrayString style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
		
		
		
		label spacerlabe22 ""
		
		
		group "Spline Generator" (
			pickbutton chooseMainConnectionPointSpline "Choose Initial Spline" across:2 width:(canopyCreatorUIWidth/2) filter:pickEditableSpline
			label choosenMainConnectionSpline defaultMainSplineString  style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
			
			spinner spinner_BranchSplineKnotToLeafDistanceWeighting "Weight: Spline Vertex To Leaf Position" range:[-99999999999.0,99999999999.0,BranchSplineKnotToLeafDistanceWeighting] type:#float   
			spinner spinner_idealKnotVectorToLeafDOTProductResultInfluence "Weight: Spline Vector to Mesh Angle Similarity" range:[-99999999999.0,99999999999.0,idealKnotVectorToLeafDOTProductResultInfluence] type:#float
			--spinner spinner_LeafZAlignmentWithBranchVectorInfluence "Weighting: Leaf's Z-Axis Alignment With Branch Angle" range:[-99999999999.0,99999999999.0,LeafZAlignmentWithBranchVectorInfluence] type:#float

			spinner spinner_minDistanceForBranchKinks "Minimum Distance for Spline Tesselation" range:[-99999999999.0,99999999999.0,DistanceForFinalBranchKinks] type:#float
			spinner spinner_midpointKnotLerpAlphaVariance "Percentage Of Tesselation Offset Between Points" range:[0.0,.9999,midpointKnotLerpAlphaVariance] type:#float
			spinner spinner_randomBranchOffsetAmount "Noise Strength" range:[0,99999999999.0,randomBranchOffsetAmount] type:#float
			
			spinner spinner_numberOfRecursivePasses "Number Of Recursive Passes" range:[1.0,99999999999.0,numberOfRecursivePasses] type:#integer
			--
			--label checkboxLabel "Attach Meshes" align:#left 
			button generateBranchSplines_Btn "Generate Connecting Splines" width:(canopyCreatorUIWidth*.75) height:50	
			label spacerLabel17 "" align:#left 
		)
		label spacerLabel18 "" align:#left 
		group "Geometry Generator" (
			pickbutton chooseRootMesh "Choose Parent Geometry" across:2 width:(canopyCreatorUIWidth/2) filter:pickEditablePolysRootBranch--filter:pickEditablePolys
			label choosenRootMesh rootMeshEmptyString  style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
			pickbutton chooseGeoSplinePickBtn "Choose A Spline for Geometry Generation" across:2 width:(canopyCreatorUIWidth/2) filter:pickEditableSpline
			label choosenGeoSpline  defaultGeoSplineString  style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
			
			spinner spinner_RateOfTextureTiling "Number of World Space Units Per UV Tile" range:[-99999999999.0,99999999999.0,rateOfTextureTiling] type:#float 
			spinner spinner_ThickestBranchRadius "Maximum Branch Thickness" range:[0,99999999999.0,ThickestBranchRadius] type:#float
			spinner spinner_ThickestFalloffPower "Thickness Falloff" range:[0,99999999999.0,ThickestFalloff] type:#float
			spinner spinner_minBranchRadius "Minimum Branch Thickness" range:[0,99999999999.0,minBranchRadius] type:#float
			--spinner spinner_RandomVOffset "Random UV V Offset Per Spline Group" range:[0,99999999999.0,RandomVOffset] type:#float
			
			checkbox checkbox_mergeBrancheswithMainBranch "Attach Spline Branches To Parent Geometry" checked:bMergeSplineBranchWithMainBranch offset:[160,0]
			label spacerLabel21 "" align:#left 

			pickbutton chooseConnectionMaskingGeoPickBtn "Choose Connection Masking Geometry" across:2 width:(canopyCreatorUIWidth/2) filter:pickEditablePolys
			label choosenConnectionGeoModel defaultConnectionGeoString style_sunkenedge:true width:(canopyCreatorUIWidth/2) height:20
			spinner spinner_ConnectionModelRadiusMultiplier  "Connection Mesh Scale" range:[0,99999999999.0,ConnectionModelRadiusMultiplier] type:#float
			spinner spinner_minimumConnectionModelSize  "Minimum Size For Connection Masks" range:[0,99999999999.0,minimumConnectionModelSize] type:#float
			checkbox checkbox_bSpawnConnectionMeshes "Spawn Connection Masks" checked:bSpawnConnectionMeshes offset:[160,0]
			checkbox checkbox_bSpawnInitialMeshes "Spawn Connection Masks On Spline Bases" checked:bSpawnInitialMeshes offset:[160,0] enabled:bSpawnConnectionMeshes 
			--
			button generateBranchMeshes_Btn "Generate Spline Geometry"  width:(canopyCreatorUIWidth*.75) height:50	
			label spacerLabel19 "" align:#left 
		)
		button helpButton "?" align:#right
		-------------------------------- End UI Definitions-------------------------------- 	
		-------------------------------- Start UI Functions-------------------------------- 	
		on useSelectionAsLeafArray pressed do (
			BranchLeafMeshArray=produceLeafArrayFromSelection()
			NumberOfLeafMeshes.text=getBranchLeafMeshArrayTextfieldString()
		)
		
		on spinner_minBranchRadius changed state do (minBranchRadius=state)
		--on spinner_RandomVOffset changed state do (RandomVOffset=state)
		on spinner_ThickestBranchRadius changed state do (ThickestBranchRadius=state)
		on spinner_midpointKnotLerpAlphaVariance changed state do (midpointKnotLerpAlphaVariance=state)
		on spinner_RateOfTextureTiling changed state do (rateOfTextureTiling=state)
		on spinner_numberOfRecursivePasses changed state do (numberOfRecursivePasses=state)
		on spinner_ThickestBranchRadius changed state do (ThickestBranchRadius=state)
		on spinner_randomBranchOffsetAmount changed state do (randomBranchOffsetAmount=state)
		on spinner_ConnectionModelRadiusMultiplier changed state do (ConnectionModelRadiusMultiplier=state)
		on spinner_minDistanceForBranchKinks changed state do (DistanceForFinalBranchKinks=state)
		on spinner_BranchSplineKnotToLeafDistanceWeighting changed state do (BranchSplineKnotToLeafDistanceWeighting=state)
		on spinner_idealKnotVectorToLeafDOTProductResultInfluence changed state do (idealKnotVectorToLeafDOTProductResultInfluence=state)
		on spinner_LeafZAlignmentWithBranchVectorInfluence changed state do (LeafZAlignmentWithBranchVectorInfluence=state)
		on spinner_minimumConnectionModelSize changed state do (minimumConnectionModelSize=state)
		on checkbox_mergeBrancheswithMainBranch changed state do (bMergeSplineBranchWithMainBranch=state)
		on checkbox_bSpawnInitialMeshes changed state do (bSpawnInitialMeshes=state)
		on checkbox_bSpawnConnectionMeshes changed state do (bSpawnConnectionMeshes=state
			checkbox_bSpawnInitialMeshes.enabled=state
			chooseConnectionMaskingGeoPickBtn.enabled=state
			choosenConnectionGeoModel.enabled=state
			spinner_ConnectionModelRadiusMultiplier.enabled=state
			spinner_minimumConnectionModelSize.enabled=state
			checkbox_bSpawnInitialMeshes.enabled=state
		)
		
		
		
		on chooseRootMesh picked obj do (
			RootBranchMesh=obj
			choosenRootMesh.text=rootMeshStartString +obj.Name
		)
		on chooseRootMesh rightclick do (
			choosenRootMesh.text=rootMeshEmptyString
			RootBranchMesh=undefined		
		)
		
		--Geo Spline
		on chooseGeoSplinePickBtn picked obj do (
			geoSpline=obj
			updateStringFields()
		)
		on chooseGeoSplinePickBtn rightclick do (
			geoSpline=undefined	
			updateStringFields()			
		)	
		
		--ConnectionGeo
		on chooseConnectionMaskingGeoPickBtn picked obj do (
			connectionGeoModel=obj
			updateStringFields()
		)
		on chooseConnectionMaskingGeoPickBtn rightclick do (
			connectionGeoModel=undefined	
			updateStringFields()			
		)	
		
		
		-- Main Spline Placement Mesh
		on chooseMainConnectionPointSpline picked obj do (
			MainBranchSpline=obj
			updateStringFields()
		)
		on chooseMainConnectionPointSpline rightclick do (
			MainBranchSpline=undefined		
			updateStringFields()
		)	

		

	
		
	-- Start Branches	
	


		fn verifyData_Branches isGeoSplinePass= (
			testbool=true
			warningString=""
			cleanBranchLeafMeshArray()
			if BranchLeafMeshArray.count==0 do (
				warningString="\r\rSelect target models" 
				testbool=false
			) 
			
			if isGeoSplinePass==true then (
				if (checkGeo RootBranchMesh setCheckGeoVar:false)==false then (
					testbool=false    
					warningString+="\r\rThe parent geometry needs to be selected and collapsed" 
				)
				
				else ( -- model exists and is fine... Then we need to see if the model exists in the branch leaf mesh array.
					if (finditem BranchLeafMeshArray RootBranchMesh!=0) do ( 
						testbool=false    
						warningString+="\r\rThe parent geometry is contained within the editable poly targets array. Please reselect the mesh targets without the Parent Geometry included." 
					)
				)
				
				
				if (checkspline GeoSpline)==false do (
					testbool=false    
					warningString+="\r\rThe spline for geometry generation needs to be selected" 
				)
			)
			else (
				if (checkspline MainBranchSpline)==false do (
					testbool=false    
					warningString+="\r\rThe initial spline needs to be selected" 
				)
				
			)
			
			updateStringFields()
			#(testbool,warningString)
			
		)

		
		on generateBranchSplines_Btn pressed do(
			verifyResults=verifyData_Branches false			
			if verifyResults[1]==true then (
				BranchSplineMain()
			)
			else (
				updateTargetPlacementUI()
				
				messagebox ("There was an issue with one of the fields. Please choose at least one entry for every field in the spline generator section. The following fields require attention:"+verifyResults[2])
			)
		)
		on generateBranchMeshes_Btn pressed do(
			verifyResults=verifyData_Branches true 			
			if verifyResults[1]==true then (
				BranchGeoMain()
			)
			else (
				messagebox ("There was an issue with one of the fields. Please choose at least one entry for every field in the spline geometry generator section. The following fields require attention:"+verifyResults[2])
			)
		)
	on helpButton pressed do (
		messagebox "Email Jonathan Lindquist." 
	)
)

if PathGeoGenerator_floater != undefined then CloseRolloutFloater PathGeoGenerator_floater
	PathGeoGenerator_floater = newRolloutFloater "Path Geo Generator" (canopyCreatorUIWidth+50) 1065
	addRollout LeafMeshGenerator_rollout PathGeoGenerator_floater
	addRollout Process_rollout PathGeoGenerator_floater
	updateStringFields()
	updateTargetPlacementUI()
)
macros.run "Epic Tools" "EpicTools_PathGeoGenerator"
