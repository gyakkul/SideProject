// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/WidgetNavigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetNavigation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationRule();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation();
	UMG_API UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister();
	UMG_API UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics
	{
		struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms
		{
			EUINavigation Navigation;
			UWidget* ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Navigation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Navigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation = { "Navigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, Navigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(nullptr, 0) }; // 637548137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_UMG_eventCustomWidgetNavigationDelegate_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_Navigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UMG, nullptr, "CustomWidgetNavigationDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::_Script_UMG_eventCustomWidgetNavigationDelegate_Parms), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
UWidget* FCustomWidgetNavigationDelegate_DelegateWrapper(const FScriptDelegate& CustomWidgetNavigationDelegate, EUINavigation Navigation)
{
	struct _Script_UMG_eventCustomWidgetNavigationDelegate_Parms
	{
		EUINavigation Navigation;
		UWidget* ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_UMG_eventCustomWidgetNavigationDelegate_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	_Script_UMG_eventCustomWidgetNavigationDelegate_Parms Parms;
	Parms.Navigation=Navigation;
	CustomWidgetNavigationDelegate.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetNavigationData;
class UScriptStruct* FWidgetNavigationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetNavigationData, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetNavigationData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetNavigationData.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetNavigationData>()
{
	return FWidgetNavigationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetNavigationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Rule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Rule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToFocus_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetToFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_CustomDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetNavigationData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Rule), Z_Construct_UEnum_SlateCore_EUINavigationRule, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_MetaData)) }; // 2992627971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** This either the widget to focus, OR the name of the function to call. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "This either the widget to focus, OR the name of the function to call." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus = { "WidgetToFocus", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetNavigationData, WidgetToFocus), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetNavigationData, Widget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate = { "CustomDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetNavigationData, CustomDelegate), Z_Construct_UDelegateFunction_UMG_CustomWidgetNavigationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate_MetaData)) }; // 492261710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Rule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_WidgetToFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewProp_CustomDelegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetNavigationData",
		sizeof(FWidgetNavigationData),
		alignof(FWidgetNavigationData),
		Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetNavigationData()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetNavigationData.InnerSingleton;
	}
	void UWidgetNavigation::StaticRegisterNativesUWidgetNavigation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetNavigation);
	UClass* Z_Construct_UClass_UWidgetNavigation_NoRegister()
	{
		return UWidgetNavigation::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetNavigation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Down_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Down;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Next_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Next;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Previous_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Previous;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetNavigation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Blueprint/WidgetNavigation.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses up arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses up arrow, joystick, d-pad." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Up), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up_MetaData)) }; // 2484292325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses down arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses down arrow, joystick, d-pad." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down = { "Down", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Down), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down_MetaData)) }; // 2484292325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses left arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses left arrow, joystick, d-pad." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Left), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left_MetaData)) }; // 2484292325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses right arrow, joystick, d-pad. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses right arrow, joystick, d-pad." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Right), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right_MetaData)) }; // 2484292325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses Tab. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Tab." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next = { "Next", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Next), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next_MetaData)) }; // 2484292325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Happens when the user presses Shift+Tab. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetNavigation.h" },
		{ "ToolTip", "Happens when the user presses Shift+Tab." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous = { "Previous", nullptr, (EPropertyFlags)0x0010008000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetNavigation, Previous), Z_Construct_UScriptStruct_FWidgetNavigationData, METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous_MetaData)) }; // 2484292325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Down,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Next,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetNavigation_Statics::NewProp_Previous,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetNavigation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetNavigation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams = {
		&UWidgetNavigation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetNavigation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetNavigation()
	{
		if (!Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton, Z_Construct_UClass_UWidgetNavigation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetNavigation.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetNavigation>()
	{
		return UWidgetNavigation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetNavigation);
	UWidgetNavigation::~UWidgetNavigation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ScriptStructInfo[] = {
		{ FWidgetNavigationData::StaticStruct, Z_Construct_UScriptStruct_FWidgetNavigationData_Statics::NewStructOps, TEXT("WidgetNavigationData"), &Z_Registration_Info_UScriptStruct_WidgetNavigationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetNavigationData), 2484292325U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetNavigation, UWidgetNavigation::StaticClass, TEXT("UWidgetNavigation"), &Z_Registration_Info_UClass_UWidgetNavigation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetNavigation), 1405923114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_1344497375(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetNavigation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
