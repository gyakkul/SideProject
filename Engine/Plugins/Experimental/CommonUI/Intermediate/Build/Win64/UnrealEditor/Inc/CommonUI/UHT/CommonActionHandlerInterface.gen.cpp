// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonActionHandlerInterface.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonActionHandlerInterface() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister();
	COMMONUI_API UEnum* Z_Construct_UEnum_CommonUI_EInputActionState();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature();
	COMMONUI_API UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventCommonActionCommited_Parms
		{
			bool bPassThrough;
		};
		static void NewProp_bPassThrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPassThrough;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::NewProp_bPassThrough_SetBit(void* Obj)
	{
		((_Script_CommonUI_eventCommonActionCommited_Parms*)Obj)->bPassThrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::NewProp_bPassThrough = { "bPassThrough", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_CommonUI_eventCommonActionCommited_Parms), &Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::NewProp_bPassThrough_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::NewProp_bPassThrough,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n * Action committed delegate tells the handler that an action is ready to handle. Return value\n * is used to determine if the action was handled or ignored.\n */" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
		{ "ToolTip", "Action committed delegate tells the handler that an action is ready to handle. Return value\nis used to determine if the action was handled or ignored." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonActionCommited__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::_Script_CommonUI_eventCommonActionCommited_Parms), Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonActionCommited__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonActionCommited_DelegateWrapper(const FScriptDelegate& CommonActionCommited, bool& bPassThrough)
{
	struct _Script_CommonUI_eventCommonActionCommited_Parms
	{
		bool bPassThrough;
	};
	_Script_CommonUI_eventCommonActionCommited_Parms Parms;
	Parms.bPassThrough=bPassThrough ? true : false;
	CommonActionCommited.ProcessDelegate<UObject>(&Parms);
	bPassThrough=Parms.bPassThrough;
}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Action complete delegate will tell a listener if a held action completed. The single delegate\n * will be used for binding with a listener that the multicast delegate calls.\n */" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
		{ "ToolTip", "Action complete delegate will tell a listener if a held action completed. The single delegate\nwill be used for binding with a listener that the multicast delegate calls." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonActionCompleteSingle__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonActionCompleteSingle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonActionCompleteSingle_DelegateWrapper(const FScriptDelegate& CommonActionCompleteSingle)
{
	CommonActionCompleteSingle.ProcessDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonActionComplete__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonActionComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonActionComplete_DelegateWrapper(const FMulticastScriptDelegate& CommonActionComplete)
{
	CommonActionComplete.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventCommonActionProgressSingle_Parms
		{
			float HeldPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::NewProp_HeldPercent = { "HeldPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventCommonActionProgressSingle_Parms, HeldPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::NewProp_HeldPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Action progress delegate will tell a listener about the progress of an action being held. The \n * single delegate will be used for binding with a listener that the multicast delegate calls.\n */" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
		{ "ToolTip", "Action progress delegate will tell a listener about the progress of an action being held. The\nsingle delegate will be used for binding with a listener that the multicast delegate calls." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonActionProgressSingle__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::_Script_CommonUI_eventCommonActionProgressSingle_Parms), Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonActionProgressSingle__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonActionProgressSingle_DelegateWrapper(const FScriptDelegate& CommonActionProgressSingle, float HeldPercent)
{
	struct _Script_CommonUI_eventCommonActionProgressSingle_Parms
	{
		float HeldPercent;
	};
	_Script_CommonUI_eventCommonActionProgressSingle_Parms Parms;
	Parms.HeldPercent=HeldPercent;
	CommonActionProgressSingle.ProcessDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics
	{
		struct _Script_CommonUI_eventCommonActionProgress_Parms
		{
			float HeldPercent;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldPercent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::NewProp_HeldPercent = { "HeldPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonUI_eventCommonActionProgress_Parms, HeldPercent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::NewProp_HeldPercent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonUI, nullptr, "CommonActionProgress__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::_Script_CommonUI_eventCommonActionProgress_Parms), Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonUI_CommonActionProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCommonActionProgress_DelegateWrapper(const FMulticastScriptDelegate& CommonActionProgress, float HeldPercent)
{
	struct _Script_CommonUI_eventCommonActionProgress_Parms
	{
		float HeldPercent;
	};
	_Script_CommonUI_eventCommonActionProgress_Parms Parms;
	Parms.HeldPercent=HeldPercent;
	CommonActionProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData;
class UScriptStruct* FCommonInputActionHandlerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputActionHandlerData, (UObject*)Z_Construct_UPackage__Script_CommonUI(), TEXT("CommonInputActionHandlerData"));
	}
	return Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.OuterSingleton;
}
template<> COMMONUI_API UScriptStruct* StaticStruct<FCommonInputActionHandlerData>()
{
	return FCommonInputActionHandlerData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionRow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionRow;
		static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @FIXME: This struct is related to legacy CommonUI and should be removed in 5.3 - UE-164871\n" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
		{ "ToolTip", "@FIXME: This struct is related to legacy CommonUI and should be removed in 5.3 - UE-164871" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommonInputActionHandlerData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow = { "InputActionRow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionHandlerData, InputActionRow), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow_MetaData)) }; // 2710926200
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCommonInputActionHandlerData, State), Z_Construct_UEnum_CommonUI_EInputActionState, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_MetaData)) }; // 2789777555
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_InputActionRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewProp_State,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
		nullptr,
		&NewStructOps,
		"CommonInputActionHandlerData",
		sizeof(FCommonInputActionHandlerData),
		alignof(FCommonInputActionHandlerData),
		Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommonInputActionHandlerData()
	{
		if (!Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.InnerSingleton, Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData.InnerSingleton;
	}
	void UCommonActionHandlerInterface::StaticRegisterNativesUCommonActionHandlerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonActionHandlerInterface);
	UClass* Z_Construct_UClass_UCommonActionHandlerInterface_NoRegister()
	{
		return UCommonActionHandlerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommonActionHandlerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonActionHandlerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommonActionHandlerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonActionHandlerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommonActionHandlerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonActionHandlerInterface_Statics::ClassParams = {
		&UCommonActionHandlerInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonActionHandlerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonActionHandlerInterface()
	{
		if (!Z_Registration_Info_UClass_UCommonActionHandlerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonActionHandlerInterface.OuterSingleton, Z_Construct_UClass_UCommonActionHandlerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonActionHandlerInterface.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonActionHandlerInterface>()
	{
		return UCommonActionHandlerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonActionHandlerInterface);
	UCommonActionHandlerInterface::~UCommonActionHandlerInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ScriptStructInfo[] = {
		{ FCommonInputActionHandlerData::StaticStruct, Z_Construct_UScriptStruct_FCommonInputActionHandlerData_Statics::NewStructOps, TEXT("CommonInputActionHandlerData"), &Z_Registration_Info_UScriptStruct_CommonInputActionHandlerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCommonInputActionHandlerData), 3715159185U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonActionHandlerInterface, UCommonActionHandlerInterface::StaticClass, TEXT("UCommonActionHandlerInterface"), &Z_Registration_Info_UClass_UCommonActionHandlerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonActionHandlerInterface), 882271014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_1152856404(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonActionHandlerInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
