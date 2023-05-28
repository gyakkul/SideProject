// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpotLightGizmoFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightGizmoFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoFactory();
	LIGHTGIZMOS_API UClass* Z_Construct_UClass_USpotLightGizmoFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LightGizmos();
// End Cross Module References
	void USpotLightGizmoFactory::StaticRegisterNativesUSpotLightGizmoFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpotLightGizmoFactory);
	UClass* Z_Construct_UClass_USpotLightGizmoFactory_NoRegister()
	{
		return USpotLightGizmoFactory::StaticClass();
	}
	struct Z_Construct_UClass_USpotLightGizmoFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpotLightGizmoFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LightGizmos,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpotLightGizmoFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpotLightGizmoFactory.h" },
		{ "ModuleRelativePath", "Public/SpotLightGizmoFactory.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USpotLightGizmoFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister, (int32)VTABLE_OFFSET(USpotLightGizmoFactory, IAssetEditorGizmoFactory), false },  // 1161006577
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpotLightGizmoFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpotLightGizmoFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpotLightGizmoFactory_Statics::ClassParams = {
		&USpotLightGizmoFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpotLightGizmoFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpotLightGizmoFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpotLightGizmoFactory()
	{
		if (!Z_Registration_Info_UClass_USpotLightGizmoFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpotLightGizmoFactory.OuterSingleton, Z_Construct_UClass_USpotLightGizmoFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpotLightGizmoFactory.OuterSingleton;
	}
	template<> LIGHTGIZMOS_API UClass* StaticClass<USpotLightGizmoFactory>()
	{
		return USpotLightGizmoFactory::StaticClass();
	}
	USpotLightGizmoFactory::USpotLightGizmoFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightGizmoFactory);
	USpotLightGizmoFactory::~USpotLightGizmoFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpotLightGizmoFactory, USpotLightGizmoFactory::StaticClass, TEXT("USpotLightGizmoFactory"), &Z_Registration_Info_UClass_USpotLightGizmoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpotLightGizmoFactory), 209043481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_679244788(TEXT("/Script/LightGizmos"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_LightGizmos_Public_SpotLightGizmoFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
