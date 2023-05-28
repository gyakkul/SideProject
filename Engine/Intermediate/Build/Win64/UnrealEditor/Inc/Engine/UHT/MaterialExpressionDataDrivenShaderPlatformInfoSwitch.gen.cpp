// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition;
	static UEnum* EDataDrivenShaderPlatformInfoCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataDrivenShaderPlatformInfoCondition"));
		}
		return Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDataDrivenShaderPlatformInfoCondition>()
	{
		return EDataDrivenShaderPlatformInfoCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enumerators[] = {
		{ "COND_True", (int64)COND_True },
		{ "COND_False", (int64)COND_False },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enum_MetaDataParams[] = {
		{ "COND_False.DisplayName", "Property must be false" },
		{ "COND_False.Name", "COND_False" },
		{ "COND_True.DisplayName", "Property must be true" },
		{ "COND_True.Name", "COND_True" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EDataDrivenShaderPlatformInfoCondition",
		"EDataDrivenShaderPlatformInfoCondition",
		Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition()
	{
		if (!Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton, Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput;
class UScriptStruct* FDataDrivenShaderPlatformInfoInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DataDrivenShaderPlatformInfoInput"));
	}
	return Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDataDrivenShaderPlatformInfoInput>()
{
	return FDataDrivenShaderPlatformInfoInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyCondition_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyCondition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataDrivenShaderPlatformInfoInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "FDataDrivenShaderPlatformInfoInput" },
		{ "GetOptions", "GetNameOptions" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenShaderPlatformInfoInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition_MetaData[] = {
		{ "Category", "FDataDrivenShaderPlatformInfoInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition = { "PropertyCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataDrivenShaderPlatformInfoInput, PropertyCondition), Z_Construct_UEnum_Engine_EDataDrivenShaderPlatformInfoCondition, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition_MetaData)) }; // 1628500275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewProp_PropertyCondition,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DataDrivenShaderPlatformInfoInput",
		sizeof(FDataDrivenShaderPlatformInfoInput),
		alignof(FDataDrivenShaderPlatformInfoInput),
		Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput()
	{
		if (!Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::execGetNameOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetNameOptions();
		P_NATIVE_END;
	}
	void UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticRegisterNativesUMaterialExpressionDataDrivenShaderPlatformInfoSwitch()
	{
		UClass* Class = UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNameOptions", &UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::execGetNameOptions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics
	{
		struct MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, nullptr, "GetNameOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::MaterialExpressionDataDrivenShaderPlatformInfoSwitch_eventGetNameOptions_Parms), Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_NoRegister()
	{
		return UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTrue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFalse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputFalse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DDSPIPropertyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DDSPIPropertyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DDSPIPropertyNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bContainsInvalidProperty_MetaData[];
#endif
		static void NewProp_bContainsInvalidProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bContainsInvalidProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_GetNameOptions, "GetNameOptions" }, // 1351920532
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue = { "InputTrue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, InputTrue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse = { "InputFalse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, InputFalse), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_Inner = { "DDSPIPropertyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput, METADATA_PARAMS(nullptr, 0) }; // 1478608686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_MetaData[] = {
		{ "Category", "DataDrivenShaderPlatformInfoInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames = { "DDSPIPropertyNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, DDSPIPropertyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_MetaData)) }; // 1478608686
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionDataDrivenShaderPlatformInfoSwitch.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_SetBit(void* Obj)
	{
		((UMaterialExpressionDataDrivenShaderPlatformInfoSwitch*)Obj)->bContainsInvalidProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty = { "bContainsInvalidProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch), &Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_InputFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_DDSPIPropertyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::NewProp_bContainsInvalidProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::ClassParams = {
		&UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionDataDrivenShaderPlatformInfoSwitch>()
	{
		return UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch);
	UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::~UMaterialExpressionDataDrivenShaderPlatformInfoSwitch() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::EnumInfo[] = {
		{ EDataDrivenShaderPlatformInfoCondition_StaticEnum, TEXT("EDataDrivenShaderPlatformInfoCondition"), &Z_Registration_Info_UEnum_EDataDrivenShaderPlatformInfoCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1628500275U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ScriptStructInfo[] = {
		{ FDataDrivenShaderPlatformInfoInput::StaticStruct, Z_Construct_UScriptStruct_FDataDrivenShaderPlatformInfoInput_Statics::NewStructOps, TEXT("DataDrivenShaderPlatformInfoInput"), &Z_Registration_Info_UScriptStruct_DataDrivenShaderPlatformInfoInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataDrivenShaderPlatformInfoInput), 1478608686U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, UMaterialExpressionDataDrivenShaderPlatformInfoSwitch::StaticClass, TEXT("UMaterialExpressionDataDrivenShaderPlatformInfoSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionDataDrivenShaderPlatformInfoSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionDataDrivenShaderPlatformInfoSwitch), 267495507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_4207765986(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionDataDrivenShaderPlatformInfoSwitch_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
