// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationDataSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationDataSource() {}
// Cross Module References
	ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry();
	ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationCore();
// End Cross Module References
	void UAnimationDataSourceRegistry::StaticRegisterNativesUAnimationDataSourceRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataSourceRegistry);
	UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister()
	{
		return UAnimationDataSourceRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationDataSourceRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DataSources_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataSources_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSources_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataSources;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationDataSource.h" },
		{ "ModuleRelativePath", "Public/AnimationDataSource.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_ValueProp = { "DataSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_Key_KeyProp = { "DataSources_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationDataSource.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources = { "DataSources", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationDataSourceRegistry, DataSources), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::NewProp_DataSources,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDataSourceRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::ClassParams = {
		&UAnimationDataSourceRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationDataSourceRegistry()
	{
		if (!Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton, Z_Construct_UClass_UAnimationDataSourceRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationDataSourceRegistry.OuterSingleton;
	}
	template<> ANIMATIONCORE_API UClass* StaticClass<UAnimationDataSourceRegistry>()
	{
		return UAnimationDataSourceRegistry::StaticClass();
	}
	UAnimationDataSourceRegistry::UAnimationDataSourceRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataSourceRegistry);
	UAnimationDataSourceRegistry::~UAnimationDataSourceRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataSourceRegistry, UAnimationDataSourceRegistry::StaticClass, TEXT("UAnimationDataSourceRegistry"), &Z_Registration_Info_UClass_UAnimationDataSourceRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataSourceRegistry), 757201494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_4130253476(TEXT("/Script/AnimationCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
