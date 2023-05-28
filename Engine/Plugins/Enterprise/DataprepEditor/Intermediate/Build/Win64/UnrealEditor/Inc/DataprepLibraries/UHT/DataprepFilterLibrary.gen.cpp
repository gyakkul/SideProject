// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepFilterLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepFilterLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepFilterLibrary();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepFilterLibrary_NoRegister();
	DATAPREPLIBRARIES_API UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode();
	DATAPREPLIBRARIES_API UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource();
	EDITORSCRIPTINGUTILITIES_API UEnum* Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepSizeSource;
	static UEnum* EDataprepSizeSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepSizeSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepSizeSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("EDataprepSizeSource"));
		}
		return Z_Registration_Info_UEnum_EDataprepSizeSource.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeSource>()
	{
		return EDataprepSizeSource_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enumerators[] = {
		{ "EDataprepSizeSource::BoundingBoxVolume", (int64)EDataprepSizeSource::BoundingBoxVolume },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enum_MetaDataParams[] = {
		{ "BoundingBoxVolume.Name", "EDataprepSizeSource::BoundingBoxVolume" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		"EDataprepSizeSource",
		"EDataprepSizeSource",
		Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource()
	{
		if (!Z_Registration_Info_UEnum_EDataprepSizeSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepSizeSource.InnerSingleton, Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepSizeSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepSizeFilterMode;
	static UEnum* EDataprepSizeFilterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepSizeFilterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepSizeFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("EDataprepSizeFilterMode"));
		}
		return Z_Registration_Info_UEnum_EDataprepSizeFilterMode.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepSizeFilterMode>()
	{
		return EDataprepSizeFilterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enumerators[] = {
		{ "EDataprepSizeFilterMode::SmallerThan", (int64)EDataprepSizeFilterMode::SmallerThan },
		{ "EDataprepSizeFilterMode::BiggerThan", (int64)EDataprepSizeFilterMode::BiggerThan },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enum_MetaDataParams[] = {
		{ "BiggerThan.Name", "EDataprepSizeFilterMode::BiggerThan" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
		{ "SmallerThan.Name", "EDataprepSizeFilterMode::SmallerThan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		"EDataprepSizeFilterMode",
		"EDataprepSizeFilterMode",
		Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode()
	{
		if (!Z_Registration_Info_UEnum_EDataprepSizeFilterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepSizeFilterMode.InnerSingleton, Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepSizeFilterMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UDataprepFilterLibrary::execFilterByTag)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetArray);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UDataprepFilterLibrary::FilterByTag(Z_Param_Out_TargetArray,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterLibrary::execFilterBySize)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray);
		P_GET_ENUM(EDataprepSizeSource,Z_Param_SizeSource);
		P_GET_ENUM(EDataprepSizeFilterMode,Z_Param_FilterMode);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Threshold);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UDataprepFilterLibrary::FilterBySize(Z_Param_Out_TargetArray,EDataprepSizeSource(Z_Param_SizeSource),EDataprepSizeFilterMode(Z_Param_FilterMode),Z_Param_Threshold);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterLibrary::execFilterByName)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray);
		P_GET_PROPERTY(FStrProperty,Z_Param_NameSubString);
		P_GET_ENUM(EEditorScriptingStringMatchType,Z_Param_StringMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UDataprepFilterLibrary::FilterByName(Z_Param_Out_TargetArray,Z_Param_NameSubString,EEditorScriptingStringMatchType(Z_Param_StringMatch));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepFilterLibrary::execFilterByClass)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TargetArray);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UDataprepFilterLibrary::FilterByClass(Z_Param_Out_TargetArray,Z_Param_ObjectClass);
		P_NATIVE_END;
	}
	void UDataprepFilterLibrary::StaticRegisterNativesUDataprepFilterLibrary()
	{
		UClass* Class = UDataprepFilterLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilterByClass", &UDataprepFilterLibrary::execFilterByClass },
			{ "FilterByName", &UDataprepFilterLibrary::execFilterByName },
			{ "FilterBySize", &UDataprepFilterLibrary::execFilterBySize },
			{ "FilterByTag", &UDataprepFilterLibrary::execFilterByTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics
	{
		struct DataprepFilterLibrary_eventFilterByClass_Parms
		{
			TArray<UObject*> TargetArray;
			TSubclassOf<UObject>  ObjectClass;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByClass_Parms, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByClass_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_TargetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Filter" },
		{ "Comment", "/**\n\x09 * Filter the array based on the Object's class.\n\x09 * @param\x09TargetArray\x09\x09""Array of Object to filter. The array will not change.\n\x09 * @param\x09ObjectClass\x09\x09The Class of the object.\n\x09 * @return\x09The filtered list.\n\x09 */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
		{ "ToolTip", "Filter the array based on the Object's class.\n@param       TargetArray             Array of Object to filter. The array will not change.\n@param       ObjectClass             The Class of the object.\n@return      The filtered list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterLibrary, nullptr, "FilterByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::DataprepFilterLibrary_eventFilterByClass_Parms), Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics
	{
		struct DataprepFilterLibrary_eventFilterByName_Parms
		{
			TArray<UObject*> TargetArray;
			FString NameSubString;
			EEditorScriptingStringMatchType StringMatch;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameSubString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameSubString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StringMatch_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StringMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByName_Parms, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_NameSubString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_NameSubString = { "NameSubString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByName_Parms, NameSubString), METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_NameSubString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_NameSubString_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_StringMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_StringMatch = { "StringMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByName_Parms, StringMatch), Z_Construct_UEnum_EditorScriptingUtilities_EEditorScriptingStringMatchType, METADATA_PARAMS(nullptr, 0) }; // 2163096614
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByName_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_TargetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_NameSubString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_StringMatch_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_StringMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Filter" },
		{ "Comment", "/**\n\x09 * Filter the array based on the Object name.\n\x09 * @param\x09TargetArray\x09\x09""Array of Object to filter. The array will not change.\n\x09 * @param\x09NameSubString\x09The name to filter with.\n\x09 * @param\x09StringMatch\x09\x09""Contains the NameSubString OR matches with the wildcard *? OR exactly the same value.\n\x09 * @return\x09The filtered list.\n\x09 */" },
		{ "CPP_Default_StringMatch", "Contains" },
		{ "DeterminesOutputType", "TargetArray" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
		{ "ToolTip", "Filter the array based on the Object name.\n@param       TargetArray             Array of Object to filter. The array will not change.\n@param       NameSubString   The name to filter with.\n@param       StringMatch             Contains the NameSubString OR matches with the wildcard *? OR exactly the same value.\n@return      The filtered list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterLibrary, nullptr, "FilterByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::DataprepFilterLibrary_eventFilterByName_Parms), Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics
	{
		struct DataprepFilterLibrary_eventFilterBySize_Parms
		{
			TArray<UObject*> TargetArray;
			EDataprepSizeSource SizeSource;
			EDataprepSizeFilterMode FilterMode;
			float Threshold;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SizeSource_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SizeSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FilterMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FilterMode;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterBySize_Parms, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_SizeSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_SizeSource = { "SizeSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterBySize_Parms, SizeSource), Z_Construct_UEnum_DataprepLibraries_EDataprepSizeSource, METADATA_PARAMS(nullptr, 0) }; // 1034796792
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_FilterMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_FilterMode = { "FilterMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterBySize_Parms, FilterMode), Z_Construct_UEnum_DataprepLibraries_EDataprepSizeFilterMode, METADATA_PARAMS(nullptr, 0) }; // 2958667779
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterBySize_Parms, Threshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterBySize_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_TargetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_SizeSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_SizeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_FilterMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_FilterMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Filter" },
		{ "Comment", "/**\n\x09 * Filter the array based on the geometry size.\n\x09 * @param\x09TargetArray       Array of Actors or StaticMeshes to filter. The array will not change.\n\x09 * @param   SizeSource        The reference dimension\n\x09 * @param   FilterMode        How to compare the object size with the threshold\n\x09 * @param   Threshold         Limit value\n\x09 * @return\x09The filtered list.\n\x09 */" },
		{ "DeterminesOutputType", "TargetArray" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
		{ "ToolTip", "Filter the array based on the geometry size.\n@param       TargetArray       Array of Actors or StaticMeshes to filter. The array will not change.\n@param   SizeSource        The reference dimension\n@param   FilterMode        How to compare the object size with the threshold\n@param   Threshold         Limit value\n@return      The filtered list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterLibrary, nullptr, "FilterBySize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::DataprepFilterLibrary_eventFilterBySize_Parms), Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics
	{
		struct DataprepFilterLibrary_eventFilterByTag_Parms
		{
			TArray<AActor*> TargetArray;
			FName Tag;
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetArray;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray_Inner = { "TargetArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray = { "TargetArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByTag_Parms, TargetArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepFilterLibrary_eventFilterByTag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_TargetArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dataprep | Filter" },
		{ "Comment", "/**\n\x09 * Filter the array based on a tag.\n\x09 * @param\x09TargetArray\x09\x09""Array of Actors to filter. The array will not change.\n\x09 * @param\x09Tag\x09\x09\x09\x09The tag to filter with.\n\x09 * @return\x09The filtered list.\n\x09 */" },
		{ "DeterminesOutputType", "TargetArray" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
		{ "ToolTip", "Filter the array based on a tag.\n@param       TargetArray             Array of Actors to filter. The array will not change.\n@param       Tag                             The tag to filter with.\n@return      The filtered list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepFilterLibrary, nullptr, "FilterByTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::DataprepFilterLibrary_eventFilterByTag_Parms), Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepFilterLibrary);
	UClass* Z_Construct_UClass_UDataprepFilterLibrary_NoRegister()
	{
		return UDataprepFilterLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepFilterLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepFilterLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepFilterLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepFilterLibrary_FilterByClass, "FilterByClass" }, // 805304738
		{ &Z_Construct_UFunction_UDataprepFilterLibrary_FilterByName, "FilterByName" }, // 2499605131
		{ &Z_Construct_UFunction_UDataprepFilterLibrary_FilterBySize, "FilterBySize" }, // 3343820677
		{ &Z_Construct_UFunction_UDataprepFilterLibrary_FilterByTag, "FilterByTag" }, // 3816315696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepFilterLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Datasmith Data Preparation Filter Library" },
		{ "IncludePath", "DataprepFilterLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/DataprepFilterLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepFilterLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepFilterLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepFilterLibrary_Statics::ClassParams = {
		&UDataprepFilterLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepFilterLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepFilterLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepFilterLibrary()
	{
		if (!Z_Registration_Info_UClass_UDataprepFilterLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepFilterLibrary.OuterSingleton, Z_Construct_UClass_UDataprepFilterLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepFilterLibrary.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepFilterLibrary>()
	{
		return UDataprepFilterLibrary::StaticClass();
	}
	UDataprepFilterLibrary::UDataprepFilterLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepFilterLibrary);
	UDataprepFilterLibrary::~UDataprepFilterLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::EnumInfo[] = {
		{ EDataprepSizeSource_StaticEnum, TEXT("EDataprepSizeSource"), &Z_Registration_Info_UEnum_EDataprepSizeSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1034796792U) },
		{ EDataprepSizeFilterMode_StaticEnum, TEXT("EDataprepSizeFilterMode"), &Z_Registration_Info_UEnum_EDataprepSizeFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2958667779U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepFilterLibrary, UDataprepFilterLibrary::StaticClass, TEXT("UDataprepFilterLibrary"), &Z_Registration_Info_UClass_UDataprepFilterLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepFilterLibrary), 2625667218U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_2623588161(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepFilterLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
