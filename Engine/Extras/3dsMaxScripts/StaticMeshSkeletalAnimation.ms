macroScript EpicTools_ConvertSkeletalMeshAnimationsToTextures category:"Epic Tools" buttontext:"Static Mesh Skeletal Animation" tooltip:"Static Mesh Skeletal Animation"
(

	
	global boneStringArray
	global boneArrayAsAString
	global boneValueReadout
	global CanRenderVertAnims=False
	global DefaultTransformArray
	if DefaultTransformArray==undefined do DefaultTransformArray=#()
	global boneArray
	if boneArray==undefined do boneArray=#()
	global VertColorVal=[0,0,0]
	struct UVOptionStruct (guiString, CoordinateIndex) 
	global SkeletalAnimstructArrayOfUVOptions = # (
			(UVOptionStruct guiString:"Vertex Alpha" CoordinateIndex:-2),
			(UVOptionStruct guiString:"Texture Coordinate 2" CoordinateIndex:2),
			(UVOptionStruct guiString:"Texture Coordinate 3" CoordinateIndex:3),
			(UVOptionStruct guiString:"Texture Coordinate 4" CoordinateIndex:4)
	)
	global AnimationStart=animationRange.start
	global AnimationEnd=animationRange.end
	global NumberOfFrames=AnimationEnd-AnimationStart
	global AnimationRate=0
	
	global VertColorChannel=SkeletalAnimstructArrayOfUVOptions[1].CoordinateIndex
	global BoneSelectionIndex=1
	if BoneValueArray==undefined do global BoneValueArray=#()
	
	fn round x= (
		if ((ceil x)-x >= .5) then (floor x) else (ceil x)
	)
	
	fn pullStringArrayFromStructArray structArray = (
		stringArray =(for i in structArray collect i.guiString)
		stringArray 
	)
	
	fn checkBoneArrayForValidData= (
		stopWhileloop=false
		index=1
		success=true
		Do (
			if isvalidnode boneArray[index] then (
				index+=1
			)
			else (
				success=false
				boneArray=#()
				boneStringArray=#()
				boneArrayAsAString=""
				boneValueReadout=""
				DefaultTransformArray=#()
				stopWhileloop=true
			)
		) While ((index <= boneArray.count) and (stopWhileloop==false ))
		success
	)
	
	fn updateBoneArray = (
		if checkBoneArrayForValidData()  do (
			with printAllElements on (
				boneStringArray=#() 
				for i=1 to boneArray.count do (
						Append boneStringArray ("$"+ boneArray[i].name)
				);
				boneArrayAsAString=boneStringArray as string
				--update read out vertex colors per bone
				boneValueReadout=""
				if boneArray.count>1 then (
					vertexValueStepSize=(1.0/(boneArray.count))
				)
				else (
					vertexValueStepSize=1.0
				) 
				BoneValueArray=#()
				
				For i=1.0 to boneArray.count do (
					vertValue=vertexValueStepSize*(i-1.0)+(vertexValueStepSize*.5)
					greenVertValue=1.0-vertValue
					greenVertValue*=255.0
					vertValue*=255.0
					if VertColorChannel==-2 then (
						vertValue=(round vertValue) as integer
						greenVertValue=vertValue
						currentString=((vertValue as string) + " : " + boneArray[i].name)
					) else (
						currentString=formattedPrint (vertValue/255.0) format:"#.3f"
						currentString=(currentString + " : " + boneArray[i].name)
					)
					append BoneValueArray [vertValue,greenVertValue,vertValue]
					
					append boneValueReadout (currentString+"\n")
					boneStringArray[i]=currentString
				)	
			)
			VertColorVal=BoneValueArray[BoneSelectionIndex]
		)
		returnString="Number of bones ready for processing: "+(boneArray.count as string)-- + " bones are selected."
		returnString
	)
		
	---------------------------------------------------------------
	--Rotation functions
	---------------------------------------------------------------
		
	fn pullModelRotation Model= (
		b=(eulerAngles (Model.rotation.x_rotation) (Model.rotation.y_rotation) (Model.rotation.z_rotation)) as quat
		b
	)
	
	fn convertToUnrealAngleAxis inputQuat = (
		currentRot=inputQuat as eulerAngles
		currentRot=(eulerAngles (currentRot.x_rotation) (currentRot.y_rotation*-1) (currentRot.z_rotation*-1))as angleaxis
		currentRot=[currentRot.axis[1],currentRot.axis[2],currentRot.axis[3]*-1,(currentRot.angle/360.0)]
		currentRot
	)
	
	fn createDefaultTransformArray = (
		DefaultTransformArray=#()
		if checkBoneArrayForValidData() do (
			for i in boneArray do (
				append DefaultTransformArray #((pullModelRotation i),i.position);
			)
		)
	)
	
	fn paintVertWeights = (
		if selection.count == 1 then (
			if isvalidnode $ and classof $ == Editable_Poly do (
				
				
				
				if getCommandPanelTaskMode()==#modify then (
					case subobjectLevel of (
						0: (
								polyop.setVertColor $ VertColorChannel #all VertColorVal
						)
						1: (
							elementcollection=$.EditablePoly.GetSelection 1
							polyop.setVertColor $ VertColorChannel elementcollection VertColorVal
						)
						2: (
							$.EditablePoly.ConvertSelection 2 1 requireAll:false
							elementcollection=$.EditablePoly.GetSelection 1
							polyop.setVertColor $ VertColorChannel elementcollection VertColorVal
						)
						3: (
							$.EditablePoly.ConvertSelection 3 1 requireAll:false
							elementcollection=$.EditablePoly.GetSelection 1
							polyop.setVertColor $ VertColorChannel elementcollection VertColorVal
						)
						4: (
							polyop.SetFaceColor $ VertColorChannel ($.EditablePoly.GetSelection 4) VertColorVal					
						)
						5: (
							polyop.SetFaceColor $ VertColorChannel ($.EditablePoly.GetSelection 4) VertColorVal
						) 
					)
				) else (
					polyop.setVertColor $ VertColorChannel #all VertColorVal
				)
			)									
		) else (
			for i in selection do (
				if isvalidnode i and classof i == Editable_Poly do (
					polyop.setVertColor i VertColorChannel #all VertColorVal
				)
			)
		)
		completeRedraw()
	)
						
	fn RenderRotationAndPositionTextures isTPoseRender:False= (
		
		global PositionArray=#()
		global RotationArray=#()
		for o=1 to boneArray.count do (
			append PositionArray #()
			append RotationArray #()
		)
		if isTPoseRender then (
			at time AnimationStart (
				for o=1 to boneArray.count do (
					basePos=DefaultTransformArray[o][2]
					baseRot=DefaultTransformArray[o][1]
					RotationTextureData=convertToUnrealAngleAxis baseRot
					PositionTextureData=(basePos)
					PositionTextureData=[PositionTextureData[1],-1.0*PositionTextureData[2],PositionTextureData[3],0]
					append PositionArray[o] PositionTextureData
					append RotationArray[o] RotationTextureData
				)
			)
		)	else (
			for i=0 to NumberOfFrames by (AnimationRate+1) do (
				newtime = AnimationStart+i 
				at time newtime (
					for o=1 to boneArray.count do (
						basePos=DefaultTransformArray[o][2]
						baseRot=DefaultTransformArray[o][1]
						currentRot=((pullModelRotation (boneArray[o]))-baseRot)
						RotationTextureData=convertToUnrealAngleAxis currentRot
						PositionTextureData=(boneArray[o].position-basePos)
						PositionTextureData=[PositionTextureData[1],-1.0*PositionTextureData[2],PositionTextureData[3],0]
						append PositionArray[o] PositionTextureData
						append RotationArray[o] RotationTextureData
					)
				)
			)			
		)
		fopenexr.SetCompression 0
		fopenexr.setLayerOutputType 0 0
		fopenexr.setLayerOutputFormat 0 1
		global TextureName = getSaveFileName types:"EXR (*.EXR)|*.EXR"
		if TextureName == undefined then (
			messagebox "please select a file location"
		)
		else(
			TextureNameRotation= replace TextureName (findString TextureName ".EXR") 4 ("_Rotation.EXR")
			TextureNamePosition= replace TextureName (findString TextureName ".EXR") 4 ("_Position.EXR")
			global FinalPositionTexture = bitmap PositionArray[1].count PositionArray.count filename:TextureNamePosition hdr:true;
			global FinalRotationTexture = bitmap PositionArray[1].count PositionArray.count filename:TextureNameRotation hdr:true;
			for i=1 to PositionArray.count do (
					setPixels FinalPositionTexture [0, (i-1)] PositionArray[i]
					setPixels FinalRotationTexture [0, (i-1)] RotationArray[i]
				)
				save FinalPositionTexture gamma:1.0
				close FinalPositionTexture
				
				save FinalRotationTexture gamma:1.0
				close FinalRotationTexture
		)
	)

	fn initValidTPoseData = (
		if DefaultTransformArray.count!=boneArray.count then (
			InitIsValidTPoseText="Store your bones and rest pose to proceed"
			CanRenderVertAnims=False
		)
		else (
			if DefaultTransformArray.count==0 then (
				InitIsValidTPoseText="Store your bones and rest pose to proceed"
				CanRenderVertAnims=False
			) else (
				InitIsValidTPoseText="Animations can now be rendered"
				CanRenderVertAnims=True
			)
		)
		InitIsValidTPoseText
	)
	InitIsValidTPoseText=initValidTPoseData() 
	initText=updateBoneArray()
	fn returnVertAlphaWindowHeight = (
		h=((boneArray.count*13)+20)
		h
	)
	
	initUvSelectionArrays = pullStringArrayFromStructArray SkeletalAnimstructArrayOfUVOptions
	
	uiWidth=115
	
	try (DestroyDialog SkeletalMeshToTexture_rollout)catch()	
	if SkeletalMeshToTexture_rollout==undefined do (global SkeletalMeshToTexture_rollout)
	rollout SkeletalMeshToTexture_rollout "Skeletal Animation Converter" (
		--button Warning "Warning" across:2 width:125
		--on Warning pressed do messagebox "Warning: \n\nThis script was written quickly edge cases may arise when users stray from the golden path. \n\nPlease restart the script if it crashes. If it's an issue please contact Jonathan Lindquist." 			
		
		button Guide "Guide" width:(uiWidth*2)
		
		
		
		on Guide pressed do messagebox "Guide:\n\n1. Open your skeletal meshes rest pose max file\n\n2. Select the bones that you would like to capture and Press Use Selected Bones. This stores the bones that you've selected.\n\n3. Press Store Rest Pose. This will store each bones default transforms. The options to render a rest pose or animations will become available.\n\n4. Press Render Rest Pose to render out the skeleton's default position as a texture. Import the texture and enable nearest neighbor sampling.\n\n5. Press the Save button at the top of the script. This will write out the skeleton's rest pose data as a txt file. You can reload this txt file to skip the preceding steps the next time you wish to process an animation. \n\n6. Collapse your static mesh to an Editable Poly object. Select the model at any element level and click on a bone name from the Available Bones list. This will store data in the vertices. The data can then be used as a look up into the animation and rest pose textures. \n\nPLEASE NOTE: Assigning different bones to neighboring polygons will generate discontinuities in the animated model surface. Assign bone weights at the vertex level to avoid polygonal detatchment. Vertex level assignments do, however, produce errors when referenced in the pixel shader.To avoid this, use the more expensive ms_StaticMeshSkeletalAnimationHighQuality material function in your shader or do the following:\n\nWeight the model once again, on another uv channel, but do so with adjacency in mind. If two polygon's are touching and their bones are next to each other in the bone list then feel free to paint at the vertex level to create a smooth surface between the two. If there are bones between them in the bone list, select the mesh at a polygonal level and paint surfaces appropriately. We do this to avoid lerping our lookup value across a plane's surface in the pixel shader. That would result in incorrect transforms being applied to our surfaces. As a side note, bones appear in the list in the order that you selected them. Keep the bone order in mind while selecting objects will make it easier to create smooth surfaces across the model.\n\n7. Open an animation that utilizes the same skeleton. Reload the rest pose data by pressing the load button to locate and reload the rest pose data.\n\n8. Adjust your start and end capture times so that it encapsulates the length of the animation. If desired, optimize the script output by increasing the number of frames that will be skipped.  Press the Render animation button. This will bake out the relative transforms of each bone for the active timeline. Import the textures (with nearest neighbor sampling enabled on the position textures) and utilize the ms_StaticMeshSkeletalAnimation or ms_StaticMeshSkeletalAnimationHighQuality material function.\n\n9. Enjoy :)"
			
			
		group "Skeletal Description" (
			button loadBoneDataFromFile "Load Skeletal Data" width:uiWidth across:2
			button saveBoneDataToFile "Save Current Data" enabled:CanRenderVertAnims width:uiWidth
			button CreateBoneListFromSelection "Use Selected Bones" across:2 width:uiWidth
			button StoreTransformDefaults "Store Rest Pose" Enabled:(boneArray.count!=0) width:uiWidth
			label NumberOfBonesSelected initText
			
		)
		
		
		group "Render Textures" (
			button RenderTransformDefaults "Render Rest Pose" enabled:CanRenderVertAnims across:2 width:uiWidth
			button RenderAnimation "Render Animation" enabled:CanRenderVertAnims width:uiWidth
			spinner spinnerAnimationRangeStart "Capture Start Time" type:#integer range:[0,1000000,animationRange.start] 
			spinner spinnerAnimationRangeEnd "Capture End Time" type:#integer range:[0,1000000,animationRange.end] 
			spinner spinnerAnimationRate "Frame Skip Rate" type:#integer range:[0,1000000,0] 
		)
		group "Animation Texture Coordinate Tools" (
			Label DataVisualization "Data Visualization:" offset:[5,3] across:3 
			button VisualizeVertexColorsOn "On"  width:55 offset:[30,0]
			button VisualizeVertexColorsOff "Off" width:55 offset:[10,0]
			dropdownlist ddlTextureCoordinate "Target Coordinate:" items:initUvSelectionArrays 
			combobox VertValueComboBox "Available Bones:" items:boneStringArray
		)
		label lbl5  "Contact : Jonathan.Lindquist@EpicGames.com" height:30
		
		on spinnerAnimationRangeEnd changed i do (
			AnimationEnd=i
			NumberOfFrames = floor (spinnerAnimationRangeEnd.value-spinnerAnimationRangeStart.value)
		)
		on spinnerAnimationRangeStart changed i do (
			AnimationStart=i
			NumberOfFrames = floor (spinnerAnimationRangeEnd.value-spinnerAnimationRangeStart.value)
		)	
		on spinnerAnimationRate changed i do (
			AnimationRate=i
			NumberOfFrames = floor (spinnerAnimationRangeEnd.value-spinnerAnimationRangeStart.value)
		)
		
		
		fn UpdateUITextFields = (
			NumberOfBonesSelected.text=updateBoneArray();
			StoreTransformDefaults.enabled = boneArray.count!=0  
			VertValueComboBox.items=boneStringArray
			--isValidTPose.text=
			initValidTPoseData()
			RenderTransformDefaults.enabled=CanRenderVertAnims
			RenderAnimation.enabled=CanRenderVertAnims
			saveBoneDataToFile.enabled=CanRenderVertAnims
		)
		
		on ddlTextureCoordinate selected i do (
			VertColorChannel=SkeletalAnimstructArrayOfUVOptions[i].CoordinateIndex
			UpdateUITextFields()
		)
		
		on VertValueComboBox selected i do (
			BoneSelectionIndex=i
			VertColorVal=BoneValueArray[i]
			BoneSelectionIndex
			paintVertWeights()
		)
		
	fn updateDebugVisuals state = ( 	
		for i in selection do (
			if superclassof i==GeometryClass do (
				if state== false then (
					i.showVertexColors = off
				)
				Else (
					i.showVertexColors = off
					i.vertexColorType = 5
					i.vertexColorMapChannel = VertColorChannel
					i.showVertexColors = on
				)
			)
		)
	)
	on VisualizeVertexColorsOn pressed do (
		updateDebugVisuals true
		)
	on VisualizeVertexColorsOff pressed do (
		updateDebugVisuals false
		)
	
		
		on saveBoneDataToFile pressed do (
			if checkBoneArrayForValidData() then (
				try (
					saveFileName = getSaveFileName caption:"Save T-Pose Data:" filename:((trimRight maxFileName ".max")+"_SkeletalMeshData.txt") types:"*.txt"
					if saveFileName!=undefined do (
						saveFile=createFile saveFileName  encoding:#English mode:"w"
						if saveFile!=undefined do (
							with printAllElements on (
								print (boneArrayAsAString as string) to:saveFile
								print (DefaultTransformArray as string) to:saveFile
							)
							flush saveFile
							close saveFile
						)
					)
				) catch (
					messageBox "Try saving the data with a new file name."
				)
			)else(
				UpdateUITextFields();
			)
		)
		
		on loadBoneDataFromFile pressed do (
			openFileName = getOpenFileName caption:"Open T-Pose Data:" filename:((trimRight maxFileName ".max")+"_SkeletalMeshData.txt")  types:"*.txt"
			try (
				openedFile=openFile openFileName  
				global tempBoneString=readLine openedFile
				
				global tempTposeTransformString=readLine openedFile
				
			
				flush openedFile
				close openedFile
				
				success=true
				
				reconstructedBoneArray=execute (substring tempBoneString 2 (tempBoneString.count-2))
					
				for i=1 to reconstructedBoneArray.count do (reconstructedBoneArray[i]=execute reconstructedBoneArray[i])
				boneArray=reconstructedBoneArray
					
					--!! needs to reconstruct the other arrays... maybe
				DefaultTransformArray=execute(execute tempTposeTransformString)
				i=1	do( 
					if (classof DefaultTransformArray[i][1] == quat and classof DefaultTransformArray[i][2] == Point3) then 
					(
						i=i+1
					)
					else(
						success=false
					)
				) while (i<(DefaultTransformArray.count+1) and success==true)
				if success=false do (
					messageBox "The data that you loaded was invalid. Please make sure that you've loaded the correct file and that all of the bones are present in the current scene."
					DefaultTransformArray=#()
				)
				UpdateUITextFields()
			) catch (
				DefaultTransformArray=#()
				boneArray=#()			
				messageBox "The data that you loaded was invalid. Please make sure that you've loaded the correct file and that all of the bones are present in the current scene."
				UpdateUITextFields()
			)
		)

		on CreateBoneListFromSelection pressed do (
			with printAllElements on (
				boneArray=#()
				boneArray=for i in selection where (isvalidnode i) collect i
				NumberOfBonesSelected.text=updateBoneArray();
				UpdateUITextFields()
			)
		)
		
		on StoreTransformDefaults pressed do (
			createDefaultTransformArray()
			UpdateUITextFields()
		)
		
		on RenderTransformDefaults pressed do (
			if checkBoneArrayForValidData() then (
				RenderRotationAndPositionTextures isTPoseRender:true
				UpdateUITextFields()
			)
			else (UpdateUITextFields())
		)
		
		on RenderAnimation pressed do (
			if checkBoneArrayForValidData() then (
				RenderRotationAndPositionTextures isTPoseRender:False
			) 
			else (UpdateUITextFields())
		)
	)	
	
	
	global j=createDialog SkeletalMeshToTexture_rollout  width:275 style:#(#style_titlebar,#style_border, #style_sysmenu,#style_sunkenedge)-- 537 ,#style_toolwindow  
	
	
	
) -- end macro 


macros.run "Epic Tools" "EpicTools_ConvertSkeletalMeshAnimationsToTextures" 			
			
			
			