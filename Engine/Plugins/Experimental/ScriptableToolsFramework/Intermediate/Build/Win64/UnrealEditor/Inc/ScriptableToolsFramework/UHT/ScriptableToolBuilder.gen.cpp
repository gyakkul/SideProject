// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptableToolBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptableToolBuilder() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseScriptableToolBuilder();
	SCRIPTABLETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptableToolsFramework();
// End Cross Module References
	void UBaseScriptableToolBuilder::StaticRegisterNativesUBaseScriptableToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseScriptableToolBuilder);
	UClass* Z_Construct_UClass_UBaseScriptableToolBuilder_NoRegister()
	{
		return UBaseScriptableToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBaseScriptableToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptableToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UBaseScriptableToolBuilder is a trivial base UInteractiveToolBuilder for any UScriptableInteractiveTool subclass.\n * CanBuildTool will return true as long as the ToolClass is a valid UClass.\n */" },
		{ "IncludePath", "ScriptableToolBuilder.h" },
		{ "ModuleRelativePath", "Public/ScriptableToolBuilder.h" },
		{ "ToolTip", "UBaseScriptableToolBuilder is a trivial base UInteractiveToolBuilder for any UScriptableInteractiveTool subclass.\nCanBuildTool will return true as long as the ToolClass is a valid UClass." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseScriptableToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::ClassParams = {
		&UBaseScriptableToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseScriptableToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBaseScriptableToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseScriptableToolBuilder.OuterSingleton, Z_Construct_UClass_UBaseScriptableToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseScriptableToolBuilder.OuterSingleton;
	}
	template<> SCRIPTABLETOOLSFRAMEWORK_API UClass* StaticClass<UBaseScriptableToolBuilder>()
	{
		return UBaseScriptableToolBuilder::StaticClass();
	}
	UBaseScriptableToolBuilder::UBaseScriptableToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseScriptableToolBuilder);
	UBaseScriptableToolBuilder::~UBaseScriptableToolBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseScriptableToolBuilder, UBaseScriptableToolBuilder::StaticClass, TEXT("UBaseScriptableToolBuilder"), &Z_Registration_Info_UClass_UBaseScriptableToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseScriptableToolBuilder), 1679906911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_2630687927(TEXT("/Script/ScriptableToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ScriptableToolsFramework_Source_ScriptableToolsFramework_Public_ScriptableToolBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
