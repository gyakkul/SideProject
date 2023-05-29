macroScript EpicTools_MultiNormal category:"Epic Tools" buttontext:"Multi-Normal" tooltip:"Multi-Normal" (	
	escapeEnable=true
	global NormalsToVertColors_floater
	rollout stuff_rollout "Store Additional Normals" (
		button process "Process Selected Models" tooltip:"This will store the models current normals in the vertex colors or uvs based on your choice. Please use UE4's MultiNormalScript_VertexColors or MultiNormalScript_UVs material functions to unpack the normals once the model is in the editor." width: 165
		radiobuttons vertColorOrUVs "Storage Location (see tooltip):" labels:#("UVs", "Vertex Colors") width: 150 tooltip:"If you're using this with pivot painter or wish to use the vertex colors for something other than additional normals then use the UV option. Please use UE4's MultiNormalScript_VertexColors or MultiNormalScript_UVs material functions to unpack the normals once the model is in the editor."
		--checkbox vertColorOrUVs "Pack in UVs? Otherwise Vert Colors" tooltip:"If you would like to use this tool with Pivot Painter then check this box. Also, use the UV output pin instead of the vertex color pin." checked:true
		dropdownlist ddLWin "Processed Models :"  tooltip:"Items in this list have had their normals transfered into the model data."
		dropdownlist ddLFail "Rejected Models : " tooltip:"This list represents models in your selection that weren't an editable polygon object at it's base, were deleted or had 0 vertices. "
		
		button help "Help" width: 75
		on help pressed do messagebox "Select editable poly assets and press the process button. The models normals will be copied into the models data.\r\rIf the data does not come across as expected first make sure that all of your normals are explicit before processing the mesh. If that doesn't resolve the issue reset the models transform."
		fn clamp num cMin cMax = (
			result = num
			if result < cMin
			then result = cMin
			else (
				if result > cMax
				then result = cMax
			)
			return result
		)
		fn getVertCount model = ((getPolygonCount model)[2])
		fn modelcheck model = (
			isvalidnode model and superclassof model == GeometryClass and (getVertCount model)>0 and classof model.baseobject == editable_poly
		)
		fn clampVector V vMin vMax =(
			tempvector=[0.0,0.0,0.0] 
			for a=1 to 3 do (
				tempvector[a]=clamp V[a] vMin vMax
			)
			tempvector
		)
		fn appendName &objList	&finallist=(
			for i in objList do append finallist i.name
		)
		on process pressed do (
			vertOrUV=if vertColorOrUVs.state==1 then true else false
			global processedarray = #()
			global rejectionList = #()
			global procNameList = #()
			global rejNameList = #()
			for m in selection do if modelcheck m == true then ( 
				--resetxform m
				en=edit_normals()
				addmodifier m en
				append processedarray m
				--could switch to normals vertex count
				vertCount=getVertCount m
				appliedM=m.modifiers[1]
				for v=1 to vertCount do (
					--create a Box, convert to EPoly, add Edit_Normals modifier
					my_verts = #{v} --define a bitArray specifying vertex 1
					my_normals = #{} --define an empty bitArray to store the result
					--call the method with the two bitArrays passed by-reference:
					appliedM.ConvertVertexSelection &my_verts &my_normals
					newnormal=[0,0,0]
					--print my_normals
					for n in my_normals do (
						newnormal+=appliedM.GetNormal n node:m
						--print n
					)
					newnormal=normalize(newnormal*m.transform.rotationpart)
					newnormal*=[1,-1,1]
					newnormalbiased=clampVector ((newnormal/2)+.5) 0.000001 0.9999999
					
					if vertOrUV then 
						(
							zsign=if newnormal[3]>0 then 1.0 else -1.0
							polyop.setVertColor m.baseobject 5 v ([(newnormalbiased[1]*zsign),((1-newnormalbiased[2])),0]*255.0)
						) 
					else 
						(
							polyop.setVertColor m.baseobject 0 v (newnormalbiased*255.0)
							
						)
				)
			) else (
				append rejectionList m
			)
			
			for i in processedarray do  
				( 
					deletemodifier i 1 -- or en - not sure if that will work with mutliple instances. this should be correct.
				)
			
			appendName &processedarray	&procNameList
			appendName &rejectionList	&rejNameList
			rejNameList
			ddLWin.items = procNameList
			ddLFail.items = rejNameList
		)
	)
	if NormalsToVertColors_floater != undefined then CloseRolloutFloater NormalsToVertColors_floater
	NormalsToVertColors_floater = newRolloutFloater "Multi-Normal" 190 215
	addRollout stuff_rollout NormalsToVertColors_floater 
)
macros.run "Epic Tools" "EpicTools_MultiNormal"