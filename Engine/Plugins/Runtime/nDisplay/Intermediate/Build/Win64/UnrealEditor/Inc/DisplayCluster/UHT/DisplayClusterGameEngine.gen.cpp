// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterGameEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterGameEngine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterGameEngine();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterGameEngine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterGameEngine::StaticRegisterNativesUDisplayClusterGameEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterGameEngine);
	UClass* Z_Construct_UClass_UDisplayClusterGameEngine_NoRegister()
	{
		return UDisplayClusterGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterGameEngine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Extended game engine\n */" },
		{ "IncludePath", "DisplayClusterGameEngine.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterGameEngine.h" },
		{ "ToolTip", "Extended game engine" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterGameEngine_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterGameEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDisplayClusterGameEngine_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisplayClusterGameEngine, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterGameEngine_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterGameEngine_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplayClusterGameEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplayClusterGameEngine_Statics::NewProp_WorldContextObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterGameEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterGameEngine_Statics::ClassParams = {
		&UDisplayClusterGameEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisplayClusterGameEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterGameEngine_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterGameEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterGameEngine()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterGameEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterGameEngine.OuterSingleton, Z_Construct_UClass_UDisplayClusterGameEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterGameEngine.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterGameEngine>()
	{
		return UDisplayClusterGameEngine::StaticClass();
	}
	UDisplayClusterGameEngine::UDisplayClusterGameEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterGameEngine);
	UDisplayClusterGameEngine::~UDisplayClusterGameEngine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterGameEngine, UDisplayClusterGameEngine::StaticClass, TEXT("UDisplayClusterGameEngine"), &Z_Registration_Info_UClass_UDisplayClusterGameEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterGameEngine), 2533579558U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_198727799(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterGameEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
