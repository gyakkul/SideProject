// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/CompositingElements/CompositingMaterialPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingMaterialPass() {}
// Cross Module References
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_EParamType();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingParamPayload();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedCompMaterialParam();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositingParamPayload;
class UScriptStruct* FCompositingParamPayload::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositingParamPayload.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositingParamPayload.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositingParamPayload, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("CompositingParamPayload"));
	}
	return Z_Registration_Info_UScriptStruct_CompositingParamPayload.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FCompositingParamPayload>()
{
	return FCompositingParamPayload::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositingParamPayload_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalarParamOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ScalarParamOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParamOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ScalarParamOverrides;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParamOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VectorParamOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParamOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VectorParamOverrides;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureParamOverrides_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParamOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParamOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TextureParamOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* FCompositingParamPayload\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ToolTip", "FCompositingParamPayload" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositingParamPayload>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_ValueProp = { "ScalarParamOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_Key_KeyProp = { "ScalarParamOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_MetaData[] = {
		{ "Comment", "/** Map of scalar material parameter names to their corresponding override values */" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ToolTip", "Map of scalar material parameter names to their corresponding override values" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides = { "ScalarParamOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingParamPayload, ScalarParamOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_ValueProp = { "VectorParamOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_Key_KeyProp = { "VectorParamOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_MetaData[] = {
		{ "Comment", "/** Map of vector material parameter names to their corresponding override values */" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ToolTip", "Map of vector material parameter names to their corresponding override values" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides = { "VectorParamOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingParamPayload, VectorParamOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_ValueProp = { "TextureParamOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_Key_KeyProp = { "TextureParamOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_MetaData[] = {
		{ "Comment", "/** Map of texture material parameter names to their corresponding override values */" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ToolTip", "Map of texture material parameter names to their corresponding override values" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides = { "TextureParamOverrides", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingParamPayload, TextureParamOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_ScalarParamOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_VectorParamOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewProp_TextureParamOverrides,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		&NewStructOps,
		"CompositingParamPayload",
		sizeof(FCompositingParamPayload),
		alignof(FCompositingParamPayload),
		Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositingParamPayload()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositingParamPayload.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositingParamPayload.InnerSingleton, Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositingParamPayload.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParamType;
	static UEnum* EParamType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParamType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParamType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_EParamType, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("EParamType"));
		}
		return Z_Registration_Info_UEnum_EParamType.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<EParamType>()
	{
		return EParamType_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_EParamType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_EParamType_Statics::Enumerators[] = {
		{ "EParamType::UnknownParamType", (int64)EParamType::UnknownParamType },
		{ "EParamType::ScalarParam", (int64)EParamType::ScalarParam },
		{ "EParamType::VectorParam", (int64)EParamType::VectorParam },
		{ "EParamType::TextureParam", (int64)EParamType::TextureParam },
		{ "EParamType::MediaTextureParam", (int64)EParamType::MediaTextureParam },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_EParamType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* FNamedCompMaterialParam\n *****************************************************************************/" },
		{ "MediaTextureParam.Name", "EParamType::MediaTextureParam" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ScalarParam.Name", "EParamType::ScalarParam" },
		{ "TextureParam.Name", "EParamType::TextureParam" },
		{ "ToolTip", "FNamedCompMaterialParam" },
		{ "UnknownParamType.Name", "EParamType::UnknownParamType" },
		{ "VectorParam.Name", "EParamType::VectorParam" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_EParamType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"EParamType",
		"EParamType",
		Z_Construct_UEnum_Composure_EParamType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EParamType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_EParamType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EParamType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_EParamType()
	{
		if (!Z_Registration_Info_UEnum_EParamType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParamType.InnerSingleton, Z_Construct_UEnum_Composure_EParamType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParamType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedCompMaterialParam;
class UScriptStruct* FNamedCompMaterialParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedCompMaterialParam, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("NamedCompMaterialParam"));
	}
	return Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FNamedCompMaterialParam>()
{
	return FNamedCompMaterialParam::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParamType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ParamType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedCompMaterialParam>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType_MetaData[] = {
		{ "Category", "CompositingMaterial" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType = { "ParamType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedCompMaterialParam, ParamType), Z_Construct_UEnum_Composure_EParamType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType_MetaData)) }; // 3570951107
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamName_MetaData[] = {
		{ "Category", "CompositingMaterial" },
		{ "DisplayName", "Default Parameter Name" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedCompMaterialParam, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamType,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewProp_ParamName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		&NewStructOps,
		"NamedCompMaterialParam",
		sizeof(FNamedCompMaterialParam),
		alignof(FNamedCompMaterialParam),
		Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedCompMaterialParam()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.InnerSingleton, Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedCompMaterialParam.InnerSingleton;
	}

static_assert(std::is_polymorphic<FCompositingMaterial>() == std::is_polymorphic<FCompositingParamPayload>(), "USTRUCT FCompositingMaterial cannot be polymorphic unless super FCompositingParamPayload is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositingMaterial;
class UScriptStruct* FCompositingMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositingMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositingMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositingMaterial, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("CompositingMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_CompositingMaterial.OuterSingleton;
}
template<> COMPOSURE_API UScriptStruct* StaticStruct<FCompositingMaterial>()
{
	return FCompositingMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositingMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamPassMappings_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamPassMappings_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamPassMappings_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParamPassMappings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredMaterialParams_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RequiredMaterialParams_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredMaterialParams_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RequiredMaterialParams;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditorHiddenParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorHiddenParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorHiddenParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorOverrideProxies_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VectorOverrideProxies_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorOverrideProxies_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VectorOverrideProxies;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositingMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "CompositingMaterial" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_ValueProp = { "ParamPassMappings", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_Key_KeyProp = { "ParamPassMappings_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_MetaData[] = {
		{ "Category", "CompositingMaterial" },
		{ "Comment", "/** Maps material texture param names to prior passes/elements. Overrides the element's param mapping list above. */" },
		{ "DisplayName", "Input Elements" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ReadOnlyKeys", "" },
		{ "ToolTip", "Maps material texture param names to prior passes/elements. Overrides the element's param mapping list above." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings = { "ParamPassMappings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, ParamPassMappings), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_ValueProp = { "RequiredMaterialParams", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNamedCompMaterialParam, METADATA_PARAMS(nullptr, 0) }; // 4252642551
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_Key_KeyProp = { "RequiredMaterialParams_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_MetaData[] = {
		{ "Category", "CompositingMaterial" },
		{ "DisplayName", "Expected Param Mappings" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams = { "RequiredMaterialParams", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, RequiredMaterialParams), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_MetaData)) }; // 4252642551
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams_Inner = { "EditorHiddenParams", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams_MetaData[] = {
		{ "Category", "CompositingMaterial|Editor" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams = { "EditorHiddenParams", nullptr, (EPropertyFlags)0x0010000800010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, EditorHiddenParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_ValueProp = { "VectorOverrideProxies", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_Key_KeyProp = { "VectorOverrideProxies_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_MetaData[] = {
		{ "Category", "CompositingMaterial|Editor" },
		{ "Comment", "/** Required for customizing the color picker widget - need a property to wrap (one for each material param). */" },
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
		{ "ReadOnlyKeys", "" },
		{ "ToolTip", "Required for customizing the color picker widget - need a property to wrap (one for each material param)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies = { "VectorOverrideProxies", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, VectorOverrideProxies), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_CachedMID_MetaData[] = {
		{ "ModuleRelativePath", "Public/CompositingElements/CompositingMaterialPass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_CachedMID = { "CachedMID", nullptr, (EPropertyFlags)0x00c4000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositingMaterial, CachedMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_CachedMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_CachedMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositingMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_ParamPassMappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_RequiredMaterialParams,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_EditorHiddenParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_VectorOverrideProxies,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewProp_CachedMID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositingMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
		Z_Construct_UScriptStruct_FCompositingParamPayload,
		&NewStructOps,
		"CompositingMaterial",
		sizeof(FCompositingMaterial),
		alignof(FCompositingMaterial),
		Z_Construct_UScriptStruct_FCompositingMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositingMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositingMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositingMaterial.InnerSingleton, Z_Construct_UScriptStruct_FCompositingMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositingMaterial.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::EnumInfo[] = {
		{ EParamType_StaticEnum, TEXT("EParamType"), &Z_Registration_Info_UEnum_EParamType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3570951107U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::ScriptStructInfo[] = {
		{ FCompositingParamPayload::StaticStruct, Z_Construct_UScriptStruct_FCompositingParamPayload_Statics::NewStructOps, TEXT("CompositingParamPayload"), &Z_Registration_Info_UScriptStruct_CompositingParamPayload, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositingParamPayload), 3587800587U) },
		{ FNamedCompMaterialParam::StaticStruct, Z_Construct_UScriptStruct_FNamedCompMaterialParam_Statics::NewStructOps, TEXT("NamedCompMaterialParam"), &Z_Registration_Info_UScriptStruct_NamedCompMaterialParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedCompMaterialParam), 4252642551U) },
		{ FCompositingMaterial::StaticStruct, Z_Construct_UScriptStruct_FCompositingMaterial_Statics::NewStructOps, TEXT("CompositingMaterial"), &Z_Registration_Info_UScriptStruct_CompositingMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositingMaterial), 3535646560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_4128825882(TEXT("/Script/Composure"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Public_CompositingElements_CompositingMaterialPass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
