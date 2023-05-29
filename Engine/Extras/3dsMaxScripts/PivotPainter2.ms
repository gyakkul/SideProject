macroScript EpicTools_PivotPainter2 category:"Epic Tools" buttontext:"Pivot Painter 2.0" tooltip:"Pivot Painter 2.0"
(
	
	escapeEnable=true
	/************************************************************************************************

	Pivot Painter version 2.0
	Written by Jonathan Lindquist at Epic Games
	
	*************************************************************************************************/
	/**************************************MENU CONTROLS************************************/

	--To expand a tab by default change the appropriate variable to true. To collapse a tab enter false.

	global bPrepTools=false
	global bVertexPainter=false
	global bHelp=false
	global bAdvancedSection = true
	global bIndividual =false
	global bWrapUp=false
	
	/**************************************MENU CONTROLS************************************/
	
	
	/****************************************************************************************
	========================================================
	Pivot Painter 1.0 Global Parameters
	========================================================
	****************************************************************************************/
	------------------------------------------------------------------------------------------------------------------------
	--object tracking 
	------------------------------------------------------------------------------------------------------------------------

	global perObjectPainterArray =#()
	global currBranchObj=undefined
	global currSplineObj =undefined
	global meshPivotObj=undefined
	global selectionSetInt=undefined
	global bContinue = true 
	
	global prepLeaf=undefined
	global bprepLeafMessage=true 
	global prepBranch=undefined
	global bprepBranchMessage= true 
	global selectionSetIntPrep=0
	global selListfound=false
	global branchfound=false
	global geoCheckFail=false
	global geoCheckFailObject=undefined
	struct UVOptionStruct (guiString, CoordinateIndex) 
	struct selectedRenderOptions (guiString, isHDR, isAlpha, renderArrayToSet=#(), fnToCall, bRender=true, fileDisplayName, postFn = undefined) 
	struct customSelGroup (Branch,selSetName)
	struct CustomNormalsStruct (normal=[0,0,1], index)
	struct normaltransferHolder (ArrayOfNormalsAndIndices, model, bitarrayOfExplicitNormals, numberOfNormals)

	
	global customSelectionGroupsArray
	global prefabListDropDownItemArray
	global customSelectionGroupsArray=#()
	global prefabListDropDownItemArray=#()
	global boxToLeaveSelSetArray=#()
	global boxArrays=#() 
	global alteredSelectionSets=#()
	global bPaintBranch=true
	
	------------------------------------------------------------------------------------------------------------------------
	--Warning messages 
	------------------------------------------------------------------------------------------------------------------------
	global bBranchMessage  = false--changed
	global bSplineMessage  = false--changed
	global zSign=1.0
	global bLeafMessage = false--changed
	global branchMessage  =  "An editable poly parent mesh. \n"
	global splineMessage  = "A spline with at least 2 knots to use as a guide for your mesh pivots. \n"
	global leafMessage =  "A valid selection set containing at least one editable poly without any modifiers. \n"
	 
	global prepBranchMessage = "A valid branch editable poly object without any modifiers. \n"
	global prepLeafMessage = "A valid child editable poly object without any modifiers. \n"
	global prepMeshPivotObjMessage = "A valid editable polygon object with at least 1 vertex. \n"
	global combinedWarningMessage =""
	global combinedWarningMessagePrep =""
	global initialSelectionArray = undefined 

	global bLeafSelSetPrepMessage =false
	global lowestNumber=9999999999999999
	global splineVertArray= #()
	global individualVertArray = #()
	global finalDistanceArray = #()
	global fullVertArray=#()
	struct objPiv (obj, objVert, spln, splnSubline, splnVert, splnVertPos, vertDist)
	global finalMeshVertPairArray=#()
	global sortingArray =#()
	global dummyArray=#()
	global finalDummyDataArray= #()
	global uniqueDummyPositions=#();
	global doNotAddList=#();
	global leafWingFalloffPower=10
	global leafLengthFalloffPower=1
	global leafLengthFalloff=.5
	global leafWingFalloffY=0.0
	global leafWingFalloffX=0.0
	global leafWingFalloffPowerZ=10.0
	global leafWingFalloffZ =0.0
	global leafWingFalloffPowerY=10	
	global leafWingFalloffPowerX=10
	global shaderWSMultiplier=4096
	global bRunningPivotCheck=true 
	global expansionNumber =1 
	global processAllMeshNormals= true
	global acceptSlowness=false 
	global facelist 
	global vertlist
	global Nv =[0,0,0]
	global faceCount=0 
	global newAxis
	global selectionsetsArray=#()
	global halfButtonStringlength=15
	global fullButtonStringlength=30
	global selectionSetIntIndividual=0;
	global createNewLeafPivot
	global PrepTools_rollout
	global PaintIndividualPivots_rollout
	global PaintLeavesAndTrees_rollout
	global performSlowSeparation=false
	
	global guiW=200
	global largebuttonH=40
	global totalHeight=0 	
	global PrepToolsH=410
	global vertexPainterH=100
	global HelpH=127
	global IndividualH=408
	global AdvancedSectionH=400
	global collapsedHeight=24
	global WrapUpH=70
	global floaterWidth=240
	global foliage_floater
	global dropList=#()
	
	
	

	/****************************************************************************************
	=========================================================================================
	End Pivot Painter 1.0 Global Parameters
	=========================================================================================
	****************************************************************************************/

	/****************************************************************************************
	=========================================================================================
	UI floater code
	=========================================================================================
	****************************************************************************************/
	fn fixUVNames polyToFix = (
		for i = 1 to (polyop.getNumMaps polyToFix) do (ChannelInfo.NameChannel polyToFix 3 i ("UVChannel_" + i as string))
	)

	fn adjustRolloutHeight = (	  
		totalHeight=0
		if bPrepTools == true  then totalHeight+=PrepToolsH else totalHeight+=collapsedHeight
		if bHelp == true  then totalHeight+=HelpH else totalHeight+=collapsedHeight
		if bIndividual == true  then totalHeight+=IndividualH else totalHeight+=collapsedHeight	
		if bAdvancedSection == true then totalHeight+=AdvancedSectionH else totalHeight+=collapsedHeight	
		if bWrapUp == true then totalHeight+=WrapUpH else totalHeight+=collapsedHeight	
		
		foliage_floater.size = [floaterWidth,totalHeight]
	)	 

		
	/****************************************************************************************
	=========================================================================================
	End UI floater code
	=========================================================================================
	****************************************************************************************/



	/****************************************************************************************
	=========================================================================================
	Pivot Painter 1.0 Function library
	=========================================================================================
	****************************************************************************************/


	fn updateDropDownList = (
		deleteSelectionSetList=#()
		dropList=#()
		if selectionSets.count > 0 do (
			for i in selectionSets do (
				if i.count == 0 then (
					append deleteSelectionSetList (i.name)
				) else (
					append dropList i.name
				)
			)
			if deleteSelectionSetList.count > 0 do (
				for i=1 to deleteSelectionSetList.count do (
					dItem=(deleteSelectionSetList[i] as string)
					deleteitem selectionSets dItem
				)
			)
		)
	)

	updateDropDownList();
	
	global truncateString		
	fn truncateString initialString NumberOfCharacters =(
			if initialString.count > (NumberOfCharacters) then (
				returnString=replace initialString (NumberOfCharacters) ((initialString.count-NumberOfCharacters)+1) "..."
				returnString
			) else (initialString)
	)		
			
	selectBranchDetachBtntext="Pick Selection Obj"
	selectLeafDetachBtntext="Pick Model to Proc"

	fn displayAutoErrorMessage = (
		Messagebox ( "An error has occured. \r\rPlease restart Pivot Painter and send the following information to Jonathan.Lindquist@epicgames.com and include any steps that would be helpful in reproducing the issue.\r\r" + getCurrentException())
	)
	
	fn clamp num cMin cMax = (
		/*
			REWRITTEN - Chris Wood
			-if less than minimum, set to minimum
			-if more than maximum, set to maximum
		*/
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
		if (bValidobject==false and setCheckGeoVar==true) do (
			geoCheckFail=true
			geoCheckFailObject=geo
		)
		bValidobject
	)

	 fn checkGeoDetachPen geo =  (isvalidobj geo and ClassOf geo == Editable_Poly and geo != prepLeaf and geo != prepBranch )

	fn errorMessagePrep = (
		combinedWarningMessagePrep="Please select the following items:  \n\n" 
		if bprepBranchMessage == true then combinedWarningMessagePrep += prepBranchMessage 
		if bprepLeafMessage == true then combinedWarningMessagePrep += prepLeafMessage
		messagebox combinedWarningMessagePrep 
	)
	
	fn errorMessage = (
		combinedWarningMessage="Please select the following items:  \n\n" 
		if bBranchMessage == true then combinedWarningMessage += branchMessage 
		if bSplineMessage == true then combinedWarningMessage += splineMessage
		if bLeafMessage == true then combinedWarningMessage += leafMessage
		messagebox combinedWarningMessage 
	)
	global AlignPivotTo
	fn AlignPivotTo Obj Trgt=
	(		
		/*
			REWRITTEN - Chris Wood
			- check param types - Obj must be a node - Trgt must be a node or Matrix3
			- calc inverse of the target matrix for corrections
			- object's transform is to be changed to the target matrix
			- can correct the local (node to parent node) TM of children...
			- correction is to transform into world and back to the new target space giving the new local TM and applying this to the controllers
			- loop through child nodes and apply correction
			- can correct the object offset of this node...
			- correction is to transform into world and back to the new target space giving the new object offset and apply this to the offset components
		*/
		
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
	fn findObjectAxis vertexID:1 numberOfExpansions:1 processAllNormals:false leaf:undefined =	(
		try with undo off(
			faceCount=0
			vertlist=vertexID
			if processAllNormals==true then (
				vertlist =- #{(polyop.getNumVerts leaf)+1}
				facelist = polyop.getFacesUsingVert leaf vertlist
			) else (
				for i=1 to numberOfExpansions do (
					facelist = polyop.getFacesUsingVert leaf vertlist
					vertlist = polyop.getVertsUsingFace leaf facelist
				)
			)
			count=0
			Nv =[0,0,0]
			vertexPivotPos=polyop.getVert leaf vertexID
			for i in facelist do (
				count+=1
				if i == 1 then (Nv = polyop.getFaceNormal leaf i ) 
				else (Nv += polyop.getFaceNormal leaf i )
			)
			faceCount = facelist.numberSet
			Nv = normalize (Nv/faceCount)
			Rv = normalize (vertexPivotPos-leaf.pos)
			Uv = normalize (cross  Nv Rv)
			Nv = -normalize (cross Uv Rv)
			newAxis = matrix3 -Rv -Uv  Nv  vertexPivotPos
		) 
		catch(
			displayAutoErrorMessage()
		)
	)
				
	fn convertWPtoUV Pos:[0,0,0] = (
		global temp=(Pos/shaderWSMultiplier)*[128,128,255]+[128,128,0]
		global tempx= clamp (temp[1]) 0 255
		global tempy= clamp (temp[2]) 0 255
		global tempz= clamp (temp[3]) 0 255
		global temp=[tempx,tempy,tempz]
	)

	fn resetObjectDisplay obj:undefined= (
			obj.showVertexColors = off
			obj.vertexColorsShaded = on
	)
	
	global fnDetachElementsInterpenetratingBtn
	fn fnDetachElementsInterpenetratingBtn = (
		try
		with redraw off(
			setCommandPanelTaskMode #modify
			SuspendEditing()
			select prepLeaf -- tends to break if not selected
			myVolSelect=Vol__Select()
			addModifier prepLeaf myVolSelect
			myVolSelect.type = 1
			myVolSelect.level = 2
			myVolSelect.volume = 3
			myVolSelect.node = prepBranch
			myEP=Edit_Poly ()
			addModifier prepLeaf myEP
			myEP.selectMode=1
			myEP.SetEPolySelLevel #face
			ResumeEditing() -- breaks if not in modify mode and editing is resumed before the conversion
			myEP.ConvertSelection #face #element requireAll:false
			BitArrayOfFacesToDetach=myEP.GetSelection #face
			newObjectName=prepLeaf.name+"_DetachedObject"
			deleteModifier prepLeaf 1
			convertToPoly(prepLeaf)
			faceCount=prepLeaf.faces.count
			BitArrayOfFacesToDetach.count=faceCount
			newMesh=copy prepLeaf
			polyop.deletefaces prepLeaf BitArrayOfFacesToDetach 
			polyop.deletefaces newMesh (-BitArrayOfFacesToDetach) 
			newMesh.name=newObjectName
			--newobj=myEP.DetachToObject newObjectName
			--snewMesh
			
		)
		catch(
			displayAutoErrorMessage()
			ResumeEditing()
		)
		if keyboard.escPressed do ResumeEditing()
	)
 
	
	fn createSplineVertArray =(
		splineVertArray=#()
		if	(
				isvalidnode currSplineObj and (classof currSplineObj == SplineShape or classof currSplineObj == Line) and currSplineObj.modifiers.count == 0 and numKnots currSplineObj > 1
			) do (
					for s = 1 to (numSplines currSplineObj) do (
						for k = 1 to (numKnots currSplineObj s) do (
							knt = getKnotPoint currSplineObj s k
							individualVertArray=#(s,k,knt)
							append splineVertArray individualVertArray
						)--end k loop
					)--end s loop
			)
	)-- creates splineVertArray, #(s,k,knt)
	fn createMeshVertArray =(
		splineVertArray=#()
		if	(
			isvalidnode meshPivotObj and \
			(classof meshPivotObj == editable_poly ) \
			and meshPivotObj.modifiers.count == 0 and \
			polyop.getNumVerts meshPivotObj > 0
		) then (
			for v = 1 to (polyop.getNumVerts meshPivotObj) do (
				vertPos = polyop.getVert meshPivotObj v 
				individualVertArray=#(1,v,vertPos)
				append splineVertArray individualVertArray
			)
		) else (false)
	)
	global findClosestVert
	
	fn qSortCompareDistances a b = (
			if a.vertDist > b.vertDist then 1 else -1
	)
	
	
	fn updateProgBar maxOperations:100000000.0 currentOperation:0.0 = (
		if currentOperation==0.0 or currentOperation==1.0 do progressStart ""
		if ( currentOperation == maxOperations or getProgressCancel() == true ) then (
				progressEnd()
			) else (
			progBarAmount=(currentOperation as float/maxOperations as float)*100.0
			progressUpdate progBarAmount  
		)
		if keyboard.escPressed do (
			progressUpdate 0.0
			progressEnd()
		)	-- should break function if esc is pressed
	)
	
	fn findClosestVert collectNewitems:false= (
		starttime= timestamp()
		suspendediting()
		try with undo off (
			if selectionSetIntPrep != 0 and selectionSetIntPrep <= selectionSets.count and splineVertArray.count > 0  then ( 
				global myBoxToLeafSelSetName=selectionSets[selectionSetIntPrep].name
				global finalMeshVertPairArray=#()
				global tempArray=#()
				global lowestSet=#()
				global FinalFullVertArray=#()
				if perObjectPainterArray.count > 100 and acceptSlowness==false then (
					acceptSlowness= (pivotProcede = querybox "Warning there are more than 100 items in your selection set. Breaking the selection set up in to smaller groups can increase processing speed and stability. This warning will only display once per session. \r\r Would you like to continue processing this group?" title:"Warning" beep:false)
				)
				else (
					pivotProcede=true
				)
				if pivotProcede then 
					(
						global selectionsetName=selectionsets[selectionSetIntPrep].name -- set initially
						pbMaxOperations=perObjectPainterArray.count 	--getprogressbar totals 
						for m=1 to perObjectPainterArray.count do ( -- for each mesh
							tempArray=#()
							global currMesh=perObjectPainterArray[m]
							mVertCount= getNumVerts currMesh
							for s=1 to splineVertArray.count do ( -- for each mesh process each spline vertex
								for v=1 to mVertCount do ( -- for each mesh process each spline vertex compared with each model vertex
									currMeshVert = polyop.getVert currMesh v
									myDist=distance splineVertArray[s][3] currMeshVert 
									append tempArray  (objPiv obj:currMesh objVert:v spln:currSplineObj splnSubline:splineVertArray[s][1] splnVert:splineVertArray[s][2] splnVertPos:splineVertArray[s][3] vertDist:myDist )
								) --list is now populated with all vert combinations for 1 mesh
							) -- end spline loop
							qsort tempArray qSortCompareDistances -- sort those distances making the lowest entry the object with the shortest distance
							append FinalFullVertArray tempArray[1] -- append the lowest combination to the final full vert array
							updateProgBar maxOperations:pbMaxOperations currentOperation:m
						)
						
						boxToLeaveSelSetArray=#()
						BBCheckState=true 
						pbMaxOperations=FinalFullVertArray.count
						for i=1 to  FinalFullVertArray.count do (
							currMeshObj=FinalFullVertArray[i].obj
							centerpivot currMeshObj
							findObjectAxis leaf:currMeshObj vertexID:FinalFullVertArray[i].objVert numberOfExpansions:expansionNumber processAllNormals:processAllMeshNormals
							AlignPivotTo currMeshObj newAxis
							updateProgBar maxOperations:pbMaxOperations currentOperation:i 
							
						)
					) 
					else (
						if splineVertArray.count == 0 do (
							-- hitlist issue
							messagebox "New pivots have not been created.\r\rYour pivot object has either been deleted, picked using the H scene object list hotkey, contains modifiers, is not an editable polygon object or has 0 vertices. \n"
							PrepTools_rollout.createNewLeafPivot.enabled=false
						) 
					updateDropDownList();
					PrepTools_rollout.selectionSetDropDown.items = dropList
					false
				)
			) -- end if selection set is valid, should be checked before function is called. this if is a fail safe to avoid an exception
		)-- end try 
		catch (
			displayAutoErrorMessage()
			resumeediting()
		)
		resumeediting()
	)-- end func
	
	ResumeEditing() -- added as a saftey net in case the script previously broke mid operation. Shouldn't occure but rerunning the script will enable editing again if it ever does.  
	

		
	
------------------------------------------------------------------------------------------------------------------------
-- Paint Per Vert Options
------------------------------------------------------------------------------------------------------------------------


	
fn paintLocalValues objectlist:#() bNormalizeGradientsToSize:False =(
		try 
		with redraw off (
			localMaxOperations=objectlist.count
			for i=1 to objectlist.count do(
				currmesh=objectlist[i]
				localBoundingBox=nodeLocalBoundingBox objectlist[i]
				for v=1 to (getNumVerts currmesh) do (
						if keyboard.escPressed do ResumeEditing()
						currVert=polyop.getVert currMesh v
						currVertBaseObj=polyop.getVert currMesh.baseobject v
						gradBBX=[0,localBoundingBox[1][1],0]
						gradBBXTwo=[0,localBoundingBox[2][1],0]
						gradBBY=[0,localBoundingBox[1][2],0]
						gradBBYTwo=[0,localBoundingBox[2][2],0]
						gradBBZ=[0,localBoundingBox[1][3],0]
						gradBBZTwo=[0,localBoundingBox[2][3],0]
						finXScale = (distance gradBBX gradBBXTwo)
						finYScale = (distance gradBBY gradBBYTwo)
						finZScale = (distance gradBBZ gradBBZTwo)
						finXVal= (pow ((distance [0,currVertBaseObj[1],0] gradBBX)/finXScale) leafWingFalloffPowerX ) + (pow((distance [0,currVertBaseObj[1],0] gradBBXTwo)/finXScale) leafWingFalloffPowerX)
						finYVal= (pow ((distance [0,currVertBaseObj[2],0] gradBBY)/finYScale) leafWingFalloffPowerY ) + (pow((distance [0,currVertBaseObj[2],0] gradBBYTwo)/finYScale) leafWingFalloffPowerY)
						finZVal= (pow ((distance [0,currVertBaseObj[3],0] gradBBZ)/finZScale) leafWingFalloffPowerZ ) + (pow((distance [0,currVertBaseObj[3],0] gradBBZTwo)/finZScale) leafWingFalloffPowerZ)
						
						/*
						
						if bNormalizeGradientsToSize then (
							distanceToPivot= (currVert-currMesh.pos)/[finXScale,finYScale,finZScale]
							distanceToPivot=(distance [0,0,0] distanceToPivot)
						) else (
						
						*/
							distanceToPivot= (distance currVert currMesh.pos)/255.0
						
							
						finalAlpha= clamp (((pow (distanceToPivot*leafLengthFalloff)leafLengthFalloffPower) +(finYVal*leafWingFalloffY)+(finXVal*leafWingFalloffX)+(finZVal*leafWingFalloffZ))*255.0) 0 255.0
						polyop.setVertColor currmesh -2 v [finalAlpha,finalAlpha,finalAlpha] 
					)
				)
		) catch(displayAutoErrorMessage())
	)
	

------------------------------------------------------------------------------------------------------------------------
-- Repivot
------------------------------------------------------------------------------------------------------------------------

		fn checkSpline spline =  isvalidnode spline and (classof spline == SplineShape or classof spline == Line) and spline.modifiers.count == 0 -- and numKnots mySpline > 1
		
	
	
	

	
	
	
	
	
	
	
	
	
	
		--Creates perObjectPainterArray data 
		fn createLeavesFromSelectionSet selectionSetIntVar:selectionSetInt  message:true runupdateProgBar:false=(
			-- reinitialize value
			perObjectPainterArray=#()
			--check to see everything exists and is usuable 
			if (selectionSetIntVar != undefined and \ 
				selectionSetIntVar != 0 and \
				selectionSetIntVar <= selectionSets.count and \
				selectionSets[selectionSetIntVar].count > 0 and \
				not isDeleted selectionSets[selectionSetIntVar]
				) 
			then (
				-- collect all of the useable objects 
				operationCount=selectionSets[selectionSetIntVar].count
				for i=1 to operationCount where checkGeo selectionSets[selectionSetIntVar][i] == true do (
					if runupdateProgBar==true do (updateProgBar maxOperations:operationCount currentOperation:i)
					append perObjectPainterArray selectionSets[selectionSetIntVar][i]
				)
				if perObjectPainterArray.count > 0 then (
					bLeafMessage=false; 
					bContinue = true;
				) 
				-- 0 objects were usable
				else (
					bLeafMessage=true
					if message==true then errorMessage()
					bContinue = false 
				)
			)
			-- if the selection set is invalid
			else (
				bLeafMessage=true
				if message==true then errorMessage()
				bContinue = false 
			)
		)	-- end create leaves from selection set
		

		fn concatNameAndNumber prefixString num width= (
			numString = num as string
			while (numString.count < width) do (
				numString = "0" + numString
			)
			return prefixString + numString
		)
	

		
		fn	seperateElementsIntoEditablePolys = (
						
			/*
				REWRITTEN - Chris Wood
				-loop through selected nodes
				-ignore non mesh type nodes
				-convert to mesh (to allow meshop methods needed to detach faces and process the detached object further)
				-remove the node's object offset
				-get the node's colour
				-while there are faces in the original mesh
				-get a list of faces in the same element as face 1
				-detach the faces in the element as a new mesh
				-create a new mesh-type node and set the mesh as the newly detached geometry
				-adjust the transform to preserve the location
				-convert the result to editable polys
				-ResetXForm, transform, scale, pivot and centre pivot
				-Collaspe mod stack
				-add new node to the element node list for this node
				-add original empty node to the delete list
				-loop through the element nodes for the node
				-set the colour based on the parent node
				-create a selection set from the element nodes array for this node
				-when all done, delete the now empty nodes
			*/
			
			SuspendEditing()
			try
			with redraw off (
				delNodesArray = #()
				for obj in $ do (
					if (canConvertTo obj Editable_Mesh) then (
						ConvertToMesh obj
						elementNodesArray = #()
						
						--Reset object offset before splitting otherwise the offset is lost
						obj.transform = obj.objectTransform
						obj.objectOffsetPos = [0,0,0]
						obj.objectOffsetRot = Quat 0 0 0 1
						obj.objectOffsetScale = [1,1,1]
						
						
						
						
						--!! new parenting code
						targetParent = obj.Parent
						--Get object wire colour for use as child objects' colours
						wirecolor=obj.wirecolor as point3
						wirecolorMax=amax #(wirecolor[1],wirecolor[2],wirecolor[3]) 
						wirecolor= wirecolor * 255.0/wirecolorMax
						newWireColor=wirecolor
						nodeName=obj.name
						
						
						
						if performSlowSeparation==true then (
							/* 
								Modifications :						
								init
								get the count of all faces in the mesh
								seperate create a bit array of the same length 

								for loop 
								duplicate the mesh

								loop find the first false element of the bit array. Convert it to a face selection and then conjoining faces
								turn those indices true on the bit array 
								invert the face selection and delete
							*/
							faceCount=obj.faces.count
							faceBitArray=#{}
							faceBitArray.count=faceCount
							faceBitArray=-faceBitArray
							ArrayOfDetachableFaces=#()
							while faceBitArray.numberset!=0 do (
								currentFace=(faceBitArray as array)[1]
								elementFaces = meshop.getElementsUsingFace obj currentFace	
								elementFaces.count=faceCount
								faceBitArray=faceBitArray*(-elementFaces) -- remove the faces from the bit array
								append 	ArrayOfDetachableFaces elementFaces
								
							)
							for i in ArrayOfDetachableFaces do (
								newmesh=copy obj
								elementFaces = -(i)
								meshop.deleteFaces newmesh elementFaces delIsoVerts:true
								prefixName = nodeName + "_Detached_"
								newmesh.name=uniquename prefixName
								update newmesh
								
								--newmesh.transform *= obj.transform
								convertTo newmesh Editable_Poly
								ResetXForm newmesh
								ResetTransform newmesh
								ResetScale newmesh
								ResetPivot newmesh
								CenterPivot newmesh
								
								maxOps.CollapseNode newmesh true
								
								append elementNodesArray newmesh
								
								--!! new parenting code
								newmesh.parent = targetParent
							)
						)
						else (
							while (meshop.getNumFaces obj > 0) do (
								elementFaces = meshop.getElementsUsingFace obj 1
								newMesh = meshop.detachFaces obj elementFaces delete:true asMesh:true
								prefixName = nodeName + "_Detached_"
								newNode = Editable_Mesh prefix:prefixName
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
								
								--!! new parenting code
								newNode.parent = targetParent
								
								
								append elementNodesArray newNode
							)
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

		
		
		
		
		
		
		fn addSelectionPrefab branchVar selSetNameVar DataOptionsPrefVar= (
			append customSelectionGroupsArray  (customSelGroup  branch:branchVar selSetName:selSetNameVar DataOptionsPref:DataOptionsPrefVar)
		)
		fn deleteSelectionPrefab ArrayID = (
			deleteItem customSelectionGroupsArray ArrayID
		)
	fn paintSelectedItemsASpecificValue paintVal = (
			--selectionArray=selection as array
			paintVal*=255.0
			global blackMaxOperations=selection.count
			if selection.count > 0 do
					for i=1 to (selection).count where (checkGeo selection[i]) == true do ( -- 
						currobj=selection[i]
						polyop.setVertColor currObj -2 #all [paintVal,paintVal,paintVal]
						updateProgBar maxOperations:blackMaxOperations currentOperation:i 
					)
			completeRedraw()	
		)
		
		
		

/****************************************************************************************
=========================================================================================
End Pivot Painter 1.0 Functions 
=========================================================================================
****************************************************************************************/	
			
	
		
/****************************************************************************************
=========================================================================================
Build a list of the assets to be processed.
=========================================================================================
****************************************************************************************/

	--Removes non-geometry - helper function
	fn cleanSelection myArray=(
		cleanedArray=#()
		j=0 
		while (myArray.count > 0 and j!=myArray.count and geoCheckFail==false) do (
			j+=1
			if 
				(
					checkGeo myArray[j] 
				) 
			do 
				(
					append cleanedArray myArray[j]
				) 
			)
		cleanedArray
	)
	
	--traverses the hierarchy
	fn storeChildren model endResultArray= (
		if 
			(
				geoCheckFail==false and checkGeo model
			) 
		do 
			(
				append endResultArray model
				targetNumberofIterations = model.children.count
				i=0
				while i != targetNumberofIterations and geoCheckFail==False do (
					i+=1
					storeChildren model.children[i] endResultArray 
				)
			)
		endResultArray
	)
		
	fn storeChildrenofEachParent currentSelectionArray = (
		endResultArray=#()
		cleanArray = cleanSelection currentSelectionArray 
		i=0			
		while geoCheckFail==false and i!=cleanArray.count do -- todo
			( 
				i+=1
				storeChildren cleanArray[i] endResultArray
			)
		endResultArray
	)	

	
	fn findSelectedObjectsParents = 
		(
			global parentArray=#()
			global finalSortedArray=#()
			CleanedSelectionArray=cleanSelection $selection
			if geoCheckFail==false and CleanedSelectionArray.count!=0 do
				(
					stopVar=false
					j=1
					while ( j <= CleanedSelectionArray.count and geoCheckFail==false ) do 
					(
						currentAsset=CleanedSelectionArray[j]
						j+=1
						while stopVar==false do 
						(
							if  
								(
									checkGeo currentAsset.parent setCheckGeoVar:false
								) 
							then 
								(
									currentAsset=currentAsset.parent
								)
							else 
								(
									if 
										(
											--Find objects that are invalid. If they are invalid find out why. If they don't exist then append the current object to the array. IF they do Exist and they were caught for any other reason then error out. 
											isvalidobj currentAsset.parent  
										)										
									then 
										(
											geoCheckFail=true
										) 
									else 
										(
											appendifunique parentArray currentAsset
										)
									-- this is stopping before each asset is reached	
									stopVar=true
								)
						)
					)
					if geoCheckFail==false do (
						finalSortedArray=storeChildrenofEachParent parentArray; -- returns false if bad assets are contained within
						finalSortedArray=join finalSortedArray CleanedSelectionArray
						finalSortedArray=makeUniqueArray finalSortedArray
						finalSortedArray
					) 
				)
		) 

	

	fn findNumberOfStepsToBaseComponent objectToCheck = (
		counter=0
		if checkgeo objectToCheck setCheckGeoVar:false do (
			stopVar=false
			currentAsset=objectToCheck
			while stopVar==false do (
				if  (checkGeo currentAsset.parent setCheckGeoVar:false) then 
					(
						currentAsset=currentAsset.parent
						counter+=1
					)
				else (
						stopVar=true
					)
			)
		)
		counter
	)
			

			
/****************************************************************************************
=========================================================================================
End build a list of the assets to be processed. Creates and populates an array with the objects needed
=========================================================================================
****************************************************************************************/


/****************************************************************************************
=========================================================================================
Finds the most efficient texture dimensions for a given number of objects. returns float 2 xy dimensions
=========================================================================================
****************************************************************************************/

	fn findTextureDimensions ObjectToProcessCount TargetCoordinateIndex= (
		if TargetCoordinateIndex == -1 then (
				DecrementerTotal = 256
			)
		else (
				DecrementerTotal = 1600 -- small enough to avoid uv precision issues without using high precision values
			)
		evenNumber = (mod ObjectToProcessCount 2.0)==0
		HalfEvenNumber = (mod (ObjectToProcessCount/2.0) 2.0)==0
		HalfNumber = ceil (ObjectToProcessCount/2.0)
		modResult = 1
		RowCounter = 1
		newDecrementerTotal = if HalfNumber < DecrementerTotal then (HalfNumber) else (DecrementerTotal) 
		decrementAmount = if HalfEvenNumber==true then (2) else (1)
		complete = false
		while complete == false do (
			modResult = mod ObjectToProcessCount newDecrementerTotal
			complete = modResult == 0 or newDecrementerTotal < 1 
			if complete== false do newDecrementerTotal-=decrementAmount 
			if newDecrementerTotal < 1 do newDecrementerTotal=1
		)

		if newDecrementerTotal==1 or ((ObjectToProcessCount/newDecrementerTotal)>DecrementerTotal) then (
				Y=floor (sqrt ObjectToProcessCount)
				X=ceil (ObjectToProcessCount/floor Y)
				xy=[x,y]
			)
			else (
				xy=[newDecrementerTotal,(ObjectToProcessCount/newDecrementerTotal)]
			)
	)
		
		
	/****************************************************************************************
	=========================================================================================
	End finding the most efficient texture dimensions 
	=========================================================================================
	****************************************************************************************/


	/****************************************************************************************
	=========================================================================================
	Arrange the model uvs
	=========================================================================================
	****************************************************************************************/


	function findXYLocationOfIndex index xy= (
		index=(index-1)
		newXY=[(mod (index) xy[1]), floor(index/xy[1])]  
		newXY+=[1,1]
	)

	function arrangeTheModelUVs objectArray xy uvChannel= (
			count=objectArray.count 
			xIncrement=(1.0/(xy[1])) -- half pixel 
			yIncrement=(1.0/(xy[2])) -- half pixel 
			if count> 0 do (
				for i=1 to (count) do  (
						newXY=(findXYLocationOfIndex i xy)-[.5,.5]
						mX=newXY[1]	
						mY=newXY[2]
						mX*=xIncrement
						mY*=yIncrement	
						mY=1.0-mY
						mX*=255.0
						mY*=255.0
						if classof objectArray[i] != Editable_Poly do convertToPoly(objectArray[i])
						polyop.setVertColor objectArray[i] uvChannel #all [mx,mY,0]
						fixUVNames objectArray[i] 
						updateProgBar maxOperations:count currentOperation:i
					
					)
					
			)
		)

	/****************************************************************************************
	=========================================================================================
	End Arrange the model uvs
	=========================================================================================
	****************************************************************************************/
		
	/****************************************************************************************
	=========================================================================================
	Arrange a final array of arrays for the render target and locate the assets
	=========================================================================================
	****************************************************************************************/

	function arrangeLinearTextureInfoArray linearTextureInfoArray xy= (
		if linearTextureInfoArray.count > 0 do (
			global FinalArrayArrangement=#()
			local localMaxY=-1
			for i=1 to linearTextureInfoArray.count do (
				newXY=findXYLocationOfIndex i xy
				if newXY[2]>localMaxY do append FinalArrayArrangement #() 
				localMaxY=newXY[2]
				append FinalArrayArrangement[newXY[2]] linearTextureInfoArray[i]
			)
		) 
		FinalArrayArrangement
	)
		
		
	function mergeRGBAndAlpha RGBArray alphaArray = (
		if RGBArray.count == alphaArray.count and  RGBArray.count>0 then  
			(
				compositeArray= #()
				
				for i =1 to RGBArray.count do 
					(
						append compositeArray [RGBArray[i][1],RGBArray[i][2],RGBArray[i][3],alphaArray[i]]
					)
				compositeArray
			) 
		else 
			(
				false
			)
		)
		
			
	/****************************************************************************************
	=========================================================================================
	End Arrange a final array of arrays for the render target and locate the assets
	=========================================================================================
	****************************************************************************************/		
	/****************************************************************************************
	=========================================================================================
	Render options
	=========================================================================================
	****************************************************************************************/
	/*********************************************************
	Gather Pass Info
	*********************************************************/
	
		
	fn findProgressAmount = (
		0
		--TODO write a function that that does the dot produce with the parent and child to see where it exists in the chain - then add that to the list
	)
		
	fn adjustWorldDirectionForUnreal myVector = (
		[myVector[1],1.0-myVector[2],myVector[3]]
	)
		
	

	function FindParentObjectArrayIndex objectArray:#() currentObject:undefined = (
		arrayIndex=0
		if (checkGeo currentObject.parent setCheckGeoVar:false) then (
				arrayIndex=((findItem objectArray (currentObject.parent)))
			) else (
				arrayIndex=((findItem objectArray currentObject))
			)
		arrayIndex-.5
	)
	fn findPivotPosition currentObject:undefined = (
		center=currentObject.pos
		adjustWorldDirectionForUnreal center 
	)
	fn findOrigin currentObject:undefined= (
			adjustWorldDirectionForUnreal (currentObject.center)
			
	)
	
		
	fn findXVector currentObject:undefined= (
		normalize currentObject.transform[1]
	)
		
	fn findYVector currentObject:undefined= (
		normalize currentObject.transform[2]
	)
	
	fn findZVector currentObject:undefined= (
		normalize currentObject.transform[3]
	)
	fn FindNumberOfStepsToParent currentObject:undefined= (		
		-- could be more efficient but it shouldn't really matter for this use case
		count=findNumberOfStepsToBaseComponent currentObject
		count as float
	)
	fn FindRandomFloats = (
		random 0.0 1.0
	)
	
	fn findMaxBoundingBoxDistance currentObject:undefined= (
		localbb=nodeLocalBoundingBox currentObject
		distance localbb[1] localbb[2]
	)
	fn findMaxBoundingBoxDistanceAlongVector currentObject:undefined axis:1= (
		localbb=nodeLocalBoundingBox currentObject
		abs(dot (localbb[1]-localbb[2]) (normalize currentObject.transform[axis]))
	)
	
	fn findMaxBoundingBoxDistanceAlongXVector currentObject:undefined= (
		findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:1
	)
	fn findMaxBoundingBoxDistanceAlongYVector currentObject:undefined= (
		findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:2
	)
	fn findMaxBoundingBoxDistanceAlongZVector currentObject:undefined= (
		findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:3
	)
	fn wrapFindMaxBoundingDistanceWithLDScale curVal = (
		(clamp(ceil(curVal/8.0)) 1.0 256.0) / 256.0 -- up to 2048 units
		--clamp (curVal/(16.0 * 256.0)) 0.005 1.0 -- 16 * 256  with a min scale of 16 or the smallest possible unit without hitting 0
	)
	fn findMaxBoundingBoxDistanceAlongXVectorLD currentObject:undefined= (
		wrapFindMaxBoundingDistanceWithLDScale (findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:1) 
	)
	fn findMaxBoundingBoxDistanceAlongYVectorLD currentObject:undefined= (
		wrapFindMaxBoundingDistanceWithLDScale (findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:2)
	)
	fn findMaxBoundingBoxDistanceAlongZVectorLD currentObject:undefined= (
		wrapFindMaxBoundingDistanceWithLDScale (findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:3)
	)
	
	
	fn findExtents currentObject:undefined= (
		[findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:1,findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:2,findMaxBoundingBoxDistanceAlongVector currentObject:currentObject axis:3]
	)
	fn findSelectionOrder currentObject:undefined= (
		if initialSelectionArray!= undefined then (
			finditem initialSelectionArray currentObject
		) else (
			0
		)
	)

	/************************************************************
	Post Process functions
	************************************************************/
	
	--packTextureBits f16
	fn packTextureBits f16 = (
		f16= f16 as integer
		f16+=1024
		sign = bit.shift  (bit.and f16 0x8000) 16
		expVar =if (bit.and f16 0x7fff) == 0 then (0) else (bit.shift ((bit.and (bit.shift f16 -10) 0x1f)-15+127) 23)
		mant =bit.shift (bit.and f16 0x3ff) 13
		f16= bit.or (bit.or sign expVar) mant 
		bit.intAsFloat f16  
	)	
	
	fn packVectorIntsIntoFloats objectArray:#() = (
		tArray=#()
		for i in objectArray do append tArray ([packTextureBits i[1],packTextureBits i[2],packTextureBits i[3]])
		tArray
	)
	fn packIntsIntoFloats objectArray:#() = (
		tArray=#()
		for i in objectArray do append tArray (packTextureBits i)
		tArray
	)
	fn findTheMaximumNumberofSteps objectArray:#() = (
		mytempArray=#()
		maxStepCount = 0
		for i in objectArray do 
			(
				if i > maxStepCount do maxStepCount = i
			)
		for i in objectArray do (
			append mytempArray ((i as float)/maxStepCount)
			)
		mytempArray
	)
	fn constantBiasScaleScalar myScalar = 
	(
		((myScalar+1.0)/2.0)
	)
	fn findConstantBiasScaleVectorValues objectArray:#()=
	(
		mytempArray=#()
		for i in objectArray do (
			normalizedI= normalize i
			append mytempArray ([constantBiasScaleScalar normalizedI[1],(1.0-(constantBiasScaleScalar normalizedI[2])),constantBiasScaleScalar normalizedI[3]])
		)
		mytempArray
	)

	


	/************************************************************
	End Post Process functions
	************************************************************/
	
	/************************************************************
	Shell function
	************************************************************/
	fn	mFn subfn objectArray:#() xy:[0,0] postFn:undefined =(
		tempArray= #()
		for i in objectArray  do (
			append tempArray (subfn objectArray:objectArray currentObject:i xy:xy)
		)
		if postFn != undefined do (
			tempArray = (postFn objectArray:tempArray xy:xy)
		)
		tempArray
	)
	/************************************************************
	End shell function
	************************************************************/	

	/***********************************************************
	To add a new feature add a new struct to the option array and the nessesary sub function
	***********************************************************/
	function populateArrayBasedOnRenderStruct objectArray &structRef xy = (
		structRef.renderArrayToSet = (mFn structRef.fnToCall objectArray:objectArray xy:xy postFn:structRef.postFn)
	)
				
/****************************************************************************************
=========================================================================================
End Arrange a final array of arrays for the render target
=========================================================================================
****************************************************************************************/
/****************************************************************************************
=========================================================================================
Render the Texture
=========================================================================================
****************************************************************************************/
		global previousPathName = "c:\\"
		
		fn initializeRender = (
			global TextureName = getSavePath  caption:"Select Your Image Directory" initialDir: previousPathName
			if TextureName != undefined do global previousPathName = TextureName 
		)
		
		
		fn renderOutTheTextures ArrayOfPixelArrays ImageDimensions b_hdr:false texturePassName:""= (	
				if TextureName == undefined then (
					messagebox "please select a file location"
				)
				else(

					if b_hdr then 
					(
						fopenexr.SetCompression 0
						fopenexr.setLayerOutputType 0 0 -- set layer 0  main layer to RGBA, RGB = 1
						fopenexr.setLayerOutputFormat 0 1 --0 32 sets main layer to float 16 via 1. other options are 0 float 32, 2 int 32 
						Extension=".EXR"
					) else
					(
						Targa.setColorDepth 32
						Targa.setCompressed false
						Targa.setAlphaSplit false
						Targa.setPreMultAlpha true
						Extension=".TGA"
					)
					
					currentTextureName = TextureName+"\\"+texturePassName+Extension
			
					if b_hdr then 
					(
					
						global bakedTexture = bitmap ImageDimensions[1] ImageDimensions[2] filename:currentTextureName hdr:b_hdr
					)
					else (
						
						global bakedTexture = bitmap ImageDimensions[1] ImageDimensions[2] filename:currentTextureName setColorDepth:32
					)
					
					for i=0 to (ArrayOfPixelArrays.count-1) do (
						setPixels bakedTexture [0, i] ArrayOfPixelArrays[(i+1)]
					)
					save bakedTexture gamma:1.0
					close bakedTexture
				)
		)
		
		fn createFourVectorArrayFromStructArrays structCombination xy = 
			( 
				RGBArray=structCombination[1].renderArrayToSet
				alphaArray=structCombination[2].renderArrayToSet
				mergedRGBAImageArray=(mergeRGBAndAlpha RGBArray alphaArray)
				global mergedRGBAImageArray=(arrangeLinearTextureInfoArray mergedRGBAImageArray xy)	
				mergedRGBAImageArray
			)
	
	
/****************************************************************************************
=========================================================================================
End Render the Texture
=========================================================================================
****************************************************************************************/


/****************************************************************************************
=========================================================================================
End Pivot painter 2 functions
=========================================================================================
****************************************************************************************/
/****************************************************************************************
=========================================================================================
End function library
=========================================================================================
****************************************************************************************/

		global structArrayOfUVOptions = # (
			(UVOptionStruct guiString:"Texture Coordinate 2" CoordinateIndex:2),
			(UVOptionStruct guiString:"Texture Coordinate 3" CoordinateIndex:3),
			(UVOptionStruct guiString:"Texture Coordinate 4" CoordinateIndex:4),
			(UVOptionStruct guiString:"Texture Coordinate 5" CoordinateIndex:5),
			(UVOptionStruct guiString:"Texture Coordinate 6" CoordinateIndex:6),
			(UVOptionStruct guiString:"Texture Coordinate 7" CoordinateIndex:7),
			(UVOptionStruct guiString:"Texture Coordinate 8" CoordinateIndex:8)
			--(UVOptionStruct guiString:"Red and Green Vertex Colors" CoordinateIndex:0)
		);
		
		global structArrayOfRenderOptions = # (
			/***********   keep the options grouped together to support later functions    ***********/
			--Hdr rgb
			--Do not render struct
			(selectedRenderOptions guiString:"Do not render" isHDR:true isAlpha:false fnToCall:findPivotPosition bRender:false fileDisplayName:"" ), 
			(selectedRenderOptions guiString:"Pivot Position ( 16-bit )" isHDR:true isAlpha:false  fnToCall:findPivotPosition fileDisplayName:"PivotPos"),
			(selectedRenderOptions guiString:"Origin Position ( 16-bit )" isHDR:true isAlpha:false fnToCall:findOrigin fileDisplayName:"OriginPos"),
			(selectedRenderOptions guiString:"Origin Extents ( 16-bit )" isHDR:true isAlpha:false fnToCall:findExtents fileDisplayName:"OriginExt"),
			
			--Ldr rgb
			(selectedRenderOptions guiString:"X Vector ( 8-bit )" isHDR:false isAlpha:false fnToCall:findXVector fileDisplayName:"XVector" postFn:findConstantBiasScaleVectorValues),
			(selectedRenderOptions guiString:"Y Vector ( 8-bit )" isHDR:false isAlpha:false fnToCall:findYVector fileDisplayName:"YVector" postFn:findConstantBiasScaleVectorValues),
			(selectedRenderOptions guiString:"Z Vector ( 8-bit )" isHDR:false isAlpha:false fnToCall:findZVector fileDisplayName:"ZVector" postFn:findConstantBiasScaleVectorValues),
			
			--Hdr Alpha
			(selectedRenderOptions guiString:"Parent Index ( Int as float )" isHDR:true isAlpha:true fnToCall:FindParentObjectArrayIndex fileDisplayName:"ParentIndexInt" postFn:packIntsIntoFloats),
			(selectedRenderOptions guiString:"Number of Steps From Root" isHDR:true isAlpha:true fnToCall:FindNumberOfStepsToParent fileDisplayName:"StepsToRoot"),
			(selectedRenderOptions guiString:"Random 0-1 Value Per Element" isHDR:true isAlpha:true fnToCall:FindRandomFloats fileDisplayName:"Random0-1"),
			(selectedRenderOptions guiString:"Bounding Box Diameter" isHDR:true isAlpha:true fnToCall:findMaxBoundingBoxDistance  fileDisplayName:"BoundDiameter"),
			(selectedRenderOptions guiString:"Selection Order  ( Int as float )" isHDR:true isAlpha:true fnToCall:findSelectionOrder fileDisplayName:"SelectionOrder_IntAsFloat"  postFn:packIntsIntoFloats),
			(selectedRenderOptions guiString:"Normalized 0-1 Hierarchy Position" isHDR:true isAlpha:true fnToCall:FindNumberOfStepsToParent  fileDisplayName:"NormalizedHierPos" postFn:findTheMaximumNumberofSteps),
			(selectedRenderOptions guiString:"Object X Width" isHDR:true isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongXVector  fileDisplayName:"ObjectXWidth"),
			(selectedRenderOptions guiString:"Object Y Depth" isHDR:true isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongYVector  fileDisplayName:"ObjectYDepth"),
			(selectedRenderOptions guiString:"Object Z Height" isHDR:true isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongZVector  fileDisplayName:"ObjectZHeight"),
			(selectedRenderOptions guiString:"Parent Index ( Float - Up to 2048 )" isHDR:true isAlpha:true fnToCall:FindParentObjectArrayIndex  fileDisplayName:"ParentIndexFloat"),

			--Ldr Alpha
			(selectedRenderOptions guiString:"Normalized 0-1 Hierarchy Position" isHDR:false isAlpha:true fnToCall:FindNumberOfStepsToParent  fileDisplayName:"NormalizedHierPos" postFn:findTheMaximumNumberofSteps),
			(selectedRenderOptions guiString:"Random 0-1 Value Per Element" isHDR:false isAlpha:true fnToCall:FindRandomFloats fileDisplayName:"Random0-1"),
			(selectedRenderOptions guiString:"X Extent Divided by 2048 - 2048 Max" isHDR:false isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongXVectorLD  fileDisplayName:"XExtentDividedby2048reaches2048"),
			(selectedRenderOptions guiString:"Y Extent Divided by 2048 - 2048 Max" isHDR:false isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongYVectorLD  fileDisplayName:"YExtentDividedby2048reaches2048"),
			(selectedRenderOptions guiString:"Z Extent Divided by 2048 - 2048 Max" isHDR:false isAlpha:true fnToCall:findMaxBoundingBoxDistanceAlongZVectorLD  fileDisplayName:"ZExtentDividedby2048reaches2048")
			
		)
	
		function reinitializeRenderArrays =(
			for i in structArrayOfRenderOptions do i.renderArrayToSet=#()
		)
		global createIndividualArrays = fn createIndividualArrays bhdr = (for i in structArrayOfRenderOptions where i.isAlpha == true and i.isHDR == bhdr collect i)
		global pullStringArrayFromStructArray  
		fn pullStringArrayFromStructArray structArray = 
			(
				stringArray =( for i in structArray collect i.guiString)
				stringArray 
			)
		global hdLDRGBArray = (for i in structArrayOfRenderOptions where (i.isAlpha == false) collect i)
		global hdLDRGBStringArray = (pullStringArrayFromStructArray hdLDRGBArray)
		global ldAlphaArray = (createIndividualArrays false) 
		global ldAlphaStringArray = (pullStringArrayFromStructArray ldAlphaArray)
		global hdAlphaArray = 	(createIndividualArrays true)
		global hdAlphaStringArray = (pullStringArrayFromStructArray hdAlphaArray)
		global uvStringArray=(pullStringArrayFromStructArray structArrayOfUVOptions)

/****************************************************************************************
========================================================
Advanced Section 
========================================================
****************************************************************************************/	
	rollout Advanced_Rollout "Render Options" (
		on Advanced_Rollout rolledUp state do (
				bAdvancedSection=state
				adjustRolloutHeight()
		)
		button paintMeshes "Process The Selected Object Hierarchy" height:largebuttonH width:guiW tooltip:"Select a mesh and then press paint.\r\r
The script will locate all of the editable polygon meshes that are connected to the selected mesh via their shared hierachy. (One can connect one object to another via the 3DS Max link tool.)\r\r
After locating the meshes the script will then alter the uv channel you've chosen to act as the basis for the ensuing textures which will be generated.\r\r
The default texture contains model information like: pivot location in the images RGB channels and an index in the alpha. The index can be used to locate the current meshes parent mesh. This is made simple via Pivot Painter 2.0 material functions in UE4.\r\r
Additional textures can be rendered out as desired via the check boxes below.\r\r
The objects that aren't collapsed editable polygon objects will be ignored."
			

				
			group "UVs " (
				dropdownlist ddlTextureCoordinate "Texture Coordinate Location:" items:#() 
				-- uvStringArray - the struct isn't yet instantiated so the items list is populated when the rollout is placed
			)
			label lblCustomTextures "Custom Textures" align:#left height:11
			
			group "" (
				dropdownlist ddlTexture1RGB "Texture 1 RGB:" items:#() enabled:true -- hdLDRGBStringArray 
				dropdownlist ddlTexture1Alpha "Texture 1 Alpha:" items:#()  enabled:true
			)
			
			group "" (
				dropdownlist ddlTexture2RGB "Texture 1 RGB:" items:#() enabled:true --hdLDRGBStringArray
				dropdownlist ddlTexture2Alpha "Texture 1 Alpha:" items:#() enabled:true
			)
			
			
			/****************************************************************************************
			=========================================================================================
			Drop Down List Functionality
			=========================================================================================
			****************************************************************************************/
			fn getRGBStruct ddlRGB = 
				(
					hdLDRGBArray[ddlRGB.selection]
				)	
				
			fn updateAlphaDropdown ddlRGB ddA = 
			(
				parentRGBStruct=(getRGBStruct ddlRGB)
				if parentRGBStruct.bRender==false then  
				(
					ddA.enabled=false 
					ddA.items=#()
				)
				else
				(
					ddA.enabled=true
					if (parentRGBStruct.isHDR) 
						then 
					(
						ddA.items=hdAlphaStringArray
					) 
						else 
					(
						ddA.items=ldAlphaStringArray
					)
					ddA.selection=1
				)
				-- generic code that is run on drop down update to disable the paint button in the case of 0 render targets being requested
				if (ddlTexture1RGB.selection==1 and ddlTexture2RGB.selection==1) then (paintMeshes.enabled=false) else (paintMeshes.enabled=true)
			)
			
			on ddlTexture1RGB selected i do 
				(
					updateAlphaDropdown ddlTexture1RGB ddlTexture1Alpha 
				)
			on ddlTexture2RGB selected i do 
				(
					updateAlphaDropdown ddlTexture2RGB ddlTexture2Alpha
				)
			
			fn retrieveAlphaStructFromRGBdd rgbDD ldDD= (
				if hdLDRGBArray[rgbDD.selection].isHDR then hdAlphaArray[ldDD.selection] else ldAlphaArray[ldDD.selection]
			)
			
			/****************************************************************************************
			=========================================================================================
			End Drop Down List Functionality
			=========================================================================================
			****************************************************************************************/		
			
			fn returnArrayOfRenderStructs = (
				rgb1Struct=getRGBStruct ddlTexture1RGB 
				rgb2Struct=getRGBStruct ddlTexture2RGB
				textureStructArray1=#()
				textureStructArray2=#()
				combinedStruct=#()
			
				if rgb1Struct.bRender==true do 
					(
						append textureStructArray1 rgb1Struct
						append textureStructArray1 (retrieveAlphaStructFromRGBdd ddlTexture1RGB ddlTexture1Alpha)
						append combinedStruct textureStructArray1
					)
				if rgb2Struct.bRender==true do 
					(
						append textureStructArray2 rgb2Struct
						append textureStructArray2 (retrieveAlphaStructFromRGBdd ddlTexture2RGB ddlTexture2Alpha)
						append combinedStruct textureStructArray2
					)
					
				combinedStruct
			)
			
			fn displaySelectMeshWarning = (
					intialMessage="One or more of the assets in the selected object hierarchy contain modifiers, are missing vertices or are invalid. Please ensure that you've selected collapsed editable polygon objects with at least one vertex.\r\rTry collapsing the objects within your selected hierarchies to editable polygon meshes to ensure that the models can be processed."
					if isvalidnode geoCheckFailObject then 
						additionalMessage="\r\rPlease check the following asset: "+geoCheckFailObject.name 
					else additionalMessage=""
					message=intialMessage+additionalMessage
					messagebox message
			)
			
			
		on paintMeshes pressed do 
		(
			if (units.SystemType!=#Centimeters)  
			then (
				messagebox "Please change your file's unit type to centimeters.\r\rGo to ''Customize'' in the main tool bar, ''Units Setup'' then press the \r''System Unit Setup'' button and finally choose ''Centimeters'' from the dropdown list."
			)
			else (
				if selection.count > 0 do (
					geoCheckFail=false
					suspendediting();
					try
					with redraw off (
						
						/****************************************************************************************
						=========================================================================================
						Final function call 
						=========================================================================================
						****************************************************************************************/
						global primaryHObjectList=#()
						--populate list of assets
						initialSelectionArray = selection as array
						primaryHObjectList=findSelectedObjectsParents()
						arraysOfRenderStructsToRender=returnArrayOfRenderStructs() 
						--geoCheckFail is already updated by the previous gather functions
						if (geoCheckFail == false and primaryHObjectList.count >0 and arraysOfRenderStructsToRender.count > 0 ) then 
							( 
								-- picks a texture save position
								if (initializeRender() != undefined) then 
									( 	
										reinitializeRenderArrays() -- resets render bools
										global TargetCoordinateIndex=structArrayOfUVOptions[ddlTextureCoordinate.selection].CoordinateIndex
										xy=findTextureDimensions primaryHObjectList.count TargetCoordinateIndex;
										arrangeTheModelUVs primaryHObjectList xy TargetCoordinateIndex;
										
										-- nessesary arrays are now populated
										
										progCount=0
										for i in arraysOfRenderStructsToRender do (
											totalCount=arraysOfRenderStructsToRender.count
											progCount+=1
											for s in i do (
												populateArrayBasedOnRenderStruct primaryHObjectList &s xy 
											)
											updateProgBar maxOperations:totalCount currentOperation:progCount
										) 
										updateProgBar maxOperations:1 currentOperation:1

										for i in arraysOfRenderStructsToRender do (
											--merges the results of the gathered arrays into a float 4 array by the texture dimensions - sets mergedRGBAImageArray
											createFourVectorArrayFromStructArrays i xy
											currentStruct=i[1]
											-- kind of hacky work around. Pixel data Array sporadically returns the first array element rather than the entire array of arrays. So we instead just reference a global parameter set within the function.
											renderOutTheTextures mergedRGBAImageArray xy b_hdr:(currentStruct.isHDR) texturePassName:((primaryHObjectList[1].name)+"_rgb_"+currentStruct.fileDisplayName +"_a_"+i[2].fileDisplayName+"_UV_"+(TargetCoordinateIndex as string))	
										)
											
									)
								else 
									(
										messagebox "Please select render target location."
									)
							) 
						else 
							(
								displaySelectMeshWarning ()
							)

						resumeediting();
					
					) catch(
							
						displayAutoErrorMessage();
						resumeediting();
					)
					
					ResumeEditing() -- just an extra check		
				)
			)
		)-- ends on button pressed
		
	) -- ends advanced mode dropdown
	
	/****************************************************************************************
	=======================================================
	End Advanced Section 
	=======================================================
	****************************************************************************************/	
	/****************************************************************************************
	=======================================================
	Prep Tools
	=======================================================
	****************************************************************************************/
		
	rollout PrepTools_rollout "Prep Tools"
	(
			on PrepTools_rollout rolledUp state do (
				if state then 
				(
					bPrepTools=true
					adjustRolloutHeight()
				)
				else (
					bPrepTools=false 
					adjustRolloutHeight()
				)
			)
			Group "Detatch All Elements" (
				button seperateElementsIntoEditablePolysBtn "Detach Selected Model's Elements" width:guiW tooltip:"This will detach every element in an object as another object."
				CheckBox okayToSlowlySeperateElements "Preserve Custom Normals (Slow)" width:guiW checked:performSlowSeparation tooltip:"This will duplicate the model as many times as there are a model elements and then delete all but one element from each copy. This is to preserve the meshes custom normals. Do not use this method unless nessesary as it is slow."
			)
			group "Detach Elements Based on Penetration" (
				pickbutton selectBranchDetachBtn "Pick Selection Obj"  across:2 width:(guiW/2-5)   align:#left filter:checkGeoDetachPen tooltip:"Pick an editable polygon object without any modifiers applied. Do not pick the same object for both the ''selection object'' and ''model to process'' options.\n\nNote: The selection mesh cannot have any holes."
				pickbutton selectLeafDetachBtn "Pick Model to Proc" align:#right  width:(guiW/2-5) filter:checkGeoDetachPen tooltip:"Pick an editable polygon object containing several elements without any modifiers applied. Do not pick the same object for both the ''selection object'' and ''model to process'' options.\n\nNote: The selection mesh cannot have any holes."
				button detachElementsInterpenetratingBtn "Detach Model Elements That Touch" width:guiW enabled:false tooltip:"This will seperate any elements that touch, or penetrate, the selection object's geometry into a seperate object.\n\nNote: This tool will not work properly if the selection object has any holes."
			)
			group "Generate New Pivot Points" (
				label mylabel10 "Pick Your Model Selection Set" align:#left
				
				dropdownlist  selectionSetDropDown "" items:dropList selection:0 height:10 tooltip:"Pick your model selection set. Press ''Manage'' to modify your selection sets and Update to get the latest sets." across:3 width:(guiW/2.25) 
				button updateSelectionSetList "Update" width:(guiW/4) align:#right offset:[10,0] tooltip:"Press this button to get the latest selection sets from Max."
				button manageSelectionSetList "Manage" width:(guiW/4) align:#right tooltip:"Press this button to manage your selection sets."
				label mylabel11 "Pick Leaf Pivot Obj" align:#left across:2
				radiobuttons rdoPivotReferenceType  labels:#( "Spline","Mesh")   tooltip:"Choose wheither you would like to constuct your pivots based off of the knots in a spline or the vertices in an editable poly object." columns:2
				pickbutton branchSplinePickBtn "Pick Spline"   across:2 align:#left filter:checkSpline width:(guiW/2-5) tooltip:"Pick a spline from the scene. The script will find the closest vertex pair between each model and each knot in the spline. Then it will move the objects pivot to the location of that vertex and orient the axis to match the model. The x-axis will point toward the center of the model from the desired vertex. The z-axis will point along the surface's normal. Processing time will increase as vertex counts rise.\r\rWarning:\rMake sure to not use the H list hotkey. The object must be picked from the viewport.\r\r
	Tip:\rFor grass use a single a two knot spline placed well below your grass to increase calculation speeds."
				pickbutton branchPivMeshPickBtn "Pick Mesh"   align:#left filter:checkGeo width:(guiW/2-5) tooltip:"Pick a mesh. The script will find the closest vertex match between the models' and pivot model's vertices. Then it will orient the leaf's axis to the polygonal orientation and vertex position.\r\rWarning:\rMake sure to not use the H list hotkey. The object must be picked from the viewport.\r\r
	Tip:\rFor grass use a editable polygon pivot point mesh with a single triangle placed well below your grass to increase calculation speeds." enabled:false
				label numAverLbl "Num of Face Norms to Avg Near Pivot"
				spinner spnNumberofNormalFaces range:[1,10000000,expansionNumber] type:#integer width:(guiW/2) align:#left across:2
				checkbox chkBxUseAllNormals "Average All" align:#center
				button createNewLeafPivot "Create New Pivots" width:guiW enabled:false tooltip:"This will generate a new pivot point for every editable polygon object in the selection set. The pivot will rest on the model vertex closest to a knot in the selected spline or vertex in the chosen editable poly object. The x-axes of the pivots will be oriented toward the averaged center of the meshes. The meshes' bounds will also be recreated and aligned with the new pivot. 
	\rTip:\rFor grass use a two knot spline placed well below your grass to increase processing speeds."
			)
		
			group "Recreate Bounding Boxes" (
				button btnRecreateBoundingBox "Process Selected Objects" width:guiW enabled:true tooltip:"As a model changes form via sub-object manipulation it's bounding box expands to fit the model elements but does not re-align itself with the model's pivot point. This function recreates the object's bounding box so that the bounding box aligns with the models basis vectors. It is nessesary to have a correctly constructed bounding box to successfully utilize the axis tools in the processing section along with the vertex alpha painting tools."
			)
			
			
			on okayToSlowlySeperateElements changed theState do (
				performSlowSeparation=theState
			)
			
			on chkBxUseAllNormals changed theState do (
				spnNumberofNormalFaces.enabled = not theState
				processAllMeshNormals = theState
			)
			
		fn checkListToActivateCreateNewPivots =(
			if droplist.count == 0 or selectionSetDropDown.selected==undefined or selectionSetIntPrep == 0 or selectionSetIntPrep > selectionSets.count then (
				false
			) else (
				true
			)
		)
		
		fn setSplineVertPivotMethod = (
			branchSplinePickBtn.enabled = true
			branchPivMeshPickBtn.enabled = false
			if (checkSpline currSplineObj) then (
				updateDropDownList();
				selectionSetDropDown.items = dropList;
				branchSplinePickBtn.text = truncateString ("Spline: " + currSplineObj.name as string) halfButtonStringlength
				if checkListToActivateCreateNewPivots() then (
					createNewLeafPivot.enabled =true; 
				) else (
					createNewLeafPivot.enabled =false
				) 
			)
			else (
				branchSplinePickBtn.text = "Pick Spline";
				currSplineObj=undefined
				createNewLeafPivot.enabled= false
				updateDropDownList();
				selectionSetDropDown.items = dropList;
			)
		)
		fn setMeshVertPivotMethod = (
			branchSplinePickBtn.enabled = false
			branchPivMeshPickBtn.enabled  = true
			updateDropDownList();
			selectionSetDropDown.items = dropList;
			if (checkGeo meshPivotObj) then (
				setbranchPivMeshPickBtntext();
				if checkListToActivateCreateNewPivots() do createNewLeafPivot.enabled = true 
			)
			else (
				branchPivMeshPickBtn.text = "Pick Mesh";
				meshPivotObj=undefined
				createNewLeafPivot.enabled  = false
			)
		)
		on rdoPivotReferenceType changed state do (
			if state == 1 then (
				setSplineVertPivotMethod ()
			) else (
				setMeshVertPivotMethod ()
			)
		)
		on branchSplinePickBtn picked spline do (
			updateDropDownList();
			selectionSetDropDown.items = dropList;
			branchSplinePickBtn.text = truncateString ("Spline: " + spline.name as string ) halfButtonStringlength
			currSplineObj=spline;
			
			bSplineMessage=false
			if checkListToActivateCreateNewPivots() then (
				createNewLeafPivot.enabled = true 
			)
		)
		on branchSplinePickBtn rightclick do (
			updateDropDownList();
			selectionSetDropDown.items = dropList;
			createNewLeafPivot.enabled = false 
			branchSplinePickBtn.text = "Pick Spline" 
			currSplineObj=undefined
			bSplineMessage=true
		)
		
		on branchPivMeshPickBtn picked pivMesh do (
			updateDropDownList();
			selectionSetDropDown.items = dropList;
			branchPivMeshPickBtn.text = truncateString ("Mesh: " + pivMesh.name as string ) halfButtonStringlength
			meshPivotObj=pivMesh;
			if checkListToActivateCreateNewPivots() then (
				createNewLeafPivot.enabled = true 
			)
		)
		on branchPivMeshPickBtn rightclick do (
			updateDropDownList();
			selectionSetDropDown.items = dropList;
			createNewLeafPivot.enabled = false 
			branchPivMeshPickBtn.text = "Pick Mesh" 
			meshPivotObj=undefined
		)
		on selectLeafDetachBtn rightclick  do (
			selectLeafDetachBtn.text = selectLeafDetachBtntext
			prepLeaf = undefined
			bprepLeafMessage  = true
			detachElementsInterpenetratingBtn.enabled = false
		)
			on selectLeafDetachBtn picked geo do
			( 
				 if isvalidobj geo do
				 ( 
					selectLeafDetachBtn.text = truncateString ("Model: " + geo.name as string ) halfButtonStringlength
					prepLeaf = geo
					bprepLeafMessage  = false 
					if isvalidobj prepBranch then detachElementsInterpenetratingBtn.enabled = true
				)
			)
			on selectBranchDetachBtn rightclick  do (
					selectBranchDetachBtn.text = selectBranchDetachBtntext 
					prepBranch= undefined 
					bprepBranchMessage  = true
					detachElementsInterpenetratingBtn.enabled = false
			)
			on selectBranchDetachBtn picked geo do
			( 
				 if isvalidobj geo do
				 ( 
					selectBranchDetachBtn.text = truncateString ("Sel obj: " + geo.name as string ) halfButtonStringlength
					prepBranch= geo
					bprepBranchMessage  = false 
					if isvalidobj prepLeaf then detachElementsInterpenetratingBtn.enabled = true
				)
			)
			on detachElementsInterpenetratingBtn pressed do (
				if bprepLeafMessage == false and bprepBranchMessage == false and isvalidobj prepBranch  and isvalidobj prepLeaf then (
					fnDetachElementsInterpenetratingBtn()
				)
				else (
					bprepBranchMessage=not isvalidobj prepBranch
					bprepLeafMessage= not isvalidobj prepLeaf 
					errorMessagePrep()
					 
					if bprepBranchMessage then (selectBranchDetachBtn.text = selectBranchDetachBtntext; prepBranch=undefined)
					if bprepLeafMessage then (selectLeafDetachBtn.text =selectLeafDetachBtntext; prepLeaf=undefined)
					detachElementsInterpenetratingBtn.enabled=false
					) 
			)

			fn setbranchPivMeshPickBtntext =(
				PrepTools_rollout.branchPivMeshPickBtn.text = truncateString ("Mesh: " + meshPivotObj.name as string) halfButtonStringlength
			)

			
		fn storeoffModelNormals model = (
			normalsmodifier=edit_normals()
			addmodifier model normalsmodifier
			count=normalsmodifier.GetNumNormals node:model 

			normalsStructArray=#()
			bitArrayOfExplicitNormalVerts=#{}
			bitArrayOfExplicitNormalVerts.count=count
			
			for i=1 to count do (
				if (
					normalsmodifier.GetNormalExplicit i node:model 
				)
				THEN (
					append normalsStructArray (CustomNormalsStruct normal:(normalsmodifier.GetNormal i node:model) index:i)
					bitArrayOfExplicitNormalVerts[i]=true
				)
				else (print i)
			)
			normalTransferStructInst=normaltransferHolder ArrayOfNormalsAndIndices:normalsStructArray model:model  bitarrayOfExplicitNormals:bitArrayOfExplicitNormalVerts numberOfNormals:count
			
			deletemodifier model normalsmodifier
			normalTransferStructInst
		)
			
		fn reapplynormals model normalTransferStructInst = (
			-- Need to transform the vectors from one local space to the new models local space and the vertex normal ids also need to line up.
			normalsmodifier=edit_normals()
			addmodifier model normalsmodifier
			normalbitarray=#{}
			normalbitarray.count=(normalsmodifier.GetNumNormals node:model)
			normalbitarray=-normalbitarray
			normalsmodifier.Reset selection:normalbitarray node:model

			normalsmodifier.MakeExplicit selection:normalTransferStructInst.bitarrayOfExplicitNormals node:model

			for i=1 to normalTransferStructInst.ArrayOfNormalsAndIndices.count do (
				arrayElement=normalTransferStructInst.ArrayOfNormalsAndIndices[i]
				--normalsmodifier.SetNormalExplicit normalTransferStructInst.bitarrayOfExplicitNormals explicit:true node: model
				normalsmodifier.setnormal arrayElement.index arrayElement.normal node:model				
			)
			convertto model Editable_Poly
		)	
			
		fn recreateBoundingBox processSelectedMeshes:False= (
			suspendediting();
			try
			with redraw off (			
				if processSelectedMeshes== true do (
					-- collect all of the useable objects 
					warningMeshesCount=0
					--overrides perObjectPainterArray with the currect "cleaned" selection
					perObjectPainterArray=#()
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
					if warningMeshesCount!=0 then (messageBox (warningMeshesCount as string +" of the selected meshes were not collapsed polygon objects or didn't contain vertices.")) 
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
					
		targetParent = Obj.parent
		arrayOfChildren = Obj.children
		arrayOfChildren = cleanSelection arrayOfChildren
					
					polyop.attach b Obj
					polyop.deleteFaces b #{1..6}
					b.name=oldname
			
		
		for i in arrayOfChildren do i.parent =  b
		b.parent = targetParent

				if meshPivotObj == obj then (
						meshPivotObj=b
						setbranchPivMeshPickBtntext()
					)
					
					updateProgBar maxOperations:pbMaxOperations currentOperation:count 
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
					updateProgBar maxOperations:pbMaxOperations currentOperation:i 
				)
				for i=1 to selsetArrays.count do (
					selectionsets[selsetArrays[i][1]]=selsetArrays[i][2] 
				)
			)catch(
				displayAutoErrorMessage();
				resumeediting();
			)
			resumeediting();
		)
		
		on btnRecreateBoundingBox pressed do recreateBoundingBox processSelectedMeshes:true
		
			on createNewLeafPivot pressed do undo "Create New Pivots" on ( with redraw off (
				createLeavesFromSelectionSet selectionSetIntVar:selectionSetIntPrep;
				
				if rdoPivotReferenceType.state == 1 then (-- spline
					createSplineVertArray();
				) else (
					if createMeshVertArray() == false do ( 
						branchPivMeshPickBtn.text = "Pick Mesh"
						meshPivotObj=undefined
					)
				)			
				
				if perObjectPainterArray.count > 100 then (
					global newSelectionSetItems=#()
					global currSegperObjectPainterArrayPos=1
					global segmentedperObjectPainterArray=#(#())
					for i=1 to perObjectPainterArray.count do (
						if (mod i 100.0)==0 do (
							currSegperObjectPainterArrayPos+=1
							append segmentedperObjectPainterArray (#())
						)
						append segmentedperObjectPainterArray[currSegperObjectPainterArrayPos] perObjectPainterArray[i]
					)
					for i=1 to segmentedperObjectPainterArray.count do (
						perObjectPainterArray=segmentedperObjectPainterArray[i]
						
						findClosestVert collectNewitems:true
					)
					recreateBoundingBox();
				)else (findClosestVert ();
					recreateBoundingBox();)
			))
				
			on seperateElementsIntoEditablePolysBtn pressed do (
				undo "Detach Elements" on (
					seperateElementsIntoEditablePolys ();
				)
			)
				
			on manageSelectionSetList pressed do (
				updateDropDownList();
				selectionSetDropDown.items = dropList
				
				macros.run "Edit" "namedSelSets"
				if checkListToActivateCreateNewPivots() == false do createNewLeafPivot.enabled =false  
			)
			-- update selection sets for menu gui 
			on selectionSetDropDown selected i do ( 
				updateDropDownList();
				selectionSetDropDown.items = dropList;			
				global selectionSetIntPrep=i; 
				bLeafPrepMessage=false;  
				if i !=0 and i <=selectionSets.count then (
					select selectionSets[i];
					if rdoPivotReferenceType.state==1 then (
					-- eval spline
						if isvalidnode currSplineObj then (
							createNewLeafPivot.enabled = true 
						)else (
							bLeafSelSetPrepMessage=true;
						)

					) else (
					if (checkGeo meshPivotObj) do (
							createNewLeafPivot.enabled = true 
						)
					)
				)  else ( -- selection set was not good
					createNewLeafPivot.enabled = false 
				)
			)

			on updateSelectionSetList pressed do (
				
				updateDropDownList();
				selectionSetDropDown.items = dropList;
				if checkListToActivateCreateNewPivots() == false do createNewLeafPivot.enabled=false
			)
	)
	
	
	/****************************************************************************************
	=========================================================================================
	End prep tools
	=========================================================================================
	****************************************************************************************/
	
	/****************************************************************************************
	=========================================================================================
	Individual vertex painter
	=========================================================================================
	****************************************************************************************/
	
	
	rollout PaintIndividualPivots_rollout "Vertex Alpha Painter"
	(
		on PaintIndividualPivots_rollout rolledUp state do (
			if state then 
			(
				bIndividual=true
				adjustRolloutHeight()
			)
			else (
				bIndividual=false 
				adjustRolloutHeight()
			)
		)
	
		global solidColorValue = 0.0
		
		group "Alpha Channel Falloff Controls" (
			spinner spnleafLengthFalloff "3D dist to piv multiplier" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafLengthFalloff]  --tooltip:"This multiplies a distance calculation from the pivot to the current vertex."
			spinner spnleafLengthFalloffPower "3D dist to piv contrast" fieldwidth: 75 scale:0.05 range:[0, 100000000, leafLengthFalloffPower]  
			spinner spnleafWingFalloffX "X multiplier" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafWingFalloffX] 
			spinner spnleafWingFalloffPowerX "X contrast" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000,leafWingFalloffPowerX]  
			spinner spnleafWingFalloffY "Y multiplier" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafWingFalloffY]  
			spinner spnleafWingFalloffPowerY "Y contrast" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafWingFalloffPowerY]  
			spinner spnleafWingFalloffZ "Z multiplier" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafWingFalloffZ]  
			spinner spnleafWingFalloffPowerZ "Z contrast" fieldwidth: 75 scale:0.05 range:[-100000000, 100000000, leafWingFalloffPowerZ]  
			button paintSelectedVertexAlphas "Paint Current Selection" height:largebuttonH width:guiW enabled:true tooltip:"Paint the editable polygon objects in the selection set using the parameters above. The objects that aren't collapsed editable polygon objects will be ignored."
		)
		group "Solid Value Painting" (
				spinner spnPaintSolidValue "Value " fieldwidth: (guiW-50) scale:0.05 range:[0.0, 1.0, solidColorValue]  
				button paintSelectedBlackBtn  "Paint Selected Meshes a Solid Value" align:#left filter:checkGeo height:largebuttonH width:guiW tooltip:"Fill the vertex alpha with the value chosen above. This value can be referenced in an Unreal shader to isolate or remove animation from certain elements."
			)

		group "Preview on Selected Objects: " (
			radiobuttons rdoShowVertColors labels:#( "Diffuse","Alpha", "Color") columns:3  tooltip:"Click on the active viewport to view new channel."
		)
				
		
		on paintSelectedBlackBtn pressed do  (
			floatValue = (spnPaintSolidValue.value) 
			paintSelectedItemsASpecificValue (floatValue) 
			)
		on spnleafLengthFalloff changed val do(
			leafLengthFalloff= val
		)
		on spnleafLengthFalloffPower changed val do(
			leafLengthFalloffPower= val
		)
		on spnleafWingFalloffY changed val do(
			leafWingFalloffY= val
		)
		on spnleafWingFalloffPowerY changed val do(
			leafWingFalloffPowerY = val
		)
		on spnleafWingFalloffX changed val do(
			leafWingFalloffX= val
		)
		on spnleafWingFalloffPowerX changed val do(
			leafWingFalloffPowerX= val
		)
		on spnleafWingFalloffZ changed val do(
			leafWingFalloffZ= val
		)
		on spnleafWingFalloffPowerZ changed val do(
			leafWingFalloffPowerZ= val
		)
	

		
		on paintSelectedVertexAlphas pressed do (
			geoCheckFail=false
			objectsToVertexColor = cleanSelection $selection
			if selection.count > 0 do ( 
				if geoCheckFail then 
					(
						messagebox "One or more of the selected meshes were not collapsed editable polygon meshes, were missing verts or have been deleted. Please collapse your meshes to editable polygon objects, reselect them and reprocess them."
					)
					else
					(
						paintLocalValues objectlist:objectsToVertexColor
						completeRedraw()
					)
			)
		)
			
		
	

	
		
		on rdoShowVertColors changed state do (
			previewArray=cleanSelection ($selection as array)

			
			  case rdoShowVertColors.state  of (
				1:(
						for i=1 to previewArray.count do(
							if isvalidobj previewArray[i] do (
								previewArray[i].showVertexColors = off
								previewArray[i].vertexColorsShaded = on
							)
						)
							
				  ) 
				2:(
						for i=1 to previewArray.count do(
							if isvalidobj previewArray[i] do (
								resetObjectDisplay obj:previewArray[i]
								previewArray[i].vertexColorsShaded = off
								previewArray[i].showVertexColors = on
								previewArray[i].vertexColorType = #alpha
								
							)
						)
						completeRedraw()						
				  )
				3:(
						for i=1 to previewArray.count do(
							if isvalidobj previewArray[i] do (
								resetObjectDisplay obj:previewArray[i]
								previewArray[i].vertexColorsShaded = off
								previewArray[i].showVertexColors = on
								previewArray[i].vertexColorType =  0
								
							)
						) 
					completeRedraw()
				)
			)
			completeRedraw()
		)
	)
	
/****************************************************************************************
=========================================================================================
Wrap Up Rollout 
=========================================================================================
****************************************************************************************/	
	
	struct NormalMergeStruct (Obj, currentModifier, vertArray, vertPositionArray, pairArray)
	struct pairObj (Obj, OtherObject, objVert, otherVert)
	
	fn addNormals obj vertexID currentModifier= (
		returnVector=[0,0,0]
		myVertexBitArray=#{vertexID}
		myNormalSelectionBitArray=#{}
		currentModifier.ConvertVertexSelection myVertexBitArray myNormalSelectionBitArray node:obj
		for n in myNormalSelectionBitArray do (
			returnVector+=currentModifier.GetNormal n node:obj
		
		)
		returnVector
	)

	
	rollout WrapUp_rollout "Package Model" (
		--label okaylabel ""
		--button packageModel "Create A Mesh From The Hierarchy" tooltip:"Select a mesh and then press the button to create a single static mesh from the models contained within the hierarchy.\r\rAfter the models are duplicated they will be attached to one another and finally their verts will be welded.\r\rNote that this technique may not support custom normals."  height:largebuttonH width:guiW offsets:[0,0] align:#center 
		button fixNormals "Merge Selected Model's Normals" tooltip:"Select several models that contain touching open edges. This feature will average out their normals to form a continuous surface."  height:largebuttonH width:guiW offsets:[0,0] align:#center 

		on WrapUp_rollout rolledUp state do (
			if state then 
			(
				bWrapUp=true
				adjustRolloutHeight()
			)
			else (
				bWrapUp=false 
				adjustRolloutHeight()
			)
		)
		on packageModel pressed do (
			if selection.count > 0 do (
				geoCheckFail=false
				suspendediting();
				try
				with redraw off (
					collapseableMeshArray=#()
					collapseableMeshArray=findSelectedObjectsParents()
					if (geoCheckFail == false and primaryHObjectList.count>0) then 
						( 
							parentMesh=copy collapseableMeshArray[1]
							resetxform parentMesh
							convertto parentMesh editable_poly 
							for i=2 to collapseableMeshArray.count do (
								newCopy=copy collapseableMeshArray[i]
								polyop.attach parentMesh newCopy
							)
							parentMesh.name=(collapseableMeshArray[1].name+"_Export")
							parentMesh.weldThreshold = 0.000001
							polyop.weldVertsByThreshold parentMesh #all
							select parentMesh
						)
					else (
						Messagebox "Please make sure that each object within your hierarchy is a collapsed editable poly."
						resumeediting();
					)
				)
				catch (
					resumeediting();
					Messagebox "An error occured. Please make sure that each object within your hierarchy is a collapsed editable poly."
				)
			)
			resumeediting();
		)
		
		fn unifyAndMergeVertNormals obj vertID obj2 vertID2 currentmodifier= (
			RandomNormals=#{}
			RandomNormals2=#{}
			vertID=#{vertID}
			currentModifier.ConvertVertexSelection vertID RandomNormals node:obj
			currentModifier.Unify selection:RandomNormals node:obj 
			currentModifier.MakeExplicit selection:RandomNormals node:obj 
			vertID2=#{vertID2}
			RandomNormals2=#{}
			currentModifier.ConvertVertexSelection vertID2 RandomNormals2 node:obj2
			currentModifier.Unify selection:RandomNormals2 node:obj2 
			currentModifier.MakeExplicit selection:RandomNormals2 node:obj2 
			RandomNormals=#{}
			RandomNormals2=#{}
			--unify changes the vert normal count so the normal indices must be gathered again
			currentModifier.ConvertVertexSelection vertID RandomNormals node:obj
			currentModifier.ConvertVertexSelection vertID2 RandomNormals2 node:obj2
			currentModifier.AverageTwo obj ((RandomNormals as array)[1]) obj2 ((RandomNormals2 as array)[1])
		)
		
		on fixNormals pressed do (
			if selection.count > 0 do (
				geoCheckFail=false
				--suspendediting(); this breaks a few of the operations
				try
				with redraw off (
					normalMeshArray=cleanSelection selection as array 
					if (geoCheckFail == false and normalMeshArray.count>0) then 
						( 
							
							FinalStructArray=#() 
							currentModifier=EditNormals()
							currentModifier.name="Average seam normals"
							--COLLECT ALL VERTS
							max modify mode
							for i=1 to selection.count do (
									currentmodel=selection[i]
									addModifier currentmodel currentModifier
									append FinalStructArray (NormalMergeStruct Obj:currentmodel currentModifier:currentModifier  vertArray:#() vertPositionArray:#() pairArray:#())
									numberOfVerts=getNumVerts currentmodel
									currentModelOpenEdges=polyOp.getOpenEdges currentmodel
									vertPositionArray=#()
									vertArray=#()
									for oE in currentModelOpenEdges do (
										openEdgesVertGroups=polyop.getEdgeVerts currentmodel oE
										for singleVert in openEdgesVertGroups do 
											if (appendIfUnique vertArray singleVert) do (
												append vertPositionArray (polyop.getvert currentmodel singleVert)
											)
										)
									FinalStructArray[i].vertArray=(deepCopy vertArray)
									FinalStructArray[i].vertPositionArray=(deepCopy vertPositionArray)
							)
							
							select selection -- hack to force 3ds max to recognize the new normal modifiers
							--COLLECT ALL INTERACTING VERTS
							for i=1 to FinalStructArray.count do (
								print "Final struct array"
								print i
								for j=i+1 to FinalStructArray.count do (
									for v=1 to FinalStructArray[i].vertArray.count do (
										for fV=1 to FinalStructArray[j].vertArray.count do (
											currDistance=distance FinalStructArray[i].vertPositionArray[v] FinalStructArray[j].vertPositionArray[fV]
											if currDistance < .05 do (
												append FinalStructArray[i].pairArray (pairObj Obj:FinalStructArray[i].Obj OtherObject:FinalStructArray[j].Obj objVert:FinalStructArray[i].vertArray[v] otherVert:FinalStructArray[j].vertArray[fV])
												append FinalStructArray[j].pairArray (pairObj Obj:FinalStructArray[j].Obj OtherObject:FinalStructArray[i].Obj objVert:FinalStructArray[j].vertArray[fV] otherVert:FinalStructArray[i].vertArray[v])
												unifyAndMergeVertNormals FinalStructArray[i].Obj FinalStructArray[i].vertArray[v] FinalStructArray[j].Obj FinalStructArray[j].vertArray[fV] FinalStructArray[i].currentModifier
											)
										)
									)
								)
							) 
							convertto selection Editable_Poly 
						)
					else (
						Messagebox "Please make sure that each object within your selection is a collapsed editable poly."
						resumeediting();
					)
				)
				catch (
					resumeediting();
					Messagebox "An error occured. Please make sure that each object within your hierarchy is a collapsed editable poly."
				)
			)
			resumeediting();
		)
	)
	
/****************************************************************************************
=========================================================================================
Help Rollout 
=========================================================================================
****************************************************************************************/
	rollout Help_rollout "Notes" (
		on Help_rollout rolledUp state do (
			if state then 
			(
				bhelp=true
				adjustRolloutHeight()
			)
			else (
				bhelp=false 
				adjustRolloutHeight()
			)
		)
		label lbl5  "Pivot Painter version 2.0\n\nWritten by Jonathan Lindquist\nat Epic Games.\n\nSee UnrealEngine.com for additional\ndocumentation." align:#left  height:90 

	)
/****************************************************************************************
=========================================================================================
End Help Rollout 
=========================================================================================
****************************************************************************************/
	

	
/****************************************************************************************
=========================================================================================
UI Calls
=========================================================================================
****************************************************************************************/	
	
	if foliage_floater != undefined then CloseRolloutFloater foliage_floater
	foliage_floater = newRolloutFloater "Pivot Painter 2.0" floaterWidth 800
	addRollout PrepTools_rollout foliage_floater
	addRollout Advanced_Rollout foliage_floater -- new rollout
	addRollout PaintIndividualPivots_rollout foliage_floater
	addRollout WrapUp_rollout foliage_floater		
	addRollout Help_rollout foliage_floater		
	

	--addRollout Help_rollout foliage_floater 
	
	
	-- Unfortunate method for setting the drop down item arrays. (Due to a complication with structs)
	Advanced_Rollout.ddlTextureCoordinate.items=uvStringArray
	Advanced_Rollout.ddlTexture1RGB.items=hdLDRGBStringArray
	Advanced_Rollout.ddlTexture2RGB.items=hdLDRGBStringArray
	Advanced_Rollout.ddlTexture1RGB.selection=2
	Advanced_Rollout.ddlTexture2RGB.selection=5
	Advanced_Rollout.updateAlphaDropdown Advanced_Rollout.ddlTexture1RGB Advanced_Rollout.ddlTexture1Alpha 
	Advanced_Rollout.updateAlphaDropdown Advanced_Rollout.ddlTexture2RGB Advanced_Rollout.ddlTexture2Alpha
	Advanced_Rollout.ddlTexture1Alpha.selection=1
	Advanced_Rollout.ddlTexture2Alpha.selection=3
	
	PaintIndividualPivots_rollout.open=false--bIndividual 
	PrepTools_rollout.open=false--bPrepTools 
	Help_rollout.open=false--bHelp 
	WrapUp_rollout.open=false--bWrapUp
	Advanced_Rollout.open=true--bAdvancedSection
	
/****************************************************************************************
=========================================================================================
End UI Calls
=========================================================================================
****************************************************************************************/	

)
macros.run "Epic Tools" "EpicTools_PivotPainter2"