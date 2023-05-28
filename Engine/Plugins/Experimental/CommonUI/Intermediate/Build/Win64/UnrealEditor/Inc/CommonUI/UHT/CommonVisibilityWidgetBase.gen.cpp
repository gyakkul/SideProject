// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVisibilityWidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVisibilityWidgetBase() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonBorder();
	COMMONUI_API UClass* Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase();
	COMMONUI_API UClass* Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_UCommonVisibilityWidgetBase::execGetRegisteredPlatforms)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UDEPRECATED_UCommonVisibilityWidgetBase::GetRegisteredPlatforms();
		P_NATIVE_END;
	}
	void UDEPRECATED_UCommonVisibilityWidgetBase::StaticRegisterNativesUDEPRECATED_UCommonVisibilityWidgetBase()
	{
		UClass* Class = UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredPlatforms", &UDEPRECATED_UCommonVisibilityWidgetBase::execGetRegisteredPlatforms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics
	{
		struct UCommonVisibilityWidgetBase_eventGetRegisteredPlatforms_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonVisibilityWidgetBase_eventGetRegisteredPlatforms_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase, nullptr, "GetRegisteredPlatforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::UCommonVisibilityWidgetBase_eventGetRegisteredPlatforms_Parms), Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UCommonVisibilityWidgetBase);
	UClass* Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_NoRegister()
	{
		return UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VisibilityControls_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VisibilityControls_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityControls_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VisibilityControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowForGamepad_MetaData[];
#endif
		static void NewProp_bShowForGamepad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowForGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowForMouseAndKeyboard_MetaData[];
#endif
		static void NewProp_bShowForMouseAndKeyboard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowForMouseAndKeyboard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowForTouch_MetaData[];
#endif
		static void NewProp_bShowForTouch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowForTouch;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibleType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HiddenType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HiddenType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HiddenType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommonBorder,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_UCommonVisibilityWidgetBase_GetRegisteredPlatforms, "GetRegisteredPlatforms" }, // 1794756846
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A container that controls visibility based on Input type and Platform\n *\n */" },
		{ "IncludePath", "CommonVisibilityWidgetBase.h" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
		{ "ToolTip", "A container that controls visibility based on Input type and Platform" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_ValueProp = { "VisibilityControls", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_Key_KeyProp = { "VisibilityControls_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_MetaData[] = {
		{ "Category", "Visibility" },
		{ "GetOptions", "GetRegisteredPlatforms" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls = { "VisibilityControls", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UCommonVisibilityWidgetBase, VisibilityControls), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad_SetBit(void* Obj)
	{
		((UDEPRECATED_UCommonVisibilityWidgetBase*)Obj)->bShowForGamepad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad = { "bShowForGamepad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UCommonVisibilityWidgetBase), &Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard_SetBit(void* Obj)
	{
		((UDEPRECATED_UCommonVisibilityWidgetBase*)Obj)->bShowForMouseAndKeyboard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard = { "bShowForMouseAndKeyboard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UCommonVisibilityWidgetBase), &Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch_SetBit(void* Obj)
	{
		((UDEPRECATED_UCommonVisibilityWidgetBase*)Obj)->bShowForTouch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch = { "bShowForTouch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UCommonVisibilityWidgetBase), &Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType = { "VisibleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UCommonVisibilityWidgetBase, VisibleType), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType_MetaData)) }; // 2244982430
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType_MetaData[] = {
		{ "Category", "Visibility" },
		{ "ModuleRelativePath", "Public/CommonVisibilityWidgetBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType = { "HiddenType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UCommonVisibilityWidgetBase, HiddenType), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType_MetaData)) }; // 2244982430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibilityControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForMouseAndKeyboard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_bShowForTouch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_VisibleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::NewProp_HiddenType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UCommonVisibilityWidgetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::ClassParams = {
		&UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::PropPointers),
		0,
		0x02B002A2u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UDEPRECATED_UCommonVisibilityWidgetBase>()
	{
		return UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UCommonVisibilityWidgetBase);
	UDEPRECATED_UCommonVisibilityWidgetBase::~UDEPRECATED_UCommonVisibilityWidgetBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UCommonVisibilityWidgetBase, UDEPRECATED_UCommonVisibilityWidgetBase::StaticClass, TEXT("UDEPRECATED_UCommonVisibilityWidgetBase"), &Z_Registration_Info_UClass_UDEPRECATED_UCommonVisibilityWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UCommonVisibilityWidgetBase), 2832658842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_2341542771(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilityWidgetBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
