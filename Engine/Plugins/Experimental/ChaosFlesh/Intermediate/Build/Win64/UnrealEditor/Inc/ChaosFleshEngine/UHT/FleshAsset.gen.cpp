// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/FleshAsset.h"
#include "Dataflow/DataflowEngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleshAsset() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshAsset();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	DATAFLOWENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStringValuePair();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	void UFleshAsset::StaticRegisterNativesUFleshAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFleshAsset);
	UClass* Z_Construct_UClass_UFleshAsset_NoRegister()
	{
		return UFleshAsset::StaticClass();
	}
	struct Z_Construct_UClass_UFleshAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowTerminal_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataflowTerminal;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Overrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDeformationSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetDeformationSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetSkeletalMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInEditor_MetaData[];
#endif
		static void NewProp_bRenderInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFleshAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UFleshAsset (UObject)\n*\n* UObject wrapper for the FFleshAsset\n*\n*/" },
		{ "IncludePath", "ChaosFlesh/FleshAsset.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UFleshAsset (UObject)\n\nUObject wrapper for the FFleshAsset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowAsset_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "Comment", "//\n// Dataflow\n//\n" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "Dataflow" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowAsset = { "DataflowAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, DataflowAsset), Z_Construct_UClass_UDataflow_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowTerminal_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowTerminal = { "DataflowTerminal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, DataflowTerminal), METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowTerminal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowTerminal_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides_Inner = { "Overrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStringValuePair, METADATA_PARAMS(nullptr, 0) }; // 539507795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides_MetaData[] = {
		{ "Category", "Dataflow" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides = { "Overrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, Overrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides_MetaData)) }; // 539507795
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "//\n// SkeletalMesh\n//\n" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "SkeletalMesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetDeformationSkeleton_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Skeleton to use with \\c GetSkeletalMeshEmbeddedPositions() on the flesh component. \n\x09* Bindings for this skeletal mesh must be stored in the rest collection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "Skeleton to use with \\c GetSkeletalMeshEmbeddedPositions() on the flesh component.\nBindings for this skeletal mesh must be stored in the rest collection." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetDeformationSkeleton = { "TargetDeformationSkeleton", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, TargetDeformationSkeleton), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetDeformationSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetDeformationSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "//\n// SkeletalMesh\n//\n" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "SkeletalMesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "//\n// Deformer Target Mesh\n//\n" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "Deformer Target Mesh" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, TargetSkeletalMesh), METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetSkeletalMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
	};
#endif
	void Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor_SetBit(void* Obj)
	{
		((UFleshAsset*)Obj)->bRenderInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor = { "bRenderInEditor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFleshAsset), &Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFleshAsset_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/FleshAsset.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFleshAsset_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFleshAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFleshAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_DataflowTerminal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_Overrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetDeformationSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_TargetSkeletalMesh,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_bRenderInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFleshAsset_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFleshAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFleshAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFleshAsset_Statics::ClassParams = {
		&UFleshAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFleshAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFleshAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFleshAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFleshAsset()
	{
		if (!Z_Registration_Info_UClass_UFleshAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFleshAsset.OuterSingleton, Z_Construct_UClass_UFleshAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFleshAsset.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UFleshAsset>()
	{
		return UFleshAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFleshAsset);
	UFleshAsset::~UFleshAsset() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFleshAsset)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFleshAsset, UFleshAsset::StaticClass, TEXT("UFleshAsset"), &Z_Registration_Info_UClass_UFleshAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFleshAsset), 46953931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_1953081013(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_FleshAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
