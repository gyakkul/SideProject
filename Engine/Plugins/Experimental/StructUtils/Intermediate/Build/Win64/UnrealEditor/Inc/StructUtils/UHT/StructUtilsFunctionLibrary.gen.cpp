// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructUtilsFunctionLibrary.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructUtilsFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UStructUtilsFunctionLibrary();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UStructUtilsFunctionLibrary_NoRegister();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EStructUtilsResult();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStructUtilsResult;
	static UEnum* EStructUtilsResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EStructUtilsResult, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EStructUtilsResult"));
		}
		return Z_Registration_Info_UEnum_EStructUtilsResult.OuterSingleton;
	}
	template<> STRUCTUTILS_API UEnum* StaticEnum<EStructUtilsResult>()
	{
		return EStructUtilsResult_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enumerators[] = {
		{ "EStructUtilsResult::Valid", (int64)EStructUtilsResult::Valid },
		{ "EStructUtilsResult::NotValid", (int64)EStructUtilsResult::NotValid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "NotValid.Name", "EStructUtilsResult::NotValid" },
		{ "Valid.Name", "EStructUtilsResult::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		"EStructUtilsResult",
		"EStructUtilsResult",
		Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtils_EStructUtilsResult()
	{
		if (!Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton, Z_Construct_UEnum_StructUtils_EStructUtilsResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStructUtilsResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UStructUtilsFunctionLibrary::execIsValid_InstancedStruct)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStructUtilsFunctionLibrary::IsValid_InstancedStruct(Z_Param_Out_InstancedStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStructUtilsFunctionLibrary::execNotEqual_InstancedStruct)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_A);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStructUtilsFunctionLibrary::execEqualEqual_InstancedStruct)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_A);
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStructUtilsFunctionLibrary::execIsInstancedStructValid)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EStructUtilsResult*)Z_Param__Result=UStructUtilsFunctionLibrary::IsInstancedStructValid(Z_Param_Out_InstancedStruct);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStructUtilsFunctionLibrary::execReset)
	{
		P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstancedStruct);
		P_GET_OBJECT(UScriptStruct,Z_Param_StructType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UStructUtilsFunctionLibrary::Reset(Z_Param_Out_InstancedStruct,Z_Param_StructType);
		P_NATIVE_END;
	}
	void UStructUtilsFunctionLibrary::StaticRegisterNativesUStructUtilsFunctionLibrary()
	{
		UClass* Class = UStructUtilsFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EqualEqual_InstancedStruct", &UStructUtilsFunctionLibrary::execEqualEqual_InstancedStruct },
			{ "GetInstancedStructValue", &UStructUtilsFunctionLibrary::execGetInstancedStructValue },
			{ "IsInstancedStructValid", &UStructUtilsFunctionLibrary::execIsInstancedStructValid },
			{ "IsValid_InstancedStruct", &UStructUtilsFunctionLibrary::execIsValid_InstancedStruct },
			{ "MakeInstancedStruct", &UStructUtilsFunctionLibrary::execMakeInstancedStruct },
			{ "NotEqual_InstancedStruct", &UStructUtilsFunctionLibrary::execNotEqual_InstancedStruct },
			{ "Reset", &UStructUtilsFunctionLibrary::execReset },
			{ "SetInstancedStructValue", &UStructUtilsFunctionLibrary::execSetInstancedStructValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics
	{
		struct StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms
		{
			FInstancedStruct A;
			FInstancedStruct B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms, A), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms, B), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B_MetaData)) }; // 3026308664
	void Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms), &Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether two InstancedStructs (and the values contained within) are equal.\n\x09 */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Checks whether two InstancedStructs (and the values contained within) are equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "EqualEqual_InstancedStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::StructUtilsFunctionLibrary_eventEqualEqual_InstancedStruct_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics
	{
		struct StructUtilsFunctionLibrary_eventGetInstancedStructValue_Parms
		{
			EStructUtilsResult ExecResult;
			FInstancedStruct InstancedStruct;
			int32 Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventGetInstancedStructValue_Parms, ExecResult), Z_Construct_UEnum_StructUtils_EStructUtilsResult, METADATA_PARAMS(nullptr, 0) }; // 1936106067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventGetInstancedStructValue_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct_MetaData)) }; // 3026308664
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventGetInstancedStructValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_ExecResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Retrieves data from an InstancedStruct if it matches the output type.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Retrieves data from an InstancedStruct if it matches the output type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "GetInstancedStructValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::StructUtilsFunctionLibrary_eventGetInstancedStructValue_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics
	{
		struct StructUtilsFunctionLibrary_eventIsInstancedStructValid_Parms
		{
			FInstancedStruct InstancedStruct;
			EStructUtilsResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventIsInstancedStructValid_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct_MetaData)) }; // 3026308664
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventIsInstancedStructValid_Parms, ReturnValue), Z_Construct_UEnum_StructUtils_EStructUtilsResult, METADATA_PARAMS(nullptr, 0) }; // 1936106067
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/** \n\x09 * Checks whether an InstancedStruct contains value.\n\x09 */" },
		{ "DisplayName", "Is Valid (Branch)" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Checks whether an InstancedStruct contains value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "IsInstancedStructValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::StructUtilsFunctionLibrary_eventIsInstancedStructValid_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics
	{
		struct StructUtilsFunctionLibrary_eventIsValid_InstancedStruct_Parms
		{
			FInstancedStruct InstancedStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventIsValid_InstancedStruct_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct_MetaData)) }; // 3026308664
	void Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StructUtilsFunctionLibrary_eventIsValid_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StructUtilsFunctionLibrary_eventIsValid_InstancedStruct_Parms), &Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether the InstancedStruct contains value.\n\x09 */" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Checks whether the InstancedStruct contains value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "IsValid_InstancedStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::StructUtilsFunctionLibrary_eventIsValid_InstancedStruct_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics
	{
		struct StructUtilsFunctionLibrary_eventMakeInstancedStruct_Parms
		{
			int32 Value;
			FInstancedStruct ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventMakeInstancedStruct_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventMakeInstancedStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Create a new InstancedStruct from the given source value.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "Create a new InstancedStruct from the given source value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "MakeInstancedStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::StructUtilsFunctionLibrary_eventMakeInstancedStruct_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics
	{
		struct StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms
		{
			FInstancedStruct A;
			FInstancedStruct B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms, A), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_A_MetaData)) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms, B), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_B_MetaData)) }; // 3026308664
	void Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms), &Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Checks whether two InstancedStructs are not equal.\n\x09 */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Checks whether two InstancedStructs are not equal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "NotEqual_InstancedStruct", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::StructUtilsFunctionLibrary_eventNotEqual_InstancedStruct_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics
	{
		struct StructUtilsFunctionLibrary_eventReset_Parms
		{
			FInstancedStruct InstancedStruct;
			const UScriptStruct* StructType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StructType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventReset_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_StructType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_StructType = { "StructType", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventReset_Parms, StructType), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_StructType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_StructType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::NewProp_StructType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Resets an InstancedStruct.\n\x09 */" },
		{ "CPP_Default_StructType", "None" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Resets an InstancedStruct." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "Reset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::StructUtilsFunctionLibrary_eventReset_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics
	{
		struct StructUtilsFunctionLibrary_eventSetInstancedStructValue_Parms
		{
			FInstancedStruct InstancedStruct;
			int32 Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_InstancedStruct = { "InstancedStruct", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventSetInstancedStructValue_Parms, InstancedStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StructUtilsFunctionLibrary_eventSetInstancedStructValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_InstancedStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Utilities|Instanced Struct" },
		{ "Comment", "/**\n\x09 * Sets the value of InstancedStruct from the given source value.\n\x09 */" },
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
		{ "ToolTip", "Sets the value of InstancedStruct from the given source value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStructUtilsFunctionLibrary, nullptr, "SetInstancedStructValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::StructUtilsFunctionLibrary_eventSetInstancedStructValue_Parms), Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructUtilsFunctionLibrary);
	UClass* Z_Construct_UClass_UStructUtilsFunctionLibrary_NoRegister()
	{
		return UStructUtilsFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct, "EqualEqual_InstancedStruct" }, // 2389098174
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_GetInstancedStructValue, "GetInstancedStructValue" }, // 3042603201
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsInstancedStructValid, "IsInstancedStructValid" }, // 1577986969
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_IsValid_InstancedStruct, "IsValid_InstancedStruct" }, // 997143220
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_MakeInstancedStruct, "MakeInstancedStruct" }, // 2725863096
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_NotEqual_InstancedStruct, "NotEqual_InstancedStruct" }, // 1515092423
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_Reset, "Reset" }, // 1313676191
		{ &Z_Construct_UFunction_UStructUtilsFunctionLibrary_SetInstancedStructValue, "SetInstancedStructValue" }, // 3037042394
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructUtilsFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/StructUtilsFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructUtilsFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::ClassParams = {
		&UStructUtilsFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructUtilsFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UStructUtilsFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructUtilsFunctionLibrary.OuterSingleton, Z_Construct_UClass_UStructUtilsFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructUtilsFunctionLibrary.OuterSingleton;
	}
	template<> STRUCTUTILS_API UClass* StaticClass<UStructUtilsFunctionLibrary>()
	{
		return UStructUtilsFunctionLibrary::StaticClass();
	}
	UStructUtilsFunctionLibrary::UStructUtilsFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructUtilsFunctionLibrary);
	UStructUtilsFunctionLibrary::~UStructUtilsFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EStructUtilsResult_StaticEnum, TEXT("EStructUtilsResult"), &Z_Registration_Info_UEnum_EStructUtilsResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1936106067U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructUtilsFunctionLibrary, UStructUtilsFunctionLibrary::StaticClass, TEXT("UStructUtilsFunctionLibrary"), &Z_Registration_Info_UClass_UStructUtilsFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructUtilsFunctionLibrary), 1027473624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_1194163170(TEXT("/Script/StructUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_StructUtilsFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
