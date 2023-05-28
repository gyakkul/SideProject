// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetTextLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPolyglotTextData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERoundingMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextGender();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoundingMode;
	static UEnum* ERoundingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERoundingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERoundingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERoundingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERoundingMode"));
		}
		return Z_Registration_Info_UEnum_ERoundingMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERoundingMode>()
	{
		return ERoundingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERoundingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enumerators[] = {
		{ "HalfToEven", (int64)HalfToEven },
		{ "HalfFromZero", (int64)HalfFromZero },
		{ "HalfToZero", (int64)HalfToZero },
		{ "FromZero", (int64)FromZero },
		{ "ToZero", (int64)ToZero },
		{ "ToNegativeInfinity", (int64)ToNegativeInfinity },
		{ "ToPositiveInfinity", (int64)ToPositiveInfinity },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Provides rounding modes for converting numbers into localized text */" },
		{ "FromZero.Comment", "/** Rounds to the value which is further from zero, \"larger\" in absolute value: 0.1 becomes 1, -0.1 becomes -1 */" },
		{ "FromZero.Name", "FromZero" },
		{ "FromZero.ToolTip", "Rounds to the value which is further from zero, \"larger\" in absolute value: 0.1 becomes 1, -0.1 becomes -1" },
		{ "HalfFromZero.Comment", "/** Rounds to nearest place, equidistant ties go to the value which is further from zero: -0.5 becomes -1.0, 0.5 becomes 1.0 */" },
		{ "HalfFromZero.Name", "HalfFromZero" },
		{ "HalfFromZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is further from zero: -0.5 becomes -1.0, 0.5 becomes 1.0" },
		{ "HalfToEven.Comment", "/** Rounds to the nearest place, equidistant ties go to the value which is closest to an even value: 1.5 becomes 2, 0.5 becomes 0 */" },
		{ "HalfToEven.Name", "HalfToEven" },
		{ "HalfToEven.ToolTip", "Rounds to the nearest place, equidistant ties go to the value which is closest to an even value: 1.5 becomes 2, 0.5 becomes 0" },
		{ "HalfToZero.Comment", "/** Rounds to nearest place, equidistant ties go to the value which is closer to zero: -0.5 becomes 0, 0.5 becomes 0. */" },
		{ "HalfToZero.Name", "HalfToZero" },
		{ "HalfToZero.ToolTip", "Rounds to nearest place, equidistant ties go to the value which is closer to zero: -0.5 becomes 0, 0.5 becomes 0." },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToNegativeInfinity.Comment", "/** Rounds to the value which is more negative: 0.1 becomes 0, -0.1 becomes -1 */" },
		{ "ToNegativeInfinity.Name", "ToNegativeInfinity" },
		{ "ToNegativeInfinity.ToolTip", "Rounds to the value which is more negative: 0.1 becomes 0, -0.1 becomes -1" },
		{ "ToolTip", "Provides rounding modes for converting numbers into localized text" },
		{ "ToPositiveInfinity.Comment", "/** Rounds to the value which is more positive: 0.1 becomes 1, -0.1 becomes 0 */" },
		{ "ToPositiveInfinity.Name", "ToPositiveInfinity" },
		{ "ToPositiveInfinity.ToolTip", "Rounds to the value which is more positive: 0.1 becomes 1, -0.1 becomes 0" },
		{ "ToZero.Comment", "/** Rounds to the value which is closer to zero, \"smaller\" in absolute value: 0.1 becomes 0, -0.1 becomes 0 */" },
		{ "ToZero.Name", "ToZero" },
		{ "ToZero.ToolTip", "Rounds to the value which is closer to zero, \"smaller\" in absolute value: 0.1 becomes 0, -0.1 becomes 0" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERoundingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERoundingMode",
		"ERoundingMode",
		Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERoundingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERoundingMode()
	{
		if (!Z_Registration_Info_UEnum_ERoundingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoundingMode.InnerSingleton, Z_Construct_UEnum_Engine_ERoundingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERoundingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextGender;
	static UEnum* ETextGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextGender, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextGender"));
		}
		return Z_Registration_Info_UEnum_ETextGender.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextGender>()
	{
		return ETextGender_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextGender_Statics::Enumerators[] = {
		{ "ETextGender::Masculine", (int64)ETextGender::Masculine },
		{ "ETextGender::Feminine", (int64)ETextGender::Feminine },
		{ "ETextGender::Neuter", (int64)ETextGender::Neuter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextGender_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Feminine.Name", "ETextGender::Feminine" },
		{ "Masculine.Name", "ETextGender::Masculine" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "Neuter.Name", "ETextGender::Neuter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextGender",
		"ETextGender",
		Z_Construct_UEnum_Engine_ETextGender_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextGender_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextGender_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextGender_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextGender()
	{
		if (!Z_Registration_Info_UEnum_ETextGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextGender.InnerSingleton, Z_Construct_UEnum_Engine_ETextGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFormatArgumentType;
	static UEnum* EFormatArgumentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFormatArgumentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFormatArgumentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFormatArgumentType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFormatArgumentType"));
		}
		return Z_Registration_Info_UEnum_EFormatArgumentType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFormatArgumentType::Type>()
	{
		return EFormatArgumentType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFormatArgumentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enumerators[] = {
		{ "EFormatArgumentType::Int", (int64)EFormatArgumentType::Int },
		{ "EFormatArgumentType::UInt", (int64)EFormatArgumentType::UInt },
		{ "EFormatArgumentType::Float", (int64)EFormatArgumentType::Float },
		{ "EFormatArgumentType::Double", (int64)EFormatArgumentType::Double },
		{ "EFormatArgumentType::Text", (int64)EFormatArgumentType::Text },
		{ "EFormatArgumentType::Gender", (int64)EFormatArgumentType::Gender },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Double.Name", "EFormatArgumentType::Double" },
		{ "Float.Name", "EFormatArgumentType::Float" },
		{ "Gender.Name", "EFormatArgumentType::Gender" },
		{ "Int.Name", "EFormatArgumentType::Int" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "Text.Name", "EFormatArgumentType::Text" },
		{ "UInt.Name", "EFormatArgumentType::UInt" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFormatArgumentType",
		"EFormatArgumentType::Type",
		Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFormatArgumentType()
	{
		if (!Z_Registration_Info_UEnum_EFormatArgumentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFormatArgumentType.InnerSingleton, Z_Construct_UEnum_Engine_EFormatArgumentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFormatArgumentType.InnerSingleton;
	}
	struct Z_Construct_UScriptStruct_FFormatArgumentData_Statics
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int64 ArgumentValueInt;
			float ArgumentValueFloat;
			double ArgumentValueDouble;
			ETextGender ArgumentValueGender;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ArgumentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ArgumentValueType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValue_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ArgumentValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueInt_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ArgumentValueInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArgumentValueFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueDouble_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ArgumentValueDouble;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ArgumentValueGender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArgumentValueGender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ArgumentValueGender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Used to pass argument/value pairs into FText::Format.\n * The full C++ struct is located here: Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h\n */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Used to pass argument/value pairs into FText::Format.\nThe full C++ struct is located here: Engine\\Source\\Runtime\\Core\\Public\\Internationalization\\Text.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData[] = {
		{ "Category", "ArgumentName" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName = { "ArgumentName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType = { "ArgumentValueType", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueType), Z_Construct_UEnum_Engine_EFormatArgumentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType_MetaData)) }; // 1879541766
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue = { "ArgumentValue", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt = { "ArgumentValueInt", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat = { "ArgumentValueFloat", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueDouble_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueDouble = { "ArgumentValueDouble", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueDouble), METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueDouble_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueDouble_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData[] = {
		{ "Category", "ArgumentValue" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender = { "ArgumentValueGender", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFormatArgumentData, ArgumentValueGender), Z_Construct_UEnum_Engine_ETextGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_MetaData)) }; // 3697711109
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueDouble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFormatArgumentData_Statics::NewProp_ArgumentValueGender,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFormatArgumentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"FormatArgumentData",
		sizeof(FFormatArgumentData),
		alignof(FFormatArgumentData),
		Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFormatArgumentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFormatArgumentData()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFormatArgumentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execPolyglotDataToText)
	{
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::PolyglotDataToText(Z_Param_Out_PolyglotData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execIsPolyglotDataValid)
	{
		P_GET_STRUCT_REF(FPolyglotTextData,Z_Param_Out_PolyglotData);
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetTextLibrary::IsPolyglotDataValid(Z_Param_Out_PolyglotData,Z_Param_Out_IsValid,Z_Param_Out_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execStringTableIdAndKeyFromText)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_Text);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutTableId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::StringTableIdAndKeyFromText(Z_Param_Text,Z_Param_Out_OutTableId,Z_Param_Out_OutKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextFromStringTable)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TableId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextFromStringTable(Z_Param_TableId,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextIsFromStringTable)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsFromStringTable(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execFormat)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_InPattern);
		P_GET_TARRAY(FFormatArgumentData,Z_Param_InArgs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Format(Z_Param_InPattern,Z_Param_InArgs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsTimespan_Timespan)
	{
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_InTimespan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimespan_Timespan(Z_Param_Out_InTimespan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsTimeZoneTime_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTimeZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsTime_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTime_DateTime(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsTimeZoneDateTime_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTimeZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDateTime_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsDateTime_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_In);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDateTime_DateTime(Z_Param_Out_In);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsTimeZoneDate_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_GET_PROPERTY(FStrProperty,Z_Param_InTimeZone);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsTimeZoneDate_DateTime(Z_Param_Out_InDateTime,Z_Param_InTimeZone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsDate_DateTime)
	{
		P_GET_STRUCT_REF(FDateTime,Z_Param_Out_InDateTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsDate_DateTime(Z_Param_Out_InDateTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsPercent_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_RoundingMode);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumFractionalDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumFractionalDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsPercent_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsCurrency_Float)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_RoundingMode);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumFractionalDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumFractionalDigits);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Float(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsCurrency_Integer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_RoundingMode);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumFractionalDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumFractionalDigits);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrency_Integer(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits,Z_Param_CurrencyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execAsCurrencyBase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_BaseValue);
		P_GET_PROPERTY(FStrProperty,Z_Param_CurrencyCode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::AsCurrencyBase(Z_Param_BaseValue,Z_Param_CurrencyCode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_DoubleToText)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_RoundingMode);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumFractionalDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumFractionalDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_DoubleToText(Z_Param_Value,ERoundingMode(Z_Param_RoundingMode),Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits,Z_Param_MinimumFractionalDigits,Z_Param_MaximumFractionalDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_Int64ToText)
	{
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_Int64ToText(Z_Param_Value,Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_IntToText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bAlwaysSign);
		P_GET_UBOOL(Z_Param_bUseGrouping);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinimumIntegralDigits);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaximumIntegralDigits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_IntToText(Z_Param_Value,Z_Param_bAlwaysSign,Z_Param_bUseGrouping,Z_Param_MinimumIntegralDigits,Z_Param_MaximumIntegralDigits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_ByteToText)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ByteToText(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_BoolToText)
	{
		P_GET_UBOOL(Z_Param_InBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_BoolToText(Z_Param_InBool);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execNotEqual_IgnoreCase_TextText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execNotEqual_TextText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::NotEqual_TextText(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execEqualEqual_IgnoreCase_TextText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_IgnoreCase_TextText(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execEqualEqual_TextText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_A);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::EqualEqual_TextText(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execFindTextInLocalizationTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Namespace);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::FindTextInLocalizationTable(Z_Param_Namespace,Z_Param_Key,Z_Param_Out_OutText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execGetEmptyText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::GetEmptyText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextTrimPrecedingAndTrailing)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPrecedingAndTrailing(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextTrimTrailing)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimTrailing(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextTrimPreceding)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextTrimPreceding(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextToUpper)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToUpper(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextToLower)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::TextToLower(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextIsCultureInvariant)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsCultureInvariant(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextIsTransient)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsTransient(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execTextIsEmpty)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UKismetTextLibrary::TextIsEmpty(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_NameToText)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_NameToText(Z_Param_InName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_StringToText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_StringToText(Z_Param_InString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_TextToString)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InText);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UKismetTextLibrary::Conv_TextToString(Z_Param_Out_InText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_ColorToText)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_InColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ColorToText(Z_Param_InColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_ObjectToText)
	{
		P_GET_OBJECT(UObject,Z_Param_InObj);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_ObjectToText(Z_Param_InObj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_TransformToText)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_TransformToText(Z_Param_Out_InTrans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_RotatorToText)
	{
		P_GET_STRUCT(FRotator,Z_Param_InRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_RotatorToText(Z_Param_InRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_Vector2dToText)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_Vector2dToText(Z_Param_InVec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetTextLibrary::execConv_VectorToText)
	{
		P_GET_STRUCT(FVector,Z_Param_InVec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UKismetTextLibrary::Conv_VectorToText(Z_Param_InVec);
		P_NATIVE_END;
	}
	void UKismetTextLibrary::StaticRegisterNativesUKismetTextLibrary()
	{
		UClass* Class = UKismetTextLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsCurrency_Float", &UKismetTextLibrary::execAsCurrency_Float },
			{ "AsCurrency_Integer", &UKismetTextLibrary::execAsCurrency_Integer },
			{ "AsCurrencyBase", &UKismetTextLibrary::execAsCurrencyBase },
			{ "AsDate_DateTime", &UKismetTextLibrary::execAsDate_DateTime },
			{ "AsDateTime_DateTime", &UKismetTextLibrary::execAsDateTime_DateTime },
			{ "AsPercent_Float", &UKismetTextLibrary::execAsPercent_Float },
			{ "AsTime_DateTime", &UKismetTextLibrary::execAsTime_DateTime },
			{ "AsTimespan_Timespan", &UKismetTextLibrary::execAsTimespan_Timespan },
			{ "AsTimeZoneDate_DateTime", &UKismetTextLibrary::execAsTimeZoneDate_DateTime },
			{ "AsTimeZoneDateTime_DateTime", &UKismetTextLibrary::execAsTimeZoneDateTime_DateTime },
			{ "AsTimeZoneTime_DateTime", &UKismetTextLibrary::execAsTimeZoneTime_DateTime },
			{ "Conv_BoolToText", &UKismetTextLibrary::execConv_BoolToText },
			{ "Conv_ByteToText", &UKismetTextLibrary::execConv_ByteToText },
			{ "Conv_ColorToText", &UKismetTextLibrary::execConv_ColorToText },
			{ "Conv_DoubleToText", &UKismetTextLibrary::execConv_DoubleToText },
			{ "Conv_Int64ToText", &UKismetTextLibrary::execConv_Int64ToText },
			{ "Conv_IntToText", &UKismetTextLibrary::execConv_IntToText },
			{ "Conv_NameToText", &UKismetTextLibrary::execConv_NameToText },
			{ "Conv_ObjectToText", &UKismetTextLibrary::execConv_ObjectToText },
			{ "Conv_RotatorToText", &UKismetTextLibrary::execConv_RotatorToText },
			{ "Conv_StringToText", &UKismetTextLibrary::execConv_StringToText },
			{ "Conv_TextToString", &UKismetTextLibrary::execConv_TextToString },
			{ "Conv_TransformToText", &UKismetTextLibrary::execConv_TransformToText },
			{ "Conv_Vector2dToText", &UKismetTextLibrary::execConv_Vector2dToText },
			{ "Conv_VectorToText", &UKismetTextLibrary::execConv_VectorToText },
			{ "EqualEqual_IgnoreCase_TextText", &UKismetTextLibrary::execEqualEqual_IgnoreCase_TextText },
			{ "EqualEqual_TextText", &UKismetTextLibrary::execEqualEqual_TextText },
			{ "FindTextInLocalizationTable", &UKismetTextLibrary::execFindTextInLocalizationTable },
			{ "Format", &UKismetTextLibrary::execFormat },
			{ "GetEmptyText", &UKismetTextLibrary::execGetEmptyText },
			{ "IsPolyglotDataValid", &UKismetTextLibrary::execIsPolyglotDataValid },
			{ "NotEqual_IgnoreCase_TextText", &UKismetTextLibrary::execNotEqual_IgnoreCase_TextText },
			{ "NotEqual_TextText", &UKismetTextLibrary::execNotEqual_TextText },
			{ "PolyglotDataToText", &UKismetTextLibrary::execPolyglotDataToText },
			{ "StringTableIdAndKeyFromText", &UKismetTextLibrary::execStringTableIdAndKeyFromText },
			{ "TextFromStringTable", &UKismetTextLibrary::execTextFromStringTable },
			{ "TextIsCultureInvariant", &UKismetTextLibrary::execTextIsCultureInvariant },
			{ "TextIsEmpty", &UKismetTextLibrary::execTextIsEmpty },
			{ "TextIsFromStringTable", &UKismetTextLibrary::execTextIsFromStringTable },
			{ "TextIsTransient", &UKismetTextLibrary::execTextIsTransient },
			{ "TextToLower", &UKismetTextLibrary::execTextToLower },
			{ "TextToUpper", &UKismetTextLibrary::execTextToUpper },
			{ "TextTrimPreceding", &UKismetTextLibrary::execTextTrimPreceding },
			{ "TextTrimPrecedingAndTrailing", &UKismetTextLibrary::execTextTrimPrecedingAndTrailing },
			{ "TextTrimTrailing", &UKismetTextLibrary::execTextTrimTrailing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics
	{
		struct KismetTextLibrary_eventAsCurrency_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_RoundingMode = { "RoundingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) }; // 2729628499
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Float_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Float_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsCurrency_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_RoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_MaximumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_CurrencyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in float to a text formatted as a currency */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_CurrencyCode", "" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "AsCurrency (float) - DEPRECATED (use AsCurrency)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in float to a text formatted as a currency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsCurrency_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::KismetTextLibrary_eventAsCurrency_Float_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics
	{
		struct KismetTextLibrary_eventAsCurrency_Integer_Parms
		{
			int32 Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_RoundingMode = { "RoundingMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) }; // 2729628499
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Integer_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsCurrency_Integer_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsCurrency_Integer_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrency_Integer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_RoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_MaximumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_CurrencyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in integer to a text formatted as a currency */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_CurrencyCode", "" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "AsCurrency (integer) - DEPRECATED (use AsCurrency)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in integer to a text formatted as a currency" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsCurrency_Integer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::KismetTextLibrary_eventAsCurrency_Integer_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics
	{
		struct KismetTextLibrary_eventAsCurrencyBase_Parms
		{
			int32 BaseValue;
			FString CurrencyCode;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_BaseValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_BaseValue = { "BaseValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, BaseValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, CurrencyCode), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsCurrencyBase_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_BaseValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_CurrencyCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Generate an FText that represents the passed number as currency in the current culture.\n\x09 * BaseVal is specified in the smallest fractional value of the currency and will be converted for formatting according to the selected culture.\n\x09 * Keep in mind the CurrencyCode is completely independent of the culture it's displayed in (and they do not imply one another).\n\x09 * For example: FText::AsCurrencyBase(650, TEXT(\"EUR\")); would return an FText of \"<EUR>6.50\" in most English cultures (en_US/en_UK) and \"6,50<EUR>\" in Spanish (es_ES) (where <EUR> is U+20AC)\n\x09 */" },
		{ "DisplayName", "As Currency" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Generate an FText that represents the passed number as currency in the current culture.\nBaseVal is specified in the smallest fractional value of the currency and will be converted for formatting according to the selected culture.\nKeep in mind the CurrencyCode is completely independent of the culture it's displayed in (and they do not imply one another).\nFor example: FText::AsCurrencyBase(650, TEXT(\"EUR\")); would return an FText of \"<EUR>6.50\" in most English cultures (en_US/en_UK) and \"6,50<EUR>\" in Spanish (es_ES) (where <EUR> is U+20AC)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsCurrencyBase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::KismetTextLibrary_eventAsCurrencyBase_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_InDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a date using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone. */" },
		{ "DisplayName", "As Date" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsDate_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::KismetTextLibrary_eventAsDate_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsDateTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a date & time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone. */" },
		{ "DisplayName", "As DateTime" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsDateTime_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::KismetTextLibrary_eventAsDateTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics
	{
		struct KismetTextLibrary_eventAsPercent_Float_Parms
		{
			float Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_RoundingMode = { "RoundingMode", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) }; // 2729628499
	void Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsPercent_Float_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventAsPercent_Float_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventAsPercent_Float_Parms), &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsPercent_Float_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_RoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_MaximumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in float to a text, formatted as a percent */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "As Percent" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in float to a text, formatted as a percent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsPercent_Float", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::KismetTextLibrary_eventAsPercent_Float_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTime_DateTime_Parms
		{
			FDateTime In;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, In), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone. */" },
		{ "DisplayName", "As Time" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using an invariant timezone. This will use the given date & time as-is, so it's assumed to already be in the correct timezone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsTime_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::KismetTextLibrary_eventAsTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics
	{
		struct KismetTextLibrary_eventAsTimespan_Timespan_Parms
		{
			FTimespan InTimespan;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimespan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTimespan;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan = { "InTimespan", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, InTimespan), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimespan_Timespan_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_InTimespan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in time span to a text, formatted as a time span */" },
		{ "DisplayName", "As Timespan" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in time span to a text, formatted as a time span" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsTimespan_Timespan", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::KismetTextLibrary_eventAsTimespan_Timespan_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone = { "InTimeZone", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_InTimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a date using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST). */" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "As Date (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsTimeZoneDate_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::KismetTextLibrary_eventAsTimeZoneDate_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone = { "InTimeZone", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_InTimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a date & time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST). */" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "As DateTime (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a date & time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsTimeZoneDateTime_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::KismetTextLibrary_eventAsTimeZoneDateTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics
	{
		struct KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms
		{
			FDateTime InDateTime;
			FString InTimeZone;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDateTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InDateTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTimeZone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTimeZone;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime = { "InDateTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InDateTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone = { "InTimeZone", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, InTimeZone), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InDateTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_InTimeZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in date & time to a text, formatted as a time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST). */" },
		{ "CPP_Default_InTimeZone", "" },
		{ "DisplayName", "As Time (from UTC)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in date & time to a text, formatted as a time using the given timezone (default is the local timezone). This will convert the given date & time from UTC to the given timezone (taking into account DST)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "AsTimeZoneTime_DateTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::KismetTextLibrary_eventAsTimeZoneTime_DateTime_Parms), Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics
	{
		struct KismetTextLibrary_eventConv_BoolToText_Parms
		{
			bool InBool;
			FText ReturnValue;
		};
		static void NewProp_InBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InBool;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_BoolToText_Parms*)Obj)->InBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool = { "InBool", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_BoolToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_BoolToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_InBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a boolean value to formatted text, either 'true' or 'false' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Boolean)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a boolean value to formatted text, either 'true' or 'false'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_BoolToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::KismetTextLibrary_eventConv_BoolToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics
	{
		struct KismetTextLibrary_eventConv_ByteToText_Parms
		{
			uint8 Value;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, Value), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ByteToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a byte value to formatted text */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Byte)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a byte value to formatted text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_ByteToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::KismetTextLibrary_eventConv_ByteToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics
	{
		struct KismetTextLibrary_eventConv_ColorToText_Parms
		{
			FLinearColor InColor;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ColorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_InColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a linear color value to localized formatted text, in the form '(R=,G=,B=,A=)' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (LinearColor)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a linear color value to localized formatted text, in the form '(R=,G=,B=,A=)'" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_ColorToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::KismetTextLibrary_eventConv_ColorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics
	{
		struct KismetTextLibrary_eventConv_DoubleToText_Parms
		{
			double Value;
			TEnumAsByte<ERoundingMode> RoundingMode;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			int32 MinimumFractionalDigits;
			int32 MaximumFractionalDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoundingMode;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumFractionalDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumFractionalDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_RoundingMode = { "RoundingMode", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, RoundingMode), Z_Construct_UEnum_Engine_ERoundingMode, METADATA_PARAMS(nullptr, 0) }; // 2729628499
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_DoubleToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_DoubleToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_DoubleToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_DoubleToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MinimumFractionalDigits = { "MinimumFractionalDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, MinimumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MaximumFractionalDigits = { "MaximumFractionalDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, MaximumFractionalDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_DoubleToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_RoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MinimumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_MaximumFractionalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in double to text based on formatting options */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumFractionalDigits", "3" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumFractionalDigits", "0" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "To Text (Float)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in double to text based on formatting options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_DoubleToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::KismetTextLibrary_eventConv_DoubleToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics
	{
		struct KismetTextLibrary_eventConv_Int64ToText_Parms
		{
			int64 Value;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Int64ToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_Int64ToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_Int64ToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_Int64ToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_Int64ToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Int64ToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Int64ToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Int64ToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in integer to text based on formatting options */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "To Text (Integer64)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in integer to text based on formatting options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_Int64ToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::KismetTextLibrary_eventConv_Int64ToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics
	{
		struct KismetTextLibrary_eventConv_IntToText_Parms
		{
			int32 Value;
			bool bAlwaysSign;
			bool bUseGrouping;
			int32 MinimumIntegralDigits;
			int32 MaximumIntegralDigits;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bAlwaysSign_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysSign;
		static void NewProp_bUseGrouping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGrouping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumIntegralDigits;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumIntegralDigits;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_IntToText_Parms*)Obj)->bAlwaysSign = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign = { "bAlwaysSign", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_IntToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventConv_IntToText_Parms*)Obj)->bUseGrouping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping = { "bUseGrouping", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventConv_IntToText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MinimumIntegralDigits = { "MinimumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MinimumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MaximumIntegralDigits = { "MaximumIntegralDigits", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, MaximumIntegralDigits), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_IntToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bAlwaysSign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_bUseGrouping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MinimumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_MaximumIntegralDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a passed in integer to text based on formatting options */" },
		{ "CPP_Default_bAlwaysSign", "false" },
		{ "CPP_Default_bUseGrouping", "true" },
		{ "CPP_Default_MaximumIntegralDigits", "324" },
		{ "CPP_Default_MinimumIntegralDigits", "1" },
		{ "DisplayName", "To Text (Integer)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a passed in integer to text based on formatting options" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_IntToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::KismetTextLibrary_eventConv_IntToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics
	{
		struct KismetTextLibrary_eventConv_NameToText_Parms
		{
			FName InName;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_InName = { "InName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, InName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_NameToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_InName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts Name to culture invariant text */" },
		{ "DisplayName", "To Text (Name)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts Name to culture invariant text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_NameToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::KismetTextLibrary_eventConv_NameToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics
	{
		struct KismetTextLibrary_eventConv_ObjectToText_Parms
		{
			UObject* InObj;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObj;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_InObj = { "InObj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, InObj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_ObjectToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_InObj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a UObject value to culture invariant text by calling the object's GetName method */" },
		{ "DisplayName", "To Text (Object)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a UObject value to culture invariant text by calling the object's GetName method" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_ObjectToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::KismetTextLibrary_eventConv_ObjectToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics
	{
		struct KismetTextLibrary_eventConv_RotatorToText_Parms
		{
			FRotator InRot;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRot;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_InRot = { "InRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, InRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_RotatorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_InRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a rotator value to localized formatted text, in the form 'P= Y= R=' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Rotator)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a rotator value to localized formatted text, in the form 'P= Y= R='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_RotatorToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::KismetTextLibrary_eventConv_RotatorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics
	{
		struct KismetTextLibrary_eventConv_StringToText_Parms
		{
			FString InString;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, InString), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_StringToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_InString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts string to culture invariant text. Use Format or Make Literal Text to create localizable text */" },
		{ "DisplayName", "To Text (String)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts string to culture invariant text. Use Format or Make Literal Text to create localizable text" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_StringToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::KismetTextLibrary_eventConv_StringToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics
	{
		struct KismetTextLibrary_eventConv_TextToString_Parms
		{
			FText InText;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TextToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|String" },
		{ "Comment", "/** Converts localizable text to the string */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To String (Text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts localizable text to the string" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_TextToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::KismetTextLibrary_eventConv_TextToString_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics
	{
		struct KismetTextLibrary_eventConv_TransformToText_Parms
		{
			FTransform InTrans;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTrans_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTrans;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans = { "InTrans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, InTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_TransformToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_InTrans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a transform value to localized formatted text, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z=' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Transform)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a transform value to localized formatted text, in the form 'Translation: X= Y= Z= Rotation: P= Y= R= Scale: X= Y= Z='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_TransformToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::KismetTextLibrary_eventConv_TransformToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics
	{
		struct KismetTextLibrary_eventConv_Vector2dToText_Parms
		{
			FVector2D InVec;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_InVec = { "InVec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, InVec), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_Vector2dToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_InVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a vector2d value to localized formatted text, in the form 'X= Y=' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Vector2d)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a vector2d value to localized formatted text, in the form 'X= Y='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_Vector2dToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::KismetTextLibrary_eventConv_Vector2dToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics
	{
		struct KismetTextLibrary_eventConv_VectorToText_Parms
		{
			FVector InVec;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InVec;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_InVec = { "InVec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, InVec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventConv_VectorToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_InVec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Converts a vector value to localized formatted text, in the form 'X= Y= Z=' */" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "To Text (Vector)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Converts a vector value to localized formatted text, in the form 'X= Y= Z='" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Conv_VectorToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::KismetTextLibrary_eventConv_VectorToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics
	{
		struct KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if A and B are linguistically equal (A == B), ignoring case. */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal, Case Insensitive (Text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically equal (A == B), ignoring case." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "EqualEqual_IgnoreCase_TextText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::KismetTextLibrary_eventEqualEqual_IgnoreCase_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics
	{
		struct KismetTextLibrary_eventEqualEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventEqualEqual_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventEqualEqual_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventEqualEqual_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if A and B are linguistically equal (A == B). */" },
		{ "CompactNodeTitle", "===" },
		{ "DisplayName", "Equal Exactly (Text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically equal (A == B)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "EqualEqual_TextText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::KismetTextLibrary_eventEqualEqual_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics
	{
		struct KismetTextLibrary_eventFindTextInLocalizationTable_Parms
		{
			FString Namespace;
			FString Key;
			FText OutText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Namespace), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_OutText = { "OutText", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFindTextInLocalizationTable_Parms, OutText), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventFindTextInLocalizationTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventFindTextInLocalizationTable_Parms), &Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_OutText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Attempts to find existing Text using the representation found in the loc tables for the specified namespace and key. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to find existing Text using the representation found in the loc tables for the specified namespace and key." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "FindTextInLocalizationTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::KismetTextLibrary_eventFindTextInLocalizationTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_Format_Statics
	{
		struct FFormatArgumentData
		{
			FString ArgumentName;
			TEnumAsByte<EFormatArgumentType::Type> ArgumentValueType;
			FText ArgumentValue;
			int64 ArgumentValueInt;
			float ArgumentValueFloat;
			double ArgumentValueDouble;
			ETextGender ArgumentValueGender;
		};

		struct KismetTextLibrary_eventFormat_Parms
		{
			FText InPattern;
			TArray<FFormatArgumentData> InArgs;
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_InPattern;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InArgs_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InArgs;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InPattern = { "InPattern", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InPattern), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs_Inner = { "InArgs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFormatArgumentData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs = { "InArgs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, InArgs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventFormat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InPattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_InArgs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "/** Used for formatting text using the FText::Format function and utilized by the UK2Node_FormatText */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Used for formatting text using the FText::Format function and utilized by the UK2Node_FormatText" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "Format", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::KismetTextLibrary_eventFormat_Parms), Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_Format()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_Format_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics
	{
		struct KismetTextLibrary_eventGetEmptyText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventGetEmptyText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns an empty piece of text. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns an empty piece of text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "GetEmptyText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::KismetTextLibrary_eventGetEmptyText_Parms), Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			bool bIsMinimalPatch;
			FText CachedText;
		};

		struct KismetTextLibrary_eventIsPolyglotDataValid_Parms
		{
			FPolyglotTextData PolyglotData;
			bool IsValid;
			FText ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyglotData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyglotData;
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData = { "PolyglotData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventIsPolyglotDataValid_Parms, PolyglotData), Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventIsPolyglotDataValid_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventIsPolyglotDataValid_Parms), &Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventIsPolyglotDataValid_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_PolyglotData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Check whether the given polyglot data is valid.\n\x09 * @return True if the polyglot data is valid, false otherwise. ErrorMessage will be filled in if the the data is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Check whether the given polyglot data is valid.\n@return True if the polyglot data is valid, false otherwise. ErrorMessage will be filled in if the the data is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "IsPolyglotDataValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::KismetTextLibrary_eventIsPolyglotDataValid_Parms), Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics
	{
		struct KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if A and B are linguistically not equal (A != B), ignoring case. */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal, Case Insensitive (Text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B), ignoring case." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "NotEqual_IgnoreCase_TextText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::KismetTextLibrary_eventNotEqual_IgnoreCase_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics
	{
		struct KismetTextLibrary_eventNotEqual_TextText_Parms
		{
			FText A;
			FText B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, A), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventNotEqual_TextText_Parms, B), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventNotEqual_TextText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventNotEqual_TextText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if A and B are linguistically not equal (A != B). */" },
		{ "CompactNodeTitle", "!==" },
		{ "DisplayName", "Not Equal Exactly (Text)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if A and B are linguistically not equal (A != B)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "NotEqual_TextText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::KismetTextLibrary_eventNotEqual_TextText_Parms), Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics
	{
		struct FPolyglotTextData
		{
			ELocalizedTextSourceCategory Category;
			FString NativeCulture;
			FString Namespace;
			FString Key;
			FString NativeString;
			TMap<FString,FString> LocalizedStrings;
			bool bIsMinimalPatch;
			FText CachedText;
		};

		struct KismetTextLibrary_eventPolyglotDataToText_Parms
		{
			FPolyglotTextData PolyglotData;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolyglotData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyglotData;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData = { "PolyglotData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventPolyglotDataToText_Parms, PolyglotData), Z_Construct_UScriptStruct_FPolyglotTextData, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventPolyglotDataToText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_PolyglotData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Get the text instance created from this polyglot data.\n\x09 * @return The text instance, or an empty text if the data is invalid.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Get the text instance created from this polyglot data.\n@return The text instance, or an empty text if the data is invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "PolyglotDataToText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::KismetTextLibrary_eventPolyglotDataToText_Parms), Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics
	{
		struct KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms
		{
			FText Text;
			FName OutTableId;
			FString OutKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutTableId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, Text), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutTableId = { "OutTableId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutTableId), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutKey = { "OutKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms, OutKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), &Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutTableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_OutKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Attempts to find the String Table ID and key used by the given text.\n\x09 * @return True if the String Table ID and key were found, false otherwise.\n\x09 */" },
		{ "DisplayName", "Find String Table ID and Key from Text" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to find the String Table ID and key used by the given text.\n@return True if the String Table ID and key were found, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "StringTableIdAndKeyFromText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::KismetTextLibrary_eventStringTableIdAndKeyFromText_Parms), Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics
	{
		struct KismetTextLibrary_eventTextFromStringTable_Parms
		{
			FName TableId;
			FString Key;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableId_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TableId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId = { "TableId", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, TableId), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextFromStringTable_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_TableId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Attempts to create a text instance from a string table ID and key.\n\x09 * @note This exists to allow programmatic look-up of a string table entry from dynamic content - you should favor setting your string table reference on a text property or pin wherever possible as it is significantly more robust (see \"Make Literal Text\").\n\x09 * @return The found text, or a dummy text if the entry could not be found.\n\x09 */" },
		{ "DisplayName", "Make Text from String Table (Advanced)" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Attempts to create a text instance from a string table ID and key.\n@note This exists to allow programmatic look-up of a string table entry from dynamic content - you should favor setting your string table reference on a text property or pin wherever possible as it is significantly more robust (see \"Make Literal Text\").\n@return The found text, or a dummy text if the entry could not be found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextFromStringTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::KismetTextLibrary_eventTextFromStringTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics
	{
		struct KismetTextLibrary_eventTextIsCultureInvariant_Parms
		{
			FText InText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsCultureInvariant_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsCultureInvariant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventTextIsCultureInvariant_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if text is culture invariant. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is culture invariant." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextIsCultureInvariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::KismetTextLibrary_eventTextIsCultureInvariant_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics
	{
		struct KismetTextLibrary_eventTextIsEmpty_Parms
		{
			FText InText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsEmpty_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventTextIsEmpty_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if text is empty. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is empty." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextIsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::KismetTextLibrary_eventTextIsEmpty_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics
	{
		struct KismetTextLibrary_eventTextIsFromStringTable_Parms
		{
			FText Text;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsFromStringTable_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsFromStringTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventTextIsFromStringTable_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if the given text is referencing a string table. */" },
		{ "DisplayName", "Is Text from String Table" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if the given text is referencing a string table." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextIsFromStringTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::KismetTextLibrary_eventTextIsFromStringTable_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics
	{
		struct KismetTextLibrary_eventTextIsTransient_Parms
		{
			FText InText;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextIsTransient_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText_MetaData)) };
	void Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((KismetTextLibrary_eventTextIsTransient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(KismetTextLibrary_eventTextIsTransient_Parms), &Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Returns true if text is transient. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Returns true if text is transient." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextIsTransient", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::KismetTextLibrary_eventTextIsTransient_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics
	{
		struct KismetTextLibrary_eventTextToLower_Parms
		{
			FText InText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToLower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Transforms the text to lowercase in a culture correct way.\n\x09 * @note The returned instance is linked to the original and will be rebuilt if the active culture is changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Transforms the text to lowercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextToLower", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::KismetTextLibrary_eventTextToLower_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToLower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextToLower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics
	{
		struct KismetTextLibrary_eventTextToUpper_Parms
		{
			FText InText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextToUpper_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/**\n\x09 * Transforms the text to uppercase in a culture correct way.\n\x09 * @note The returned instance is linked to the original and will be rebuilt if the active culture is changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Transforms the text to uppercase in a culture correct way.\n@note The returned instance is linked to the original and will be rebuilt if the active culture is changed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextToUpper", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::KismetTextLibrary_eventTextToUpper_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextToUpper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextToUpper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics
	{
		struct KismetTextLibrary_eventTextTrimPreceding_Parms
		{
			FText InText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPreceding_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Removes whitespace characters from the front of the text. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes whitespace characters from the front of the text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextTrimPreceding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::KismetTextLibrary_eventTextTrimPreceding_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics
	{
		struct KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Removes whitespace characters from the front and end of the text. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes whitespace characters from the front and end of the text." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextTrimPrecedingAndTrailing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::KismetTextLibrary_eventTextTrimPrecedingAndTrailing_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics
	{
		struct KismetTextLibrary_eventTextTrimTrailing_Parms
		{
			FText InText;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(KismetTextLibrary_eventTextTrimTrailing_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_InText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Text" },
		{ "Comment", "/** Removes trailing whitespace characters. */" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ToolTip", "Removes trailing whitespace characters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetTextLibrary, nullptr, "TextTrimTrailing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::KismetTextLibrary_eventTextTrimTrailing_Parms), Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKismetTextLibrary);
	UClass* Z_Construct_UClass_UKismetTextLibrary_NoRegister()
	{
		return UKismetTextLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetTextLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetTextLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetTextLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Float, "AsCurrency_Float" }, // 796167454
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrency_Integer, "AsCurrency_Integer" }, // 1736004313
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsCurrencyBase, "AsCurrencyBase" }, // 3539341750
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsDate_DateTime, "AsDate_DateTime" }, // 3585619310
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsDateTime_DateTime, "AsDateTime_DateTime" }, // 959232683
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsPercent_Float, "AsPercent_Float" }, // 1696216946
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTime_DateTime, "AsTime_DateTime" }, // 816861612
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimespan_Timespan, "AsTimespan_Timespan" }, // 2365330570
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDate_DateTime, "AsTimeZoneDate_DateTime" }, // 2238888334
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneDateTime_DateTime, "AsTimeZoneDateTime_DateTime" }, // 3013347730
		{ &Z_Construct_UFunction_UKismetTextLibrary_AsTimeZoneTime_DateTime, "AsTimeZoneTime_DateTime" }, // 3688302461
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_BoolToText, "Conv_BoolToText" }, // 3167676549
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ByteToText, "Conv_ByteToText" }, // 3327600828
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ColorToText, "Conv_ColorToText" }, // 3558607632
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_DoubleToText, "Conv_DoubleToText" }, // 3732168022
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_Int64ToText, "Conv_Int64ToText" }, // 3067116965
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_IntToText, "Conv_IntToText" }, // 3330834289
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_NameToText, "Conv_NameToText" }, // 3362451209
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_ObjectToText, "Conv_ObjectToText" }, // 1653840851
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_RotatorToText, "Conv_RotatorToText" }, // 656757581
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_StringToText, "Conv_StringToText" }, // 4292526459
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TextToString, "Conv_TextToString" }, // 203503132
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_TransformToText, "Conv_TransformToText" }, // 3113550250
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_Vector2dToText, "Conv_Vector2dToText" }, // 2409845634
		{ &Z_Construct_UFunction_UKismetTextLibrary_Conv_VectorToText, "Conv_VectorToText" }, // 3980150061
		{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_IgnoreCase_TextText, "EqualEqual_IgnoreCase_TextText" }, // 3549882417
		{ &Z_Construct_UFunction_UKismetTextLibrary_EqualEqual_TextText, "EqualEqual_TextText" }, // 1608970434
		{ &Z_Construct_UFunction_UKismetTextLibrary_FindTextInLocalizationTable, "FindTextInLocalizationTable" }, // 1058445691
		{ &Z_Construct_UFunction_UKismetTextLibrary_Format, "Format" }, // 3538278273
		{ &Z_Construct_UFunction_UKismetTextLibrary_GetEmptyText, "GetEmptyText" }, // 3159242029
		{ &Z_Construct_UFunction_UKismetTextLibrary_IsPolyglotDataValid, "IsPolyglotDataValid" }, // 1323394709
		{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_IgnoreCase_TextText, "NotEqual_IgnoreCase_TextText" }, // 3372494349
		{ &Z_Construct_UFunction_UKismetTextLibrary_NotEqual_TextText, "NotEqual_TextText" }, // 3111020356
		{ &Z_Construct_UFunction_UKismetTextLibrary_PolyglotDataToText, "PolyglotDataToText" }, // 357594425
		{ &Z_Construct_UFunction_UKismetTextLibrary_StringTableIdAndKeyFromText, "StringTableIdAndKeyFromText" }, // 1876846717
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextFromStringTable, "TextFromStringTable" }, // 4106810299
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsCultureInvariant, "TextIsCultureInvariant" }, // 2561393946
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsEmpty, "TextIsEmpty" }, // 2947455046
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsFromStringTable, "TextIsFromStringTable" }, // 1862521113
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextIsTransient, "TextIsTransient" }, // 1681069786
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextToLower, "TextToLower" }, // 4110369804
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextToUpper, "TextToUpper" }, // 530375546
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPreceding, "TextTrimPreceding" }, // 1646768313
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimPrecedingAndTrailing, "TextTrimPrecedingAndTrailing" }, // 1762048890
		{ &Z_Construct_UFunction_UKismetTextLibrary_TextTrimTrailing, "TextTrimTrailing" }, // 530812545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "IncludePath", "Kismet/KismetTextLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/KismetTextLibrary.h" },
		{ "ScriptName", "TextLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetTextLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetTextLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKismetTextLibrary_Statics::ClassParams = {
		&UKismetTextLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetTextLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetTextLibrary()
	{
		if (!Z_Registration_Info_UClass_UKismetTextLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKismetTextLibrary.OuterSingleton, Z_Construct_UClass_UKismetTextLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKismetTextLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UKismetTextLibrary>()
	{
		return UKismetTextLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetTextLibrary);
	UKismetTextLibrary::~UKismetTextLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::EnumInfo[] = {
		{ ERoundingMode_StaticEnum, TEXT("ERoundingMode"), &Z_Registration_Info_UEnum_ERoundingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2729628499U) },
		{ ETextGender_StaticEnum, TEXT("ETextGender"), &Z_Registration_Info_UEnum_ETextGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3697711109U) },
		{ EFormatArgumentType_StaticEnum, TEXT("EFormatArgumentType"), &Z_Registration_Info_UEnum_EFormatArgumentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1879541766U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKismetTextLibrary, UKismetTextLibrary::StaticClass, TEXT("UKismetTextLibrary"), &Z_Registration_Info_UClass_UKismetTextLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKismetTextLibrary), 1166609995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_289536101(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_KismetTextLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
