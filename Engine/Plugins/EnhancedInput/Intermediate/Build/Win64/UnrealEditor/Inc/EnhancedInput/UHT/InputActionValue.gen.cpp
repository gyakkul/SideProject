// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputActionValue() {}
// Cross Module References
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputActionValueType;
	static UEnum* EInputActionValueType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EnhancedInput_EInputActionValueType, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("EInputActionValueType"));
		}
		return Z_Registration_Info_UEnum_EInputActionValueType.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputActionValueType>()
	{
		return EInputActionValueType_StaticEnum();
	}
	struct Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enumerators[] = {
		{ "EInputActionValueType::Boolean", (int64)EInputActionValueType::Boolean },
		{ "EInputActionValueType::Axis1D", (int64)EInputActionValueType::Axis1D },
		{ "EInputActionValueType::Axis2D", (int64)EInputActionValueType::Axis2D },
		{ "EInputActionValueType::Axis3D", (int64)EInputActionValueType::Axis3D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enum_MetaDataParams[] = {
		{ "Axis1D.DisplayName", "Axis1D (float)" },
		{ "Axis1D.Name", "EInputActionValueType::Axis1D" },
		{ "Axis2D.DisplayName", "Axis2D (Vector2D)" },
		{ "Axis2D.Name", "EInputActionValueType::Axis2D" },
		{ "Axis3D.DisplayName", "Axis3D (Vector)" },
		{ "Axis3D.Name", "EInputActionValueType::Axis3D" },
		{ "BlueprintType", "true" },
		{ "Boolean.Comment", "// Value types in increasing size order (used for type promotion)\n// Name these Digital/Analog?\n" },
		{ "Boolean.DisplayName", "Digital (bool)" },
		{ "Boolean.Name", "EInputActionValueType::Boolean" },
		{ "Boolean.ToolTip", "Value types in increasing size order (used for type promotion)\nName these Digital/Analog?" },
		{ "ModuleRelativePath", "Public/InputActionValue.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		"EInputActionValueType",
		"EInputActionValueType",
		Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EnhancedInput_EInputActionValueType()
	{
		if (!Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton, Z_Construct_UEnum_EnhancedInput_EInputActionValueType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputActionValueType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputActionValue;
class UScriptStruct* FInputActionValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputActionValue, (UObject*)Z_Construct_UPackage__Script_EnhancedInput(), TEXT("InputActionValue"));
	}
	return Z_Registration_Info_UScriptStruct_InputActionValue.OuterSingleton;
}
template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<FInputActionValue>()
{
	return FInputActionValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputActionValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputActionValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "/Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue" },
		{ "HasNativeMake", "/Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType" },
		{ "ModuleRelativePath", "Public/InputActionValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputActionValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputActionValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputActionValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
		nullptr,
		&NewStructOps,
		"InputActionValue",
		sizeof(FInputActionValue),
		alignof(FInputActionValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputActionValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputActionValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue()
	{
		if (!Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton, Z_Construct_UScriptStruct_FInputActionValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputActionValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::EnumInfo[] = {
		{ EInputActionValueType_StaticEnum, TEXT("EInputActionValueType"), &Z_Registration_Info_UEnum_EInputActionValueType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 554781252U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::ScriptStructInfo[] = {
		{ FInputActionValue::StaticStruct, Z_Construct_UScriptStruct_FInputActionValue_Statics::NewStructOps, TEXT("InputActionValue"), &Z_Registration_Info_UScriptStruct_InputActionValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputActionValue), 2388133963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_2925474483(TEXT("/Script/EnhancedInput"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputActionValue_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
