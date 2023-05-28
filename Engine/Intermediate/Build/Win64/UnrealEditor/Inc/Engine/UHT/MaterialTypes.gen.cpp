// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialParameterAssociation;
	static UEnum* EMaterialParameterAssociation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialParameterAssociation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialParameterAssociation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialParameterAssociation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialParameterAssociation"));
		}
		return Z_Registration_Info_UEnum_EMaterialParameterAssociation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialParameterAssociation>()
	{
		return EMaterialParameterAssociation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enumerators[] = {
		{ "LayerParameter", (int64)LayerParameter },
		{ "BlendParameter", (int64)BlendParameter },
		{ "GlobalParameter", (int64)GlobalParameter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enum_MetaDataParams[] = {
		{ "BlendParameter.Name", "BlendParameter" },
		{ "GlobalParameter.Name", "GlobalParameter" },
		{ "LayerParameter.Name", "LayerParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialParameterAssociation",
		"EMaterialParameterAssociation",
		Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation()
	{
		if (!Z_Registration_Info_UEnum_EMaterialParameterAssociation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialParameterAssociation.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialParameterAssociation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialParameterAssociation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialParameterInfo;
class UScriptStruct* FMaterialParameterInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialParameterInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialParameterInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialParameterInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialParameterInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialParameterInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialParameterInfo>()
{
	return FMaterialParameterInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Association_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialParameterInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialParameterInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "Comment", "/** Whether this is a global parameter, or part of a layer or blend */" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
		{ "ToolTip", "Whether this is a global parameter, or part of a layer or blend" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialParameterInfo, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association_MetaData)) }; // 534775543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ParameterInfo" },
		{ "Comment", "/** Layer or blend index this parameter is part of. INDEX_NONE for global parameters. */" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
		{ "ToolTip", "Layer or blend index this parameter is part of. INDEX_NONE for global parameters." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialParameterInfo, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialParameterInfo",
		sizeof(FMaterialParameterInfo),
		alignof(FMaterialParameterInfo),
		Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialParameterInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialParameterInfo.InnerSingleton, Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialParameterInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterChannelNames;
class UScriptStruct* FParameterChannelNames::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterChannelNames, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParameterChannelNames"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterChannelNames.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParameterChannelNames>()
{
	return FParameterChannelNames::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterChannelNames_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterChannelNames>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterChannelNames, R), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterChannelNames, G), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterChannelNames, B), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData[] = {
		{ "Category", "MaterialExpressionVectorParameter" },
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterChannelNames, A), METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ParameterChannelNames",
		sizeof(FParameterChannelNames),
		alignof(FParameterChannelNames),
		Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterChannelNames_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton, Z_Construct_UScriptStruct_FParameterChannelNames_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterChannelNames.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticComponentMaskValue;
class UScriptStruct* FStaticComponentMaskValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticComponentMaskValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticComponentMaskValue"));
	}
	return Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticComponentMaskValue>()
{
	return FStaticComponentMaskValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_R_MetaData[];
#endif
		static void NewProp_R_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_R;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_G_MetaData[];
#endif
		static void NewProp_G_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_G;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static void NewProp_B_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static void NewProp_A_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_A;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticComponentMaskValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->R = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->G = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G = { "G", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->B = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaterialTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_SetBit(void* Obj)
	{
		((FStaticComponentMaskValue*)Obj)->A = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FStaticComponentMaskValue), &Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_G,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewProp_A,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticComponentMaskValue",
		sizeof(FStaticComponentMaskValue),
		alignof(FStaticComponentMaskValue),
		Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskValue()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton, Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticComponentMaskValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::EnumInfo[] = {
		{ EMaterialParameterAssociation_StaticEnum, TEXT("EMaterialParameterAssociation"), &Z_Registration_Info_UEnum_EMaterialParameterAssociation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 534775543U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo[] = {
		{ FMaterialParameterInfo::StaticStruct, Z_Construct_UScriptStruct_FMaterialParameterInfo_Statics::NewStructOps, TEXT("MaterialParameterInfo"), &Z_Registration_Info_UScriptStruct_MaterialParameterInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialParameterInfo), 1695244105U) },
		{ FParameterChannelNames::StaticStruct, Z_Construct_UScriptStruct_FParameterChannelNames_Statics::NewStructOps, TEXT("ParameterChannelNames"), &Z_Registration_Info_UScriptStruct_ParameterChannelNames, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterChannelNames), 2209706662U) },
		{ FStaticComponentMaskValue::StaticStruct, Z_Construct_UScriptStruct_FStaticComponentMaskValue_Statics::NewStructOps, TEXT("StaticComponentMaskValue"), &Z_Registration_Info_UScriptStruct_StaticComponentMaskValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticComponentMaskValue), 3821071315U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_2808080776(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_MaterialTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
