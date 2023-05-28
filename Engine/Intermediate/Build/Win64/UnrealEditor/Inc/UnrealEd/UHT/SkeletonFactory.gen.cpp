// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/SkeletonFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_USkeletonFactory();
	UNREALED_API UClass* Z_Construct_UClass_USkeletonFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USkeletonFactory::StaticRegisterNativesUSkeletonFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonFactory);
	UClass* Z_Construct_UClass_USkeletonFactory_NoRegister()
	{
		return USkeletonFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SkeletonFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SkeletonFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonFactory_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Comment", "// The skeletal mesh with which to initialize this skeleton.\n" },
		{ "ModuleRelativePath", "Classes/Factories/SkeletonFactory.h" },
		{ "ToolTip", "The skeletal mesh with which to initialize this skeleton." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletonFactory_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletonFactory, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletonFactory_Statics::NewProp_TargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFactory_Statics::NewProp_TargetSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletonFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletonFactory_Statics::NewProp_TargetSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonFactory_Statics::ClassParams = {
		&USkeletonFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletonFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletonFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonFactory()
	{
		if (!Z_Registration_Info_UClass_USkeletonFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonFactory.OuterSingleton, Z_Construct_UClass_USkeletonFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletonFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USkeletonFactory>()
	{
		return USkeletonFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonFactory);
	USkeletonFactory::~USkeletonFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonFactory, USkeletonFactory::StaticClass, TEXT("USkeletonFactory"), &Z_Registration_Info_UClass_USkeletonFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonFactory), 3628165839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_16007079(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SkeletonFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
