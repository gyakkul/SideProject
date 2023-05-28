// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusVariableDescription.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusVariableDescription() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueContainer_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry;
class UScriptStruct* FOptimusVariableMetaDataEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusVariableMetaDataEntry"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusVariableMetaDataEntry>()
{
	return FOptimusVariableMetaDataEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusVariableMetaDataEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "VariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata key */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of metadata key" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusVariableMetaDataEntry, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "VariableMetaDataEntry" },
		{ "Comment", "/** Name of metadata value */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of metadata value" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusVariableMetaDataEntry, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusVariableMetaDataEntry",
		sizeof(FOptimusVariableMetaDataEntry),
		alignof(FOptimusVariableMetaDataEntry),
		Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton, Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry.InnerSingleton;
	}
	void UOptimusVariableDescription::StaticRegisterNativesUOptimusVariableDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusVariableDescription);
	UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister()
	{
		return UOptimusVariableDescription::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusVariableDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValueData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusVariableDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusVariableDescription.h" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** An identifier that uniquely identifies this variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "An identifier that uniquely identifies this variable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableDescription, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** Name of the variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Name of the variable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableDescription, VariableName), METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** The data type of the variable */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "The data type of the variable" },
		{ "UseInVariable", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType_MetaData)) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "VariableDefinition" },
		{ "Comment", "/** The default value for the variable. */" },
		{ "EditInLine", "" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "The default value for the variable." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableDescription, DefaultValue), Z_Construct_UClass_UOptimusValueContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_Inner = { "ValueData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_MetaData[] = {
		{ "Comment", "/** Cached shader value binary data. */" },
		{ "ModuleRelativePath", "Public/OptimusVariableDescription.h" },
		{ "ToolTip", "Cached shader value binary data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData = { "ValueData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusVariableDescription, ValueData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusVariableDescription_Statics::NewProp_ValueData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusVariableDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusVariableDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusVariableDescription_Statics::ClassParams = {
		&UOptimusVariableDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusVariableDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusVariableDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusVariableDescription()
	{
		if (!Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton, Z_Construct_UClass_UOptimusVariableDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusVariableDescription.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusVariableDescription>()
	{
		return UOptimusVariableDescription::StaticClass();
	}
	UOptimusVariableDescription::UOptimusVariableDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusVariableDescription);
	UOptimusVariableDescription::~UOptimusVariableDescription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ScriptStructInfo[] = {
		{ FOptimusVariableMetaDataEntry::StaticStruct, Z_Construct_UScriptStruct_FOptimusVariableMetaDataEntry_Statics::NewStructOps, TEXT("OptimusVariableMetaDataEntry"), &Z_Registration_Info_UScriptStruct_OptimusVariableMetaDataEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusVariableMetaDataEntry), 1776987076U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusVariableDescription, UOptimusVariableDescription::StaticClass, TEXT("UOptimusVariableDescription"), &Z_Registration_Info_UClass_UOptimusVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusVariableDescription), 186774815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_2161734586(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusVariableDescription_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
