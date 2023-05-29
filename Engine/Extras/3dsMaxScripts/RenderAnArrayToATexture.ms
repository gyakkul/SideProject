
macroScript EpicTools_RenderArrayToTexture category:"Epic Tools" buttontext:"Array to Texture" tooltip:"Array to Texture"
(
	-- todo test 2d arrays
	
	global arrayField
	global TextureArray=#()
	rollout Bake_rollout "Array to Texture"
		(
		
		edittext arrayField "Array:" 	width:110 across: 2
		checkbox TwoDArray "2D?" checked:false  width:50 offset:[40, 2] enabled:false
		button clearText "Clear Field" width:80 across:2 offset:[-5, 0]
		
		
		button RenderTexture "Render Array" width:80 offset:[5, 0]
		
		on clearText pressed do 
		(
			arrayField.text="" 
		)
		fn scaleTo255 v= (
			multNum=255.0
			if classof v == Point3 do  (
				sv=[v[1]*multNum,v[2]*multNum,v[3]*multNum]
			) 
			
			if classof v == Point4 do (
				multNum=1.0
				sv=[v[1]*multNum,v[2]*multNum,v[3]*multNum,v[4]*multNum]
			)
			
			sv
			
		)
			
		
			fn renderOutTheTextures  = 
				(	
					
					-- need to protect against multiple array types, random data etc. 
					TextureArray=#()
					try  
						(
							TextureArray = execute arrayField.text
							-- not sure why this is nessesary but the correct values are returned after multiplying the components by 1
							
							if classof TextureArray == array then (
								
								if TextureArray.count < 1 do (throw "The Arrays length was 0.")
									
								
								if (classof TextureArray[1] == Point3 or classof TextureArray[1] == Point4) then -- 1d array 
									(
										TwoDArray.checked = false 
									)
									
								else if (classof TextureArray[1] == Array and (classof TextureArray[1][1] == Point3 or classof TextureArray[1][1] == Point4)) then -- 2d array 
									(
										TwoDArray.checked = true 
									)
									
								else (throw "The array was neither 1d or 2d.")
									
							) 
							else (throw "An array was not entered.")
							
							
							for i=1 to TextureArray.count do 
								(
									if (TwoDArray.checked) then 
										(
											if TextureArray[i].count == 0 do (throw "The " + (i as string) + " 2d array element lacked any vectors." )
											for j=1 to TextureArray[i].count do 
												(
													TextureArray[i][j]=scaleTo255 TextureArray[i][j]
												)
										)
									else 
										(
											TextureArray[i]=scaleTo255 TextureArray[i]
										)
								
								)
								
							if TextureArray.count > 0 then (
								
								if TwoDArray.checked == true then 
									(
										x = TextureArray[1].count
										y = TextureArray.count
									)
									else 
									(
										x = TextureArray.count
										y = 1
									)
									
								fopenexr.SetCompression 0
								fopenexr.setLayerOutputType 0 0 -- set layer 0  main layer to RGBA, RGB = 1
								fopenexr.setLayerOutputFormat 0 1 --0 32 sets main layer to float 16 via 1. other options are 0 float 32, 2 int 32 
								global TextureName = getSaveFileName types:"EXR (*.EXR)|*.EXR"
								--global TextureName = getSaveFileName types:"BMP (*.BMP)|*.BMP"
								
									if TextureName == undefined then
									(
										messagebox "please select a file location"
									)
								else
									(
										global Texture = bitmap x y filename:TextureName hdr:true;--TextureName ;
										for i=0 to (TextureArray.count-1) do 
											(
												if TwoDArray.checked == true then (
													setPixels Texture [0, i] TextureArray[(i+1)]
												) else (
													setPixels Texture [0, 0] TextureArray
												)
											)
										save Texture
										close Texture
									)
							) else (
									
								messagebox "invalid array"	
									
							)
							
					)		
						catch messagebox ("There was an error in the array entered." + getcurrentException ())
												
				)
						
				
				on RenderTexture pressed do renderOutTheTextures()
		)
			
	if ArrayCookerFloater != undefined then CloseRolloutFloater ArrayCookerFloater
	ArrayCookerFloater = newRolloutFloater "# " 190 85
	addRollout Bake_rollout ArrayCookerFloater
	
)
macros.run "Epic Tools" "EpicTools_RenderArrayToTexture"
