// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerInputInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerInputInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerInputInfo();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerInputInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerInputInfo::StaticRegisterNativesUMLDeformerInputInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerInputInfo);
	UClass* Z_Construct_UClass_UMLDeformerInputInfo_NoRegister()
	{
		return UMLDeformerInputInfo::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerInputInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNameStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNameStrings;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurveNameStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNameStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNameStrings;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBaseMeshVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBaseMeshVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTargetMeshVertices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTargetMeshVertices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerInputInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The neural network input information.\n * This contains arrays of names for things such as bones and curves.\n * Knowing what bones etc are used as inputs, and in what order, helps us feeding the data during inference.\n * It can also help us detect issues, for example when the character we apply the deformer to is missing any of those bones.\n */" },
		{ "IncludePath", "MLDeformerInputInfo.h" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The neural network input information.\nThis contains arrays of names for things such as bones and curves.\nKnowing what bones etc are used as inputs, and in what order, helps us feeding the data during inference.\nIt can also help us detect issues, for example when the character we apply the deformer to is missing any of those bones." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path to the skeletal mesh that this model was trained on.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The path to the skeletal mesh that this model was trained on." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, SkeletalMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings_Inner = { "BoneNameStrings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings_MetaData[] = {
		{ "Comment", "/** The list of bone names, but as string. This is deprecated since UE 5.2. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use BoneNames instead." },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The list of bone names, but as string. This is deprecated since UE 5.2." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings = { "BoneNameStrings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, BoneNameStrings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings_Inner = { "CurveNameStrings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings_MetaData[] = {
		{ "Comment", "/** The list of curve names, but as string. This is deprecated since UE 5.2. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use CurveNames instead." },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The list of curve names, but as string. This is deprecated since UE 5.2." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings = { "CurveNameStrings", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, CurveNameStrings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames_MetaData[] = {
		{ "Comment", "/** \n\x09 * The name of each bone. The inputs to the network are in the order of this array.\n\x09 * So if the array contains [\"Root\", \"Child1\", \"Child2\"] then the first bone transforms that we \n\x09 * input to the neural network is the transform for \"Root\", followed by \"Child1\", followed by \"Child2\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The name of each bone. The inputs to the network are in the order of this array.\nSo if the array contains [\"Root\", \"Child1\", \"Child2\"] then the first bone transforms that we\ninput to the neural network is the transform for \"Root\", followed by \"Child1\", followed by \"Child2\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of each curve. The inputs to the network are in the order of this array.\n\x09 * So if the array contains [\"Smile\", \"LeftEyeClosed\", \"RightEyeClosed\"] then the first curve that we\n\x09 * input to the neural network is the one for \"Smile\", followed by \"LeftEyeClosed\", followed by \"RightEyeClosed\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "The name of each curve. The inputs to the network are in the order of this array.\nSo if the array contains [\"Smile\", \"LeftEyeClosed\", \"RightEyeClosed\"] then the first curve that we\ninput to the neural network is the one for \"Smile\", followed by \"LeftEyeClosed\", followed by \"RightEyeClosed\"." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumBaseMeshVertices_MetaData[] = {
		{ "Comment", "/** Number of imported base mesh vertices, so not render vertices. */" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "Number of imported base mesh vertices, so not render vertices." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumBaseMeshVertices = { "NumBaseMeshVertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, NumBaseMeshVertices), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumBaseMeshVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumBaseMeshVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumTargetMeshVertices_MetaData[] = {
		{ "Comment", "/** Number of imported target mesh vertices, so not render vertices. */" },
		{ "ModuleRelativePath", "Public/MLDeformerInputInfo.h" },
		{ "ToolTip", "Number of imported target mesh vertices, so not render vertices." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumTargetMeshVertices = { "NumTargetMeshVertices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerInputInfo, NumTargetMeshVertices), METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumTargetMeshVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumTargetMeshVertices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerInputInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_SkeletalMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNameStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNameStrings,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_CurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumBaseMeshVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerInputInfo_Statics::NewProp_NumTargetMeshVertices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerInputInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerInputInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerInputInfo_Statics::ClassParams = {
		&UMLDeformerInputInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerInputInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerInputInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerInputInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerInputInfo()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerInputInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerInputInfo.OuterSingleton, Z_Construct_UClass_UMLDeformerInputInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerInputInfo.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerInputInfo>()
	{
		return UMLDeformerInputInfo::StaticClass();
	}
	UMLDeformerInputInfo::UMLDeformerInputInfo(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerInputInfo);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerInputInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerInputInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerInputInfo, UMLDeformerInputInfo::StaticClass, TEXT("UMLDeformerInputInfo"), &Z_Registration_Info_UClass_UMLDeformerInputInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerInputInfo), 2314043572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerInputInfo_h_3914142208(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerInputInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerInputInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
