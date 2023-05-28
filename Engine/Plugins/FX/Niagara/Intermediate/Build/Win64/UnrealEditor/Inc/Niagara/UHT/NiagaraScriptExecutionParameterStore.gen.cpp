// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraScriptExecutionParameterStore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptExecutionParameterStore() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo;
class UScriptStruct* FNiagaraScriptExecutionPaddingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionPaddingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionPaddingInfo>()
{
	return FNiagaraScriptExecutionPaddingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_SrcOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DestOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_SrcSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestSize_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_DestSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionPaddingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset = { "SrcOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset = { "DestOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize = { "SrcSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, SrcSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize = { "DestSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionPaddingInfo, DestSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_SrcSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewProp_DestSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScriptExecutionPaddingInfo",
		sizeof(FNiagaraScriptExecutionPaddingInfo),
		alignof(FNiagaraScriptExecutionPaddingInfo),
		Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraScriptExecutionParameterStore>() == std::is_polymorphic<FNiagaraParameterStore>(), "USTRUCT FNiagaraScriptExecutionParameterStore cannot be polymorphic unless super FNiagaraParameterStore is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore;
class UScriptStruct* FNiagaraScriptExecutionParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptExecutionParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptExecutionParameterStore>()
{
	return FNiagaraScriptExecutionParameterStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddedParameterSize_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PaddedParameterSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PaddingInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaddingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PaddingInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\nStorage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution.\n*/" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Storage class containing actual runtime buffers to be used by the VM and the GPU.\nIs not the actual source for any parameter data, rather just the final place it's gathered from various other places ready for execution." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptExecutionParameterStore>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData[] = {
		{ "Comment", "/** Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts. */" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "Size of the parameter data not including prev frame values or internal constants. Allows copying into previous parameter values for interpolated spawn scripts." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize = { "ParameterSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, ParameterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize = { "PaddedParameterSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, PaddedParameterSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_Inner = { "PaddingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo, METADATA_PARAMS(nullptr, 0) }; // 2636337952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo = { "PaddingInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScriptExecutionParameterStore, PaddingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_MetaData)) }; // 2636337952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((FNiagaraScriptExecutionParameterStore*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraScriptExecutionParameterStore), &Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_ParameterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddedParameterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_PaddingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewProp_bInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraParameterStore,
		&NewStructOps,
		"NiagaraScriptExecutionParameterStore",
		sizeof(FNiagaraScriptExecutionParameterStore),
		alignof(FNiagaraScriptExecutionParameterStore),
		Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraScriptInstanceParameterStore>() == std::is_polymorphic<FNiagaraParameterStore>(), "USTRUCT FNiagaraScriptInstanceParameterStore cannot be polymorphic unless super FNiagaraParameterStore is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore;
class UScriptStruct* FNiagaraScriptInstanceParameterStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScriptInstanceParameterStore"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScriptInstanceParameterStore>()
{
	return FNiagaraScriptInstanceParameterStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n/// FNiagaraScriptInstanceParameterStore\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/NiagaraScriptExecutionParameterStore.h" },
		{ "ToolTip", "FNiagaraScriptInstanceParameterStore" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScriptInstanceParameterStore>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNiagaraParameterStore,
		&NewStructOps,
		"NiagaraScriptInstanceParameterStore",
		sizeof(FNiagaraScriptInstanceParameterStore),
		alignof(FNiagaraScriptInstanceParameterStore),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraScriptExecutionPaddingInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionPaddingInfo_Statics::NewStructOps, TEXT("NiagaraScriptExecutionPaddingInfo"), &Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionPaddingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptExecutionPaddingInfo), 2636337952U) },
		{ FNiagaraScriptExecutionParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore_Statics::NewStructOps, TEXT("NiagaraScriptExecutionParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraScriptExecutionParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptExecutionParameterStore), 3574274879U) },
		{ FNiagaraScriptInstanceParameterStore::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScriptInstanceParameterStore_Statics::NewStructOps, TEXT("NiagaraScriptInstanceParameterStore"), &Z_Registration_Info_UScriptStruct_NiagaraScriptInstanceParameterStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScriptInstanceParameterStore), 2329659204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_1807365444(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScriptExecutionParameterStore_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
