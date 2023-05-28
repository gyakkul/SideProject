// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEmitter_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraStructConversionType();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDouble();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPosition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStructConversionStep();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraWildcard;
class UScriptStruct* FNiagaraWildcard::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraWildcard, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraWildcard"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraWildcard.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraWildcard>()
{
	return FNiagaraWildcard::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraWildcard_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// basic type struct definitions\n" },
		{ "DisplayName", "Wildcard" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "basic type struct definitions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraWildcard>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraWildcard",
		sizeof(FNiagaraWildcard),
		alignof(FNiagaraWildcard),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraWildcard()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraWildcard.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraFloat;
class UScriptStruct* FNiagaraFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraFloat, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraFloat.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraFloat>()
{
	return FNiagaraFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "float" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraFloat",
		sizeof(FNiagaraFloat),
		alignof(FNiagaraFloat),
		Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInt32;
class UScriptStruct* FNiagaraInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInt32, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInt32"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInt32.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInt32>()
{
	return FNiagaraInt32::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraInt32_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "int32" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInt32>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraInt32, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInt32",
		sizeof(FNiagaraInt32),
		alignof(FNiagaraInt32),
		Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInt32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInt32()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraInt32.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBool;
class UScriptStruct* FNiagaraBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBool, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBool"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBool.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBool>()
{
	return FNiagaraBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "bool" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "// Must be either FNiagaraBool::True or FNiagaraBool::False.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Must be either FNiagaraBool::True or FNiagaraBool::False." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBool, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBool",
		sizeof(FNiagaraBool),
		alignof(FNiagaraBool),
		Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBool()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBool.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraPosition>() == std::is_polymorphic<FVector3f>(), "USTRUCT FNiagaraPosition cannot be polymorphic unless super FVector3f is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPosition;
class UScriptStruct* FNiagaraPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPosition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPosition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPosition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPosition>()
{
	return FNiagaraPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPosition_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Position" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPosition>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FVector3f,
		&NewStructOps,
		"NiagaraPosition",
		sizeof(FNiagaraPosition),
		alignof(FNiagaraPosition),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000011),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalf;
class UScriptStruct* FNiagaraHalf::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalf, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalf"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalf.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalf>()
{
	return FNiagaraHalf::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraHalf_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalf>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalf, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalf_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalf",
		sizeof(FNiagaraHalf),
		alignof(FNiagaraHalf),
		Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalf_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalf()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalf_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraHalf.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector2;
class UScriptStruct* FNiagaraHalfVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector2, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector2"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector2>()
{
	return FNiagaraHalfVector2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_y;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector2" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector2, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector2, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewProp_y,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector2",
		sizeof(FNiagaraHalfVector2),
		alignof(FNiagaraHalfVector2),
		Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector2()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraHalfVector2.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector3;
class UScriptStruct* FNiagaraHalfVector3::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector3, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector3"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector3>()
{
	return FNiagaraHalfVector3::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector3" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector3>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector3, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector3, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector3, z), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewProp_z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector3",
		sizeof(FNiagaraHalfVector3),
		alignof(FNiagaraHalfVector3),
		Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector3()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraHalfVector3.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraHalfVector4;
class UScriptStruct* FNiagaraHalfVector4::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraHalfVector4, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraHalfVector4"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraHalfVector4>()
{
	return FNiagaraHalfVector4::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_w_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_w;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Half Vector4" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraInternalType", "true" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraHalfVector4>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector4, x), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector4, y), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector4, z), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w = { "w", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraHalfVector4, w), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewProp_w,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraHalfVector4",
		sizeof(FNiagaraHalfVector4),
		alignof(FNiagaraHalfVector4),
		Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraHalfVector4()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraHalfVector4.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraNumeric;
class UScriptStruct* FNiagaraNumeric::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraNumeric, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraNumeric"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraNumeric.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraNumeric>()
{
	return FNiagaraNumeric::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraNumeric_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraNumeric>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraNumeric",
		sizeof(FNiagaraNumeric),
		alignof(FNiagaraNumeric),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraNumeric()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraNumeric.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterMap;
class UScriptStruct* FNiagaraParameterMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterMap, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterMap"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterMap.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterMap>()
{
	return FNiagaraParameterMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterMap>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterMap",
		sizeof(FNiagaraParameterMap),
		alignof(FNiagaraParameterMap),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterMap()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDouble;
class UScriptStruct* FNiagaraDouble::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDouble, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDouble"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDouble.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDouble>()
{
	return FNiagaraDouble::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDouble_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDouble_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// only used for LWC conversions, not supported by Niagara yet\n" },
		{ "DisplayName", "double" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "only used for LWC conversions, not supported by Niagara yet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDouble>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDouble, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDouble_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDouble",
		sizeof(FNiagaraDouble),
		alignof(FNiagaraDouble),
		Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDouble_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDouble()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDouble_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDouble.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMatrix;
class UScriptStruct* FNiagaraMatrix::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMatrix, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraMatrix"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMatrix.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraMatrix>()
{
	return FNiagaraMatrix::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMatrix_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Row3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Row3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Matrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMatrix>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0 = { "Row0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMatrix, Row0), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1 = { "Row1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMatrix, Row1), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2 = { "Row2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMatrix, Row2), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData[] = {
		{ "Category", "NiagaraMatrix" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3 = { "Row3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraMatrix, Row3), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewProp_Row3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraMatrix",
		sizeof(FNiagaraMatrix),
		alignof(FNiagaraMatrix),
		Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMatrix()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMatrix.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraAssetVersion;
class UScriptStruct* FNiagaraAssetVersion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAssetVersion, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraAssetVersion"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraAssetVersion>()
{
	return FNiagaraAssetVersion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MajorVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MajorVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinorVersion_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinorVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInVersionSelector_MetaData[];
#endif
		static void NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInVersionSelector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAssetVersion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The major version is used to track breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The major version is used to track breaking changes between asset versions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion = { "MajorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraAssetVersion, MajorVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The minor version is used to track non-breaking changes between asset versions */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The minor version is used to track non-breaking changes between asset versions" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion = { "MinorVersion", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraAssetVersion, MinorVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData[] = {
		{ "Category", "Version Control" },
		{ "Comment", "/** The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches. */" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The guid is used to keep track of specific asset version references. The minor and major versions do not provide enough uniqueness to guard against collisions when e.g. the same version was created in different branches." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid = { "VersionGuid", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraAssetVersion, VersionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData[] = {
		{ "Comment", "/** If false then this version is not visible in the version selector dropdown menu of the stack. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If false then this version is not visible in the version selector dropdown menu of the stack." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit(void* Obj)
	{
		((FNiagaraAssetVersion*)Obj)->bIsVisibleInVersionSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector = { "bIsVisibleInVersionSelector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraAssetVersion), &Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MajorVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_MinorVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_VersionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewProp_bIsVisibleInVersionSelector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraAssetVersion",
		sizeof(FNiagaraAssetVersion),
		alignof(FNiagaraAssetVersion),
		Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraAssetVersion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraStructConversionType;
	static UEnum* ENiagaraStructConversionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraStructConversionType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraStructConversionType.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraStructConversionType>()
	{
		return ENiagaraStructConversionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enumerators[] = {
		{ "ENiagaraStructConversionType::CopyOnly", (int64)ENiagaraStructConversionType::CopyOnly },
		{ "ENiagaraStructConversionType::DoubleToFloat", (int64)ENiagaraStructConversionType::DoubleToFloat },
		{ "ENiagaraStructConversionType::Vector2", (int64)ENiagaraStructConversionType::Vector2 },
		{ "ENiagaraStructConversionType::Vector3", (int64)ENiagaraStructConversionType::Vector3 },
		{ "ENiagaraStructConversionType::Vector4", (int64)ENiagaraStructConversionType::Vector4 },
		{ "ENiagaraStructConversionType::Quat", (int64)ENiagaraStructConversionType::Quat },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enum_MetaDataParams[] = {
		{ "CopyOnly.Name", "ENiagaraStructConversionType::CopyOnly" },
		{ "DoubleToFloat.Comment", "// no conversion, just copy the data\n" },
		{ "DoubleToFloat.Name", "ENiagaraStructConversionType::DoubleToFloat" },
		{ "DoubleToFloat.ToolTip", "no conversion, just copy the data" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Quat.Name", "ENiagaraStructConversionType::Quat" },
		{ "Vector2.Name", "ENiagaraStructConversionType::Vector2" },
		{ "Vector3.Name", "ENiagaraStructConversionType::Vector3" },
		{ "Vector4.Name", "ENiagaraStructConversionType::Vector4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraStructConversionType",
		"ENiagaraStructConversionType",
		Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraStructConversionType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraStructConversionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraStructConversionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep;
class UScriptStruct* FNiagaraStructConversionStep::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStructConversionStep, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraStructConversionStep"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraStructConversionStep>()
{
	return FNiagaraStructConversionStep::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LWCBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LWCOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBytes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationBytes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStructConversionStep>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes = { "LWCBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStructConversionStep, LWCBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset = { "LWCOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStructConversionStep, LWCOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes = { "SimulationBytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStructConversionStep, SimulationBytes), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset = { "SimulationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStructConversionStep, SimulationOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType = { "ConversionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStructConversionStep, ConversionType), Z_Construct_UEnum_Niagara_ENiagaraStructConversionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_MetaData)) }; // 1440434066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_LWCOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationBytes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_SimulationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewProp_ConversionType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraStructConversionStep",
		sizeof(FNiagaraStructConversionStep),
		alignof(FNiagaraStructConversionStep),
		Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStructConversionStep()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter;
class UScriptStruct* FNiagaraLwcStructConverter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraLwcStructConverter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraLwcStructConverter>()
{
	return FNiagaraLwcStructConverter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LWCSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SWCSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SWCSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionSteps_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionSteps_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConversionSteps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Can convert struct data from custom structs containing LWC data such as FVector3d into struct data suitable for Niagara simulations and vice versa. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Can convert struct data from custom structs containing LWC data such as FVector3d into struct data suitable for Niagara simulations and vice versa." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraLwcStructConverter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize = { "LWCSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraLwcStructConverter, LWCSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize = { "SWCSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraLwcStructConverter, SWCSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_Inner = { "ConversionSteps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStructConversionStep, METADATA_PARAMS(nullptr, 0) }; // 4029530365
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps = { "ConversionSteps", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraLwcStructConverter, ConversionSteps), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_MetaData)) }; // 4029530365
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_LWCSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_SWCSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewProp_ConversionSteps,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraLwcStructConverter",
		sizeof(FNiagaraLwcStructConverter),
		alignof(FNiagaraLwcStructConverter),
		Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo;
class UScriptStruct* FNiagaraSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSpawnInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSpawnInfo>()
{
	return FNiagaraSpawnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpStartDt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpStartDt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntervalDt_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntervalDt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnGroup_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data controlling the spawning of particles */" },
		{ "DisplayName", "Spawn Info" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "NiagaraClearEachFrame", "true" },
		{ "ToolTip", "Data controlling the spawning of particles" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSpawnInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** How many particles to spawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "How many particles to spawn." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnInfo, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time at which to spawn the first particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time at which to spawn the first particle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt = { "InterpStartDt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnInfo, InterpStartDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/** The sub frame delta time between each particle. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The sub frame delta time between each particle." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt = { "IntervalDt", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnInfo, IntervalDt), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData[] = {
		{ "Category", "SpawnInfo" },
		{ "Comment", "/**\n\x09 * An integer used to identify this spawn info.\n\x09 * Typically this is unused.\n\x09 * An example usage is when using multiple spawn modules to spawn from multiple discreet locations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "An integer used to identify this spawn info.\nTypically this is unused.\nAn example usage is when using multiple spawn modules to spawn from multiple discreet locations." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup = { "SpawnGroup", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnInfo, SpawnGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_InterpStartDt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_IntervalDt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewProp_SpawnGroup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSpawnInfo",
		sizeof(FNiagaraSpawnInfo),
		alignof(FNiagaraSpawnInfo),
		Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraID;
class UScriptStruct* FNiagaraID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraID, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraID"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraID.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraID>()
{
	return FNiagaraID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcquireTag_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AcquireTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Niagara ID" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09Index in the indirection table for this particle. Allows fast access to this particles data.\n\x09Is always unique among currently living particles but will be reused after the particle dies.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Index in the indirection table for this particle. Allows fast access to this particles data.\nIs always unique among currently living particles but will be reused after the particle dies." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraID, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData[] = {
		{ "Category", "ID" },
		{ "Comment", "/** \n\x09""A unique tag for when this ID was acquired. \n\x09""Allows us to differentiate between particles when one dies and another reuses it's Index.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "A unique tag for when this ID was acquired.\nAllows us to differentiate between particles when one dies and another reuses it's Index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag = { "AcquireTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraID, AcquireTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraID_Statics::NewProp_AcquireTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraID",
		sizeof(FNiagaraID),
		alignof(FNiagaraID),
		Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraID()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRandInfo;
class UScriptStruct* FNiagaraRandInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRandInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRandInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRandInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRandInfo>()
{
	return FNiagaraRandInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed1_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seed3_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seed3;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRandInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1 = { "Seed1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRandInfo, Seed1), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2 = { "Seed2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRandInfo, Seed2), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData[] = {
		{ "Category", "Random" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3 = { "Seed3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraRandInfo, Seed3), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewProp_Seed3,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraRandInfo",
		sizeof(FNiagaraRandInfo),
		alignof(FNiagaraRandInfo),
		Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRandInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraRandInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo;
class UScriptStruct* FNiagaraTypeLayoutInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeLayoutInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeLayoutInfo>()
{
	return FNiagaraTypeLayoutInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatComponentByteOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatComponentByteOffsets;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatComponentRegisterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatComponentRegisterOffsets;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentByteOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentByteOffsets;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentRegisterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32ComponentRegisterOffsets;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HalfComponentByteOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfComponentByteOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HalfComponentByteOffsets;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HalfComponentRegisterOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfComponentRegisterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HalfComponentRegisterOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about how this type should be laid out in an FNiagaraDataSet */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Information about how this type should be laid out in an FNiagaraDataSet" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeLayoutInfo>();
	}
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each float component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each float component in a structured layout." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets = { "FloatComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each float component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each float component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets = { "FloatComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each int32 component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each int32 component in a structured layout." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets = { "Int32ComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each int32 component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each int32 component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets = { "Int32ComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_Inner = { "HalfComponentByteOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData[] = {
		{ "Comment", "/** Byte offset of each half component in a structured layout. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Byte offset of each half component in a structured layout." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets = { "HalfComponentByteOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_Inner = { "HalfComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData[] = {
		{ "Comment", "/** Offset into register table for each half component. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Offset into register table for each half component." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets = { "HalfComponentRegisterOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentByteOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_FloatComponentRegisterOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentByteOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_Int32ComponentRegisterOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentByteOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewProp_HalfComponentRegisterOffsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeLayoutInfo",
		sizeof(FNiagaraTypeLayoutInfo),
		alignof(FNiagaraTypeLayoutInfo),
		Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode;
	static UEnum* ENiagaraNumericOutputTypeSelectionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraNumericOutputTypeSelectionMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraNumericOutputTypeSelectionMode>()
	{
		return ENiagaraNumericOutputTypeSelectionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enumerators[] = {
		{ "ENiagaraNumericOutputTypeSelectionMode::None", (int64)ENiagaraNumericOutputTypeSelectionMode::None },
		{ "ENiagaraNumericOutputTypeSelectionMode::Largest", (int64)ENiagaraNumericOutputTypeSelectionMode::Largest },
		{ "ENiagaraNumericOutputTypeSelectionMode::Smallest", (int64)ENiagaraNumericOutputTypeSelectionMode::Smallest },
		{ "ENiagaraNumericOutputTypeSelectionMode::Scalar", (int64)ENiagaraNumericOutputTypeSelectionMode::Scalar },
		{ "ENiagaraNumericOutputTypeSelectionMode::Custom", (int64)ENiagaraNumericOutputTypeSelectionMode::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs. */" },
		{ "Custom.Comment", "/** Selects the type based on custom logic from the node. */" },
		{ "Custom.Name", "ENiagaraNumericOutputTypeSelectionMode::Custom" },
		{ "Custom.ToolTip", "Selects the type based on custom logic from the node." },
		{ "Largest.Comment", "/** Select the largest of the numeric inputs. */" },
		{ "Largest.Name", "ENiagaraNumericOutputTypeSelectionMode::Largest" },
		{ "Largest.ToolTip", "Select the largest of the numeric inputs." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "None.Comment", "/** Output type selection not supported. */" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraNumericOutputTypeSelectionMode::None" },
		{ "None.ToolTip", "Output type selection not supported." },
		{ "Scalar.Comment", "/** Selects the base scalar type for this numeric inputs. */" },
		{ "Scalar.Name", "ENiagaraNumericOutputTypeSelectionMode::Scalar" },
		{ "Scalar.ToolTip", "Selects the base scalar type for this numeric inputs." },
		{ "Smallest.Comment", "/** Select the smallest of the numeric inputs. */" },
		{ "Smallest.Name", "ENiagaraNumericOutputTypeSelectionMode::Smallest" },
		{ "Smallest.ToolTip", "Select the smallest of the numeric inputs." },
		{ "ToolTip", "Defines different modes for selecting the output numeric type of a function or operation based on the types of the inputs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraNumericOutputTypeSelectionMode",
		"ENiagaraNumericOutputTypeSelectionMode",
		Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraExecutionStateSource;
	static UEnum* ENiagaraExecutionStateSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionStateSource"));
		}
		return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionStateSource>()
	{
		return ENiagaraExecutionStateSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enumerators[] = {
		{ "ENiagaraExecutionStateSource::Scalability", (int64)ENiagaraExecutionStateSource::Scalability },
		{ "ENiagaraExecutionStateSource::Internal", (int64)ENiagaraExecutionStateSource::Internal },
		{ "ENiagaraExecutionStateSource::Owner", (int64)ENiagaraExecutionStateSource::Owner },
		{ "ENiagaraExecutionStateSource::InternalCompletion", (int64)ENiagaraExecutionStateSource::InternalCompletion },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** \nThe source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence. \nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion\n*/" },
		{ "Internal.Comment", "//State set by Scalability logic. Lowest precedence.\n" },
		{ "Internal.Name", "ENiagaraExecutionStateSource::Internal" },
		{ "Internal.ToolTip", "State set by Scalability logic. Lowest precedence." },
		{ "InternalCompletion.Comment", "//State requested by the owner. Takes precedence over everything but internal completion logic.\n" },
		{ "InternalCompletion.Name", "ENiagaraExecutionStateSource::InternalCompletion" },
		{ "InternalCompletion.ToolTip", "State requested by the owner. Takes precedence over everything but internal completion logic." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Owner.Comment", "//Misc internal state. For example becoming inactive after we finish our set loops.\n" },
		{ "Owner.Name", "ENiagaraExecutionStateSource::Owner" },
		{ "Owner.ToolTip", "Misc internal state. For example becoming inactive after we finish our set loops." },
		{ "Scalability.Name", "ENiagaraExecutionStateSource::Scalability" },
		{ "ToolTip", "The source from which a script execution state was set. Used to allow scalability etc to change the state but only if the state has not been defined by something with higher precedence.\nIf this changes, all scripts must be recompiled by bumping the NiagaraCustomVersion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraExecutionStateSource",
		"ENiagaraExecutionStateSource",
		Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraExecutionStateSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraExecutionStateSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraExecutionState;
	static UEnum* ENiagaraExecutionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraExecutionState, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraExecutionState"));
		}
		return Z_Registration_Info_UEnum_ENiagaraExecutionState.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraExecutionState>()
	{
		return ENiagaraExecutionState_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enumerators[] = {
		{ "ENiagaraExecutionState::Active", (int64)ENiagaraExecutionState::Active },
		{ "ENiagaraExecutionState::Inactive", (int64)ENiagaraExecutionState::Inactive },
		{ "ENiagaraExecutionState::InactiveClear", (int64)ENiagaraExecutionState::InactiveClear },
		{ "ENiagaraExecutionState::Complete", (int64)ENiagaraExecutionState::Complete },
		{ "ENiagaraExecutionState::Disabled", (int64)ENiagaraExecutionState::Disabled },
		{ "ENiagaraExecutionState::Num", (int64)ENiagaraExecutionState::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enum_MetaDataParams[] = {
		{ "Active.Comment", "/**  Run all scripts. Allow spawning.*/" },
		{ "Active.Name", "ENiagaraExecutionState::Active" },
		{ "Active.ToolTip", "Run all scripts. Allow spawning." },
		{ "Complete.Comment", "/** Complete. When the system or all emitters are complete the effect is considered finished. */" },
		{ "Complete.Name", "ENiagaraExecutionState::Complete" },
		{ "Complete.ToolTip", "Complete. When the system or all emitters are complete the effect is considered finished." },
		{ "Disabled.Comment", "/** Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system. */" },
		{ "Disabled.Hidden", "" },
		{ "Disabled.Name", "ENiagaraExecutionState::Disabled" },
		{ "Disabled.ToolTip", "Emitter only. Emitter is disabled. Will not tick or render again until a full re initialization of the system." },
		{ "Inactive.Comment", "/** Run all scripts but suppress any new spawning.*/" },
		{ "Inactive.Name", "ENiagaraExecutionState::Inactive" },
		{ "Inactive.ToolTip", "Run all scripts but suppress any new spawning." },
		{ "InactiveClear.Comment", "/** Clear all existing particles and move to inactive.*/" },
		{ "InactiveClear.Name", "ENiagaraExecutionState::InactiveClear" },
		{ "InactiveClear.ToolTip", "Clear all existing particles and move to inactive." },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Num.Comment", "// insert new states before\n" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ENiagaraExecutionState::Num" },
		{ "Num.ToolTip", "insert new states before" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraExecutionState",
		"ENiagaraExecutionState",
		Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraExecutionState()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraExecutionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraExecutionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCoordinateSpace;
	static UEnum* ENiagaraCoordinateSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCoordinateSpace"));
		}
		return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCoordinateSpace>()
	{
		return ENiagaraCoordinateSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enumerators[] = {
		{ "ENiagaraCoordinateSpace::Simulation", (int64)ENiagaraCoordinateSpace::Simulation },
		{ "ENiagaraCoordinateSpace::World", (int64)ENiagaraCoordinateSpace::World },
		{ "ENiagaraCoordinateSpace::Local", (int64)ENiagaraCoordinateSpace::Local },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enum_MetaDataParams[] = {
		{ "Local.Comment", "/** Use the local coordinate space*/" },
		{ "Local.Name", "ENiagaraCoordinateSpace::Local" },
		{ "Local.ToolTip", "Use the local coordinate space" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "Simulation.Comment", "/** Use the coordinate space specified by the Emitter*/" },
		{ "Simulation.Name", "ENiagaraCoordinateSpace::Simulation" },
		{ "Simulation.ToolTip", "Use the coordinate space specified by the Emitter" },
		{ "World.Comment", "/** Use the world coordinate space*/" },
		{ "World.Name", "ENiagaraCoordinateSpace::World" },
		{ "World.ToolTip", "Use the world coordinate space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraCoordinateSpace",
		"ENiagaraCoordinateSpace",
		Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCoordinateSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraCoordinateSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference;
	static UEnum* ENiagaraPythonUpdateScriptReference_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraPythonUpdateScriptReference"));
		}
		return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPythonUpdateScriptReference>()
	{
		return ENiagaraPythonUpdateScriptReference_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enumerators[] = {
		{ "ENiagaraPythonUpdateScriptReference::None", (int64)ENiagaraPythonUpdateScriptReference::None },
		{ "ENiagaraPythonUpdateScriptReference::ScriptAsset", (int64)ENiagaraPythonUpdateScriptReference::ScriptAsset },
		{ "ENiagaraPythonUpdateScriptReference::DirectTextEntry", (int64)ENiagaraPythonUpdateScriptReference::DirectTextEntry },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enum_MetaDataParams[] = {
		{ "DirectTextEntry.Name", "ENiagaraPythonUpdateScriptReference::DirectTextEntry" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "None.Name", "ENiagaraPythonUpdateScriptReference::None" },
		{ "ScriptAsset.Name", "ENiagaraPythonUpdateScriptReference::ScriptAsset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraPythonUpdateScriptReference",
		"ENiagaraPythonUpdateScriptReference",
		Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraOrientationAxis;
	static UEnum* ENiagaraOrientationAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraOrientationAxis"));
		}
		return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraOrientationAxis>()
	{
		return ENiagaraOrientationAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enumerators[] = {
		{ "ENiagaraOrientationAxis::XAxis", (int64)ENiagaraOrientationAxis::XAxis },
		{ "ENiagaraOrientationAxis::YAxis", (int64)ENiagaraOrientationAxis::YAxis },
		{ "ENiagaraOrientationAxis::ZAxis", (int64)ENiagaraOrientationAxis::ZAxis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "XAxis.DisplayName", "X Axis" },
		{ "XAxis.Name", "ENiagaraOrientationAxis::XAxis" },
		{ "YAxis.DisplayName", "Y Axis" },
		{ "YAxis.Name", "ENiagaraOrientationAxis::YAxis" },
		{ "ZAxis.DisplayName", "Z Axis" },
		{ "ZAxis.Name", "ENiagaraOrientationAxis::ZAxis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraOrientationAxis",
		"ENiagaraOrientationAxis",
		Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraOrientationAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraOrientationAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata;
class UScriptStruct* FNiagaraInputConditionMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraInputConditionMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraInputConditionMetadata>()
{
	return FNiagaraInputConditionMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines options for conditionally editing and showing script inputs in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Defines options for conditionally editing and showing script inputs in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputConditionMetadata>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The name of the input to use for matching the target values. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The name of the input to use for matching the target values." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraInputConditionMetadata, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner = { "TargetValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData[] = {
		{ "Category", "Input Condition" },
		{ "Comment", "/** The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The list of target values which will satisfy the input condition.  If this is empty it's assumed to be a single value of \"true\" for matching bool inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues = { "TargetValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraInputConditionMetadata, TargetValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewProp_TargetValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraInputConditionMetadata",
		sizeof(FNiagaraInputConditionMetadata),
		alignof(FNiagaraInputConditionMetadata),
		Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData;
class UScriptStruct* FNiagaraEnumParameterMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraEnumParameterMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraEnumParameterMetaData>()
{
	return FNiagaraEnumParameterMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IconOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseColorOverride_MetaData[];
#endif
		static void NewProp_bUseColorOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseColorOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines override data for enum parameters displayed in the UI. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Defines override data for enum parameters displayed in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraEnumParameterMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "Comment", "/** If specified, this name will be used for the given enum entry. Useful for shortening names. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this name will be used for the given enum entry. Useful for shortening names." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, OverrideName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "Comment", "/** If specified, this icon will be used for the given enum entry. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this icon will be used for the given enum entry. If OverrideName isn't empty, the icon takes priority." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride = { "IconOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, IconOverride), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_SetBit(void* Obj)
	{
		((FNiagaraEnumParameterMetaData*)Obj)->bUseColorOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride = { "bUseColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraEnumParameterMetaData), &Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride_MetaData[] = {
		{ "Category", "Enum Override" },
		{ "EditCondition", "bUseColorOverride" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride = { "ColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraEnumParameterMetaData, ColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_IconOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_bUseColorOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewProp_ColorOverride,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraEnumParameterMetaData",
		sizeof(FNiagaraEnumParameterMetaData),
		alignof(FNiagaraEnumParameterMetaData),
		Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode;
	static UEnum* ENiagaraBoolDisplayMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBoolDisplayMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBoolDisplayMode>()
	{
		return ENiagaraBoolDisplayMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enumerators[] = {
		{ "ENiagaraBoolDisplayMode::DisplayAlways", (int64)ENiagaraBoolDisplayMode::DisplayAlways },
		{ "ENiagaraBoolDisplayMode::DisplayIfTrue", (int64)ENiagaraBoolDisplayMode::DisplayIfTrue },
		{ "ENiagaraBoolDisplayMode::DisplayIfFalse", (int64)ENiagaraBoolDisplayMode::DisplayIfFalse },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enum_MetaDataParams[] = {
		{ "DisplayAlways.Name", "ENiagaraBoolDisplayMode::DisplayAlways" },
		{ "DisplayIfFalse.Name", "ENiagaraBoolDisplayMode::DisplayIfFalse" },
		{ "DisplayIfTrue.Name", "ENiagaraBoolDisplayMode::DisplayIfTrue" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraBoolDisplayMode",
		"ENiagaraBoolDisplayMode",
		Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData;
class UScriptStruct* FNiagaraBoolParameterMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBoolParameterMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBoolParameterMetaData>()
{
	return FNiagaraBoolParameterMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNameTrue_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideNameTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNameFalse_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideNameFalse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconOverrideTrue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IconOverrideTrue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconOverrideFalse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IconOverrideFalse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBoolParameterMetaData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** The mode used determines the cases in which a bool parameter is displayed.\n\x09 *  If set to DisplayAlways, both True and False cases will display. \n\x09 *  If set to DisplayIfTrue, it will only display if the bool evaluates to True.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The mode used determines the cases in which a bool parameter is displayed.\nIf set to DisplayAlways, both True and False cases will display.\nIf set to DisplayIfTrue, it will only display if the bool evaluates to True." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode = { "DisplayMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, DisplayMode), Z_Construct_UEnum_Niagara_ENiagaraBoolDisplayMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_MetaData)) }; // 3222901703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this name will be used for the given bool if it evaluates to True. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this name will be used for the given bool if it evaluates to True." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue = { "OverrideNameTrue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, OverrideNameTrue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this name will be used for the given bool if it evaluates to False. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this name will be used for the given bool if it evaluates to False." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse = { "OverrideNameFalse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, OverrideNameFalse), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this icon will be used for the given bool if it evaluates to True. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this icon will be used for the given bool if it evaluates to True. If OverrideName isn't empty, the icon takes priority." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue = { "IconOverrideTrue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, IconOverrideTrue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse_MetaData[] = {
		{ "Category", "Bool Override" },
		{ "Comment", "/** If specified, this icon will be used for the given bool if it evaluates to False. If OverrideName isn't empty, the icon takes priority. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "If specified, this icon will be used for the given bool if it evaluates to False. If OverrideName isn't empty, the icon takes priority." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse = { "IconOverrideFalse", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoolParameterMetaData, IconOverrideFalse), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_DisplayMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_OverrideNameFalse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideTrue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewProp_IconOverrideFalse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBoolParameterMetaData",
		sizeof(FNiagaraBoolParameterMetaData),
		alignof(FNiagaraBoolParameterMetaData),
		Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData;
class UScriptStruct* FNiagaraVariableMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableMetaData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableMetaData>()
{
	return FNiagaraVariableMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdvancedDisplay_MetaData[];
#endif
		static void NewProp_bAdvancedDisplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdvancedDisplay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayInOverviewStack_MetaData[];
#endif
		static void NewProp_bDisplayInOverviewStack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayInOverviewStack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterSortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InlineParameterSortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideColor_MetaData[];
#endif
		static void NewProp_bOverrideColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterColorOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterColorOverride;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterEnumOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterEnumOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InlineParameterEnumOverrides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoolOverride_MetaData[];
#endif
		static void NewProp_bEnableBoolOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoolOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InlineParameterBoolOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InlineParameterBoolOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EditorSortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInlineEditConditionToggle_MetaData[];
#endif
		static void NewProp_bInlineEditConditionToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInlineEditConditionToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditCondition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditCondition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleCondition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VisibleCondition;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertyMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentAttribute;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlternateAliases_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlternateAliases_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AlternateAliases;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaticSwitch_MetaData[];
#endif
		static void NewProp_bIsStaticSwitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaticSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StaticSwitchDefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "MultiLine", "TRUE" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, CategoryName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this input is advanced and should only be visible if expanded inputs have been expanded. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this input is advanced and should only be visible if expanded inputs have been expanded." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bAdvancedDisplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay = { "bAdvancedDisplay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares that this parameter's value will be shown in the overview node if it's set to a local value. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares that this parameter's value will be shown in the overview node if it's set to a local value." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bDisplayInOverviewStack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack = { "bDisplayInOverviewStack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bDisplayInOverviewStack" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order for parameters shown inline in the overview. Use a smaller number to push it to the top. Defaults to zero." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority = { "InlineParameterSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_MetaData[] = {
		{ "Category", "Variable" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The color used to display a parameter in the overview. If no color is specified, the type color is used." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bOverrideColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor = { "bOverrideColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bOverrideColor" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The color used to display a parameter in the overview. If no color is specified, the type color is used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride = { "InlineParameterColorOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterColorOverride), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_Inner = { "InlineParameterEnumOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData, METADATA_PARAMS(nullptr, 0) }; // 3625451544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bDisplayInOverviewStack" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "The index of the entry maps to the index of an enum value. Useful for overriding how an enum parameter is displayed in the overview." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides = { "InlineParameterEnumOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterEnumOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_MetaData)) }; // 3625451544
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Useful to override inline bool visualization in the overview." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bEnableBoolOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride = { "bEnableBoolOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride_MetaData[] = {
		{ "Category", "Variable" },
		{ "EditCondition", "bEnableBoolOverride" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Useful to override inline bool visualization in the overview." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride = { "InlineParameterBoolOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, InlineParameterBoolOverride), Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride_MetaData)) }; // 1179270849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Affects the sort order in the editor stacks. Use a smaller number to push it to the top. Defaults to zero." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority = { "EditorSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, EditorSortPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a \n\x09""checkbox inline with the input which was designated as its edit condition. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input is used as an inline edit condition toggle, so it should be hidden and edited as a\n      checkbox inline with the input which was designated as its edit condition." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bInlineEditConditionToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle = { "bInlineEditConditionToggle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally editable based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally editable based on the value of another input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition = { "EditCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, EditCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition_MetaData)) }; // 3077449333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData[] = {
		{ "Category", "Variable" },
		{ "Comment", "/** Declares the associated input should be conditionally visible based on the value of another input. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Declares the associated input should be conditionally visible based on the value of another input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition = { "VisibleCondition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, VisibleCondition), Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition_MetaData)) }; // 3077449333
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp = { "PropertyMetaData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Property Metadata" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Property Metadata" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData = { "PropertyMetaData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, PropertyMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "If set, this attribute is visually displayed as a child under the given parent attribute. Currently, only static switches are supported as parent attributes!" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute = { "ParentAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, ParentAttribute), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_Inner = { "AlternateAliases", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_MetaData[] = {
		{ "Category", "Variable" },
		{ "DisplayName", "Alternate Aliases For Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "List of alternate/previous names for this variable. Note that this is not normally needed if you rename through the UX. However, if you delete and then add a different variable, intending for it to match, you will likely want to add the prior name here.\n\nYou may need to restart and reload assets after making this change to have it take effect on already loaded assets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases = { "AlternateAliases", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, AlternateAliases), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData[] = {
		{ "Comment", "/** A unique identifier for the variable that can be used by function call nodes to find renamed variables. */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "A unique identifier for the variable that can be used by function call nodes to find renamed variables." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid = { "VariableGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, VariableGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData[] = {
		{ "Comment", "/** This is a read-only variable that designates if the metadata is tied to a static switch or not.\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "This is a read-only variable that designates if the metadata is tied to a static switch or not.\nDEPRECATED: Migrated to UNiagaraScriptVariable::bIsStaticSwitch." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit(void* Obj)
	{
		((FNiagaraVariableMetaData*)Obj)->bIsStaticSwitch_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch = { "bIsStaticSwitch", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVariableMetaData), &Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData[] = {
		{ "Comment", "/** The default value to use when creating new pins or stack entries for a static switch parameter\n\x09 * DEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "The default value to use when creating new pins or stack entries for a static switch parameter\nDEPRECATED: Migrated to UNiagaraScriptVariable::StaticSwitchDefaultValue." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue = { "StaticSwitchDefaultValue", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableMetaData, StaticSwitchDefaultValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_CategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bAdvancedDisplay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bDisplayInOverviewStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterSortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bOverrideColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterColorOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterEnumOverrides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bEnableBoolOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_InlineParameterBoolOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditorSortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bInlineEditConditionToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_EditCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VisibleCondition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_PropertyMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_ParentAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_AlternateAliases,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_VariableGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_bIsStaticSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewProp_StaticSwitchDefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableMetaData",
		sizeof(FNiagaraVariableMetaData),
		alignof(FNiagaraVariableMetaData),
		Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition;
class UScriptStruct* FNiagaraTypeDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinition, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinition>()
{
	return FNiagaraTypeDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassStructOrEnum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClassStructOrEnum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnderlyingType_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_UnderlyingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/*\n\x09Underlying type for this variable, use FUnderlyingType to determine type without casting\n\x09This can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\n\x09In occasional situations this may be a UClass when we're dealing with DataInterface etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Underlying type for this variable, use FUnderlyingType to determine type without casting\nThis can be a UClass, UStruct or UEnum.  Pointing to something like the struct for an FVector, etc.\nIn occasional situations this may be a UClass when we're dealing with DataInterface etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum = { "ClassStructOrEnum", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinition, ClassStructOrEnum), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "// See enumeration FUnderlyingType for possible values\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "See enumeration FUnderlyingType for possible values" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType = { "UnderlyingType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinition, UnderlyingType), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags_MetaData[] = {
		{ "Category", "Type" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinition, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinition, Struct_DEPRECATED), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinition, Enum_DEPRECATED), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_ClassStructOrEnum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_UnderlyingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Flags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewProp_Enum,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeDefinition",
		sizeof(FNiagaraTypeDefinition),
		alignof(FNiagaraTypeDefinition),
		Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle;
class UScriptStruct* FNiagaraTypeDefinitionHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraTypeDefinitionHandle"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraTypeDefinitionHandle>()
{
	return FNiagaraTypeDefinitionHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredTypeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegisteredTypeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraTypeDefinitionHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex = { "RegisteredTypeIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraTypeDefinitionHandle, RegisteredTypeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewProp_RegisteredTypeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraTypeDefinitionHandle",
		sizeof(FNiagaraTypeDefinitionHandle),
		alignof(FNiagaraTypeDefinitionHandle),
		Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableBase;
class UScriptStruct* FNiagaraVariableBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableBase, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableBase"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableBase.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableBase>()
{
	return FNiagaraVariableBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeDefHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TypeDefHandle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeDef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TypeDef;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableBase, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData[] = {
		{ "Category", "Variable" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle = { "TypeDefHandle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableBase, TypeDefHandle), Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle_MetaData)) }; // 640665816
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef = { "TypeDef", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableBase, TypeDef_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef_MetaData)) }; // 1791563344
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDefHandle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewProp_TypeDef,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableBase",
		sizeof(FNiagaraVariableBase),
		alignof(FNiagaraVariableBase),
		Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraVariable>() == std::is_polymorphic<FNiagaraVariableBase>(), "USTRUCT FNiagaraVariable cannot be polymorphic unless super FNiagaraVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariable;
class UScriptStruct* FNiagaraVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariable, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariable.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariable>()
{
	return FNiagaraVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_VarData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VarData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VarData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariable>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner = { "VarData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData[] = {
		{ "Comment", "//This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\n//TODO: Remove storage here entirely and move everything to an FNiagaraParameterStore.\n" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "This gets serialized but do we need to worry about endianness doing things like this? If not, where does that get handled?\nTODO: Remove storage here entirely and move everything to an FNiagaraParameterStore." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData = { "VarData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariable, VarData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewProp_VarData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraVariableBase,
		&NewStructOps,
		"NiagaraVariable",
		sizeof(FNiagaraVariable),
		alignof(FNiagaraVariable),
		Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter;
class UScriptStruct* FVersionedNiagaraEmitter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VersionedNiagaraEmitter"));
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVersionedNiagaraEmitter>()
{
	return FVersionedNiagaraEmitter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Emitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Emitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct combining an emitter with a specific version.*/" },
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
		{ "ToolTip", "Struct combining an emitter with a specific version." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionedNiagaraEmitter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter = { "Emitter", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraEmitter, Emitter), Z_Construct_UClass_UNiagaraEmitter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraEmitter, Version), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Emitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewProp_Version,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VersionedNiagaraEmitter",
		sizeof(FVersionedNiagaraEmitter),
		alignof(FVersionedNiagaraEmitter),
		Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraEmitter()
	{
		if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton, Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::EnumInfo[] = {
		{ ENiagaraStructConversionType_StaticEnum, TEXT("ENiagaraStructConversionType"), &Z_Registration_Info_UEnum_ENiagaraStructConversionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1440434066U) },
		{ ENiagaraNumericOutputTypeSelectionMode_StaticEnum, TEXT("ENiagaraNumericOutputTypeSelectionMode"), &Z_Registration_Info_UEnum_ENiagaraNumericOutputTypeSelectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3866916965U) },
		{ ENiagaraExecutionStateSource_StaticEnum, TEXT("ENiagaraExecutionStateSource"), &Z_Registration_Info_UEnum_ENiagaraExecutionStateSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2538703075U) },
		{ ENiagaraExecutionState_StaticEnum, TEXT("ENiagaraExecutionState"), &Z_Registration_Info_UEnum_ENiagaraExecutionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2418915668U) },
		{ ENiagaraCoordinateSpace_StaticEnum, TEXT("ENiagaraCoordinateSpace"), &Z_Registration_Info_UEnum_ENiagaraCoordinateSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3098041580U) },
		{ ENiagaraPythonUpdateScriptReference_StaticEnum, TEXT("ENiagaraPythonUpdateScriptReference"), &Z_Registration_Info_UEnum_ENiagaraPythonUpdateScriptReference, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3851770141U) },
		{ ENiagaraOrientationAxis_StaticEnum, TEXT("ENiagaraOrientationAxis"), &Z_Registration_Info_UEnum_ENiagaraOrientationAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1093790395U) },
		{ ENiagaraBoolDisplayMode_StaticEnum, TEXT("ENiagaraBoolDisplayMode"), &Z_Registration_Info_UEnum_ENiagaraBoolDisplayMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3222901703U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraWildcard::StaticStruct, Z_Construct_UScriptStruct_FNiagaraWildcard_Statics::NewStructOps, TEXT("NiagaraWildcard"), &Z_Registration_Info_UScriptStruct_NiagaraWildcard, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraWildcard), 2384694327U) },
		{ FNiagaraFloat::StaticStruct, Z_Construct_UScriptStruct_FNiagaraFloat_Statics::NewStructOps, TEXT("NiagaraFloat"), &Z_Registration_Info_UScriptStruct_NiagaraFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraFloat), 596377809U) },
		{ FNiagaraInt32::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInt32_Statics::NewStructOps, TEXT("NiagaraInt32"), &Z_Registration_Info_UScriptStruct_NiagaraInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInt32), 663165789U) },
		{ FNiagaraBool::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBool_Statics::NewStructOps, TEXT("NiagaraBool"), &Z_Registration_Info_UScriptStruct_NiagaraBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBool), 3260452311U) },
		{ FNiagaraPosition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPosition_Statics::NewStructOps, TEXT("NiagaraPosition"), &Z_Registration_Info_UScriptStruct_NiagaraPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPosition), 3370079657U) },
		{ FNiagaraHalf::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalf_Statics::NewStructOps, TEXT("NiagaraHalf"), &Z_Registration_Info_UScriptStruct_NiagaraHalf, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalf), 4139151848U) },
		{ FNiagaraHalfVector2::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector2_Statics::NewStructOps, TEXT("NiagaraHalfVector2"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector2), 2411454873U) },
		{ FNiagaraHalfVector3::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector3_Statics::NewStructOps, TEXT("NiagaraHalfVector3"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector3, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector3), 3315764324U) },
		{ FNiagaraHalfVector4::StaticStruct, Z_Construct_UScriptStruct_FNiagaraHalfVector4_Statics::NewStructOps, TEXT("NiagaraHalfVector4"), &Z_Registration_Info_UScriptStruct_NiagaraHalfVector4, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraHalfVector4), 195675225U) },
		{ FNiagaraNumeric::StaticStruct, Z_Construct_UScriptStruct_FNiagaraNumeric_Statics::NewStructOps, TEXT("NiagaraNumeric"), &Z_Registration_Info_UScriptStruct_NiagaraNumeric, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraNumeric), 107472428U) },
		{ FNiagaraParameterMap::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterMap_Statics::NewStructOps, TEXT("NiagaraParameterMap"), &Z_Registration_Info_UScriptStruct_NiagaraParameterMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterMap), 1171695270U) },
		{ FNiagaraDouble::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDouble_Statics::NewStructOps, TEXT("NiagaraDouble"), &Z_Registration_Info_UScriptStruct_NiagaraDouble, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDouble), 1389404462U) },
		{ FNiagaraMatrix::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMatrix_Statics::NewStructOps, TEXT("NiagaraMatrix"), &Z_Registration_Info_UScriptStruct_NiagaraMatrix, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMatrix), 236918802U) },
		{ FNiagaraAssetVersion::StaticStruct, Z_Construct_UScriptStruct_FNiagaraAssetVersion_Statics::NewStructOps, TEXT("NiagaraAssetVersion"), &Z_Registration_Info_UScriptStruct_NiagaraAssetVersion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraAssetVersion), 2189298161U) },
		{ FNiagaraStructConversionStep::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStructConversionStep_Statics::NewStructOps, TEXT("NiagaraStructConversionStep"), &Z_Registration_Info_UScriptStruct_NiagaraStructConversionStep, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStructConversionStep), 4029530365U) },
		{ FNiagaraLwcStructConverter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter_Statics::NewStructOps, TEXT("NiagaraLwcStructConverter"), &Z_Registration_Info_UScriptStruct_NiagaraLwcStructConverter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraLwcStructConverter), 90643616U) },
		{ FNiagaraSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSpawnInfo_Statics::NewStructOps, TEXT("NiagaraSpawnInfo"), &Z_Registration_Info_UScriptStruct_NiagaraSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSpawnInfo), 2816672937U) },
		{ FNiagaraID::StaticStruct, Z_Construct_UScriptStruct_FNiagaraID_Statics::NewStructOps, TEXT("NiagaraID"), &Z_Registration_Info_UScriptStruct_NiagaraID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraID), 3662558792U) },
		{ FNiagaraRandInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRandInfo_Statics::NewStructOps, TEXT("NiagaraRandInfo"), &Z_Registration_Info_UScriptStruct_NiagaraRandInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRandInfo), 1329180061U) },
		{ FNiagaraTypeLayoutInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo_Statics::NewStructOps, TEXT("NiagaraTypeLayoutInfo"), &Z_Registration_Info_UScriptStruct_NiagaraTypeLayoutInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeLayoutInfo), 1638943095U) },
		{ FNiagaraInputConditionMetadata::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInputConditionMetadata_Statics::NewStructOps, TEXT("NiagaraInputConditionMetadata"), &Z_Registration_Info_UScriptStruct_NiagaraInputConditionMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInputConditionMetadata), 3077449333U) },
		{ FNiagaraEnumParameterMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraEnumParameterMetaData_Statics::NewStructOps, TEXT("NiagaraEnumParameterMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraEnumParameterMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraEnumParameterMetaData), 3625451544U) },
		{ FNiagaraBoolParameterMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBoolParameterMetaData_Statics::NewStructOps, TEXT("NiagaraBoolParameterMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraBoolParameterMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBoolParameterMetaData), 1179270849U) },
		{ FNiagaraVariableMetaData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableMetaData_Statics::NewStructOps, TEXT("NiagaraVariableMetaData"), &Z_Registration_Info_UScriptStruct_NiagaraVariableMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableMetaData), 2573469744U) },
		{ FNiagaraTypeDefinition::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinition_Statics::NewStructOps, TEXT("NiagaraTypeDefinition"), &Z_Registration_Info_UScriptStruct_NiagaraTypeDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeDefinition), 1791563344U) },
		{ FNiagaraTypeDefinitionHandle::StaticStruct, Z_Construct_UScriptStruct_FNiagaraTypeDefinitionHandle_Statics::NewStructOps, TEXT("NiagaraTypeDefinitionHandle"), &Z_Registration_Info_UScriptStruct_NiagaraTypeDefinitionHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraTypeDefinitionHandle), 640665816U) },
		{ FNiagaraVariableBase::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableBase_Statics::NewStructOps, TEXT("NiagaraVariableBase"), &Z_Registration_Info_UScriptStruct_NiagaraVariableBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableBase), 1114376608U) },
		{ FNiagaraVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariable_Statics::NewStructOps, TEXT("NiagaraVariable"), &Z_Registration_Info_UScriptStruct_NiagaraVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariable), 2575088255U) },
		{ FVersionedNiagaraEmitter::StaticStruct, Z_Construct_UScriptStruct_FVersionedNiagaraEmitter_Statics::NewStructOps, TEXT("VersionedNiagaraEmitter"), &Z_Registration_Info_UScriptStruct_VersionedNiagaraEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionedNiagaraEmitter), 867959278U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_4059418284(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
