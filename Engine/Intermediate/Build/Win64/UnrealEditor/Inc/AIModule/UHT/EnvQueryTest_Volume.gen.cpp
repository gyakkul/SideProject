// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Volume() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Volume();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Volume_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UEnvQueryTest_Volume::StaticRegisterNativesUEnvQueryTest_Volume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Volume);
	UClass* Z_Construct_UClass_UEnvQueryTest_Volume_NoRegister()
	{
		return UEnvQueryTest_Volume::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Volume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeContext_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VolumeContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_VolumeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoComplexVolumeTest_MetaData[];
#endif
		static void NewProp_bDoComplexVolumeTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoComplexVolumeTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Volume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Volume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Volume.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumes" },
		{ "Comment", "/** Context that populates a list of Actors derived from AVolume to test against */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h" },
		{ "ToolTip", "Context that populates a list of Actors derived from AVolume to test against" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeContext = { "VolumeContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Volume, VolumeContext), Z_Construct_UClass_UClass, Z_Construct_UClass_UEnvQueryContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumes" },
		{ "Comment", "/** If VolumeContext is null, AVolume Class will be used to populate a list of AVolume to test against */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h" },
		{ "ToolTip", "If VolumeContext is null, AVolume Class will be used to populate a list of AVolume to test against" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeClass = { "VolumeClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Volume, VolumeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Volumes" },
		{ "Comment", "/** If bDoComplexVolumeTest is set, it will use a full volume physic test (not only a bounding box test)  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Volume.h" },
		{ "ToolTip", "If bDoComplexVolumeTest is set, it will use a full volume physic test (not only a bounding box test)" },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_SetBit(void* Obj)
	{
		((UEnvQueryTest_Volume*)Obj)->bDoComplexVolumeTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest = { "bDoComplexVolumeTest", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEnvQueryTest_Volume), &Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Volume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_VolumeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Volume_Statics::NewProp_bDoComplexVolumeTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Volume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Volume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Volume_Statics::ClassParams = {
		&UEnvQueryTest_Volume::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Volume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Volume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Volume()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Volume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_Volume.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Volume>()
	{
		return UEnvQueryTest_Volume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Volume);
	UEnvQueryTest_Volume::~UEnvQueryTest_Volume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Volume, UEnvQueryTest_Volume::StaticClass, TEXT("UEnvQueryTest_Volume"), &Z_Registration_Info_UClass_UEnvQueryTest_Volume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Volume), 971174049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h_2711071120(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Volume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
