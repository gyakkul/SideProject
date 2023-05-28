// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/UVSplitAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVSplitAction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSplitAction();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSplitAction_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAction();
// End Cross Module References
	void UUVSplitAction::StaticRegisterNativesUUVSplitAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVSplitAction);
	UClass* Z_Construct_UClass_UUVSplitAction_NoRegister()
	{
		return UUVSplitAction::StaticClass();
	}
	struct Z_Construct_UClass_UUVSplitAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVSplitAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSplitAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/UVSplitAction.h" },
		{ "ModuleRelativePath", "Public/Actions/UVSplitAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVSplitAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVSplitAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVSplitAction_Statics::ClassParams = {
		&UUVSplitAction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVSplitAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSplitAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVSplitAction()
	{
		if (!Z_Registration_Info_UClass_UUVSplitAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVSplitAction.OuterSingleton, Z_Construct_UClass_UUVSplitAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVSplitAction.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVSplitAction>()
	{
		return UUVSplitAction::StaticClass();
	}
	UUVSplitAction::UUVSplitAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVSplitAction);
	UUVSplitAction::~UUVSplitAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVSplitAction, UUVSplitAction::StaticClass, TEXT("UUVSplitAction"), &Z_Registration_Info_UClass_UUVSplitAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVSplitAction), 2857345983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_2799360699(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSplitAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
