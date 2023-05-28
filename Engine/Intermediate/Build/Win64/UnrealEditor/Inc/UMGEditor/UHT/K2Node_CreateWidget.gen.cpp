// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/K2Node_CreateWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CreateWidget() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateWidget();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UK2Node_CreateWidget::StaticRegisterNativesUK2Node_CreateWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CreateWidget);
	UClass* Z_Construct_UClass_UK2Node_CreateWidget_NoRegister()
	{
		return UK2Node_CreateWidget::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CreateWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CreateWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/K2Node_CreateWidget.h" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_CreateWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CreateWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CreateWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CreateWidget_Statics::ClassParams = {
		&UK2Node_CreateWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CreateWidget()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CreateWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CreateWidget.OuterSingleton, Z_Construct_UClass_UK2Node_CreateWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CreateWidget.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UK2Node_CreateWidget>()
	{
		return UK2Node_CreateWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CreateWidget);
	UK2Node_CreateWidget::~UK2Node_CreateWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CreateWidget, UK2Node_CreateWidget::StaticClass, TEXT("UK2Node_CreateWidget"), &Z_Registration_Info_UClass_UK2Node_CreateWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CreateWidget), 2162513790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_1372460477(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
