// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerDebugSnapshotInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface();
	ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UVisualLoggerDebugSnapshotInterface::StaticRegisterNativesUVisualLoggerDebugSnapshotInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerDebugSnapshotInterface);
	UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister()
	{
		return UVisualLoggerDebugSnapshotInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVisualLoggerDebugSnapshotInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams = {
		&UVisualLoggerDebugSnapshotInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface()
	{
		if (!Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton, Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVisualLoggerDebugSnapshotInterface>()
	{
		return UVisualLoggerDebugSnapshotInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerDebugSnapshotInterface);
	UVisualLoggerDebugSnapshotInterface::~UVisualLoggerDebugSnapshotInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface, UVisualLoggerDebugSnapshotInterface::StaticClass, TEXT("UVisualLoggerDebugSnapshotInterface"), &Z_Registration_Info_UClass_UVisualLoggerDebugSnapshotInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerDebugSnapshotInterface), 224036737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_969894342(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_VisualLogger_VisualLoggerDebugSnapshotInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
