// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolContexts/WidgetToolsContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetToolsContext() {}
// Cross Module References
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UModeManagerInteractiveToolsContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetToolsContext();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetToolsContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	void UWidgetToolsContext::StaticRegisterNativesUWidgetToolsContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetToolsContext);
	UClass* Z_Construct_UClass_UWidgetToolsContext_NoRegister()
	{
		return UWidgetToolsContext::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetToolsContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetToolsContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModeManagerInteractiveToolsContext,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetToolsContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWidgetToolsContext extends UModeManagerInteractiveToolsContext with methods needed for\n * tools operating on general widgets that do not have a viewport.\n */" },
		{ "IncludePath", "ToolContexts/WidgetToolsContext.h" },
		{ "ModuleRelativePath", "Public/ToolContexts/WidgetToolsContext.h" },
		{ "ToolTip", "UWidgetToolsContext extends UModeManagerInteractiveToolsContext with methods needed for\ntools operating on general widgets that do not have a viewport." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetToolsContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetToolsContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetToolsContext_Statics::ClassParams = {
		&UWidgetToolsContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWidgetToolsContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetToolsContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetToolsContext()
	{
		if (!Z_Registration_Info_UClass_UWidgetToolsContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetToolsContext.OuterSingleton, Z_Construct_UClass_UWidgetToolsContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetToolsContext.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UWidgetToolsContext>()
	{
		return UWidgetToolsContext::StaticClass();
	}
	UWidgetToolsContext::UWidgetToolsContext() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetToolsContext);
	UWidgetToolsContext::~UWidgetToolsContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetToolsContext, UWidgetToolsContext::StaticClass, TEXT("UWidgetToolsContext"), &Z_Registration_Info_UClass_UWidgetToolsContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetToolsContext), 4093493612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_4286449552(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_ToolContexts_WidgetToolsContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
