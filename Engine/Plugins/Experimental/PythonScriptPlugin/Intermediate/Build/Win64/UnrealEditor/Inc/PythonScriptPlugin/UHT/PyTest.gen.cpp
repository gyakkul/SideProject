// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PyTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePyTest() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildInterface_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildObject();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestChildObject_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObject();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObject_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObjectLibrary();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestObjectLibrary_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestOtherInterface_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructDelegate();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructDelegate_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructLibrary();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestStructLibrary_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestTypeHint();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestTypeHint_NoRegister();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestVectorDelegate();
	PYTHONSCRIPTPLUGIN_API UClass* Z_Construct_UClass_UPyTestVectorDelegate_NoRegister();
	PYTHONSCRIPTPLUGIN_API UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature();
	PYTHONSCRIPTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPyTestChildStruct();
	PYTHONSCRIPTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPyTestStruct();
	UPackage* Z_Construct_UPackage__Script_PythonScriptPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics
	{
		struct _Script_PythonScriptPlugin_eventPyTestDelegate_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PythonScriptPlugin_eventPyTestDelegate_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PythonScriptPlugin_eventPyTestDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate to allow testing of the various script delegate features that are exposed to Python wrapped types.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Delegate to allow testing of the various script delegate features that are exposed to Python wrapped types." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin, nullptr, "PyTestDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::_Script_PythonScriptPlugin_eventPyTestDelegate_Parms), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
int32 FPyTestDelegate_DelegateWrapper(const FScriptDelegate& PyTestDelegate, int32 InValue)
{
	struct _Script_PythonScriptPlugin_eventPyTestDelegate_Parms
	{
		int32 InValue;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		_Script_PythonScriptPlugin_eventPyTestDelegate_Parms()
			: ReturnValue(0)
		{
		}
	};
	_Script_PythonScriptPlugin_eventPyTestDelegate_Parms Parms;
	Parms.InValue=InValue;
	PyTestDelegate.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
	struct Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics
	{
		struct _Script_PythonScriptPlugin_eventPyTestMulticastDelegate_Parms
		{
			FString InStr;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PythonScriptPlugin_eventPyTestMulticastDelegate_Parms, InStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::NewProp_InStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Multicast delegate to allow testing of the various script delegate features that are exposed to Python wrapped types.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Multicast delegate to allow testing of the various script delegate features that are exposed to Python wrapped types." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin, nullptr, "PyTestMulticastDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::_Script_PythonScriptPlugin_eventPyTestMulticastDelegate_Parms), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPyTestMulticastDelegate_DelegateWrapper(const FMulticastScriptDelegate& PyTestMulticastDelegate, const FString& InStr)
{
	struct _Script_PythonScriptPlugin_eventPyTestMulticastDelegate_Parms
	{
		FString InStr;
	};
	_Script_PythonScriptPlugin_eventPyTestMulticastDelegate_Parms Parms;
	Parms.InStr=InStr;
	PyTestMulticastDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics
	{
		struct _Script_PythonScriptPlugin_eventPyTestSlateTickDelegate_Parms
		{
			float InDeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_PythonScriptPlugin_eventPyTestSlateTickDelegate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n * Delegate for slate pre/post tick event.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Delegate for slate pre/post tick event." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin, nullptr, "PyTestSlateTickDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::_Script_PythonScriptPlugin_eventPyTestSlateTickDelegate_Parms), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPyTestSlateTickDelegate_DelegateWrapper(const FScriptDelegate& PyTestSlateTickDelegate, float InDeltaTime)
{
	struct _Script_PythonScriptPlugin_eventPyTestSlateTickDelegate_Parms
	{
		float InDeltaTime;
	};
	_Script_PythonScriptPlugin_eventPyTestSlateTickDelegate_Parms Parms;
	Parms.InDeltaTime=InDeltaTime;
	PyTestSlateTickDelegate.ProcessDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPyTestEnum;
	static UEnum* EPyTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPyTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPyTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("EPyTestEnum"));
		}
		return Z_Registration_Info_UEnum_EPyTestEnum.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UEnum* StaticEnum<EPyTestEnum>()
	{
		return EPyTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enumerators[] = {
		{ "EPyTestEnum::One", (int64)EPyTestEnum::One },
		{ "EPyTestEnum::Two", (int64)EPyTestEnum::Two },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enum to allow testing of the various UEnum features that are exposed to Python wrapped types.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "One.DisplayName", "Says One but my value is Zero" },
		{ "One.Name", "EPyTestEnum::One" },
		{ "ToolTip", "Enum to allow testing of the various UEnum features that are exposed to Python wrapped types." },
		{ "Two.Name", "EPyTestEnum::Two" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		"EPyTestEnum",
		"EPyTestEnum",
		Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EPyTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPyTestEnum.InnerSingleton, Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPyTestEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PyTestStruct;
class UScriptStruct* FPyTestStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PyTestStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PyTestStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPyTestStruct, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("PyTestStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PyTestStruct.OuterSingleton;
}
template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<FPyTestStruct>()
{
	return FPyTestStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPyTestStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Enum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_FieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_StructFieldPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StringSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StringIntMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringIntMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegacyInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LegacyInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolInstanceOnly_MetaData[];
#endif
		static void NewProp_BoolInstanceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolInstanceOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolDefaultsOnly_MetaData[];
#endif
		static void NewProp_BoolDefaultsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolDefaultsOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolMutable_MetaData[];
#endif
		static void NewProp_BoolMutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolMutable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct to allow testing of the various UStruct features that are exposed to Python wrapped types.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Struct to allow testing of the various UStruct features that are exposed to Python wrapped types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPyTestStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((FPyTestStruct*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPyTestStruct), &Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Int_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, Int), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Int_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, Float), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, Enum), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum_MetaData)) }; // 231413325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_String_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, String), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_FieldPath_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_FieldPath = { "FieldPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, FieldPath), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_FieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_FieldPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StructFieldPath_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StructFieldPath = { "StructFieldPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, StructFieldPath), &FStructProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StructFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StructFieldPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, StringSet), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_ValueProp = { "StringIntMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_Key_KeyProp = { "StringIntMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap = { "StringIntMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, StringIntMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_LegacyInt_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "LegacyInt is deprecated. Please use Int instead." },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_LegacyInt = { "LegacyInt", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPyTestStruct, LegacyInt_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_LegacyInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_LegacyInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly_SetBit(void* Obj)
	{
		((FPyTestStruct*)Obj)->BoolInstanceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly = { "BoolInstanceOnly", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPyTestStruct), &Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly_SetBit(void* Obj)
	{
		((FPyTestStruct*)Obj)->BoolDefaultsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly = { "BoolDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPyTestStruct), &Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable_SetBit(void* Obj)
	{
		((FPyTestStruct*)Obj)->BoolMutable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable = { "BoolMutable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPyTestStruct), &Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPyTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_FieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StructFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_StringIntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_LegacyInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolInstanceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolDefaultsOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewProp_BoolMutable,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPyTestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		nullptr,
		&NewStructOps,
		"PyTestStruct",
		sizeof(FPyTestStruct),
		alignof(FPyTestStruct),
		Z_Construct_UScriptStruct_FPyTestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPyTestStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PyTestStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PyTestStruct.InnerSingleton, Z_Construct_UScriptStruct_FPyTestStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PyTestStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPyTestChildStruct>() == std::is_polymorphic<FPyTestStruct>(), "USTRUCT FPyTestChildStruct cannot be polymorphic unless super FPyTestStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PyTestChildStruct;
class UScriptStruct* FPyTestChildStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PyTestChildStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PyTestChildStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPyTestChildStruct, (UObject*)Z_Construct_UPackage__Script_PythonScriptPlugin(), TEXT("PyTestChildStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PyTestChildStruct.OuterSingleton;
}
template<> PYTHONSCRIPTPLUGIN_API UScriptStruct* StaticStruct<FPyTestChildStruct>()
{
	return FPyTestChildStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPyTestChildStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Struct to allow testing of inheritance on Python wrapped types.\n */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Struct to allow testing of inheritance on Python wrapped types." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPyTestChildStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
		Z_Construct_UScriptStruct_FPyTestStruct,
		&NewStructOps,
		"PyTestChildStruct",
		sizeof(FPyTestChildStruct),
		alignof(FPyTestChildStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPyTestChildStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PyTestChildStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PyTestChildStruct.InnerSingleton, Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PyTestChildStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execClearBoolMutableViaRef)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestStructLibrary::ClearBoolMutableViaRef(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execSetBoolMutableViaRef)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestStructLibrary::SetBoolMutableViaRef(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execClearBoolMutable)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestStructLibrary::ClearBoolMutable(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execSetBoolMutable)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestStructLibrary::SetBoolMutable(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execAddStr)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPyTestStruct*)Z_Param__Result=UPyTestStructLibrary::AddStr(Z_Param_Out_InStruct,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execAddFloat)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPyTestStruct*)Z_Param__Result=UPyTestStructLibrary::AddFloat(Z_Param_Out_InStruct,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execAddInt)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPyTestStruct*)Z_Param__Result=UPyTestStructLibrary::AddInt(Z_Param_Out_InStruct,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execGetConstantValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPyTestStructLibrary::GetConstantValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execLegacyIsBoolSet)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPyTestStructLibrary::LegacyIsBoolSet(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestStructLibrary::execIsBoolSet)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPyTestStructLibrary::IsBoolSet(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	void UPyTestStructLibrary::StaticRegisterNativesUPyTestStructLibrary()
	{
		UClass* Class = UPyTestStructLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFloat", &UPyTestStructLibrary::execAddFloat },
			{ "AddInt", &UPyTestStructLibrary::execAddInt },
			{ "AddStr", &UPyTestStructLibrary::execAddStr },
			{ "ClearBoolMutable", &UPyTestStructLibrary::execClearBoolMutable },
			{ "ClearBoolMutableViaRef", &UPyTestStructLibrary::execClearBoolMutableViaRef },
			{ "GetConstantValue", &UPyTestStructLibrary::execGetConstantValue },
			{ "IsBoolSet", &UPyTestStructLibrary::execIsBoolSet },
			{ "LegacyIsBoolSet", &UPyTestStructLibrary::execLegacyIsBoolSet },
			{ "SetBoolMutable", &UPyTestStructLibrary::execSetBoolMutable },
			{ "SetBoolMutableViaRef", &UPyTestStructLibrary::execSetBoolMutableViaRef },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics
	{
		struct PyTestStructLibrary_eventAddFloat_Parms
		{
			FPyTestStruct InStruct;
			float InValue;
			FPyTestStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddFloat_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddFloat_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "AddFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::PyTestStructLibrary_eventAddFloat_Parms), Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_AddFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_AddFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics
	{
		struct PyTestStructLibrary_eventAddInt_Parms
		{
			FPyTestStruct InStruct;
			int32 InValue;
			FPyTestStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddInt_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddInt_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "AddInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::PyTestStructLibrary_eventAddInt_Parms), Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_AddInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_AddInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics
	{
		struct PyTestStructLibrary_eventAddStr_Parms
		{
			FPyTestStruct InStruct;
			FString InValue;
			FPyTestStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddStr_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddStr_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventAddStr_Parms, ReturnValue), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodSelfReturn", "" },
		{ "ScriptOperator", "+;+=" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "AddStr", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::PyTestStructLibrary_eventAddStr_Parms), Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_AddStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_AddStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics
	{
		struct PyTestStructLibrary_eventClearBoolMutable_Parms
		{
			FPyTestStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventClearBoolMutable_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodMutable", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "ClearBoolMutable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::PyTestStructLibrary_eventClearBoolMutable_Parms), Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics
	{
		struct PyTestStructLibrary_eventClearBoolMutableViaRef_Parms
		{
			FPyTestStruct InStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventClearBoolMutableViaRef_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodMutable", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "ClearBoolMutableViaRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::PyTestStructLibrary_eventClearBoolMutableViaRef_Parms), Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics
	{
		struct PyTestStructLibrary_eventGetConstantValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventGetConstantValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptConstant", "ConstantValue" },
		{ "ScriptConstantHost", "/Script/PythonScriptPlugin.PyTestStruct" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "GetConstantValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::PyTestStructLibrary_eventGetConstantValue_Parms), Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics
	{
		struct PyTestStructLibrary_eventIsBoolSet_Parms
		{
			FPyTestStruct InStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventIsBoolSet_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	void Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyTestStructLibrary_eventIsBoolSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestStructLibrary_eventIsBoolSet_Parms), &Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "IsBoolSet;IsBoolSetOld" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "IsBoolSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::PyTestStructLibrary_eventIsBoolSet_Parms), Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics
	{
		struct PyTestStructLibrary_eventLegacyIsBoolSet_Parms
		{
			FPyTestStruct InStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventLegacyIsBoolSet_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	void Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyTestStructLibrary_eventLegacyIsBoolSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestStructLibrary_eventLegacyIsBoolSet_Parms), &Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "LegacyIsBoolSet is deprecated. Please use IsBoolSet instead." },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "LegacyIsBoolSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::PyTestStructLibrary_eventLegacyIsBoolSet_Parms), Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics
	{
		struct PyTestStructLibrary_eventSetBoolMutable_Parms
		{
			FPyTestStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventSetBoolMutable_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodMutable", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "SetBoolMutable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::PyTestStructLibrary_eventSetBoolMutable_Parms), Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics
	{
		struct PyTestStructLibrary_eventSetBoolMutableViaRef_Parms
		{
			FPyTestStruct InStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructLibrary_eventSetBoolMutableViaRef_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "" },
		{ "ScriptMethodMutable", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructLibrary, nullptr, "SetBoolMutableViaRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::PyTestStructLibrary_eventSetBoolMutableViaRef_Parms), Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestStructLibrary);
	UClass* Z_Construct_UClass_UPyTestStructLibrary_NoRegister()
	{
		return UPyTestStructLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestStructLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestStructLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestStructLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestStructLibrary_AddFloat, "AddFloat" }, // 4201218682
		{ &Z_Construct_UFunction_UPyTestStructLibrary_AddInt, "AddInt" }, // 3842745256
		{ &Z_Construct_UFunction_UPyTestStructLibrary_AddStr, "AddStr" }, // 4082972129
		{ &Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutable, "ClearBoolMutable" }, // 1610309167
		{ &Z_Construct_UFunction_UPyTestStructLibrary_ClearBoolMutableViaRef, "ClearBoolMutableViaRef" }, // 1218065671
		{ &Z_Construct_UFunction_UPyTestStructLibrary_GetConstantValue, "GetConstantValue" }, // 340788054
		{ &Z_Construct_UFunction_UPyTestStructLibrary_IsBoolSet, "IsBoolSet" }, // 2191670179
		{ &Z_Construct_UFunction_UPyTestStructLibrary_LegacyIsBoolSet, "LegacyIsBoolSet" }, // 1396724746
		{ &Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutable, "SetBoolMutable" }, // 1012100836
		{ &Z_Construct_UFunction_UPyTestStructLibrary_SetBoolMutableViaRef, "SetBoolMutableViaRef" }, // 2179136965
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestStructLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto the test struct in Python.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto the test struct in Python." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestStructLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestStructLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestStructLibrary_Statics::ClassParams = {
		&UPyTestStructLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestStructLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestStructLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestStructLibrary()
	{
		if (!Z_Registration_Info_UClass_UPyTestStructLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestStructLibrary.OuterSingleton, Z_Construct_UClass_UPyTestStructLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestStructLibrary.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestStructLibrary>()
	{
		return UPyTestStructLibrary::StaticClass();
	}
	UPyTestStructLibrary::UPyTestStructLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestStructLibrary);
	UPyTestStructLibrary::~UPyTestStructLibrary() {}
	DEFINE_FUNCTION(UPyTestObject::execGetConstantValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPyTestObject::GetConstantValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execEmitScriptWarning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestObject::EmitScriptWarning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execEmitScriptError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UPyTestObject::EmitScriptError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execReturnFieldPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TFieldPath<FProperty>*)Z_Param__Result=UPyTestObject::ReturnFieldPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execReturnMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<int32,bool>*)Z_Param__Result=UPyTestObject::ReturnMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execReturnSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<int32>*)Z_Param__Result=UPyTestObject::ReturnSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execReturnArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UPyTestObject::ReturnArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execMulticastDelegatePropertyCallback)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastDelegatePropertyCallback(Z_Param_InStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execDelegatePropertyCallback)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DelegatePropertyCallback(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncTakingFieldPath)
	{
		P_GET_TFIELDPATH_REF(TFieldPath<FProperty>,Z_Param_Out_InFieldPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FuncTakingFieldPath(Z_Param_Out_InFieldPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncTakingPyTestDelegate)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_InDelegate);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FuncTakingPyTestDelegate(FPyTestDelegate(Z_Param_Out_InDelegate),Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncTakingPyTestStructDefault)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FuncTakingPyTestStructDefault(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execLegacyFuncTakingPyTestStruct)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LegacyFuncTakingPyTestStruct(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncTakingPyTestChildStruct)
	{
		P_GET_STRUCT_REF(FPyTestChildStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FuncTakingPyTestChildStruct(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncTakingPyTestStruct)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FuncTakingPyTestStruct(Z_Param_Out_InStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execCallFuncBlueprintNativeRef)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InOutStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CallFuncBlueprintNativeRef(Z_Param_Out_InOutStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execCallFuncBlueprintNative)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CallFuncBlueprintNative(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execCallFuncBlueprintImplementable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CallFuncBlueprintImplementable(Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncBlueprintNativeRef)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_InOutStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FuncBlueprintNativeRef_Implementation(Z_Param_Out_InOutStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObject::execFuncBlueprintNative)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FuncBlueprintNative_Implementation(Z_Param_InValue);
		P_NATIVE_END;
	}
	struct PyTestObject_eventFuncBlueprintImplementable_Parms
	{
		int32 InValue;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PyTestObject_eventFuncBlueprintImplementable_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PyTestObject_eventFuncBlueprintNative_Parms
	{
		int32 InValue;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		PyTestObject_eventFuncBlueprintNative_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct PyTestObject_eventFuncBlueprintNativeRef_Parms
	{
		FPyTestStruct InOutStruct;
	};
	static FName NAME_UPyTestObject_FuncBlueprintImplementable = FName(TEXT("FuncBlueprintImplementable"));
	int32 UPyTestObject::FuncBlueprintImplementable(const int32 InValue) const
	{
		PyTestObject_eventFuncBlueprintImplementable_Parms Parms;
		Parms.InValue=InValue;
		const_cast<UPyTestObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPyTestObject_FuncBlueprintImplementable),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPyTestObject_FuncBlueprintNative = FName(TEXT("FuncBlueprintNative"));
	int32 UPyTestObject::FuncBlueprintNative(const int32 InValue) const
	{
		PyTestObject_eventFuncBlueprintNative_Parms Parms;
		Parms.InValue=InValue;
		const_cast<UPyTestObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPyTestObject_FuncBlueprintNative),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UPyTestObject_FuncBlueprintNativeRef = FName(TEXT("FuncBlueprintNativeRef"));
	void UPyTestObject::FuncBlueprintNativeRef(FPyTestStruct& InOutStruct) const
	{
		PyTestObject_eventFuncBlueprintNativeRef_Parms Parms;
		Parms.InOutStruct=InOutStruct;
		const_cast<UPyTestObject*>(this)->ProcessEvent(FindFunctionChecked(NAME_UPyTestObject_FuncBlueprintNativeRef),&Parms);
		InOutStruct=Parms.InOutStruct;
	}
	void UPyTestObject::StaticRegisterNativesUPyTestObject()
	{
		UClass* Class = UPyTestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CallFuncBlueprintImplementable", &UPyTestObject::execCallFuncBlueprintImplementable },
			{ "CallFuncBlueprintNative", &UPyTestObject::execCallFuncBlueprintNative },
			{ "CallFuncBlueprintNativeRef", &UPyTestObject::execCallFuncBlueprintNativeRef },
			{ "DelegatePropertyCallback", &UPyTestObject::execDelegatePropertyCallback },
			{ "EmitScriptError", &UPyTestObject::execEmitScriptError },
			{ "EmitScriptWarning", &UPyTestObject::execEmitScriptWarning },
			{ "FuncBlueprintNative", &UPyTestObject::execFuncBlueprintNative },
			{ "FuncBlueprintNativeRef", &UPyTestObject::execFuncBlueprintNativeRef },
			{ "FuncTakingFieldPath", &UPyTestObject::execFuncTakingFieldPath },
			{ "FuncTakingPyTestChildStruct", &UPyTestObject::execFuncTakingPyTestChildStruct },
			{ "FuncTakingPyTestDelegate", &UPyTestObject::execFuncTakingPyTestDelegate },
			{ "FuncTakingPyTestStruct", &UPyTestObject::execFuncTakingPyTestStruct },
			{ "FuncTakingPyTestStructDefault", &UPyTestObject::execFuncTakingPyTestStructDefault },
			{ "GetConstantValue", &UPyTestObject::execGetConstantValue },
			{ "LegacyFuncTakingPyTestStruct", &UPyTestObject::execLegacyFuncTakingPyTestStruct },
			{ "MulticastDelegatePropertyCallback", &UPyTestObject::execMulticastDelegatePropertyCallback },
			{ "ReturnArray", &UPyTestObject::execReturnArray },
			{ "ReturnFieldPath", &UPyTestObject::execReturnFieldPath },
			{ "ReturnMap", &UPyTestObject::execReturnMap },
			{ "ReturnSet", &UPyTestObject::execReturnSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics
	{
		struct PyTestObject_eventCallFuncBlueprintImplementable_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventCallFuncBlueprintImplementable_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventCallFuncBlueprintImplementable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "CallFuncBlueprintImplementable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::PyTestObject_eventCallFuncBlueprintImplementable_Parms), Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics
	{
		struct PyTestObject_eventCallFuncBlueprintNative_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventCallFuncBlueprintNative_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventCallFuncBlueprintNative_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "CallFuncBlueprintNative", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::PyTestObject_eventCallFuncBlueprintNative_Parms), Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics
	{
		struct PyTestObject_eventCallFuncBlueprintNativeRef_Parms
		{
			FPyTestStruct InOutStruct;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::NewProp_InOutStruct = { "InOutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventCallFuncBlueprintNativeRef_Parms, InOutStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::NewProp_InOutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "CallFuncBlueprintNativeRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::PyTestObject_eventCallFuncBlueprintNativeRef_Parms), Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics
	{
		struct PyTestObject_eventDelegatePropertyCallback_Parms
		{
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventDelegatePropertyCallback_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventDelegatePropertyCallback_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "// UHT couldn't parse any default value for the FieldPath.\n" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "UHT couldn't parse any default value for the FieldPath." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "DelegatePropertyCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::PyTestObject_eventDelegatePropertyCallback_Parms), Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "EmitScriptError", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_EmitScriptError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_EmitScriptError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "EmitScriptWarning", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_EmitScriptWarning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_EmitScriptWarning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncBlueprintImplementable_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncBlueprintImplementable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncBlueprintImplementable", nullptr, nullptr, sizeof(PyTestObject_eventFuncBlueprintImplementable_Parms), Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncBlueprintNative_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncBlueprintNative_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncBlueprintNative", nullptr, nullptr, sizeof(PyTestObject_eventFuncBlueprintNative_Parms), Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::NewProp_InOutStruct = { "InOutStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncBlueprintNativeRef_Parms, InOutStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::NewProp_InOutStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncBlueprintNativeRef", nullptr, nullptr, sizeof(PyTestObject_eventFuncBlueprintNativeRef_Parms), Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics
	{
		struct PyTestObject_eventFuncTakingFieldPath_Parms
		{
			TFieldPath<FProperty> InFieldPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_InFieldPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::NewProp_InFieldPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::NewProp_InFieldPath = { "InFieldPath", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingFieldPath_Parms, InFieldPath), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::NewProp_InFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::NewProp_InFieldPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::NewProp_InFieldPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncTakingFieldPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::PyTestObject_eventFuncTakingFieldPath_Parms), Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics
	{
		struct PyTestObject_eventFuncTakingPyTestChildStruct_Parms
		{
			FPyTestChildStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestChildStruct_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestChildStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::NewProp_InStruct_MetaData)) }; // 3117032670
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncTakingPyTestChildStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::PyTestObject_eventFuncTakingPyTestChildStruct_Parms), Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics
	{
		struct PyTestObject_eventFuncTakingPyTestDelegate_Parms
		{
			FScriptDelegate InDelegate;
			int32 InValue;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_InDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InDelegate = { "InDelegate", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestDelegate_Parms, InDelegate), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InDelegate_MetaData)) }; // 1317921057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestDelegate_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestDelegate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncTakingPyTestDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::PyTestObject_eventFuncTakingPyTestDelegate_Parms), Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics
	{
		struct PyTestObject_eventFuncTakingPyTestStruct_Parms
		{
			FPyTestStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestStruct_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncTakingPyTestStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::PyTestObject_eventFuncTakingPyTestStruct_Parms), Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics
	{
		struct PyTestObject_eventFuncTakingPyTestStructDefault_Parms
		{
			FPyTestStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventFuncTakingPyTestStructDefault_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_InStruct", "()" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "FuncTakingPyTestStructDefault", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::PyTestObject_eventFuncTakingPyTestStructDefault_Parms), Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics
	{
		struct PyTestObject_eventGetConstantValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventGetConstantValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptConstant", "ConstantValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "GetConstantValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::PyTestObject_eventGetConstantValue_Parms), Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_GetConstantValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_GetConstantValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics
	{
		struct PyTestObject_eventLegacyFuncTakingPyTestStruct_Parms
		{
			FPyTestStruct InStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventLegacyFuncTakingPyTestStruct_Parms, InStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::NewProp_InStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::NewProp_InStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "LegacyFuncTakingPyTestStruct is deprecated. Please use FuncTakingPyTestStruct instead." },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "LegacyFuncTakingPyTestStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::PyTestObject_eventLegacyFuncTakingPyTestStruct_Parms), Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics
	{
		struct PyTestObject_eventMulticastDelegatePropertyCallback_Parms
		{
			FString InStr;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::NewProp_InStr = { "InStr", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventMulticastDelegatePropertyCallback_Parms, InStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::NewProp_InStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "MulticastDelegatePropertyCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::PyTestObject_eventMulticastDelegatePropertyCallback_Parms), Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics
	{
		struct PyTestObject_eventReturnArray_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventReturnArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "ReturnArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::PyTestObject_eventReturnArray_Parms), Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_ReturnArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_ReturnArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics
	{
		struct PyTestObject_eventReturnFieldPath_Parms
		{
			TFieldPath<FProperty> ReturnValue;
		};
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventReturnFieldPath_Parms, ReturnValue), &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "ReturnFieldPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::PyTestObject_eventReturnFieldPath_Parms), Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_ReturnFieldPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_ReturnFieldPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics
	{
		struct PyTestObject_eventReturnMap_Parms
		{
			TMap<int32,bool> ReturnValue;
		};
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventReturnMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "ReturnMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::PyTestObject_eventReturnMap_Parms), Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_ReturnMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_ReturnMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics
	{
		struct PyTestObject_eventReturnSet_Parms
		{
			TSet<int32> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObject_eventReturnSet_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObject, nullptr, "ReturnSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::PyTestObject_eventReturnSet_Parms), Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObject_ReturnSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObject_ReturnSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestObject);
	UClass* Z_Construct_UClass_UPyTestObject_NoRegister()
	{
		return UPyTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bool_MetaData[];
#endif
		static void NewProp_Bool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Bool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Int;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Float_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Float;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Enum_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_FieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_StructFieldPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StringArray;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringSet_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringSet_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_StringSet;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StringIntMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringIntMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringIntMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StringIntMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Delegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MulticastDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MulticastDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Struct;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolInstanceOnly_MetaData[];
#endif
		static void NewProp_BoolInstanceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolInstanceOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolDefaultsOnly_MetaData[];
#endif
		static void NewProp_BoolDefaultsOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolDefaultsOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintImplementable, "CallFuncBlueprintImplementable" }, // 2089817854
		{ &Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNative, "CallFuncBlueprintNative" }, // 3008416660
		{ &Z_Construct_UFunction_UPyTestObject_CallFuncBlueprintNativeRef, "CallFuncBlueprintNativeRef" }, // 1759788333
		{ &Z_Construct_UFunction_UPyTestObject_DelegatePropertyCallback, "DelegatePropertyCallback" }, // 2838462714
		{ &Z_Construct_UFunction_UPyTestObject_EmitScriptError, "EmitScriptError" }, // 3069415936
		{ &Z_Construct_UFunction_UPyTestObject_EmitScriptWarning, "EmitScriptWarning" }, // 2681373233
		{ &Z_Construct_UFunction_UPyTestObject_FuncBlueprintImplementable, "FuncBlueprintImplementable" }, // 3622793254
		{ &Z_Construct_UFunction_UPyTestObject_FuncBlueprintNative, "FuncBlueprintNative" }, // 3810265903
		{ &Z_Construct_UFunction_UPyTestObject_FuncBlueprintNativeRef, "FuncBlueprintNativeRef" }, // 3607285615
		{ &Z_Construct_UFunction_UPyTestObject_FuncTakingFieldPath, "FuncTakingFieldPath" }, // 2141224891
		{ &Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestChildStruct, "FuncTakingPyTestChildStruct" }, // 1756482482
		{ &Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestDelegate, "FuncTakingPyTestDelegate" }, // 518828463
		{ &Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStruct, "FuncTakingPyTestStruct" }, // 392723139
		{ &Z_Construct_UFunction_UPyTestObject_FuncTakingPyTestStructDefault, "FuncTakingPyTestStructDefault" }, // 2307811194
		{ &Z_Construct_UFunction_UPyTestObject_GetConstantValue, "GetConstantValue" }, // 1162282281
		{ &Z_Construct_UFunction_UPyTestObject_LegacyFuncTakingPyTestStruct, "LegacyFuncTakingPyTestStruct" }, // 3632870973
		{ &Z_Construct_UFunction_UPyTestObject_MulticastDelegatePropertyCallback, "MulticastDelegatePropertyCallback" }, // 311623566
		{ &Z_Construct_UFunction_UPyTestObject_ReturnArray, "ReturnArray" }, // 2788803916
		{ &Z_Construct_UFunction_UPyTestObject_ReturnFieldPath, "ReturnFieldPath" }, // 842526212
		{ &Z_Construct_UFunction_UPyTestObject_ReturnMap, "ReturnMap" }, // 1968374651
		{ &Z_Construct_UFunction_UPyTestObject_ReturnSet, "ReturnSet" }, // 2431639578
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Object to allow testing of the various UObject features that are exposed to Python wrapped types.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Object to allow testing of the various UObject features that are exposed to Python wrapped types." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool_SetBit(void* Obj)
	{
		((UPyTestObject*)Obj)->Bool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool = { "Bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPyTestObject), &Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Int_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Int = { "Int", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Int), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Int_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Int_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Float_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Float = { "Float", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Float), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Float_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Float_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Enum), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum_MetaData)) }; // 231413325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_String_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, String), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_String_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Name), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Text), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_FieldPath_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_FieldPath = { "FieldPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, FieldPath), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_FieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_FieldPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructFieldPath_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructFieldPath = { "StructFieldPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, StructFieldPath), &FStructProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructFieldPath_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray_Inner = { "StringArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray = { "StringArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, StringArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet_ElementProp = { "StringSet", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet = { "StringSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, StringSet), METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_ValueProp = { "StringIntMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_Key_KeyProp = { "StringIntMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap = { "StringIntMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, StringIntMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Delegate_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Delegate), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Delegate_MetaData)) }; // 1317921057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_MulticastDelegate_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_MulticastDelegate = { "MulticastDelegate", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, MulticastDelegate), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_MulticastDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_MulticastDelegate_MetaData)) }; // 1166675841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_Struct_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, Struct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_Struct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray_Inner = { "StructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray = { "StructArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, StructArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_ChildStruct_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_ChildStruct = { "ChildStruct", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestObject, ChildStruct), Z_Construct_UScriptStruct_FPyTestChildStruct, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_ChildStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_ChildStruct_MetaData)) }; // 3117032670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly_SetBit(void* Obj)
	{
		((UPyTestObject*)Obj)->BoolInstanceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly = { "BoolInstanceOnly", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPyTestObject), &Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	void Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly_SetBit(void* Obj)
	{
		((UPyTestObject*)Obj)->BoolDefaultsOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly = { "BoolDefaultsOnly", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPyTestObject), &Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Bool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Int,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Float,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_FieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StringIntMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_MulticastDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_StructArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_ChildStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolInstanceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestObject_Statics::NewProp_BoolDefaultsOnly,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPyTestObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPyTestChildInterface_NoRegister, (int32)VTABLE_OFFSET(UPyTestObject, IPyTestChildInterface), false },  // 1756246068
			{ Z_Construct_UClass_UPyTestOtherInterface_NoRegister, (int32)VTABLE_OFFSET(UPyTestObject, IPyTestOtherInterface), false },  // 3447226827
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestObject_Statics::ClassParams = {
		&UPyTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPyTestObject_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestObject()
	{
		if (!Z_Registration_Info_UClass_UPyTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestObject.OuterSingleton, Z_Construct_UClass_UPyTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestObject.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestObject>()
	{
		return UPyTestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestObject);
	UPyTestObject::~UPyTestObject() {}
	void UPyTestChildObject::StaticRegisterNativesUPyTestChildObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestChildObject);
	UClass* Z_Construct_UClass_UPyTestChildObject_NoRegister()
	{
		return UPyTestChildObject::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestChildObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestChildObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPyTestObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestChildObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Object to allow testing of inheritance on Python wrapped types.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Object to allow testing of inheritance on Python wrapped types." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestChildObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestChildObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestChildObject_Statics::ClassParams = {
		&UPyTestChildObject::StaticClass,
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
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestChildObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestChildObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestChildObject()
	{
		if (!Z_Registration_Info_UClass_UPyTestChildObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestChildObject.OuterSingleton, Z_Construct_UClass_UPyTestChildObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestChildObject.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestChildObject>()
	{
		return UPyTestChildObject::StaticClass();
	}
	UPyTestChildObject::UPyTestChildObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestChildObject);
	UPyTestChildObject::~UPyTestChildObject() {}
	void UDEPRECATED_LegacyPyTestObject::StaticRegisterNativesUDEPRECATED_LegacyPyTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_LegacyPyTestObject);
	UClass* Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_NoRegister()
	{
		return UDEPRECATED_LegacyPyTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPyTestObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Object to test deprecation of Python wrapped types.\n */" },
		{ "DeprecationMessage", "LegacyPyTestObject is deprecated. Please use PyTestObject instead." },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Object to test deprecation of Python wrapped types." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_LegacyPyTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::ClassParams = {
		&UDEPRECATED_LegacyPyTestObject::StaticClass,
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
		0x028002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_LegacyPyTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_LegacyPyTestObject.OuterSingleton, Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_LegacyPyTestObject.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UDEPRECATED_LegacyPyTestObject>()
	{
		return UDEPRECATED_LegacyPyTestObject::StaticClass();
	}
	UDEPRECATED_LegacyPyTestObject::UDEPRECATED_LegacyPyTestObject() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_LegacyPyTestObject);
	UDEPRECATED_LegacyPyTestObject::~UDEPRECATED_LegacyPyTestObject() {}
	DEFINE_FUNCTION(UPyTestObjectLibrary::execGetOtherConstantValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPyTestObjectLibrary::GetOtherConstantValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestObjectLibrary::execIsBoolSet)
	{
		P_GET_OBJECT(UPyTestObject,Z_Param_InObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPyTestObjectLibrary::IsBoolSet(Z_Param_InObj);
		P_NATIVE_END;
	}
	void UPyTestObjectLibrary::StaticRegisterNativesUPyTestObjectLibrary()
	{
		UClass* Class = UPyTestObjectLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOtherConstantValue", &UPyTestObjectLibrary::execGetOtherConstantValue },
			{ "IsBoolSet", &UPyTestObjectLibrary::execIsBoolSet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics
	{
		struct PyTestObjectLibrary_eventGetOtherConstantValue_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObjectLibrary_eventGetOtherConstantValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptConstant", "OtherConstantValue" },
		{ "ScriptConstantHost", "/Script/PythonScriptPlugin.PyTestObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObjectLibrary, nullptr, "GetOtherConstantValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::PyTestObjectLibrary_eventGetOtherConstantValue_Parms), Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics
	{
		struct PyTestObjectLibrary_eventIsBoolSet_Parms
		{
			const UPyTestObject* InObj;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InObj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObj;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_InObj_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_InObj = { "InObj", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestObjectLibrary_eventIsBoolSet_Parms, InObj), Z_Construct_UClass_UPyTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_InObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_InObj_MetaData)) };
	void Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyTestObjectLibrary_eventIsBoolSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestObjectLibrary_eventIsBoolSet_Parms), &Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_InObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptMethod", "IsBoolSet" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestObjectLibrary, nullptr, "IsBoolSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::PyTestObjectLibrary_eventIsBoolSet_Parms), Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestObjectLibrary);
	UClass* Z_Construct_UClass_UPyTestObjectLibrary_NoRegister()
	{
		return UPyTestObjectLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestObjectLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestObjectLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestObjectLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestObjectLibrary_GetOtherConstantValue, "GetOtherConstantValue" }, // 916182560
		{ &Z_Construct_UFunction_UPyTestObjectLibrary_IsBoolSet, "IsBoolSet" }, // 1180687670
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestObjectLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library containing methods that should be hoisted onto the test object in Python.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Function library containing methods that should be hoisted onto the test object in Python." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestObjectLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestObjectLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestObjectLibrary_Statics::ClassParams = {
		&UPyTestObjectLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestObjectLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestObjectLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestObjectLibrary()
	{
		if (!Z_Registration_Info_UClass_UPyTestObjectLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestObjectLibrary.OuterSingleton, Z_Construct_UClass_UPyTestObjectLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestObjectLibrary.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestObjectLibrary>()
	{
		return UPyTestObjectLibrary::StaticClass();
	}
	UPyTestObjectLibrary::UPyTestObjectLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestObjectLibrary);
	UPyTestObjectLibrary::~UPyTestObjectLibrary() {}
	struct Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics
	{
		struct PyTestStructDelegate_eventOnNameCollisionDelegate_Parms
		{
			FPyTestStruct PyStruct;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_PyStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_PyStruct = { "PyStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestStructDelegate_eventOnNameCollisionDelegate_Parms, PyStruct), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_PyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_PyStruct_MetaData)) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_PyStruct,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestStructDelegate, nullptr, "OnNameCollisionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PyTestStructDelegate_eventOnNameCollisionDelegate_Parms), Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPyTestStructDelegate::FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FPyTestStruct const& PyStruct)
{
	struct PyTestStructDelegate_eventOnNameCollisionDelegate_Parms
	{
		FPyTestStruct PyStruct;
	};
	PyTestStructDelegate_eventOnNameCollisionDelegate_Parms Parms;
	Parms.PyStruct=PyStruct;
	OnNameCollisionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPyTestStructDelegate::StaticRegisterNativesUPyTestStructDelegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestStructDelegate);
	UClass* Z_Construct_UClass_UPyTestStructDelegate_NoRegister()
	{
		return UPyTestStructDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestStructDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNameCollisionTestDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNameCollisionTestDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestStructDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestStructDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature, "OnNameCollisionDelegate__DelegateSignature" }, // 3088964282
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestStructDelegate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class along with UPyTestVectorDelegate verify that 2 UObjects with the same delegate name/type, do not collide.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "This class along with UPyTestVectorDelegate verify that 2 UObjects with the same delegate name/type, do not collide." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestStructDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "/** Called when a new item is selected in the combobox. */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPyTestStructDelegate_Statics::NewProp_OnNameCollisionTestDelegate = { "OnNameCollisionTestDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestStructDelegate, OnNameCollisionTestDelegate), Z_Construct_UDelegateFunction_UPyTestStructDelegate_OnNameCollisionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestStructDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestStructDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData)) }; // 3088964282
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyTestStructDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestStructDelegate_Statics::NewProp_OnNameCollisionTestDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestStructDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestStructDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestStructDelegate_Statics::ClassParams = {
		&UPyTestStructDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPyTestStructDelegate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestStructDelegate_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestStructDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestStructDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestStructDelegate()
	{
		if (!Z_Registration_Info_UClass_UPyTestStructDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestStructDelegate.OuterSingleton, Z_Construct_UClass_UPyTestStructDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestStructDelegate.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestStructDelegate>()
	{
		return UPyTestStructDelegate::StaticClass();
	}
	UPyTestStructDelegate::UPyTestStructDelegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestStructDelegate);
	UPyTestStructDelegate::~UPyTestStructDelegate() {}
	struct Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics
	{
		struct PyTestVectorDelegate_eventOnNameCollisionDelegate_Parms
		{
			FVector2D Vec;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vec_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_Vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestVectorDelegate_eventOnNameCollisionDelegate_Parms, Vec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_Vec_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_Vec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::NewProp_Vec,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestVectorDelegate, nullptr, "OnNameCollisionDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PyTestVectorDelegate_eventOnNameCollisionDelegate_Parms), Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UPyTestVectorDelegate::FOnNameCollisionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnNameCollisionDelegate, FVector2D const& Vec)
{
	struct PyTestVectorDelegate_eventOnNameCollisionDelegate_Parms
	{
		FVector2D Vec;
	};
	PyTestVectorDelegate_eventOnNameCollisionDelegate_Parms Parms;
	Parms.Vec=Vec;
	OnNameCollisionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UPyTestVectorDelegate::StaticRegisterNativesUPyTestVectorDelegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestVectorDelegate);
	UClass* Z_Construct_UClass_UPyTestVectorDelegate_NoRegister()
	{
		return UPyTestVectorDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestVectorDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNameCollisionTestDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNameCollisionTestDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestVectorDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestVectorDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature, "OnNameCollisionDelegate__DelegateSignature" }, // 356707349
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestVectorDelegate_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class along with UPyTestStructDelegate verify that 2 UObjects with the same delegate name/type, do not collide.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "This class along with UPyTestStructDelegate verify that 2 UObjects with the same delegate name/type, do not collide." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestVectorDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "/** Called when a new item is selected in the combobox. */" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Called when a new item is selected in the combobox." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPyTestVectorDelegate_Statics::NewProp_OnNameCollisionTestDelegate = { "OnNameCollisionTestDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestVectorDelegate, OnNameCollisionTestDelegate), Z_Construct_UDelegateFunction_UPyTestVectorDelegate_OnNameCollisionDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestVectorDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestVectorDelegate_Statics::NewProp_OnNameCollisionTestDelegate_MetaData)) }; // 356707349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyTestVectorDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestVectorDelegate_Statics::NewProp_OnNameCollisionTestDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestVectorDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestVectorDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestVectorDelegate_Statics::ClassParams = {
		&UPyTestVectorDelegate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UPyTestVectorDelegate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestVectorDelegate_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestVectorDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestVectorDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestVectorDelegate()
	{
		if (!Z_Registration_Info_UClass_UPyTestVectorDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestVectorDelegate.OuterSingleton, Z_Construct_UClass_UPyTestVectorDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestVectorDelegate.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestVectorDelegate>()
	{
		return UPyTestVectorDelegate::StaticClass();
	}
	UPyTestVectorDelegate::UPyTestVectorDelegate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestVectorDelegate);
	UPyTestVectorDelegate::~UPyTestVectorDelegate() {}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckTupleReturnType)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InOutString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPyTestTypeHint::CheckTupleReturnType(Z_Param_Out_InOutString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckStaticFunction)
	{
		P_GET_UBOOL(Z_Param_Param1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Param2);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Param3);
		P_GET_PROPERTY(FStrProperty,Z_Param_Param4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPyTestTypeHint::CheckStaticFunction(Z_Param_Param1,Z_Param_Param2,Z_Param_Param3,Z_Param_Param4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckDelegateTypeHints)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Param1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPyTestDelegate*)Z_Param__Result=P_THIS->CheckDelegateTypeHints(FPyTestDelegate(Z_Param_Out_Param1));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckMapTypeHints)
	{
		P_GET_TMAP_REF(int32,FString,Z_Param_Out_Param1);
		P_GET_TMAP_REF(int32,FName,Z_Param_Out_Param2);
		P_GET_TMAP_REF(int32,FText,Z_Param_Out_Param3);
		P_GET_TMAP_REF(int32,UObject*,Z_Param_Out_Param4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,UObject*>*)Z_Param__Result=P_THIS->CheckMapTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2,Z_Param_Out_Param3,Z_Param_Out_Param4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckSetTypeHints)
	{
		P_GET_TSET_REF(FString,Z_Param_Out_Param1);
		P_GET_TSET_REF(FName,Z_Param_Out_Param2);
		P_GET_TSET_REF(UObject*,Z_Param_Out_Param3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->CheckSetTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2,Z_Param_Out_Param3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckArrayTypeHints)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Param1);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Param2);
		P_GET_TARRAY_REF(FText,Z_Param_Out_Param3);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Param4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FText>*)Z_Param__Result=P_THIS->CheckArrayTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2,Z_Param_Out_Param3,Z_Param_Out_Param4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckObjectTypeHints)
	{
		P_GET_OBJECT(UPyTestObject,Z_Param_Param1);
		P_GET_OBJECT(UPyTestObject,Z_Param_Param4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPyTestObject**)Z_Param__Result=P_THIS->CheckObjectTypeHints(Z_Param_Param1,Z_Param_Param4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckStructTypeHints)
	{
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_Param1);
		P_GET_STRUCT_REF(FPyTestStruct,Z_Param_Out_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPyTestStruct*)Z_Param__Result=P_THIS->CheckStructTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckFieldPathTypeHints)
	{
		P_GET_TFIELDPATH(TFieldPath<FProperty>,Z_Param_Param1);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TFieldPath<FProperty>*)Z_Param__Result=P_THIS->CheckFieldPathTypeHints(Z_Param_Param1);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckTextTypeHints)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Param1);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->CheckTextTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckNameTypeHints)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Param1);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->CheckNameTypeHints(Z_Param_Out_Param1,Z_Param_Out_Param2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckStringTypeHints)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Param1);
		P_GET_PROPERTY(FStrProperty,Z_Param_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CheckStringTypeHints(Z_Param_Param1,Z_Param_Param2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckEnumTypeHints)
	{
		P_GET_ENUM(EPyTestEnum,Z_Param_Param1);
		P_GET_ENUM(EPyTestEnum,Z_Param_Param2);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPyTestEnum*)Z_Param__Result=P_THIS->CheckEnumTypeHints(EPyTestEnum(Z_Param_Param1),EPyTestEnum(Z_Param_Param2));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckFloatTypeHints)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param1);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Param2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param3);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Param4);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->CheckFloatTypeHints(Z_Param_Param1,Z_Param_Param2,Z_Param_Param3,Z_Param_Param4);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckIntegerTypeHints)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Param1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Param2);
		P_GET_PROPERTY(FInt64Property,Z_Param_Param3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CheckIntegerTypeHints(Z_Param_Param1,Z_Param_Param2,Z_Param_Param3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execCheckBoolTypeHints)
	{
		P_GET_UBOOL(Z_Param_bParam1);
		P_GET_UBOOL(Z_Param_bParam2);
		P_GET_UBOOL(Z_Param_bParam3);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckBoolTypeHints(Z_Param_bParam1,Z_Param_bParam2,Z_Param_bParam3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execGetIntConst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UPyTestTypeHint::GetIntConst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPyTestTypeHint::execGetStringConst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPyTestTypeHint::GetStringConst();
		P_NATIVE_END;
	}
	void UPyTestTypeHint::StaticRegisterNativesUPyTestTypeHint()
	{
		UClass* Class = UPyTestTypeHint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckArrayTypeHints", &UPyTestTypeHint::execCheckArrayTypeHints },
			{ "CheckBoolTypeHints", &UPyTestTypeHint::execCheckBoolTypeHints },
			{ "CheckDelegateTypeHints", &UPyTestTypeHint::execCheckDelegateTypeHints },
			{ "CheckEnumTypeHints", &UPyTestTypeHint::execCheckEnumTypeHints },
			{ "CheckFieldPathTypeHints", &UPyTestTypeHint::execCheckFieldPathTypeHints },
			{ "CheckFloatTypeHints", &UPyTestTypeHint::execCheckFloatTypeHints },
			{ "CheckIntegerTypeHints", &UPyTestTypeHint::execCheckIntegerTypeHints },
			{ "CheckMapTypeHints", &UPyTestTypeHint::execCheckMapTypeHints },
			{ "CheckNameTypeHints", &UPyTestTypeHint::execCheckNameTypeHints },
			{ "CheckObjectTypeHints", &UPyTestTypeHint::execCheckObjectTypeHints },
			{ "CheckSetTypeHints", &UPyTestTypeHint::execCheckSetTypeHints },
			{ "CheckStaticFunction", &UPyTestTypeHint::execCheckStaticFunction },
			{ "CheckStringTypeHints", &UPyTestTypeHint::execCheckStringTypeHints },
			{ "CheckStructTypeHints", &UPyTestTypeHint::execCheckStructTypeHints },
			{ "CheckTextTypeHints", &UPyTestTypeHint::execCheckTextTypeHints },
			{ "CheckTupleReturnType", &UPyTestTypeHint::execCheckTupleReturnType },
			{ "GetIntConst", &UPyTestTypeHint::execGetIntConst },
			{ "GetStringConst", &UPyTestTypeHint::execGetStringConst },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckArrayTypeHints_Parms
		{
			TArray<FString> Param1;
			TArray<FName> Param2;
			TArray<FText> Param3;
			TArray<UObject*> Param4;
			TArray<FText> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Param2_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Param3_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param3_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param4_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param4_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1_Inner = { "Param1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckArrayTypeHints_Parms, Param1), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2_Inner = { "Param2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckArrayTypeHints_Parms, Param2), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3_Inner = { "Param3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckArrayTypeHints_Parms, Param3), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4_Inner = { "Param4", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckArrayTypeHints_Parms, Param4), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckArrayTypeHints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_Param4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckArrayTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::PyTestTypeHint_eventCheckArrayTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckBoolTypeHints_Parms
		{
			bool bParam1;
			bool bParam2;
			bool bParam3;
			bool ReturnValue;
		};
		static void NewProp_bParam1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParam1;
		static void NewProp_bParam2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParam2;
		static void NewProp_bParam3_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParam3;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam1_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckBoolTypeHints_Parms*)Obj)->bParam1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam1 = { "bParam1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckBoolTypeHints_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam2_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckBoolTypeHints_Parms*)Obj)->bParam2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam2 = { "bParam2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckBoolTypeHints_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam2_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam3_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckBoolTypeHints_Parms*)Obj)->bParam3 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam3 = { "bParam3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckBoolTypeHints_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam3_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckBoolTypeHints_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckBoolTypeHints_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_bParam3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "//\n// Check type hinted methods.\n//\n" },
		{ "CPP_Default_bParam2", "true" },
		{ "CPP_Default_bParam3", "false" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Check type hinted methods." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckBoolTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::PyTestTypeHint_eventCheckBoolTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckDelegateTypeHints_Parms
		{
			FScriptDelegate Param1;
			FScriptDelegate ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Param1;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckDelegateTypeHints_Parms, Param1), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_Param1_MetaData)) }; // 1317921057
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080580, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckDelegateTypeHints_Parms, ReturnValue), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1317921057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckDelegateTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::PyTestTypeHint_eventCheckDelegateTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckEnumTypeHints_Parms
		{
			EPyTestEnum Param1;
			EPyTestEnum Param2;
			EPyTestEnum ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param1_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param2_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param1_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckEnumTypeHints_Parms, Param1), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(nullptr, 0) }; // 231413325
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param2_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckEnumTypeHints_Parms, Param2), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(nullptr, 0) }; // 231413325
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckEnumTypeHints_Parms, ReturnValue), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(nullptr, 0) }; // 231413325
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param1_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param2_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "One" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckEnumTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::PyTestTypeHint_eventCheckEnumTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckFieldPathTypeHints_Parms
		{
			TFieldPath<FProperty> Param1;
			TFieldPath<FProperty> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFieldPathTypeHints_Parms, Param1), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_Param1_MetaData)) };
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFieldPathTypeHints_Parms, ReturnValue), &FProperty::StaticClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckFieldPathTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::PyTestTypeHint_eventCheckFieldPathTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckFloatTypeHints_Parms
		{
			float Param1;
			double Param2;
			float Param3;
			double Param4;
			double ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Param2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Param4;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFloatTypeHints_Parms, Param1), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFloatTypeHints_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFloatTypeHints_Parms, Param3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFloatTypeHints_Parms, Param4), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckFloatTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_Param4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param3", "-3.300000" },
		{ "CPP_Default_Param4", "4.400000" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckFloatTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::PyTestTypeHint_eventCheckFloatTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckIntegerTypeHints_Parms
		{
			uint8 Param1;
			int32 Param2;
			int64 Param3;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Param1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Param3;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckIntegerTypeHints_Parms, Param1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckIntegerTypeHints_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckIntegerTypeHints_Parms, Param3), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckIntegerTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "4" },
		{ "CPP_Default_Param3", "5" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckIntegerTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::PyTestTypeHint_eventCheckIntegerTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckMapTypeHints_Parms
		{
			TMap<int32,FString> Param1;
			TMap<int32,FName> Param2;
			TMap<int32,FText> Param3;
			TMap<int32,UObject*> Param4;
			TMap<FString,UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Param1_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Param2_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Param2_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_Param3_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Param3_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param3_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param4_ValueProp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Param4_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param4_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_ValueProp = { "Param1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_Key_KeyProp = { "Param1_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckMapTypeHints_Parms, Param1), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_ValueProp = { "Param2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_Key_KeyProp = { "Param2_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckMapTypeHints_Parms, Param2), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_ValueProp = { "Param3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_Key_KeyProp = { "Param3_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckMapTypeHints_Parms, Param3), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_ValueProp = { "Param4", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_Key_KeyProp = { "Param4_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckMapTypeHints_Parms, Param4), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckMapTypeHints_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_Param4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckMapTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::PyTestTypeHint_eventCheckMapTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckNameTypeHints_Parms
		{
			FName Param1;
			FName Param2;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Param2;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckNameTypeHints_Parms, Param1), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckNameTypeHints_Parms, Param2), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckNameTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "Hi" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckNameTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::PyTestTypeHint_eventCheckNameTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckObjectTypeHints_Parms
		{
			const UPyTestObject* Param1;
			const UPyTestObject* Param4;
			UPyTestObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param4;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckObjectTypeHints_Parms, Param1), Z_Construct_UClass_UPyTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckObjectTypeHints_Parms, Param4), Z_Construct_UClass_UPyTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param4_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckObjectTypeHints_Parms, ReturnValue), Z_Construct_UClass_UPyTestObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_Param4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param4", "None" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckObjectTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::PyTestTypeHint_eventCheckObjectTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckSetTypeHints_Parms
		{
			TSet<FString> Param1;
			TSet<FName> Param2;
			TSet<UObject*> Param3;
			TSet<FName> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Param2_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Param3_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param3_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Param3;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1_ElementProp = { "Param1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckSetTypeHints_Parms, Param1), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2_ElementProp = { "Param2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckSetTypeHints_Parms, Param2), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3_ElementProp = { "Param3", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckSetTypeHints_Parms, Param3), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckSetTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckSetTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::PyTestTypeHint_eventCheckSetTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics
	{
		struct PyTestTypeHint_eventCheckStaticFunction_Parms
		{
			bool Param1;
			int32 Param2;
			double Param3;
			FString Param4;
			bool ReturnValue;
		};
		static void NewProp_Param1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Param1;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Param3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param4_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param4;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param1_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckStaticFunction_Parms*)Obj)->Param1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckStaticFunction_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param1_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStaticFunction_Parms, Param2), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param3 = { "Param3", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStaticFunction_Parms, Param3), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param4_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param4 = { "Param4", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStaticFunction_Parms, Param4), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param4_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param4_MetaData)) };
	void Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PyTestTypeHint_eventCheckStaticFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PyTestTypeHint_eventCheckStaticFunction_Parms), &Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_Param4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckStaticFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::PyTestTypeHint_eventCheckStaticFunction_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckStringTypeHints_Parms
		{
			FString Param1;
			FString Param2;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStringTypeHints_Parms, Param1), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStringTypeHints_Parms, Param2), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStringTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "Hi" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckStringTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::PyTestTypeHint_eventCheckStringTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckStructTypeHints_Parms
		{
			FPyTestStruct Param1;
			FPyTestStruct Param2;
			FPyTestStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStructTypeHints_Parms, Param1), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param1_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStructTypeHints_Parms, Param2), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param2_MetaData)) }; // 3250869969
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckStructTypeHints_Parms, ReturnValue), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(nullptr, 0) }; // 3250869969
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "()" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckStructTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::PyTestTypeHint_eventCheckStructTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics
	{
		struct PyTestTypeHint_eventCheckTextTypeHints_Parms
		{
			FText Param1;
			FText Param2;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param1_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Param1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param2_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Param2;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param1_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param1 = { "Param1", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckTextTypeHints_Parms, Param1), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param2_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param2 = { "Param2", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckTextTypeHints_Parms, Param2), METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param2_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param2_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckTextTypeHints_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_Param2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "CPP_Default_Param2", "INVTEXT(\"Hi\")" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckTextTypeHints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::PyTestTypeHint_eventCheckTextTypeHints_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics
	{
		struct PyTestTypeHint_eventCheckTupleReturnType_Parms
		{
			FString InOutString;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InOutString;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::NewProp_InOutString = { "InOutString", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckTupleReturnType_Parms, InOutString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventCheckTupleReturnType_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::NewProp_InOutString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "CheckTupleReturnType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::PyTestTypeHint_eventCheckTupleReturnType_Parms), Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics
	{
		struct PyTestTypeHint_eventGetIntConst_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventGetIntConst_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptConstant", "IntConst" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "GetIntConst", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::PyTestTypeHint_eventGetIntConst_Parms), Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_GetIntConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_GetIntConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics
	{
		struct PyTestTypeHint_eventGetStringConst_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PyTestTypeHint_eventGetStringConst_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "//\n// Check type hinted constants\n//\n" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ScriptConstant", "StrConst" },
		{ "ToolTip", "Check type hinted constants" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPyTestTypeHint, nullptr, "GetStringConst", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::PyTestTypeHint_eventGetStringConst_Parms), Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPyTestTypeHint_GetStringConst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPyTestTypeHint_GetStringConst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPyTestTypeHint);
	UClass* Z_Construct_UClass_UPyTestTypeHint_NoRegister()
	{
		return UPyTestTypeHint::StaticClass();
	}
	struct Z_Construct_UClass_UPyTestTypeHint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolProp_MetaData[];
#endif
		static void NewProp_BoolProp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntProp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatProp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumProp_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumProp_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringProp_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameProp_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextProp_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPathProp_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_FieldPathProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructProp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StrArrayProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrArrayProp_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StrArrayProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameArrayProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameArrayProp_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArrayProp;
		static const UECodeGen_Private::FTextPropertyParams NewProp_TextArrayProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextArrayProp_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextArrayProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectArrayProp_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectArrayProp_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectArrayProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SetProp_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetProp_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SetProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapProp_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapProp_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapProp_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MapProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegateProp_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MulticastDelegateProp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MulticastDelegateProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlateTickDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_SlateTickDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPyTestTypeHint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PythonScriptPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPyTestTypeHint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckArrayTypeHints, "CheckArrayTypeHints" }, // 2916673386
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckBoolTypeHints, "CheckBoolTypeHints" }, // 3732020140
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckDelegateTypeHints, "CheckDelegateTypeHints" }, // 569980013
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckEnumTypeHints, "CheckEnumTypeHints" }, // 1878489294
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckFieldPathTypeHints, "CheckFieldPathTypeHints" }, // 555425698
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckFloatTypeHints, "CheckFloatTypeHints" }, // 363097739
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckIntegerTypeHints, "CheckIntegerTypeHints" }, // 3292309289
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckMapTypeHints, "CheckMapTypeHints" }, // 180802310
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckNameTypeHints, "CheckNameTypeHints" }, // 1485007616
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckObjectTypeHints, "CheckObjectTypeHints" }, // 3311568290
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckSetTypeHints, "CheckSetTypeHints" }, // 2927203636
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckStaticFunction, "CheckStaticFunction" }, // 3288930749
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckStringTypeHints, "CheckStringTypeHints" }, // 2966379561
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckStructTypeHints, "CheckStructTypeHints" }, // 4164634897
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckTextTypeHints, "CheckTextTypeHints" }, // 2430158933
		{ &Z_Construct_UFunction_UPyTestTypeHint_CheckTupleReturnType, "CheckTupleReturnType" }, // 2119595108
		{ &Z_Construct_UFunction_UPyTestTypeHint_GetIntConst, "GetIntConst" }, // 34537111
		{ &Z_Construct_UFunction_UPyTestTypeHint_GetStringConst, "GetStringConst" }, // 2160990880
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Used to verify if the generated Python stub is correctly type-hinted (if type hint is enabled). The stub is generated\n * in the project intermediate folder when the Python developer mode is enabled (Editor preferences). The type hints can\n * be checked in the stub itself or PythonScriptPlugin/Content/Python/test_type_hints.py can be loaded in a Python IDE that\n * supports type checking and look at the code to verify that there is not problems with the types.\n */" },
		{ "IncludePath", "PyTest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Used to verify if the generated Python stub is correctly type-hinted (if type hint is enabled). The stub is generated\n* in the project intermediate folder when the Python developer mode is enabled (Editor preferences). The type hints can\n* be checked in the stub itself or PythonScriptPlugin/Content/Python/test_type_hints.py can be loaded in a Python IDE that\n* supports type checking and look at the code to verify that there is not problems with the types." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "//\n// Check type hinted properties (setter/getter)\n//\n" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Check type hinted properties (setter/getter)" },
	};
#endif
	void Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp_SetBit(void* Obj)
	{
		((UPyTestTypeHint*)Obj)->BoolProp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp = { "BoolProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPyTestTypeHint), &Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_IntProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_IntProp = { "IntProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, IntProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_IntProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_IntProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FloatProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FloatProp = { "FloatProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, FloatProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FloatProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FloatProp_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp = { "EnumProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, EnumProp), Z_Construct_UEnum_PythonScriptPlugin_EPyTestEnum, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp_MetaData)) }; // 231413325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StringProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StringProp = { "StringProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, StringProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StringProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StringProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameProp = { "NameProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, NameProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextProp = { "TextProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, TextProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FieldPathProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FieldPathProp = { "FieldPathProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, FieldPathProp), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FieldPathProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FieldPathProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StructProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StructProp = { "StructProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, StructProp), Z_Construct_UScriptStruct_FPyTestStruct, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StructProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StructProp_MetaData)) }; // 3250869969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectProp = { "ObjectProp", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, ObjectProp), Z_Construct_UClass_UPyTestObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectProp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp_Inner = { "StrArrayProp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp = { "StrArrayProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, StrArrayProp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp_Inner = { "NameArrayProp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp = { "NameArrayProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, NameArrayProp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp_Inner = { "TextArrayProp", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp = { "TextArrayProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, TextArrayProp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp_Inner = { "ObjectArrayProp", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp = { "ObjectArrayProp", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, ObjectArrayProp), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp_ElementProp = { "SetProp", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp = { "SetProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, SetProp), METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_ValueProp = { "MapProp", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_Key_KeyProp = { "MapProp_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp = { "MapProp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, MapProp), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_DelegateProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_DelegateProp = { "DelegateProp", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, DelegateProp), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_DelegateProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_DelegateProp_MetaData)) }; // 1317921057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MulticastDelegateProp_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MulticastDelegateProp = { "MulticastDelegateProp", nullptr, (EPropertyFlags)0x0010000010080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, MulticastDelegateProp), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestMulticastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MulticastDelegateProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MulticastDelegateProp_MetaData)) }; // 1166675841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SlateTickDelegate_MetaData[] = {
		{ "Category", "Python|Internal" },
		{ "Comment", "//\n// Members to facilitate testing particular Python API.\n//\n" },
		{ "ModuleRelativePath", "Private/PyTest.h" },
		{ "ToolTip", "Members to facilitate testing particular Python API." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SlateTickDelegate = { "SlateTickDelegate", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPyTestTypeHint, SlateTickDelegate), Z_Construct_UDelegateFunction_PythonScriptPlugin_PyTestSlateTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SlateTickDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SlateTickDelegate_MetaData)) }; // 389112824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPyTestTypeHint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_BoolProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_IntProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FloatProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_EnumProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StringProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_FieldPathProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StructProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_StrArrayProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_NameArrayProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_TextArrayProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_ObjectArrayProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SetProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MapProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_DelegateProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_MulticastDelegateProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPyTestTypeHint_Statics::NewProp_SlateTickDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPyTestTypeHint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPyTestTypeHint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPyTestTypeHint_Statics::ClassParams = {
		&UPyTestTypeHint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPyTestTypeHint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPyTestTypeHint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPyTestTypeHint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPyTestTypeHint()
	{
		if (!Z_Registration_Info_UClass_UPyTestTypeHint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPyTestTypeHint.OuterSingleton, Z_Construct_UClass_UPyTestTypeHint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPyTestTypeHint.OuterSingleton;
	}
	template<> PYTHONSCRIPTPLUGIN_API UClass* StaticClass<UPyTestTypeHint>()
	{
		return UPyTestTypeHint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPyTestTypeHint);
	UPyTestTypeHint::~UPyTestTypeHint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::EnumInfo[] = {
		{ EPyTestEnum_StaticEnum, TEXT("EPyTestEnum"), &Z_Registration_Info_UEnum_EPyTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 231413325U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ScriptStructInfo[] = {
		{ FPyTestStruct::StaticStruct, Z_Construct_UScriptStruct_FPyTestStruct_Statics::NewStructOps, TEXT("PyTestStruct"), &Z_Registration_Info_UScriptStruct_PyTestStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPyTestStruct), 3250869969U) },
		{ FPyTestChildStruct::StaticStruct, Z_Construct_UScriptStruct_FPyTestChildStruct_Statics::NewStructOps, TEXT("PyTestChildStruct"), &Z_Registration_Info_UScriptStruct_PyTestChildStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPyTestChildStruct), 3117032670U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPyTestStructLibrary, UPyTestStructLibrary::StaticClass, TEXT("UPyTestStructLibrary"), &Z_Registration_Info_UClass_UPyTestStructLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestStructLibrary), 3789466528U) },
		{ Z_Construct_UClass_UPyTestObject, UPyTestObject::StaticClass, TEXT("UPyTestObject"), &Z_Registration_Info_UClass_UPyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestObject), 3915853357U) },
		{ Z_Construct_UClass_UPyTestChildObject, UPyTestChildObject::StaticClass, TEXT("UPyTestChildObject"), &Z_Registration_Info_UClass_UPyTestChildObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestChildObject), 3962355530U) },
		{ Z_Construct_UClass_UDEPRECATED_LegacyPyTestObject, UDEPRECATED_LegacyPyTestObject::StaticClass, TEXT("UDEPRECATED_LegacyPyTestObject"), &Z_Registration_Info_UClass_UDEPRECATED_LegacyPyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_LegacyPyTestObject), 3093027405U) },
		{ Z_Construct_UClass_UPyTestObjectLibrary, UPyTestObjectLibrary::StaticClass, TEXT("UPyTestObjectLibrary"), &Z_Registration_Info_UClass_UPyTestObjectLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestObjectLibrary), 1632034884U) },
		{ Z_Construct_UClass_UPyTestStructDelegate, UPyTestStructDelegate::StaticClass, TEXT("UPyTestStructDelegate"), &Z_Registration_Info_UClass_UPyTestStructDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestStructDelegate), 3699652855U) },
		{ Z_Construct_UClass_UPyTestVectorDelegate, UPyTestVectorDelegate::StaticClass, TEXT("UPyTestVectorDelegate"), &Z_Registration_Info_UClass_UPyTestVectorDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestVectorDelegate), 2122240993U) },
		{ Z_Construct_UClass_UPyTestTypeHint, UPyTestTypeHint::StaticClass, TEXT("UPyTestTypeHint"), &Z_Registration_Info_UClass_UPyTestTypeHint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPyTestTypeHint), 1117483327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_2444552768(TEXT("/Script/PythonScriptPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PythonScriptPlugin_Source_PythonScriptPlugin_Private_PyTest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
