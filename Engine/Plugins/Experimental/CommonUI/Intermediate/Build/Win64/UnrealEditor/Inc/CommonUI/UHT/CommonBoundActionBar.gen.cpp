// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/CommonBoundActionBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonBoundActionBar() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionBar();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBoundActionBar_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonButtonBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonBoundActionBar::execSetDisplayOwningPlayerActionsOnly)
	{
		P_GET_UBOOL(Z_Param_bShouldOnlyDisplayOwningPlayerActions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayOwningPlayerActionsOnly(Z_Param_bShouldOnlyDisplayOwningPlayerActions);
		P_NATIVE_END;
	}
	void UCommonBoundActionBar::StaticRegisterNativesUCommonBoundActionBar()
	{
		UClass* Class = UCommonBoundActionBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDisplayOwningPlayerActionsOnly", &UCommonBoundActionBar::execSetDisplayOwningPlayerActionsOnly },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics
	{
		struct CommonBoundActionBar_eventSetDisplayOwningPlayerActionsOnly_Parms
		{
			bool bShouldOnlyDisplayOwningPlayerActions;
		};
		static void NewProp_bShouldOnlyDisplayOwningPlayerActions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldOnlyDisplayOwningPlayerActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::NewProp_bShouldOnlyDisplayOwningPlayerActions_SetBit(void* Obj)
	{
		((CommonBoundActionBar_eventSetDisplayOwningPlayerActionsOnly_Parms*)Obj)->bShouldOnlyDisplayOwningPlayerActions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::NewProp_bShouldOnlyDisplayOwningPlayerActions = { "bShouldOnlyDisplayOwningPlayerActions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonBoundActionBar_eventSetDisplayOwningPlayerActionsOnly_Parms), &Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::NewProp_bShouldOnlyDisplayOwningPlayerActions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::NewProp_bShouldOnlyDisplayOwningPlayerActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "CommonBoundActionBar" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionBar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonBoundActionBar, nullptr, "SetDisplayOwningPlayerActionsOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::CommonBoundActionBar_eventSetDisplayOwningPlayerActionsOnly_Parms), Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonBoundActionBar);
	UClass* Z_Construct_UClass_UCommonBoundActionBar_NoRegister()
	{
		return UCommonBoundActionBar::StaticClass();
	}
	struct Z_Construct_UClass_UCommonBoundActionBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionButtonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActionButtonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayOwningPlayerActionsOnly_MetaData[];
#endif
		static void NewProp_bDisplayOwningPlayerActionsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayOwningPlayerActionsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDuplicateActions_MetaData[];
#endif
		static void NewProp_bIgnoreDuplicateActions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDuplicateActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonBoundActionBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicEntryBoxBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonBoundActionBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly, "SetDisplayOwningPlayerActionsOnly" }, // 3533732513
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionBar_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Common UI" },
		{ "ClassGroupNames", "UI" },
		{ "Comment", "/**\n * A box populated with current actions available per CommonUI's Input Handler.\n */" },
		{ "IncludePath", "Input/CommonBoundActionBar.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionBar.h" },
		{ "ToolTip", "A box populated with current actions available per CommonUI's Input Handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_ActionButtonClass_MetaData[] = {
		{ "Category", "EntryLayout" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionBar.h" },
		{ "MustImplement", "/Script/CommonUI.CommonBoundActionButtonInterface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_ActionButtonClass = { "ActionButtonClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonBoundActionBar, ActionButtonClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonButtonBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_ActionButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_ActionButtonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionBar.h" },
	};
#endif
	void Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly_SetBit(void* Obj)
	{
		((UCommonBoundActionBar*)Obj)->bDisplayOwningPlayerActionsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly = { "bDisplayOwningPlayerActionsOnly", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonBoundActionBar), &Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Public/Input/CommonBoundActionBar.h" },
	};
#endif
	void Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions_SetBit(void* Obj)
	{
		((UCommonBoundActionBar*)Obj)->bIgnoreDuplicateActions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions = { "bIgnoreDuplicateActions", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonBoundActionBar), &Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonBoundActionBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_ActionButtonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bDisplayOwningPlayerActionsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonBoundActionBar_Statics::NewProp_bIgnoreDuplicateActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonBoundActionBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonBoundActionBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonBoundActionBar_Statics::ClassParams = {
		&UCommonBoundActionBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonBoundActionBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonBoundActionBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonBoundActionBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonBoundActionBar()
	{
		if (!Z_Registration_Info_UClass_UCommonBoundActionBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonBoundActionBar.OuterSingleton, Z_Construct_UClass_UCommonBoundActionBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonBoundActionBar.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonBoundActionBar>()
	{
		return UCommonBoundActionBar::StaticClass();
	}
	UCommonBoundActionBar::UCommonBoundActionBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonBoundActionBar);
	UCommonBoundActionBar::~UCommonBoundActionBar() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonBoundActionBar, UCommonBoundActionBar::StaticClass, TEXT("UCommonBoundActionBar"), &Z_Registration_Info_UClass_UCommonBoundActionBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonBoundActionBar), 863432215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionBar_h_622763668(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_Input_CommonBoundActionBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
