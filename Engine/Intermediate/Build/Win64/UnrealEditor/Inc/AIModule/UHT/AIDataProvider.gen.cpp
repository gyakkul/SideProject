// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/DataProviders/AIDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDataProvider() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider();
	AIMODULE_API UClass* Z_Construct_UClass_UAIDataProvider_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderValue;
class UScriptStruct* FAIDataProviderValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderValue>()
{
	return FAIDataProviderValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataBinding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataField_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataField;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * AIDataProvider is an object that can provide collection of properties\n * associated with bound pawn owner or request Id.\n *\n * Editable properties are used to set up provider instance,\n * creating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n *\n * Non editable properties are holding data\n */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "AIDataProvider is an object that can provide collection of properties\nassociated with bound pawn owner or request Id.\n\nEditable properties are used to set up provider instance,\ncreating additional filters or ways of accessing data (e.g. gameplay tag of ability)\n\nNon editable properties are holding data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** (optional) provider for dynamic data binding */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "(optional) provider for dynamic data binding" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding = { "DataBinding", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataBinding), Z_Construct_UClass_UAIDataProvider_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData[] = {
		{ "Category", "Value" },
		{ "Comment", "/** name of provider's value property */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "name of provider's value property" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField = { "DataField", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataProviderValue, DataField), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewProp_DataField,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"AIDataProviderValue",
		sizeof(FAIDataProviderValue),
		alignof(FAIDataProviderValue),
		Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataProviderTypedValue>() == std::is_polymorphic<FAIDataProviderValue>(), "USTRUCT FAIDataProviderTypedValue cannot be polymorphic unless super FAIDataProviderValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue;
class UScriptStruct* FAIDataProviderTypedValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderTypedValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderTypedValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderTypedValue>()
{
	return FAIDataProviderTypedValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_PropertyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderTypedValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Comment", "/** type of value */" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
		{ "ToolTip", "type of value" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataProviderTypedValue, PropertyType_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewProp_PropertyType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderValue,
		&NewStructOps,
		"AIDataProviderTypedValue",
		sizeof(FAIDataProviderTypedValue),
		alignof(FAIDataProviderTypedValue),
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderTypedValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataProviderStructValue>() == std::is_polymorphic<FAIDataProviderValue>(), "USTRUCT FAIDataProviderStructValue cannot be polymorphic unless super FAIDataProviderValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderStructValue;
class UScriptStruct* FAIDataProviderStructValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderStructValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderStructValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderStructValue>()
{
	return FAIDataProviderStructValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderStructValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderValue,
		&NewStructOps,
		"AIDataProviderStructValue",
		sizeof(FAIDataProviderStructValue),
		alignof(FAIDataProviderStructValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderStructValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderStructValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataProviderIntValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderIntValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderIntValue;
class UScriptStruct* FAIDataProviderIntValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderIntValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderIntValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderIntValue>()
{
	return FAIDataProviderIntValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderIntValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataProviderIntValue, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderIntValue",
		sizeof(FAIDataProviderIntValue),
		alignof(FAIDataProviderIntValue),
		Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderIntValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderIntValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataProviderFloatValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderFloatValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue;
class UScriptStruct* FAIDataProviderFloatValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderFloatValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderFloatValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderFloatValue>()
{
	return FAIDataProviderFloatValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderFloatValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAIDataProviderFloatValue, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderFloatValue",
		sizeof(FAIDataProviderFloatValue),
		alignof(FAIDataProviderFloatValue),
		Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderFloatValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAIDataProviderBoolValue>() == std::is_polymorphic<FAIDataProviderTypedValue>(), "USTRUCT FAIDataProviderBoolValue cannot be polymorphic unless super FAIDataProviderTypedValue is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue;
class UScriptStruct* FAIDataProviderBoolValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDataProviderBoolValue, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDataProviderBoolValue"));
	}
	return Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDataProviderBoolValue>()
{
	return FAIDataProviderBoolValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static void NewProp_DefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDataProviderBoolValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Value" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit(void* Obj)
	{
		((FAIDataProviderBoolValue*)Obj)->DefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAIDataProviderBoolValue), &Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		Z_Construct_UScriptStruct_FAIDataProviderTypedValue,
		&NewStructOps,
		"AIDataProviderBoolValue",
		sizeof(FAIDataProviderBoolValue),
		alignof(FAIDataProviderBoolValue),
		Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDataProviderBoolValue()
	{
		if (!Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton, Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue.InnerSingleton;
	}
	void UAIDataProvider::StaticRegisterNativesUAIDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIDataProvider);
	UClass* Z_Construct_UClass_UAIDataProvider_NoRegister()
	{
		return UAIDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UAIDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Provider" },
		{ "IncludePath", "DataProviders/AIDataProvider.h" },
		{ "ModuleRelativePath", "Classes/DataProviders/AIDataProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIDataProvider_Statics::ClassParams = {
		&UAIDataProvider::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDataProvider()
	{
		if (!Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton, Z_Construct_UClass_UAIDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIDataProvider.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAIDataProvider>()
	{
		return UAIDataProvider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDataProvider);
	UAIDataProvider::~UAIDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ScriptStructInfo[] = {
		{ FAIDataProviderValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderValue_Statics::NewStructOps, TEXT("AIDataProviderValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderValue), 2880293688U) },
		{ FAIDataProviderTypedValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderTypedValue_Statics::NewStructOps, TEXT("AIDataProviderTypedValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderTypedValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderTypedValue), 118054937U) },
		{ FAIDataProviderStructValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderStructValue_Statics::NewStructOps, TEXT("AIDataProviderStructValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderStructValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderStructValue), 1726643722U) },
		{ FAIDataProviderIntValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderIntValue_Statics::NewStructOps, TEXT("AIDataProviderIntValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderIntValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderIntValue), 2109449233U) },
		{ FAIDataProviderFloatValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderFloatValue_Statics::NewStructOps, TEXT("AIDataProviderFloatValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderFloatValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderFloatValue), 2399041136U) },
		{ FAIDataProviderBoolValue::StaticStruct, Z_Construct_UScriptStruct_FAIDataProviderBoolValue_Statics::NewStructOps, TEXT("AIDataProviderBoolValue"), &Z_Registration_Info_UScriptStruct_AIDataProviderBoolValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDataProviderBoolValue), 309611824U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIDataProvider, UAIDataProvider::StaticClass, TEXT("UAIDataProvider"), &Z_Registration_Info_UClass_UAIDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIDataProvider), 4242881329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_3217050484(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_DataProviders_AIDataProvider_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
