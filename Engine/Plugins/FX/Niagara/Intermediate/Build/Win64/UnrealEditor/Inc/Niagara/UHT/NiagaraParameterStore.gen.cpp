// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraParameterStore.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterStore() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPositionSource();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBoundParameter;
class UScriptStruct* FNiagaraBoundParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBoundParameter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBoundParameter"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBoundParameter>()
{
	return FNiagaraBoundParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SrcOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DestOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBoundParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoundParameter, Parameter), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset = { "SrcOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoundParameter, SrcOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset = { "DestOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBoundParameter, DestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_Parameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_SrcOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewProp_DestOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBoundParameter",
		sizeof(FNiagaraBoundParameter),
		alignof(FNiagaraBoundParameter),
		Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBoundParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraPositionSource;
class UScriptStruct* FNiagaraPositionSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraPositionSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraPositionSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraPositionSource, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraPositionSource"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraPositionSource.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraPositionSource>()
{
	return FNiagaraPositionSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraPositionSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPositionSource, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraPositionSource, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraPositionSource",
		sizeof(FNiagaraPositionSource),
		alignof(FNiagaraPositionSource),
		Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPositionSource()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraPositionSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraPositionSource.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraPositionSource.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraVariableWithOffset>() == std::is_polymorphic<FNiagaraVariableBase>(), "USTRUCT FNiagaraVariableWithOffset cannot be polymorphic unless super FNiagaraVariableBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset;
class UScriptStruct* FNiagaraVariableWithOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableWithOffset"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableWithOffset>()
{
	return FNiagaraVariableWithOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructConverter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructConverter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableWithOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableWithOffset, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_StructConverter_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_StructConverter = { "StructConverter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableWithOffset, StructConverter), Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_StructConverter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_StructConverter_MetaData)) }; // 90643616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewProp_StructConverter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraVariableBase,
		&NewStructOps,
		"NiagaraVariableWithOffset",
		sizeof(FNiagaraVariableWithOffset),
		alignof(FNiagaraVariableWithOffset),
		Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableWithOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraParameterStore;
class UScriptStruct* FNiagaraParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraParameterStore>()
{
	return FNiagaraParameterStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Owner;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterOffsets_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOffsets;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_SortedParameterOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortedParameterOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedParameterOffsets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ParameterData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaces;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalPositionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalPositionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalPositionData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGuidMapping_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGuidMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterGuidMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterGuidMapping;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Base storage class for Niagara parameter values. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Base storage class for Niagara parameter values." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraParameterStore>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** Owner of this store. Used to provide an outer to data interfaces in this store. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Owner of this store. Used to provide an outer to data interfaces in this store." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_ValueProp = { "ParameterOffsets", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_Key_KeyProp = { "ParameterOffsets_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData[] = {
		{ "Comment", "/** Map from parameter defs to their offset in the data table or the data interface. TODO: Separate out into a layout and instance class to reduce duplicated data for this?  */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Map from parameter defs to their offset in the data table or the data interface. TODO: Separate out into a layout and instance class to reduce duplicated data for this?" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets = { "ParameterOffsets", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, ParameterOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_MetaData)) }; // 2575088255
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_Inner = { "SortedParameterOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableWithOffset, METADATA_PARAMS(nullptr, 0) }; // 3354673632
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData[] = {
		{ "Comment", "/** Storage for the set of variables that are represented by this ParameterStore.  Shouldn't be accessed directly, instead use\n\x09ReadParameterVariables() */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Storage for the set of variables that are represented by this ParameterStore.  Shouldn't be accessed directly, instead use\n      ReadParameterVariables()" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets = { "SortedParameterOffsets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, SortedParameterOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_MetaData)) }; // 3354673632
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_Inner = { "ParameterData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData[] = {
		{ "Comment", "/** Buffer containing parameter data. Indexed using offsets in ParameterOffsets */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Buffer containing parameter data. Indexed using offsets in ParameterOffsets" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData = { "ParameterData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, ParameterData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_Inner = { "DataInterfaces", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData[] = {
		{ "Comment", "/** Data interfaces for this script. Possibly overridden with externally owned interfaces. Also indexed by ParameterOffsets. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Data interfaces for this script. Possibly overridden with externally owned interfaces. Also indexed by ParameterOffsets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces = { "DataInterfaces", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, DataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_Inner = { "UObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData[] = {
		{ "Comment", "/** UObjects referenced by this store. Also indexed by ParameterOffsets.*/" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "UObjects referenced by this store. Also indexed by ParameterOffsets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects = { "UObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, UObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData_Inner = { "OriginalPositionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPositionSource, METADATA_PARAMS(nullptr, 0) }; // 2368652483
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData_MetaData[] = {
		{ "Comment", "/** Holds position type source data to be later converted to LWC format. We use an array here instead of a map to save some memory and because linear search is faster with the few elements in here. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Holds position type source data to be later converted to LWC format. We use an array here instead of a map to save some memory and because linear search is faster with the few elements in here." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData = { "OriginalPositionData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, OriginalPositionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData_MetaData)) }; // 2368652483
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName = { "DebugName", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, DebugName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_ValueProp = { "ParameterGuidMapping", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_Key_KeyProp = { "ParameterGuidMapping_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_MetaData[] = {
		{ "Comment", "/** Guid data to remap rapid iteration parameters after a function input was renamed. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterStore.h" },
		{ "ToolTip", "Guid data to remap rapid iteration parameters after a function input was renamed." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping = { "ParameterGuidMapping", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraParameterStore, ParameterGuidMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_MetaData)) }; // 2575088255
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_Owner,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterOffsets,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_SortedParameterOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DataInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_UObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_OriginalPositionData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_DebugName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewProp_ParameterGuidMapping,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraParameterStore",
		sizeof(FNiagaraParameterStore),
		alignof(FNiagaraParameterStore),
		Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraParameterStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraParameterStore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraBoundParameter::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBoundParameter_Statics::NewStructOps, TEXT("NiagaraBoundParameter"), &Z_Registration_Info_UScriptStruct_NiagaraBoundParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBoundParameter), 1823501731U) },
		{ FNiagaraPositionSource::StaticStruct, Z_Construct_UScriptStruct_FNiagaraPositionSource_Statics::NewStructOps, TEXT("NiagaraPositionSource"), &Z_Registration_Info_UScriptStruct_NiagaraPositionSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraPositionSource), 2368652483U) },
		{ FNiagaraVariableWithOffset::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableWithOffset_Statics::NewStructOps, TEXT("NiagaraVariableWithOffset"), &Z_Registration_Info_UScriptStruct_NiagaraVariableWithOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableWithOffset), 3354673632U) },
		{ FNiagaraParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraParameterStore_Statics::NewStructOps, TEXT("NiagaraParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraParameterStore), 2939422465U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h_2712106090(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraParameterStore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
