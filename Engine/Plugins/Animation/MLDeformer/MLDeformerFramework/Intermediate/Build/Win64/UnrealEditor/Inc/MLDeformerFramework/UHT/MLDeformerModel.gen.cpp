// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerModel.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "MLDeformerCurveReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerInputInfo_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerModel_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerVizSettings_NoRegister();
	MLDEFORMERFRAMEWORK_API UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel();
	MLDEFORMERFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMLDeformerCurveReference();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLDeformerMaskChannel;
	static UEnum* EMLDeformerMaskChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerMaskChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLDeformerMaskChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel, (UObject*)Z_Construct_UPackage__Script_MLDeformerFramework(), TEXT("EMLDeformerMaskChannel"));
		}
		return Z_Registration_Info_UEnum_EMLDeformerMaskChannel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UEnum* StaticEnum<EMLDeformerMaskChannel>()
	{
		return EMLDeformerMaskChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enumerators[] = {
		{ "EMLDeformerMaskChannel::Disabled", (int64)EMLDeformerMaskChannel::Disabled },
		{ "EMLDeformerMaskChannel::VertexColorRed", (int64)EMLDeformerMaskChannel::VertexColorRed },
		{ "EMLDeformerMaskChannel::VertexColorGreen", (int64)EMLDeformerMaskChannel::VertexColorGreen },
		{ "EMLDeformerMaskChannel::VertexColorBlue", (int64)EMLDeformerMaskChannel::VertexColorBlue },
		{ "EMLDeformerMaskChannel::VertexColorAlpha", (int64)EMLDeformerMaskChannel::VertexColorAlpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The channel to get the mask data from. */" },
		{ "Disabled.Comment", "/** Disable the weight mask. */" },
		{ "Disabled.Name", "EMLDeformerMaskChannel::Disabled" },
		{ "Disabled.ToolTip", "Disable the weight mask." },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The channel to get the mask data from." },
		{ "VertexColorAlpha.Comment", "/** The alpha vertex color channel. */" },
		{ "VertexColorAlpha.Name", "EMLDeformerMaskChannel::VertexColorAlpha" },
		{ "VertexColorAlpha.ToolTip", "The alpha vertex color channel." },
		{ "VertexColorBlue.Comment", "/** The blue vertex color channel. */" },
		{ "VertexColorBlue.Name", "EMLDeformerMaskChannel::VertexColorBlue" },
		{ "VertexColorBlue.ToolTip", "The blue vertex color channel." },
		{ "VertexColorGreen.Comment", "/** The green vertex color channel. */" },
		{ "VertexColorGreen.Name", "EMLDeformerMaskChannel::VertexColorGreen" },
		{ "VertexColorGreen.ToolTip", "The green vertex color channel." },
		{ "VertexColorRed.Comment", "/** The red vertex color channel. */" },
		{ "VertexColorRed.Name", "EMLDeformerMaskChannel::VertexColorRed" },
		{ "VertexColorRed.ToolTip", "The red vertex color channel." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLDeformerFramework,
		nullptr,
		"EMLDeformerMaskChannel",
		"EMLDeformerMaskChannel",
		Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel()
	{
		if (!Z_Registration_Info_UEnum_EMLDeformerMaskChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLDeformerMaskChannel.InnerSingleton, Z_Construct_UEnum_MLDeformerFramework_EMLDeformerMaskChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLDeformerMaskChannel.InnerSingleton;
	}
	void UMLDeformerModel::StaticRegisterNativesUMLDeformerModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerModel);
	UClass* Z_Construct_UClass_UMLDeformerModel_NoRegister()
	{
		return UMLDeformerModel::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBaseMeshVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBaseMeshVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTargetMeshVerts_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTargetMeshVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputInfo;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VertexMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VizSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VizSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeBones_MetaData[];
#endif
		static void NewProp_bIncludeBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeCurves_MetaData[];
#endif
		static void NewProp_bIncludeCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AnimSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlignmentTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneIncludeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIncludeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIncludeList;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveIncludeList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveIncludeList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveIncludeList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrainingFrames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrainingFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaCutoffLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaCutoffLength;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The ML Deformer runtime model base class.\n * All models should be inherited from this class.\n **/" },
		{ "IncludePath", "MLDeformerModel.h" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The ML Deformer runtime model base class.\nAll models should be inherited from this class." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumBaseMeshVerts_MetaData[] = {
		{ "Comment", "/** Cached number of skeletal mesh vertices. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "Cached number of skeletal mesh vertices." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumBaseMeshVerts = { "NumBaseMeshVerts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, NumBaseMeshVerts), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumBaseMeshVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumBaseMeshVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumTargetMeshVerts_MetaData[] = {
		{ "Comment", "/** Cached number of target mesh vertices. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "Cached number of target mesh vertices." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumTargetMeshVerts = { "NumTargetMeshVerts", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, NumTargetMeshVerts), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumTargetMeshVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumTargetMeshVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_InputInfo_MetaData[] = {
		{ "Comment", "/** \n\x09 * The information about the neural network inputs. This contains things such as bone names and curve names.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The information about the neural network inputs. This contains things such as bone names and curve names." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_InputInfo = { "InputInfo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, InputInfo), Z_Construct_UClass_UMLDeformerInputInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_InputInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_InputInfo_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap_Inner = { "VertexMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap_MetaData[] = {
		{ "Comment", "/** This is an index per vertex in the mesh, indicating the imported vertex number from the source asset. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "This is an index per vertex in the mesh, indicating the imported vertex number from the source asset." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap = { "VertexMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, VertexMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Base Mesh" },
		{ "Comment", "/** The skeletal mesh that represents the linear skinned mesh. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The skeletal mesh that represents the linear skinned mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VizSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VizSettings = { "VizSettings", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, VizSettings), Z_Construct_UClass_UMLDeformerVizSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VizSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VizSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/** Specifies whether bone transformations should be included as inputs during the training process. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "Specifies whether bone transformations should be included as inputs during the training process." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones_SetBit(void* Obj)
	{
		((UMLDeformerModel*)Obj)->bIncludeBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones = { "bIncludeBones", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerModel), &Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/** Specifies whether curve values (a float per curve) should be included as inputs during the training process. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "Specifies whether curve values (a float per curve) should be included as inputs during the training process." },
	};
#endif
	void Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves_SetBit(void* Obj)
	{
		((UMLDeformerModel*)Obj)->bIncludeCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves = { "bIncludeCurves", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLDeformerModel), &Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "Base Mesh" },
		{ "Comment", "/**\n\x09 * The animation sequence to apply to the base mesh. This has to match the animation of the target mesh's geometry cache. \n\x09 * Internally we force the Interpolation property for this motion to be \"Step\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The animation sequence to apply to the base mesh. This has to match the animation of the target mesh's geometry cache.\nInternally we force the Interpolation property for this motion to be \"Step\"." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AnimSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AlignmentTransform_MetaData[] = {
		{ "Category", "Target Mesh" },
		{ "Comment", "/** The transform that aligns the Geometry Cache to the SkeletalMesh. This will mostly apply some scale and a rotation, but no translation. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The transform that aligns the Geometry Cache to the SkeletalMesh. This will mostly apply some scale and a rotation, but no translation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AlignmentTransform = { "AlignmentTransform", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, AlignmentTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AlignmentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AlignmentTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList_Inner = { "BoneIncludeList", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/** The bones to include during training. When none are provided, all bones of the Skeleton will be included. */" },
		{ "EditCondition", "bIncludeBones" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The bones to include during training. When none are provided, all bones of the Skeleton will be included." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList = { "BoneIncludeList", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, BoneIncludeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList_Inner = { "CurveIncludeList", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMLDeformerCurveReference, METADATA_PARAMS(nullptr, 0) }; // 4012679004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "Comment", "/** The curves to include during training. When none are provided, all curves of the Skeleton will be included. */" },
		{ "EditCondition", "bIncludeCurves" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The curves to include during training. When none are provided, all curves of the Skeleton will be included." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList = { "CurveIncludeList", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, CurveIncludeList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList_MetaData)) }; // 4012679004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_MaxTrainingFrames_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The maximum numer of training frames (samples) to train on. Use this to train on a sub-section of your full training data. */" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "The maximum numer of training frames (samples) to train on. Use this to train on a sub-section of your full training data." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_MaxTrainingFrames = { "MaxTrainingFrames", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, MaxTrainingFrames), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_MaxTrainingFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_MaxTrainingFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_DeltaCutoffLength_MetaData[] = {
		{ "Category", "Inputs and Output" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 * Sometimes there can be some vertices that cause some issues that cause deltas to be very long. We can ignore these deltas by setting a cutoff value. \n\x09 * Deltas that are longer than the cutoff value (in units), will be ignored and set to zero length. \n\x09 */" },
		{ "ForceUnits", "cm" },
		{ "ModuleRelativePath", "Public/MLDeformerModel.h" },
		{ "ToolTip", "Sometimes there can be some vertices that cause some issues that cause deltas to be very long. We can ignore these deltas by setting a cutoff value.\nDeltas that are longer than the cutoff value (in units), will be ignored and set to zero length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_DeltaCutoffLength = { "DeltaCutoffLength", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerModel, DeltaCutoffLength), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_DeltaCutoffLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_DeltaCutoffLength_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumBaseMeshVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_NumTargetMeshVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_InputInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VertexMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_SkeletalMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_VizSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_bIncludeCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_AlignmentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_BoneIncludeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_CurveIncludeList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_MaxTrainingFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerModel_Statics::NewProp_DeltaCutoffLength,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMLDeformerModel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UMLDeformerModel, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerModel_Statics::ClassParams = {
		&UMLDeformerModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerModel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerModel()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerModel.OuterSingleton, Z_Construct_UClass_UMLDeformerModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerModel.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerModel>()
	{
		return UMLDeformerModel::StaticClass();
	}
	UMLDeformerModel::UMLDeformerModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerModel);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMLDeformerModel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::EnumInfo[] = {
		{ EMLDeformerMaskChannel_StaticEnum, TEXT("EMLDeformerMaskChannel"), &Z_Registration_Info_UEnum_EMLDeformerMaskChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1246414552U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerModel, UMLDeformerModel::StaticClass, TEXT("UMLDeformerModel"), &Z_Registration_Info_UClass_UMLDeformerModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerModel), 2629140131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_4206954627(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
