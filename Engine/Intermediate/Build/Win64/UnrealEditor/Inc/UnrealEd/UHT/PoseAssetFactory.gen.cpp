// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PoseAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseAssetFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPoseAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPoseAssetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPoseAssetFactory::StaticRegisterNativesUPoseAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseAssetFactory);
	UClass* Z_Construct_UClass_UPoseAssetFactory_NoRegister()
	{
		return UPoseAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceAnimation;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PoseNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PoseAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData[] = {
		{ "Category", "PoseAssetFactory" },
		{ "Comment", "/* Used when creating a composite from an AnimSequence, becomes the only AnimSequence contained */" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Used when creating a composite from an AnimSequence, becomes the only AnimSequence contained" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation = { "SourceAnimation", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAssetFactory, SourceAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_Inner = { "PoseNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData[] = {
		{ "Category", "PoseAssetFactory" },
		{ "Comment", "/** Optional. If specified the poses will be named according to this array.\n\x09If you don't specify, or you don't specify enough names for all poses, then default names will be generated.*/" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Optional. If specified the poses will be named according to this array.\n      If you don't specify, or you don't specify enough names for all poses, then default names will be generated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames = { "PoseNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAssetFactory, PoseNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Comment", "// Only used for AnimationEditorUtils::ExecuteNewAnimAsset template. Do not use directly.\n" },
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
		{ "ToolTip", "Only used for AnimationEditorUtils::ExecuteNewAnimAsset template. Do not use directly." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAssetFactory, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/PoseAssetFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseAssetFactory, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_SourceAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PoseNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseAssetFactory_Statics::NewProp_PreviewSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseAssetFactory_Statics::ClassParams = {
		&UPoseAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UPoseAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseAssetFactory.OuterSingleton, Z_Construct_UClass_UPoseAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseAssetFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPoseAssetFactory>()
	{
		return UPoseAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseAssetFactory);
	UPoseAssetFactory::~UPoseAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseAssetFactory, UPoseAssetFactory::StaticClass, TEXT("UPoseAssetFactory"), &Z_Registration_Info_UClass_UPoseAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseAssetFactory), 1317061674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_2480196217(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PoseAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
