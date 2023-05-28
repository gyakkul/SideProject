// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParametricRetessellateAction.h"
#include "DatasmithImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametricRetessellateAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCustomActionBase();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRetessellationOptions();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricRetessellateAction();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricRetessellateAction_NoRegister();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricRetessellateActionOptions();
	PARAMETRICSURFACEEXTENSION_API UClass* Z_Construct_UClass_UParametricRetessellateActionOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ParametricSurfaceExtension();
// End Cross Module References
	void UParametricRetessellateAction::StaticRegisterNativesUParametricRetessellateAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParametricRetessellateAction);
	UClass* Z_Construct_UClass_UParametricRetessellateAction_NoRegister()
	{
		return UParametricRetessellateAction::StaticClass();
	}
	struct Z_Construct_UClass_UParametricRetessellateAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametricRetessellateAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithCustomActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurfaceExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricRetessellateAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParametricRetessellateAction.h" },
		{ "ModuleRelativePath", "Public/ParametricRetessellateAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametricRetessellateAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametricRetessellateAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParametricRetessellateAction_Statics::ClassParams = {
		&UParametricRetessellateAction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParametricRetessellateAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricRetessellateAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametricRetessellateAction()
	{
		if (!Z_Registration_Info_UClass_UParametricRetessellateAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParametricRetessellateAction.OuterSingleton, Z_Construct_UClass_UParametricRetessellateAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParametricRetessellateAction.OuterSingleton;
	}
	template<> PARAMETRICSURFACEEXTENSION_API UClass* StaticClass<UParametricRetessellateAction>()
	{
		return UParametricRetessellateAction::StaticClass();
	}
	UParametricRetessellateAction::UParametricRetessellateAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametricRetessellateAction);
	UParametricRetessellateAction::~UParametricRetessellateAction() {}
	void UParametricRetessellateActionOptions::StaticRegisterNativesUParametricRetessellateActionOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParametricRetessellateActionOptions);
	UClass* Z_Construct_UClass_UParametricRetessellateActionOptions_NoRegister()
	{
		return UParametricRetessellateActionOptions::StaticClass();
	}
	struct Z_Construct_UClass_UParametricRetessellateActionOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ParametricSurfaceExtension,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParametricRetessellateAction.h" },
		{ "ModuleRelativePath", "Public/ParametricRetessellateAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "NotVisible" },
		{ "ModuleRelativePath", "Public/ParametricRetessellateAction.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricRetessellateActionOptions, Options), Z_Construct_UScriptStruct_FDatasmithRetessellationOptions, METADATA_PARAMS(Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::NewProp_Options_MetaData)) }; // 3889835244
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::NewProp_Options,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametricRetessellateActionOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::ClassParams = {
		&UParametricRetessellateActionOptions::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametricRetessellateActionOptions()
	{
		if (!Z_Registration_Info_UClass_UParametricRetessellateActionOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParametricRetessellateActionOptions.OuterSingleton, Z_Construct_UClass_UParametricRetessellateActionOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParametricRetessellateActionOptions.OuterSingleton;
	}
	template<> PARAMETRICSURFACEEXTENSION_API UClass* StaticClass<UParametricRetessellateActionOptions>()
	{
		return UParametricRetessellateActionOptions::StaticClass();
	}
	UParametricRetessellateActionOptions::UParametricRetessellateActionOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametricRetessellateActionOptions);
	UParametricRetessellateActionOptions::~UParametricRetessellateActionOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricRetessellateAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricRetessellateAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParametricRetessellateAction, UParametricRetessellateAction::StaticClass, TEXT("UParametricRetessellateAction"), &Z_Registration_Info_UClass_UParametricRetessellateAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParametricRetessellateAction), 3476197706U) },
		{ Z_Construct_UClass_UParametricRetessellateActionOptions, UParametricRetessellateActionOptions::StaticClass, TEXT("UParametricRetessellateActionOptions"), &Z_Registration_Info_UClass_UParametricRetessellateActionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParametricRetessellateActionOptions), 770937973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricRetessellateAction_h_185408563(TEXT("/Script/ParametricSurfaceExtension"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricRetessellateAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithCADImporter_Source_ParametricSurfaceExtension_Public_ParametricRetessellateAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
