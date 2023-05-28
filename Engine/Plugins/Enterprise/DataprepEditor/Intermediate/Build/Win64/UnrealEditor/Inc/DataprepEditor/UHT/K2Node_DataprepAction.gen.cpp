// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/BlueprintNodes/K2Node_DataprepAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_DataprepAction() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepActionAsset_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UK2Node_DataprepActionCore();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References
	void UDEPRECATED_K2Node_DataprepAction::StaticRegisterNativesUDEPRECATED_K2Node_DataprepAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_K2Node_DataprepAction);
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_NoRegister()
	{
		return UDEPRECATED_K2Node_DataprepAction::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionTitle_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActionTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataprepAction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_DataprepActionCore,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "No use of Blueprint with Dataprep." },
		{ "IncludePath", "BlueprintNodes/K2Node_DataprepAction.h" },
		{ "ModuleRelativePath", "Private/BlueprintNodes/K2Node_DataprepAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_ActionTitle_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNodes/K2Node_DataprepAction.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_ActionTitle = { "ActionTitle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_K2Node_DataprepAction, ActionTitle), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_ActionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_ActionTitle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_DataprepAction_MetaData[] = {
		{ "ModuleRelativePath", "Private/BlueprintNodes/K2Node_DataprepAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_DataprepAction = { "DataprepAction", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_K2Node_DataprepAction, DataprepAction_DEPRECATED), Z_Construct_UClass_UDataprepActionAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_DataprepAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_DataprepAction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_ActionTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::NewProp_DataprepAction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_K2Node_DataprepAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::ClassParams = {
		&UDEPRECATED_K2Node_DataprepAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::PropPointers),
		0,
		0x020802A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_K2Node_DataprepAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_K2Node_DataprepAction.OuterSingleton, Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_K2Node_DataprepAction.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDEPRECATED_K2Node_DataprepAction>()
	{
		return UDEPRECATED_K2Node_DataprepAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_K2Node_DataprepAction);
	UDEPRECATED_K2Node_DataprepAction::~UDEPRECATED_K2Node_DataprepAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_BlueprintNodes_K2Node_DataprepAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_BlueprintNodes_K2Node_DataprepAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_K2Node_DataprepAction, UDEPRECATED_K2Node_DataprepAction::StaticClass, TEXT("UDEPRECATED_K2Node_DataprepAction"), &Z_Registration_Info_UClass_UDEPRECATED_K2Node_DataprepAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_K2Node_DataprepAction), 3724479534U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_BlueprintNodes_K2Node_DataprepAction_h_3039889769(TEXT("/Script/DataprepEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_BlueprintNodes_K2Node_DataprepAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_BlueprintNodes_K2Node_DataprepAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
