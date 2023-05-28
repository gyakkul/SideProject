// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterTestPatternsActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterTestPatternsActor() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterTestPatternsActor();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterTestPatternsActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void ADisplayClusterTestPatternsActor::StaticRegisterNativesADisplayClusterTestPatternsActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADisplayClusterTestPatternsActor);
	UClass* Z_Construct_UClass_ADisplayClusterTestPatternsActor_NoRegister()
	{
		return ADisplayClusterTestPatternsActor::StaticClass();
	}
	struct Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CalibrationPatterns_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CalibrationPatterns_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalibrationPatterns_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CalibrationPatterns;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportPPSettings_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewportPPSettings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportPPSettings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ViewportPPSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test patterns actor\n */" },
		{ "IncludePath", "DisplayClusterTestPatternsActor.h" },
		{ "ModuleRelativePath", "Public/DisplayClusterTestPatternsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Test patterns actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Postprocess component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterTestPatternsActor.h" },
		{ "ToolTip", "Postprocess component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterTestPatternsActor, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_PostProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_PostProcessComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_ValueProp = { "CalibrationPatterns", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_Key_KeyProp = { "CalibrationPatterns_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_MetaData[] = {
		{ "Category", "NDisplay" },
		{ "ModuleRelativePath", "Public/DisplayClusterTestPatternsActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns = { "CalibrationPatterns", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterTestPatternsActor, CalibrationPatterns), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_ValueProp = { "ViewportPPSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 1889339962
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_Key_KeyProp = { "ViewportPPSettings_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplayClusterTestPatternsActor.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings = { "ViewportPPSettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterTestPatternsActor, ViewportPPSettings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_MetaData)) }; // 1889339962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_PostProcessComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_CalibrationPatterns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::NewProp_ViewportPPSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisplayClusterTestPatternsActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::ClassParams = {
		&ADisplayClusterTestPatternsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisplayClusterTestPatternsActor()
	{
		if (!Z_Registration_Info_UClass_ADisplayClusterTestPatternsActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADisplayClusterTestPatternsActor.OuterSingleton, Z_Construct_UClass_ADisplayClusterTestPatternsActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADisplayClusterTestPatternsActor.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<ADisplayClusterTestPatternsActor>()
	{
		return ADisplayClusterTestPatternsActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisplayClusterTestPatternsActor);
	ADisplayClusterTestPatternsActor::~ADisplayClusterTestPatternsActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterTestPatternsActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterTestPatternsActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADisplayClusterTestPatternsActor, ADisplayClusterTestPatternsActor::StaticClass, TEXT("ADisplayClusterTestPatternsActor"), &Z_Registration_Info_UClass_ADisplayClusterTestPatternsActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADisplayClusterTestPatternsActor), 1852852206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterTestPatternsActor_h_1065275077(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterTestPatternsActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterTestPatternsActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
