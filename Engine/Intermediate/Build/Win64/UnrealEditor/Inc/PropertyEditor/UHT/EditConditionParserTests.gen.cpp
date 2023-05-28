// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditConditionParserTests.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditConditionParserTests() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROPERTYEDITOR_API UClass* Z_Construct_UClass_UEditConditionTestObject();
	PROPERTYEDITOR_API UClass* Z_Construct_UClass_UEditConditionTestObject_NoRegister();
	PROPERTYEDITOR_API UEnum* Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum();
	PROPERTYEDITOR_API UEnum* Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum();
	UPackage* Z_Construct_UPackage__Script_PropertyEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EditConditionTestEnum;
	static UEnum* EditConditionTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EditConditionTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EditConditionTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum, (UObject*)Z_Construct_UPackage__Script_PropertyEditor(), TEXT("EditConditionTestEnum"));
		}
		return Z_Registration_Info_UEnum_EditConditionTestEnum.OuterSingleton;
	}
	template<> PROPERTYEDITOR_API UEnum* StaticEnum<EditConditionTestEnum>()
	{
		return EditConditionTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enumerators[] = {
		{ "EditConditionTestEnum::First", (int64)EditConditionTestEnum::First },
		{ "EditConditionTestEnum::Second", (int64)EditConditionTestEnum::Second },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "First.Name", "EditConditionTestEnum::First" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
		{ "Second.Name", "EditConditionTestEnum::Second" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PropertyEditor,
		nullptr,
		"EditConditionTestEnum",
		"EditConditionTestEnum",
		Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EditConditionTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EditConditionTestEnum.InnerSingleton, Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EditConditionTestEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EditConditionByteEnum;
	static UEnum* EditConditionByteEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EditConditionByteEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EditConditionByteEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum, (UObject*)Z_Construct_UPackage__Script_PropertyEditor(), TEXT("EditConditionByteEnum"));
		}
		return Z_Registration_Info_UEnum_EditConditionByteEnum.OuterSingleton;
	}
	template<> PROPERTYEDITOR_API UEnum* StaticEnum<EditConditionByteEnum>()
	{
		return EditConditionByteEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enumerators[] = {
		{ "First", (int64)First },
		{ "Second", (int64)Second },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enum_MetaDataParams[] = {
		{ "First.Name", "First" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
		{ "Second.Name", "Second" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PropertyEditor,
		nullptr,
		"EditConditionByteEnum",
		"EditConditionByteEnum",
		Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum()
	{
		if (!Z_Registration_Info_UEnum_EditConditionByteEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EditConditionByteEnum.InnerSingleton, Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EditConditionByteEnum.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetWeakObjectPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TWeakObjectPtr<UObject>*)Z_Param__Result=UEditConditionTestObject::StaticGetWeakObjectPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetSoftClassPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<UObject> *)Z_Param__Result=UEditConditionTestObject::StaticGetSoftClassPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetUObjectPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UEditConditionTestObject::StaticGetUObjectPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetUintBitfieldFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=UEditConditionTestObject::StaticGetUintBitfieldFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetIntegerFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditConditionTestObject::StaticGetIntegerFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetDoubleFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UEditConditionTestObject::StaticGetDoubleFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetByteEnumFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EditConditionByteEnum>*)Z_Param__Result=UEditConditionTestObject::StaticGetByteEnumFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetEnumFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EditConditionTestEnum*)Z_Param__Result=UEditConditionTestObject::StaticGetEnumFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticGetBoolFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditConditionTestObject::StaticGetBoolFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execStaticVoidFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StaticVoidFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetWeakObjectPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TWeakObjectPtr<UObject>*)Z_Param__Result=P_THIS->GetWeakObjectPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetSoftClassPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftClassPtr<UObject> *)Z_Param__Result=P_THIS->GetSoftClassPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetUObjectPtrFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetUObjectPtrFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetUintBitfieldFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetUintBitfieldFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetIntegerFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIntegerFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetDoubleFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetDoubleFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetByteEnumFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EditConditionByteEnum>*)Z_Param__Result=P_THIS->GetByteEnumFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetEnumFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EditConditionTestEnum*)Z_Param__Result=P_THIS->GetEnumFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execGetBoolFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditConditionTestObject::execVoidFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VoidFunction();
		P_NATIVE_END;
	}
	void UEditConditionTestObject::StaticRegisterNativesUEditConditionTestObject()
	{
		UClass* Class = UEditConditionTestObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoolFunction", &UEditConditionTestObject::execGetBoolFunction },
			{ "GetByteEnumFunction", &UEditConditionTestObject::execGetByteEnumFunction },
			{ "GetDoubleFunction", &UEditConditionTestObject::execGetDoubleFunction },
			{ "GetEnumFunction", &UEditConditionTestObject::execGetEnumFunction },
			{ "GetIntegerFunction", &UEditConditionTestObject::execGetIntegerFunction },
			{ "GetSoftClassPtrFunction", &UEditConditionTestObject::execGetSoftClassPtrFunction },
			{ "GetUintBitfieldFunction", &UEditConditionTestObject::execGetUintBitfieldFunction },
			{ "GetUObjectPtrFunction", &UEditConditionTestObject::execGetUObjectPtrFunction },
			{ "GetWeakObjectPtrFunction", &UEditConditionTestObject::execGetWeakObjectPtrFunction },
			{ "StaticGetBoolFunction", &UEditConditionTestObject::execStaticGetBoolFunction },
			{ "StaticGetByteEnumFunction", &UEditConditionTestObject::execStaticGetByteEnumFunction },
			{ "StaticGetDoubleFunction", &UEditConditionTestObject::execStaticGetDoubleFunction },
			{ "StaticGetEnumFunction", &UEditConditionTestObject::execStaticGetEnumFunction },
			{ "StaticGetIntegerFunction", &UEditConditionTestObject::execStaticGetIntegerFunction },
			{ "StaticGetSoftClassPtrFunction", &UEditConditionTestObject::execStaticGetSoftClassPtrFunction },
			{ "StaticGetUintBitfieldFunction", &UEditConditionTestObject::execStaticGetUintBitfieldFunction },
			{ "StaticGetUObjectPtrFunction", &UEditConditionTestObject::execStaticGetUObjectPtrFunction },
			{ "StaticGetWeakObjectPtrFunction", &UEditConditionTestObject::execStaticGetWeakObjectPtrFunction },
			{ "StaticVoidFunction", &UEditConditionTestObject::execStaticVoidFunction },
			{ "VoidFunction", &UEditConditionTestObject::execVoidFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics
	{
		struct EditConditionTestObject_eventGetBoolFunction_Parms
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
	void Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditConditionTestObject_eventGetBoolFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditConditionTestObject_eventGetBoolFunction_Parms), &Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetBoolFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::EditConditionTestObject_eventGetBoolFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics
	{
		struct EditConditionTestObject_eventGetByteEnumFunction_Parms
		{
			TEnumAsByte<EditConditionByteEnum> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetByteEnumFunction_Parms, ReturnValue), Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum, METADATA_PARAMS(nullptr, 0) }; // 3157084172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetByteEnumFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::EditConditionTestObject_eventGetByteEnumFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics
	{
		struct EditConditionTestObject_eventGetDoubleFunction_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetDoubleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetDoubleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::EditConditionTestObject_eventGetDoubleFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics
	{
		struct EditConditionTestObject_eventGetEnumFunction_Parms
		{
			EditConditionTestEnum ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetEnumFunction_Parms, ReturnValue), Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum, METADATA_PARAMS(nullptr, 0) }; // 1611952093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetEnumFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::EditConditionTestObject_eventGetEnumFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics
	{
		struct EditConditionTestObject_eventGetIntegerFunction_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetIntegerFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetIntegerFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::EditConditionTestObject_eventGetIntegerFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics
	{
		struct EditConditionTestObject_eventGetSoftClassPtrFunction_Parms
		{
			TSoftClassPtr<UObject>  ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetSoftClassPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetSoftClassPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::EditConditionTestObject_eventGetSoftClassPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics
	{
		struct EditConditionTestObject_eventGetUintBitfieldFunction_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetUintBitfieldFunction_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetUintBitfieldFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::EditConditionTestObject_eventGetUintBitfieldFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics
	{
		struct EditConditionTestObject_eventGetUObjectPtrFunction_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetUObjectPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetUObjectPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::EditConditionTestObject_eventGetUObjectPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics
	{
		struct EditConditionTestObject_eventGetWeakObjectPtrFunction_Parms
		{
			TWeakObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventGetWeakObjectPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "GetWeakObjectPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::EditConditionTestObject_eventGetWeakObjectPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetBoolFunction_Parms
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
	void Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditConditionTestObject_eventStaticGetBoolFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditConditionTestObject_eventStaticGetBoolFunction_Parms), &Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetBoolFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::EditConditionTestObject_eventStaticGetBoolFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetByteEnumFunction_Parms
		{
			TEnumAsByte<EditConditionByteEnum> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetByteEnumFunction_Parms, ReturnValue), Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum, METADATA_PARAMS(nullptr, 0) }; // 3157084172
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetByteEnumFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::EditConditionTestObject_eventStaticGetByteEnumFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetDoubleFunction_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetDoubleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetDoubleFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::EditConditionTestObject_eventStaticGetDoubleFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetEnumFunction_Parms
		{
			EditConditionTestEnum ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetEnumFunction_Parms, ReturnValue), Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum, METADATA_PARAMS(nullptr, 0) }; // 1611952093
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetEnumFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::EditConditionTestObject_eventStaticGetEnumFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetIntegerFunction_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetIntegerFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetIntegerFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::EditConditionTestObject_eventStaticGetIntegerFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetSoftClassPtrFunction_Parms
		{
			TSoftClassPtr<UObject>  ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetSoftClassPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetSoftClassPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::EditConditionTestObject_eventStaticGetSoftClassPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetUintBitfieldFunction_Parms
		{
			uint8 ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetUintBitfieldFunction_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetUintBitfieldFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::EditConditionTestObject_eventStaticGetUintBitfieldFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetUObjectPtrFunction_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetUObjectPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetUObjectPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::EditConditionTestObject_eventStaticGetUObjectPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics
	{
		struct EditConditionTestObject_eventStaticGetWeakObjectPtrFunction_Parms
		{
			TWeakObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditConditionTestObject_eventStaticGetWeakObjectPtrFunction_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticGetWeakObjectPtrFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::EditConditionTestObject_eventStaticGetWeakObjectPtrFunction_Parms), Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Used in test cases that should fail, should not be able to execute a void function in edit condition */" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
		{ "ToolTip", "Used in test cases that should fail, should not be able to execute a void function in edit condition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "StaticVoidFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Used in test cases that should fail, should not be able to execute a void function in edit condition */" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
		{ "ToolTip", "Used in test cases that should fail, should not be able to execute a void function in edit condition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditConditionTestObject, nullptr, "VoidFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditConditionTestObject_VoidFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditConditionTestObject_VoidFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditConditionTestObject);
	UClass* Z_Construct_UClass_UEditConditionTestObject_NoRegister()
	{
		return UEditConditionTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UEditConditionTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[];
#endif
		static void NewProp_BoolProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolProperty;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_EnumProperty_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteEnumProperty_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ByteEnumProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleProperty_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DoubleProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UintBitfieldProperty_MetaData[];
#endif
		static void NewProp_UintBitfieldProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UintBitfieldProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftClassPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SoftClassPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditConditionTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PropertyEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditConditionTestObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetBoolFunction, "GetBoolFunction" }, // 3241520655
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetByteEnumFunction, "GetByteEnumFunction" }, // 2627979213
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetDoubleFunction, "GetDoubleFunction" }, // 461067818
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetEnumFunction, "GetEnumFunction" }, // 1588001945
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetIntegerFunction, "GetIntegerFunction" }, // 153759408
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetSoftClassPtrFunction, "GetSoftClassPtrFunction" }, // 2105973333
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetUintBitfieldFunction, "GetUintBitfieldFunction" }, // 2021338337
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetUObjectPtrFunction, "GetUObjectPtrFunction" }, // 4011534983
		{ &Z_Construct_UFunction_UEditConditionTestObject_GetWeakObjectPtrFunction, "GetWeakObjectPtrFunction" }, // 4273077812
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetBoolFunction, "StaticGetBoolFunction" }, // 3083771250
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetByteEnumFunction, "StaticGetByteEnumFunction" }, // 3476541875
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetDoubleFunction, "StaticGetDoubleFunction" }, // 2135233146
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetEnumFunction, "StaticGetEnumFunction" }, // 983617350
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetIntegerFunction, "StaticGetIntegerFunction" }, // 102450807
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetSoftClassPtrFunction, "StaticGetSoftClassPtrFunction" }, // 2423578981
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetUintBitfieldFunction, "StaticGetUintBitfieldFunction" }, // 3574679941
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetUObjectPtrFunction, "StaticGetUObjectPtrFunction" }, // 2378063057
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticGetWeakObjectPtrFunction, "StaticGetWeakObjectPtrFunction" }, // 4223055234
		{ &Z_Construct_UFunction_UEditConditionTestObject_StaticVoidFunction, "StaticVoidFunction" }, // 1301612781
		{ &Z_Construct_UFunction_UEditConditionTestObject_VoidFunction, "VoidFunction" }, // 2977031943
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Test object for edit condition property checks\n * \n * Note: Currently only bool functions are supported (Including static). \n * remaining are not used because currently not supported by edit condition parser\n */" },
		{ "IncludePath", "EditConditionParserTests.h" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
		{ "ToolTip", "Test object for edit condition property checks\n\nNote: Currently only bool functions are supported (Including static).\nremaining are not used because currently not supported by edit condition parser" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	void Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty_SetBit(void* Obj)
	{
		((UEditConditionTestObject*)Obj)->BoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty = { "BoolProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditConditionTestObject), &Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty = { "EnumProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, EnumProperty), Z_Construct_UEnum_PropertyEditor_EditConditionTestEnum, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty_MetaData)) }; // 1611952093
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_ByteEnumProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_ByteEnumProperty = { "ByteEnumProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, ByteEnumProperty), Z_Construct_UEnum_PropertyEditor_EditConditionByteEnum, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_ByteEnumProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_ByteEnumProperty_MetaData)) }; // 3157084172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_DoubleProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_DoubleProperty = { "DoubleProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, DoubleProperty), METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_DoubleProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_DoubleProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_IntegerProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_IntegerProperty = { "IntegerProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, IntegerProperty), METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_IntegerProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_IntegerProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	void Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty_SetBit(void* Obj)
	{
		((UEditConditionTestObject*)Obj)->UintBitfieldProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty = { "UintBitfieldProperty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEditConditionTestObject), &Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UObjectPtr_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UObjectPtr = { "UObjectPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, UObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UObjectPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_SoftClassPtr_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_SoftClassPtr = { "SoftClassPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, SoftClassPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_SoftClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_SoftClassPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_WeakObjectPtr_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/EditConditionParserTests.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_WeakObjectPtr = { "WeakObjectPtr", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditConditionTestObject, WeakObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_WeakObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_WeakObjectPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditConditionTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_BoolProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_EnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_ByteEnumProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_DoubleProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_IntegerProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UintBitfieldProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_UObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_SoftClassPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditConditionTestObject_Statics::NewProp_WeakObjectPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditConditionTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditConditionTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditConditionTestObject_Statics::ClassParams = {
		&UEditConditionTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditConditionTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditConditionTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditConditionTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditConditionTestObject()
	{
		if (!Z_Registration_Info_UClass_UEditConditionTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditConditionTestObject.OuterSingleton, Z_Construct_UClass_UEditConditionTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditConditionTestObject.OuterSingleton;
	}
	template<> PROPERTYEDITOR_API UClass* StaticClass<UEditConditionTestObject>()
	{
		return UEditConditionTestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditConditionTestObject);
	UEditConditionTestObject::~UEditConditionTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::EnumInfo[] = {
		{ EditConditionTestEnum_StaticEnum, TEXT("EditConditionTestEnum"), &Z_Registration_Info_UEnum_EditConditionTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1611952093U) },
		{ EditConditionByteEnum_StaticEnum, TEXT("EditConditionByteEnum"), &Z_Registration_Info_UEnum_EditConditionByteEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3157084172U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditConditionTestObject, UEditConditionTestObject::StaticClass, TEXT("UEditConditionTestObject"), &Z_Registration_Info_UClass_UEditConditionTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditConditionTestObject), 1425482843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_3276004035(TEXT("/Script/PropertyEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PropertyEditor_Private_EditConditionParserTests_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
