// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceDataChannelWrite.h"
#include "../Classes/NiagaraDataSetCompiledData.h"
#include "NiagaraDataChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelWrite() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelReference();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

static_assert(std::is_polymorphic<FNDIDataChannelWriteCompiledData>() == std::is_polymorphic<FNDIDataChannelCompiledData>(), "USTRUCT FNDIDataChannelWriteCompiledData cannot be polymorphic unless super FNDIDataChannelCompiledData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData;
class UScriptStruct* FNDIDataChannelWriteCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIDataChannelWriteCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIDataChannelWriteCompiledData>()
{
	return FNDIDataChannelWriteCompiledData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Additional compile time information used by the Write DI. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Additional compile time information used by the Write DI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIDataChannelWriteCompiledData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout_MetaData[] = {
		{ "Comment", "/** Internal buffer layout. Contains only the data actually written by this DI. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Internal buffer layout. Contains only the data actually written by this DI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout = { "DataLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIDataChannelWriteCompiledData, DataLayout), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout_MetaData)) }; // 4253291051
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewProp_DataLayout,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		Z_Construct_UScriptStruct_FNDIDataChannelCompiledData,
		&NewStructOps,
		"NDIDataChannelWriteCompiledData",
		sizeof(FNDIDataChannelWriteCompiledData),
		alignof(FNDIDataChannelWriteCompiledData),
		Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData.InnerSingleton;
	}
	void UNiagaraDataInterfaceDataChannelWrite::StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelWrite);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_NoRegister()
	{
		return UNiagaraDataInterfaceDataChannelWrite::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AllocationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AllocationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllocationCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_AllocationCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToGame_MetaData[];
#endif
		static void NewProp_bPublishToGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToGame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToCPU_MetaData[];
#endif
		static void NewProp_bPublishToCPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToCPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPublishToGPU_MetaData[];
#endif
		static void NewProp_bPublishToGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPublishToGPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Data Channel Writer" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** How should we allocate the buffer into which we write data. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "How should we allocate the buffer into which we write data." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode = { "AllocationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, AllocationMode), Z_Construct_UEnum_Niagara_ENiagaraDataChannelAllocationMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_MetaData)) }; // 1606192536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** How many elements to allocate for writing per frame? Usage is defendant on AllocationMode. TODO: Allow allocation count to be controlled dynamically from script? */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "How many elements to allocate for writing per frame? Usage is defendant on AllocationMode. TODO: Allow allocation count to be controlled dynamically from script?" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount = { "AllocationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, AllocationCount), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to the world game data channel. This is require to allow game BP and C++ to read this data. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to the world game data channel. This is require to allow game BP and C++ to read this data." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame = { "bPublishToGame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to the world CPUSim data channel. This is required for CPU emitters in other Niagara Systems to read this data. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to the world CPUSim data channel. This is required for CPU emitters in other Niagara Systems to read this data." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToCPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU = { "bPublishToCPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** Whether the data generated by this DI should be published to a world data channel. This is required to allow GPU emitters in other Niagara Systems to read this data.  */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "Whether the data generated by this DI should be published to a world data channel. This is required to allow GPU emitters in other Niagara Systems to read this data." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelWrite*)Obj)->bPublishToGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU = { "bPublishToGPU", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelWrite), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** When writing externally, the channel to use. */" },
		{ "EditCondition", "bPublishToWorld" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
		{ "ToolTip", "When writing externally, the channel to use." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, Channel), Z_Construct_UScriptStruct_FNiagaraDataChannelReference, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel_MetaData)) }; // 2371448466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelWrite.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelWrite, CompiledData), Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData_MetaData)) }; // 1560964128
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_AllocationCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_bPublishToGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::NewProp_CompiledData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelWrite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::ClassParams = {
		&UNiagaraDataInterfaceDataChannelWrite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelWrite>()
	{
		return UNiagaraDataInterfaceDataChannelWrite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelWrite);
	UNiagaraDataInterfaceDataChannelWrite::~UNiagaraDataInterfaceDataChannelWrite() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ScriptStructInfo[] = {
		{ FNDIDataChannelWriteCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNDIDataChannelWriteCompiledData_Statics::NewStructOps, TEXT("NDIDataChannelWriteCompiledData"), &Z_Registration_Info_UScriptStruct_NDIDataChannelWriteCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIDataChannelWriteCompiledData), 1560964128U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelWrite, UNiagaraDataInterfaceDataChannelWrite::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelWrite"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelWrite), 1763605000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_1430266391(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelWrite_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
