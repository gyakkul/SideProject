// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamAnyKeyWidget.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamAnyKeyWidget() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_VCamInput();
	VCAMINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey();
	VCAMINPUT_API UClass* Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_NoRegister();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature();
	VCAMINPUT_API UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics
	{
		struct _Script_VCamInput_eventOnKeySelected_Parms
		{
			FKey Key;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_VCamInput_eventOnKeySelected_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamAnyKeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "OnKeySelected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::_Script_VCamInput_eventOnKeySelected_Parms), Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnKeySelected_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelected, FKey Key)
{
	struct _Script_VCamInput_eventOnKeySelected_Parms
	{
		FKey Key;
	};
	_Script_VCamInput_eventOnKeySelected_Parms Parms;
	Parms.Key=Key;
	OnKeySelected.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VCamAnyKeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VCamInput, nullptr, "OnKeySelectionCanceled__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnKeySelectionCanceled_DelegateWrapper(const FMulticastScriptDelegate& OnKeySelectionCanceled)
{
	OnKeySelectionCanceled.ProcessMulticastDelegate<UObject>(NULL);
}
	void UDEPRECATED_VCamPressAnyKey::StaticRegisterNativesUDEPRECATED_VCamPressAnyKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_VCamPressAnyKey);
	UClass* Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_NoRegister()
	{
		return UDEPRECATED_VCamPressAnyKey::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnKeySelected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnKeySelectionCanceled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeySelectionCanceled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonActivatableWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base widget class that allows you to wait for any input and then respond to the key pressed\n" },
		{ "IncludePath", "VCamAnyKeyWidget.h" },
		{ "ModuleRelativePath", "Public/VCamAnyKeyWidget.h" },
		{ "ToolTip", "Base widget class that allows you to wait for any input and then respond to the key pressed" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamAnyKeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelected = { "OnKeySelected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VCamPressAnyKey, OnKeySelected), Z_Construct_UDelegateFunction_VCamInput_OnKeySelected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelected_MetaData)) }; // 1373092689
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelectionCanceled_MetaData[] = {
		{ "ModuleRelativePath", "Public/VCamAnyKeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelectionCanceled = { "OnKeySelectionCanceled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VCamPressAnyKey, OnKeySelectionCanceled), Z_Construct_UDelegateFunction_VCamInput_OnKeySelectionCanceled__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelectionCanceled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelectionCanceled_MetaData)) }; // 3378369114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::NewProp_OnKeySelectionCanceled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_VCamPressAnyKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::ClassParams = {
		&UDEPRECATED_VCamPressAnyKey::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::PropPointers),
		0,
		0x02B012A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_VCamPressAnyKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_VCamPressAnyKey.OuterSingleton, Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_VCamPressAnyKey.OuterSingleton;
	}
	template<> VCAMINPUT_API UClass* StaticClass<UDEPRECATED_VCamPressAnyKey>()
	{
		return UDEPRECATED_VCamPressAnyKey::StaticClass();
	}
	UDEPRECATED_VCamPressAnyKey::UDEPRECATED_VCamPressAnyKey(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_VCamPressAnyKey);
	UDEPRECATED_VCamPressAnyKey::~UDEPRECATED_VCamPressAnyKey() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamAnyKeyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamAnyKeyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_VCamPressAnyKey, UDEPRECATED_VCamPressAnyKey::StaticClass, TEXT("UDEPRECATED_VCamPressAnyKey"), &Z_Registration_Info_UClass_UDEPRECATED_VCamPressAnyKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_VCamPressAnyKey), 2369613192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamAnyKeyWidget_h_1083940059(TEXT("/Script/VCamInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamAnyKeyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamInput_Public_VCamAnyKeyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
