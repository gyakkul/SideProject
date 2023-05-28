// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeEnumParameter() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEnumParameter();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue;
class UScriptStruct* FCustomizableObjectNodeEnumValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectNodeEnumValue"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectNodeEnumValue>()
{
	return FCustomizableObjectNodeEnumValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectNodeEnumValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeEnumValue, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectNodeEnumValue, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewProp_ParamUIMetadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectNodeEnumValue",
		sizeof(FCustomizableObjectNodeEnumValue),
		alignof(FCustomizableObjectNodeEnumValue),
		Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue.InnerSingleton;
	}
	void UCustomizableObjectNodeEnumParameter::StaticRegisterNativesUCustomizableObjectNodeEnumParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeEnumParameter);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_NoRegister()
	{
		return UCustomizableObjectNodeEnumParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_DefaultIndex_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_DefaultIndex = { "DefaultIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEnumParameter, DefaultIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_DefaultIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_DefaultIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEnumParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEnumParameter, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue, METADATA_PARAMS(nullptr, 0) }; // 57513209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeEnumParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeEnumParameter, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values_MetaData)) }; // 57513209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_DefaultIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::NewProp_Values,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeEnumParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::ClassParams = {
		&UCustomizableObjectNodeEnumParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeEnumParameter()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeEnumParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeEnumParameter.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeEnumParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeEnumParameter.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeEnumParameter>()
	{
		return UCustomizableObjectNodeEnumParameter::StaticClass();
	}
	UCustomizableObjectNodeEnumParameter::UCustomizableObjectNodeEnumParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeEnumParameter);
	UCustomizableObjectNodeEnumParameter::~UCustomizableObjectNodeEnumParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectNodeEnumValue::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectNodeEnumValue_Statics::NewStructOps, TEXT("CustomizableObjectNodeEnumValue"), &Z_Registration_Info_UScriptStruct_CustomizableObjectNodeEnumValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectNodeEnumValue), 57513209U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeEnumParameter, UCustomizableObjectNodeEnumParameter::StaticClass, TEXT("UCustomizableObjectNodeEnumParameter"), &Z_Registration_Info_UClass_UCustomizableObjectNodeEnumParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeEnumParameter), 1522126754U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_2709864966(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeEnumParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
