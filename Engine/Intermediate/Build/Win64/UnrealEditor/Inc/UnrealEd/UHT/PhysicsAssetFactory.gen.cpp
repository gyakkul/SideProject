// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/PhysicsAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicsAssetFactory::StaticRegisterNativesUPhysicsAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetFactory);
	UClass* Z_Construct_UClass_UPhysicsAssetFactory_NoRegister()
	{
		return UPhysicsAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetFactory_Statics
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
	UObject* (*const Z_Construct_UClass_UPhysicsAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/PhysicsAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicsAssetFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetFactory_Statics::NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Comment", "// The skeletal mesh with which to initialize this physics asset\n" },
		{ "ModuleRelativePath", "Classes/Factories/PhysicsAssetFactory.h" },
		{ "ToolTip", "The skeletal mesh with which to initialize this physics asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsAssetFactory_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetFactory, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetFactory_Statics::NewProp_TargetSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetFactory_Statics::NewProp_TargetSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetFactory_Statics::NewProp_TargetSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetFactory_Statics::ClassParams = {
		&UPhysicsAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetFactory.OuterSingleton, Z_Construct_UClass_UPhysicsAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetFactory>()
	{
		return UPhysicsAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetFactory);
	UPhysicsAssetFactory::~UPhysicsAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetFactory, UPhysicsAssetFactory::StaticClass, TEXT("UPhysicsAssetFactory"), &Z_Registration_Info_UClass_UPhysicsAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetFactory), 2959061190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_1937678329(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_PhysicsAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
