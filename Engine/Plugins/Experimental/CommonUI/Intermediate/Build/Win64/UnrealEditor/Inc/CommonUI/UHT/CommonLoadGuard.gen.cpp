// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLoadGuard.h"
#include "Layout/Margin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLoadGuard() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLoadGuard();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLoadGuard_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonTextStyle_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_ULoadGuardSlot();
	COMMONUI_API UClass* Z_Construct_UClass_ULoadGuardSlot_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(ULoadGuardSlot::execSetVerticalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InVerticalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVerticalAlignment(EVerticalAlignment(Z_Param_InVerticalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadGuardSlot::execSetHorizontalAlignment)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InHorizontalAlignment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHorizontalAlignment(EHorizontalAlignment(Z_Param_InHorizontalAlignment));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULoadGuardSlot::execSetPadding)
	{
		P_GET_STRUCT(FMargin,Z_Param_InPadding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPadding(Z_Param_InPadding);
		P_NATIVE_END;
	}
	void ULoadGuardSlot::StaticRegisterNativesULoadGuardSlot()
	{
		UClass* Class = ULoadGuardSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetHorizontalAlignment", &ULoadGuardSlot::execSetHorizontalAlignment },
			{ "SetPadding", &ULoadGuardSlot::execSetPadding },
			{ "SetVerticalAlignment", &ULoadGuardSlot::execSetVerticalAlignment },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics
	{
		struct LoadGuardSlot_eventSetHorizontalAlignment_Parms
		{
			TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InHorizontalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment = { "InHorizontalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetHorizontalAlignment_Parms, InHorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(nullptr, 0) }; // 4247529014
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::NewProp_InHorizontalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, nullptr, "SetHorizontalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::LoadGuardSlot_eventSetHorizontalAlignment_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics
	{
		struct LoadGuardSlot_eventSetPadding_Parms
		{
			FMargin InPadding;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPadding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::NewProp_InPadding = { "InPadding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetPadding_Parms, InPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::NewProp_InPadding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, nullptr, "SetPadding", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::LoadGuardSlot_eventSetPadding_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetPadding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetPadding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics
	{
		struct LoadGuardSlot_eventSetVerticalAlignment_Parms
		{
			TEnumAsByte<EVerticalAlignment> InVerticalAlignment;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment = { "InVerticalAlignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LoadGuardSlot_eventSetVerticalAlignment_Parms, InVerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(nullptr, 0) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::NewProp_InVerticalAlignment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadGuardSlot, nullptr, "SetVerticalAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::LoadGuardSlot_eventSetVerticalAlignment_Parms), Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadGuardSlot);
	UClass* Z_Construct_UClass_ULoadGuardSlot_NoRegister()
	{
		return ULoadGuardSlot::StaticClass();
	}
	struct Z_Construct_UClass_ULoadGuardSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadGuardSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadGuardSlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetHorizontalAlignment, "SetHorizontalAlignment" }, // 3938713957
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetPadding, "SetPadding" }, // 1841844891
		{ &Z_Construct_UFunction_ULoadGuardSlot_SetVerticalAlignment, "SetVerticalAlignment" }, // 3244061632
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Virtually identical to a UBorderSlot, but unfortunately that assumes (fairly) that its parent widget is a UBorder. */" },
		{ "IncludePath", "CommonLoadGuard.h" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "Virtually identical to a UBorderSlot, but unfortunately that assumes (fairly) that its parent widget is a UBorder." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadGuardSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadGuardSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Layout|LoadGuard Slot" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULoadGuardSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadGuardSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadGuardSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadGuardSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadGuardSlot_Statics::ClassParams = {
		&ULoadGuardSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULoadGuardSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULoadGuardSlot()
	{
		if (!Z_Registration_Info_UClass_ULoadGuardSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadGuardSlot.OuterSingleton, Z_Construct_UClass_ULoadGuardSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadGuardSlot.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<ULoadGuardSlot>()
	{
		return ULoadGuardSlot::StaticClass();
	}
	ULoadGuardSlot::ULoadGuardSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadGuardSlot);
	ULoadGuardSlot::~ULoadGuardSlot() {}
	struct Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms
		{
			bool bIsLoading;
		};
		static void NewProp_bIsLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::NewProp_bIsLoading_SetBit(void* Obj)
	{
		((_Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms*)Obj)->bIsLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::NewProp_bIsLoading = { "bIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms), &Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::NewProp_bIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::NewProp_bIsLoading,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "OnLoadGuardStateChangedDynamic__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::_Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLoadGuardStateChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnLoadGuardStateChangedDynamic, bool bIsLoading)
{
	struct _Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms
	{
		bool bIsLoading;
	};
	_Script_CommonUI_eventOnLoadGuardStateChangedDynamic_Parms Parms;
	Parms.bIsLoading=bIsLoading ? true : false;
	OnLoadGuardStateChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics
	{
		struct CommonLoadGuard_eventOnAssetLoaded_Parms
		{
			UObject* Object;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventOnAssetLoaded_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, nullptr, "OnAssetLoaded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::CommonLoadGuard_eventOnAssetLoaded_Parms), Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UCommonLoadGuard::FOnAssetLoaded_DelegateWrapper(const FScriptDelegate& OnAssetLoaded, UObject* Object)
{
	struct CommonLoadGuard_eventOnAssetLoaded_Parms
	{
		UObject* Object;
	};
	CommonLoadGuard_eventOnAssetLoaded_Parms Parms;
	Parms.Object=Object;
	OnAssetLoaded.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCommonLoadGuard::execBP_GuardAndLoadAsset)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_InLazyAsset);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAssetLoaded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_GuardAndLoadAsset(Z_Param_Out_InLazyAsset,FOnAssetLoaded(Z_Param_Out_OnAssetLoaded));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLoadGuard::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLoadGuard::execSetIsLoading)
	{
		P_GET_UBOOL(Z_Param_bInIsLoading);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsLoading(Z_Param_bInIsLoading);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLoadGuard::execSetLoadingText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InLoadingText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoadingText(Z_Param_Out_InLoadingText);
		P_NATIVE_END;
	}
	void UCommonLoadGuard::StaticRegisterNativesUCommonLoadGuard()
	{
		UClass* Class = UCommonLoadGuard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_GuardAndLoadAsset", &UCommonLoadGuard::execBP_GuardAndLoadAsset },
			{ "IsLoading", &UCommonLoadGuard::execIsLoading },
			{ "SetIsLoading", &UCommonLoadGuard::execSetIsLoading },
			{ "SetLoadingText", &UCommonLoadGuard::execSetLoadingText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics
	{
		struct CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms
		{
			TSoftObjectPtr<UObject> InLazyAsset;
			FScriptDelegate OnAssetLoaded;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLazyAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InLazyAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAssetLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset = { "InLazyAsset", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms, InLazyAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded = { "OnAssetLoaded", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms, OnAssetLoaded), Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded_MetaData)) }; // 4259221931
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_InLazyAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::NewProp_OnAssetLoaded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "LoadGuard" },
		{ "DisplayName", "Guard and Load Asset" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ScriptName", "GuardAndLoadAsset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, nullptr, "BP_GuardAndLoadAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::CommonLoadGuard_eventBP_GuardAndLoadAsset_Parms), Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics
	{
		struct CommonLoadGuard_eventIsLoading_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLoadGuard_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLoadGuard_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, nullptr, "IsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::CommonLoadGuard_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics
	{
		struct CommonLoadGuard_eventSetIsLoading_Parms
		{
			bool bInIsLoading;
		};
		static void NewProp_bInIsLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsLoading;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading_SetBit(void* Obj)
	{
		((CommonLoadGuard_eventSetIsLoading_Parms*)Obj)->bInIsLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading = { "bInIsLoading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLoadGuard_eventSetIsLoading_Parms), &Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::NewProp_bInIsLoading,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, nullptr, "SetIsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::CommonLoadGuard_eventSetIsLoading_Parms), Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics
	{
		struct CommonLoadGuard_eventSetLoadingText_Parms
		{
			FText InLoadingText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLoadingText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InLoadingText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText = { "InLoadingText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLoadGuard_eventSetLoadingText_Parms, InLoadingText), METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::NewProp_InLoadingText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams[] = {
		{ "Category", "LoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLoadGuard, nullptr, "SetLoadingText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::CommonLoadGuard_eventSetLoadingText_Parms), Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonLoadGuard);
	UClass* Z_Construct_UClass_UCommonLoadGuard_NoRegister()
	{
		return UCommonLoadGuard::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLoadGuard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLoading_MetaData[];
#endif
		static void NewProp_bShowLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoading;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrobberAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThrobberAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrobberPadding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThrobberPadding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_LoadingText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextStyle_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TextStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpinnerMaterialPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpinnerMaterialPath;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStyleNoLongerNeedsConversion_MetaData[];
#endif
		static void NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStyleNoLongerNeedsConversion;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLoadGuard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLoadGuard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLoadGuard_BP_GuardAndLoadAsset, "BP_GuardAndLoadAsset" }, // 471293396
		{ &Z_Construct_UFunction_UCommonLoadGuard_IsLoading, "IsLoading" }, // 602491365
		{ &Z_Construct_UDelegateFunction_UCommonLoadGuard_OnAssetLoaded__DelegateSignature, "OnAssetLoaded__DelegateSignature" }, // 4259221931
		{ &Z_Construct_UFunction_UCommonLoadGuard_SetIsLoading, "SetIsLoading" }, // 1435298063
		{ &Z_Construct_UFunction_UCommonLoadGuard_SetLoadingText, "SetLoadingText" }, // 2464952795
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The Load Guard behaves similarly to a Border, but with the ability to hide its primary content and display a loading spinner\n * and optional message while needed content is loaded or otherwise prepared.\n * \n * Use GuardAndLoadAsset to automatically display the loading state until the asset is loaded (then the content widget will be displayed).\n * For other applications (ex: waiting for an async backend call to complete), you can manually set the loading state of the guard.\n */" },
		{ "IncludePath", "CommonLoadGuard.h" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The Load Guard behaves similarly to a Border, but with the ability to hide its primary content and display a loading spinner\nand optional message while needed content is loaded or otherwise prepared.\n\nUse GuardAndLoadAsset to automatically display the loading state until the asset is loaded (then the content widget will be displayed).\nFor other applications (ex: waiting for an async backend call to complete), you can manually set the loading state of the guard." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading_MetaData[] = {
		{ "Category", "LoadGuard" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading_SetBit(void* Obj)
	{
		((UCommonLoadGuard*)Obj)->bShowLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading = { "bShowLoading", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadGuard), &Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "Category", "LoadGuardThrobber" },
		{ "Comment", "/** The background brush to display while loading the content */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "The background brush to display while loading the content" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush = { "LoadingBackgroundBrush", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData[] = {
		{ "Category", "LoadGuardThrobber" },
		{ "Comment", "/** The horizontal alignment of the loading throbber & message */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "The horizontal alignment of the loading throbber & message" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment = { "ThrobberAlignment", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, ThrobberAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData[] = {
		{ "Category", "LoadGuardThrobber" },
		{ "Comment", "/** The horizontal alignment of the loading throbber & message */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "The horizontal alignment of the loading throbber & message" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding = { "ThrobberPadding", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, ThrobberPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData[] = {
		{ "Category", "LoadGuardText" },
		{ "Comment", "/** Loading message to display alongside the throbber */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "Loading message to display alongside the throbber" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText = { "LoadingText", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, LoadingText), METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData[] = {
		{ "Category", "LoadGuardText" },
		{ "Comment", "/** Style to apply to the loading message */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "Style to apply to the loading message" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle = { "TextStyle", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, TextStyle), Z_Construct_UClass_UClass, Z_Construct_UClass_UCommonTextStyle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "Category", "LoadGuard" },
		{ "DisplayName", "On Loading State Changed" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged = { "BP_OnLoadingStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) }; // 2194747320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath = { "SpinnerMaterialPath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLoadGuard, SpinnerMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData[] = {
		{ "Comment", "/** Used to track widgets that were created before changing the default style pointer to null */" },
		{ "ModuleRelativePath", "Public/CommonLoadGuard.h" },
		{ "ToolTip", "Used to track widgets that were created before changing the default style pointer to null" },
	};
#endif
	void Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit(void* Obj)
	{
		((UCommonLoadGuard*)Obj)->bStyleNoLongerNeedsConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion = { "bStyleNoLongerNeedsConversion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLoadGuard), &Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bShowLoading,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_ThrobberPadding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_LoadingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_TextStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_BP_OnLoadingStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_SpinnerMaterialPath,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLoadGuard_Statics::NewProp_bStyleNoLongerNeedsConversion,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLoadGuard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLoadGuard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonLoadGuard_Statics::ClassParams = {
		&UCommonLoadGuard::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLoadGuard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLoadGuard()
	{
		if (!Z_Registration_Info_UClass_UCommonLoadGuard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonLoadGuard.OuterSingleton, Z_Construct_UClass_UCommonLoadGuard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonLoadGuard.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonLoadGuard>()
	{
		return UCommonLoadGuard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLoadGuard);
	UCommonLoadGuard::~UCommonLoadGuard() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCommonLoadGuard)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadGuardSlot, ULoadGuardSlot::StaticClass, TEXT("ULoadGuardSlot"), &Z_Registration_Info_UClass_ULoadGuardSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadGuardSlot), 2584519347U) },
		{ Z_Construct_UClass_UCommonLoadGuard, UCommonLoadGuard::StaticClass, TEXT("UCommonLoadGuard"), &Z_Registration_Info_UClass_UCommonLoadGuard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonLoadGuard), 1235363295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_2852981647(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLoadGuard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
