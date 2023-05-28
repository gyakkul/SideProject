// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultAssetEditorGizmoFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAssetEditorGizmoFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UDefaultAssetEditorGizmoFactory();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GizmoEdMode();
// End Cross Module References
	void UDefaultAssetEditorGizmoFactory::StaticRegisterNativesUDefaultAssetEditorGizmoFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultAssetEditorGizmoFactory);
	UClass* Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_NoRegister()
	{
		return UDefaultAssetEditorGizmoFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GizmoEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultAssetEditorGizmoFactory.h" },
		{ "ModuleRelativePath", "Public/DefaultAssetEditorGizmoFactory.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister, (int32)VTABLE_OFFSET(UDefaultAssetEditorGizmoFactory, IAssetEditorGizmoFactory), false },  // 1161006577
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAssetEditorGizmoFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::ClassParams = {
		&UDefaultAssetEditorGizmoFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultAssetEditorGizmoFactory()
	{
		if (!Z_Registration_Info_UClass_UDefaultAssetEditorGizmoFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultAssetEditorGizmoFactory.OuterSingleton, Z_Construct_UClass_UDefaultAssetEditorGizmoFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDefaultAssetEditorGizmoFactory.OuterSingleton;
	}
	template<> GIZMOEDMODE_API UClass* StaticClass<UDefaultAssetEditorGizmoFactory>()
	{
		return UDefaultAssetEditorGizmoFactory::StaticClass();
	}
	UDefaultAssetEditorGizmoFactory::UDefaultAssetEditorGizmoFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAssetEditorGizmoFactory);
	UDefaultAssetEditorGizmoFactory::~UDefaultAssetEditorGizmoFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultAssetEditorGizmoFactory, UDefaultAssetEditorGizmoFactory::StaticClass, TEXT("UDefaultAssetEditorGizmoFactory"), &Z_Registration_Info_UClass_UDefaultAssetEditorGizmoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultAssetEditorGizmoFactory), 1787408688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_3115344352(TEXT("/Script/GizmoEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_DefaultAssetEditorGizmoFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
