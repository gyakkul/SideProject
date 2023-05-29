
macroScript EpicTools_NeighborBaker category:"Epic Tools" buttontext:"Neighbor Baker" tooltip:"Neighbor Baker"
(
	

	struct meshDistanceGroup (myMesh,SecondMesh,myDistance,myOverlap,secondaryModelPositionAndScale)

	global modelsToProcess= #()
	global numberofSamples=5
	global externalNumberofSamples=5
	global targetMatches=1
	global finalArray=#()
	global modelUVPositions=#()
	global planeList=#()
	
	fn getMeshDiameter obj= (
		bb=nodeGetBoundingBox obj (matrix3 1)
		diameter=abs (bb[1][1]-bb[2][1])
		diameter
	)
	fn getMeshCenter obj= (
		bb=nodeGetBoundingBox obj (matrix3 1)
		Center=bb[1]+((bb[2]-bb[1])/2)
		Center
	)
	fn replaceSpheresWithPlanes = 
		(
			planeList=#()
			for i in finalArray do 
				(
					currentSphere=i[1].myMesh
					np=plane()
					diameter=getMeshDiameter currentSphere
					np.position=getMeshCenter currentSphere
					np.length = diameter
					np.width = diameter
					np.lengthsegs = 1
					np.widthsegs = 1
					append planeList np
					converttopoly np
					i.myMesh=np
				)
		)
		
		
		
	fn MergePlanes = 
		(		
			if planeList.count > 1 do 
				(
					converttopoly planeList[1]
					basePlane=planeList[1]
					for i=planeList.count to 2 by -1 do (
						polyop.attach basePlane planeList[i]
					)
				)
				
			planeList[1].name = "ExportGeometry"
			planeList[1].wirecolor = color 0 0 0 
			select planeList[1]
		)
	
	
	fn reinitVars = 
		(
			global modelsToProcess=(for i in selection where isvalidnode i and superclassof i == GeometryClass collect i)
			global finalArray=#()
			global modelUVPositions=#()
		)
	
	fn qSortCompareDistances a b = 
		(
			if a.myOverlap > b.myOverlap then 1 else -1
		)

	fn findTheNearestModels = 
		(	
			for i in modelsToProcess do 
				(	
					tempArray=#()
					tempSubSortedArray=#()
					myIntersections=0
					
					basePosition=getMeshCenter i
					baseScale=getMeshDiameter i
					for j in modelsToProcess do 
						(
							jPosition=getMeshCenter j
							--print jPosition
							myDist=distance basePosition jPosition 
							jScale=getMeshDiameter j
							
							overlap=myDist-((jScale+baseScale)/2)
							if myDist==0 do overlap=-99999999
							if overlap < 0 do myIntersections+= 1
							append tempArray(meshDistanceGroup myMesh:i SecondMesh:j myDistance:myDist myOverlap:overlap secondaryModelPositionAndScale:[jPosition[1],-jPosition[2],jPosition[3],jScale] )
							--print i.name
						)
						--print myIntersections
						if myIntersections > numberofSamples then 
							(
								i.wirecolor = color 141 115 115
							)
						Else 
							(
								i.wirecolor = color 115 130 116
							)
						qsort tempArray qSortCompareDistances -- sorted list by distances
						if tempArray.count < numberofSamples then targetMatches=tempArray.count else targetMatches=numberofSamples
						
						for q=1 to targetMatches do append tempSubSortedArray tempArray[q]
						
						append finalArray tempSubSortedArray -- ordered list of the closest nsamples of nearby objects
				)
		)						
							
	--sets up the uvs
		
	fn setupTheUVs = 
		(	
			for i=1 to finalarray.count do 
				( 
					offset=1.0/(finalarray.count*2)
					currentPosition=(((i as float)-.5)/finalarray.count)
					polyop.setVertColor finalarray[i][1].myMesh 2 #all [128.0,255.0-(currentPosition*255.0),0]
					append modelUVPositions currentPosition
				)
		)	
		
		
		
		
		
	fn renderOutTheTextures  = 
		(	
			cleanDataArray=#()
			x = finalarray[1].count
			y = finalarray.count
				
			for i in finalArray do 
				(
					append cleanDataArray #()
					for j in i do append cleanDataArray[cleanDataArray.count] j.secondaryModelPositionAndScale
				)
				
			fopenexr.SetCompression 0
			fopenexr.setLayerOutputType 0 0 -- set layer 0  main layer to RGBA, RGB = 1
			fopenexr.setLayerOutputFormat 0 1 --0 32 sets main layer to float 16 via 1. other options are 0 float 32, 2 int 32 
			global TextureName = getSaveFileName types:"EXR (*.EXR)|*.EXR"
			if TextureName == undefined then
				(
					messagebox "please select a file location"
				)
			else
				(
					global FinalTexture = bitmap x y filename:TextureName hdr:true;--TextureName ;
					for i=0 to (finalarray.count-1) do 
						(
							setPixels FinalTexture [0, i] cleanDataArray[(i+1)]
							
						)
					save FinalTexture
					close FinalTexture
				)
		)	
	rollout Bake_rollout "Neighbor Baker"
		(
		
			
			button bakeselectedneighbors "Bake Selected Meshes"
			
			on bakeselectedneighbors pressed do 
				(
					reinitVars ()
					if selection.count > 1 do
						(		
							findTheNearestModels()
							
							replaceSpheresWithPlanes()
							
							setupTheUVs()
							
							MergePlanes()
							
							renderOutTheTextures()
						)
				)
				spinner numSampSpinner "Max Number" range:[1,1000000,externalNumberofSamples] type:#integer
				
				on numSampSpinner changed intV do (
					externalNumberofSamples=intV
					numberofSamples=intV+1
				
				)
					
				
				
		)

			

	if MetaFloater != undefined then CloseRolloutFloater MetaFloater
	MetaFloater = newRolloutFloater "Neighborhood Tex" 150 85
	addRollout Bake_rollout MetaFloater

)
macros.run "Epic Tools" "EpicTools_NeighborBaker"



/*
min=10.0
max=20.0
for i in selection do (
	(currRand=(random min max)) 
	i.scale = [currRand,currRand,currRand]
	)	
		
		cmin=0.0
		cmax=255.0
for i in selection do (
	i.wirecolor = color (random cmin cmax) (random cmin cmax) (random cmin cmax)
)	

/*		