// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorMechanicAdapterTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorMechanicAdapterTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorMechanicAdapterTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorMechanicAdapterTool_NoRegister();
// End Cross Module References
	void UUVEditorMechanicAdapterTool::StaticRegisterNativesUUVEditorMechanicAdapterTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorMechanicAdapterTool);
	UClass* Z_Construct_UClass_UUVEditorMechanicAdapterTool_NoRegister()
	{
		return UUVEditorMechanicAdapterTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a dummy tool that only exists to make it possible for mechanics to be used in\n * outside of an actual tool. The tool can be passed in to the mechanics' Setup() calls. \n * If necessary, the behaviors can be extracted via GetInputBehaviors() to be placed into \n * an input router.\n */" },
		{ "IncludePath", "UVEditorMechanicAdapterTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorMechanicAdapterTool.h" },
		{ "ToolTip", "This is a dummy tool that only exists to make it possible for mechanics to be used in\noutside of an actual tool. The tool can be passed in to the mechanics' Setup() calls.\nIf necessary, the behaviors can be extracted via GetInputBehaviors() to be placed into\nan input router." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorMechanicAdapterTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::ClassParams = {
		&UUVEditorMechanicAdapterTool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorMechanicAdapterTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorMechanicAdapterTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorMechanicAdapterTool.OuterSingleton, Z_Construct_UClass_UUVEditorMechanicAdapterTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorMechanicAdapterTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorMechanicAdapterTool>()
	{
		return UUVEditorMechanicAdapterTool::StaticClass();
	}
	UUVEditorMechanicAdapterTool::UUVEditorMechanicAdapterTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorMechanicAdapterTool);
	UUVEditorMechanicAdapterTool::~UUVEditorMechanicAdapterTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorMechanicAdapterTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorMechanicAdapterTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorMechanicAdapterTool, UUVEditorMechanicAdapterTool::StaticClass, TEXT("UUVEditorMechanicAdapterTool"), &Z_Registration_Info_UClass_UUVEditorMechanicAdapterTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorMechanicAdapterTool), 2370448803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorMechanicAdapterTool_h_1380171011(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorMechanicAdapterTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorMechanicAdapterTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
