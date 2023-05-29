macroScript EpicTools_StaticMeshMorphScript category:"Epic Tools" buttontext:"Static Mesh Morph Script" tooltip:"Static Mesh Morph Targets"
(
	/************************************************
	Static Mesh Morph Script
	written by Jonathan Lindquist at Epic Games 
	************************************************/
	--global Process_rollout
	global originalMesh= undefined
	global target1 = undefined
	global target2 = undefined	
	global uiwidth = 160
	global warningString
	enableEscape=true 
	
	
	
	
	fn renameUVChannels model = (
		for i = 1 to (polyop.getNumMaps model) do (ChannelInfo.NameChannel model 3 i ("UVChannel_" + i as string))
	)
	
	
	
	
	fn edpolyfilter obj = (
		classof obj == Editable_Poly 
	)
	fn targetfilter obj = (
		classof obj == Editable_Poly or classof obj == PolyMeshObject and (obj.GetNumVertices())==(originalMesh.GetNumVertices())
	)
	fn getTheVertexNormal processObject vertexIndex= ( 
		vertexPolygons = polyOp.getFacesUsingVert processObject vertexIndex
		normal = [0.0,0.0,0.0] 
		for i in vertexPolygons do (
			normal+=polyOp.getFaceNormal processObject i
		)
		normal=normalize normal 
		normal 
	)
	
	rollout Process_rollout "Pack Morph Targets" 
	(	
		pickbutton pickOriginalObject "Pick Game Mesh" filter:edpolyfilter toolTip:"Pick a collapsed editable polygon object" enabled:true align:#left across:2 width:((uiwidth/4)*3) offset:[-10,0] 
		checkbox Originalcheckbox enabled:false checked:false align:#right offset:[20,4] 
	
		pickbutton pickMorphTargetOne "Pick Morph Target 1" filter:targetfilter toolTip:"Pick a collapsed editable polygon object with the same number of vertices as the original mesh" enabled:false across:2 width:((uiwidth/4)*3) align:#left offset:[-10,0] 
		checkbox targetonecheckbox enabled:false checked:false align:#right offset:[20,4] 
	
		pickbutton pickMorphTargetTwo "Pick Morph Target 2" filter:targetfilter toolTip:"Pick a collapsed editable polygon object with the same number of vertices as the original mesh" enabled:false align:#left across:2 width:((uiwidth/4)*3) offset:[-10,0] 
		checkbox targettwocheckbox enabled:false checked:false align:#right offset:[20,4] 
		
		Group "Options" (
			checkbox StoreObjectPivotLocation "Store Pivot Location" checked:false offset:[-5,0] toolTip:"Checking this option will allow you to store the pivot point of the model but will limit you to one morph target."
			checkbox packVertexColors "Store Morph 1 Normals" checked:false offset:[-5,0] toolTip:"Unchecking this option will leave the in-game models vertex colors alone."
		)
		
		Group "Process Morphs" (
			button PackMorphTargets "Pack Morph Targets" enabled:false align:#left  width:122
			
		)
		
		button helpbutton "Help"  width:((uiwidth/4)*3)
		on helpbutton pressed do (
		messagebox "Written by Jonathan Lindquist at Epic Games. \r\rData Format Notes:\r\rThe morph target 1 models normals are packed into the in-game models vertex colors. Morph target 1 is stored in UV channel 3(V) and UV channel 4. Morph Target 2 is stored in UV channels 2 and 3(U). Leaving the second morph target unpicked will leave the second uv channel untouched. To retain the models original vertex colors uncheck ''Store Morph 1 Normals''. \r\rStoring the pivot point will disable the ability to store a second morph target. The pivot point information will be stored in UV channels 2 and 3(U). \r\rNormals Note:\r\rThe morph target normals work on meshes that have one smoothing group and do not use normal maps.")
		
		fn updateCheckBoxes = (
			if isvalidnode target1 and target1!=undefined  then targetonecheckbox.checked=true else targetonecheckbox.checked=false 
			if isvalidnode target2 and target2!=undefined then targettwocheckbox.checked=true else targettwocheckbox.checked=false 
			if isvalidnode originalMesh and originalMesh!=undefined then Originalcheckbox.checked=true else Originalcheckbox.checked=false 
				
			if  StoreObjectPivotLocation.checked == true do (
				target2=undefined 
				pickMorphTargetTwo.enabled=false
			)
		)
		fn checkpackbutton = (
			if isvalidnode target1 and target1!=undefined and isvalidnode originalMesh and originalMesh!=undefined then (PackMorphTargets.enabled=true; true) else (PackMorphTargets.enabled=false; false)  --target2!=undefined and  
			updateCheckBoxes()
			
		)
		fn checkTargetbutton = (
			if originalMesh==undefined do (
				target1=undefined 
				target2=undefined 
				pickMorphTargetOne.enabled=false
				pickMorphTargetTwo.enabled=false
			)
			updateCheckBoxes()
			checkpackbutton ()
		)
	
		
		on StoreObjectPivotLocation changed state do (
			--packVertexColors.enabled = not state 
			pickMorphTargetTwo.enabled=not state
			if  state = true do (
				--packVertexColors.checked = false
				target2=undefined 
			)
			checkpackbutton()
			checkTargetbutton() 
		)
				
		on pickOriginalObject picked obj do (
			pickMorphTargetOne.enabled=true
			pickMorphTargetTwo.enabled=true
			originalMesh=obj
			checkpackbutton()
			checkTargetbutton() 
		)

		on pickOriginalObject rightclick do (
			pickMorphTargetOne.enabled=true
			pickMorphTargetTwo.enabled=true
			originalMesh=undefined
			target1=undefined
			target2=undefined
			checkpackbutton()
			checkTargetbutton() 
		)
		
		on pickMorphTargetOne picked obj do (
			target1=obj
			checkpackbutton()
		)		

		on pickMorphTargetTwo picked obj do (
			target2=obj
			checkpackbutton()
		)		

		on pickMorphTargetOne rightclick do (
			target1=undefined
			checkpackbutton()
		)		

		on pickMorphTargetTwo rightclick do (
			target2=undefined
			checkpackbutton()
		)		

		fn compareVertCounts basemesh targetMesh = (
			basemesh.GetNumVertices() == targetMesh.GetNumVertices()
		)
		
		on PackMorphTargets pressed do (

			setProgressCancel false
			global bcontinue=true
			global bFailedTwoMorphs=false
			global bTwoMorphs=false
			
			global bTwoMorphs = isvalidnode target2 and target2!=undefined 
			global bFailedTwoMorphs = not isvalidnode target2 and target2!=undefined 
			
			global originalMeshFail=false
			global target1Fail=false
			global target1Vertmatch=true
			global target2Vertmatch=true
			
			if isvalidnode originalMesh then convertToPoly originalMesh else (bcontinue=false; originalMeshFail=true;)
			if bcontinue do (if isvalidnode target1 then global target1Copy=convertToPoly(snapshot target1) else (bcontinue=false; target1fail=true;)) 
			if bcontinue and bFailedTwoMorphs do bcontinue=false 
			if bcontinue and bTwoMorphs do (global target2Copy=convertToPoly(snapshot target2))
			if bcontinue then (
				target1Vertmatch=compareVertCounts originalMesh target1Copy 
				bcontinue=target1Vertmatch
			)
			if bcontinue and bTwoMorphs do (
				target2Vertmatch=compareVertCounts originalMesh target2Copy
				bcontinue=target2Vertmatch
			)
			if bcontinue then  (
					bpackvertcolors=packVertexColors.checked
					numberofVerts=getNumVerts originalMesh
				progressStart "Processing morph targets..."
				
				
				vectoroffset2=[0,0,0]
				
				if StoreObjectPivotLocation.checked do (
					OrigMeshPivotPos=originalMesh.pos*255
					polyop.setVertColor originalMesh 2 #all [OrigMeshPivotPos[1],255-OrigMeshPivotPos[2],0]
					vectoroffset2=OrigMeshPivotPos;  
				)
			
				for i=1 to numberofVerts do (
									
						originalVertPos=polyop.getVert originalMesh i
						targetVertPos1=polyop.getVert target1Copy i
						
					 
					if bTwoMorphs do  (
							targetVertPos2=polyop.getVert target2Copy i
							vectoroffset2=(targetVertPos2-originalVertPos)*255.0
						)
						vectoroffset1=(targetVertPos1-originalVertPos)*255.0
						newNormal1=(getTheVertexNormal target1Copy i)
						newNormal1*=[1.0,-1.0,1.0]
						newNormal1=(newNormal1+1.0)*0.5
						newNormal1*=255.0
						if bpackvertcolors do (polyop.setVertColor originalMesh 0 i [newNormal1[1],newNormal1[2],newNormal1[3]])
						
						if bTwoMorphs do  (	
							polyop.setVertColor originalMesh 2 i [vectoroffset2[1],(255.0-(vectoroffset2[2]*-1)),0] 
						)	

							
						
						
						polyop.setVertColor originalMesh 3 i [vectoroffset2[3],(255.0-vectoroffset1[1]),0]
						polyop.setVertColor originalMesh 4 i [(vectoroffset1[2]*-1),(255.0-vectoroffset1[3]),0]
						progressPercentage=(100.0*i/numberofVerts) 
						progressUpdate progressPercentage
						if getProgressCancel() do exit 	
				)-- end for loop
				
			
				renameUVChannels originalMesh 
			
			)else (
				warningString = "Please correct the following errors.\r\r"
				if originalMeshFail do (append warningString "The in-game mesh was deleted.\r\r"; originalMesh=undefined )
				if target1Fail do (append warningString "Morph target 1 was deleted.\r\r"; target1=undefined)
				if bFailedTwoMorphs do (append warningString "Morph target 2 was deleted.\r\r"; target2=undefined)
				fn setundefinedTargets = (
					originalMesh=undefined
					target1=undefined
					target2=undefined
				)
					
				if not target1Vertmatch do (append warningString "The number of vertices between the in-game model and the first morph target do not match.\r\r";setundefinedTargets() )
				if not target2Vertmatch do (append warningString "The number of vertices between the in-game model and the second morph target do not match.\r\r"; setundefinedTargets() )

				messagebox warningString;
				checkTargetbutton()
			)
			if isvalidnode target1Copy do delete target1Copy
			if isvalidnode target2Copy do delete target2Copy
			progressEnd()
		)
	)	
	Test_floater = newRolloutFloater "Pack Morph Targets" uiwidth 255
	addRollout Process_rollout Test_floater
) -- ends macroscript
if Test_floater != undefined then CloseRolloutFloater Test_floater
macros.run "Epic Tools" "EpicTools_StaticMeshMorphScript"