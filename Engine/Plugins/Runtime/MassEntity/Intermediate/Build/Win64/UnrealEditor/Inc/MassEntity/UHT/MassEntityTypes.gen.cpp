// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTypes() {}
// Cross Module References
	MASSENTITY_API UEnum* Z_Construct_UEnum_MassEntity_EMassObservedOperation();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassTag();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassFragment;
class UScriptStruct* FMassFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassFragment>()
{
	return FMassFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassFragment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This is the base class for all lightweight fragments\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "This is the base class for all lightweight fragments" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassFragment",
		sizeof(FMassFragment),
		alignof(FMassFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassFragment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassTag;
class UScriptStruct* FMassTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassTag, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassTag"));
	}
	return Z_Registration_Info_UScriptStruct_MassTag.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassTag>()
{
	return FMassTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassTag_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// This is the base class for types that will only be tested for presence/absence, i.e. Tags.\n// Subclasses should never contain any member properties.\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "This is the base class for types that will only be tested for presence/absence, i.e. Tags.\nSubclasses should never contain any member properties." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassTag>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassTag",
		sizeof(FMassTag),
		alignof(FMassTag),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassTag()
	{
		if (!Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton, Z_Construct_UScriptStruct_FMassTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassChunkFragment;
class UScriptStruct* FMassChunkFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassChunkFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassChunkFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassChunkFragment>()
{
	return FMassChunkFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassChunkFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassChunkFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassChunkFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassChunkFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassChunkFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassChunkFragment",
		sizeof(FMassChunkFragment),
		alignof(FMassChunkFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassChunkFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassChunkFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassChunkFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassChunkFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassChunkFragment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassSharedFragment;
class UScriptStruct* FMassSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassSharedFragment.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassSharedFragment>()
{
	return FMassSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassSharedFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassSharedFragment",
		sizeof(FMassSharedFragment),
		alignof(FMassSharedFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassSharedFragment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityHandle;
class UScriptStruct* FMassEntityHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityHandle, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityHandle.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityHandle>()
{
	return FMassEntityHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityHandle_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerialNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SerialNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A handle to a lightweight entity.  An entity is used in conjunction with the FMassEntityManager\n// for the current world and can contain lightweight fragments.\n" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "ToolTip", "A handle to a lightweight entity.  An entity is used in conjunction with the FMassEntityManager\nfor the current world and can contain lightweight fragments." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityHandle, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber_MetaData[] = {
		{ "Category", "Mass|Debug" },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber = { "SerialNumber", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityHandle, SerialNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewProp_SerialNumber,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		&NewStructOps,
		"MassEntityHandle",
		sizeof(FMassEntityHandle),
		alignof(FMassEntityHandle),
		Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityHandle.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassObservedOperation;
	static UEnum* EMassObservedOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassEntity_EMassObservedOperation, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("EMassObservedOperation"));
		}
		return Z_Registration_Info_UEnum_EMassObservedOperation.OuterSingleton;
	}
	template<> MASSENTITY_API UEnum* StaticEnum<EMassObservedOperation>()
	{
		return EMassObservedOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enumerators[] = {
		{ "EMassObservedOperation::Add", (int64)EMassObservedOperation::Add },
		{ "EMassObservedOperation::Remove", (int64)EMassObservedOperation::Remove },
		{ "EMassObservedOperation::MAX", (int64)EMassObservedOperation::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enum_MetaDataParams[] = {
		{ "Add.Name", "EMassObservedOperation::Add" },
		{ "MAX.Comment", "// @todo Keeping this here as a indication of design intent. For now we handle entity destruction like removal, but \n// there might be computationally expensive cases where we might want to avoid for soon-to-be-dead entities. \n// Destroy,\n// @todo another planned supported operation type\n// Touch,\n" },
		{ "MAX.Name", "EMassObservedOperation::MAX" },
		{ "MAX.ToolTip", "@todo Keeping this here as a indication of design intent. For now we handle entity destruction like removal, but\nthere might be computationally expensive cases where we might want to avoid for soon-to-be-dead entities.\nDestroy,\n@todo another planned supported operation type\nTouch," },
		{ "ModuleRelativePath", "Public/MassEntityTypes.h" },
		{ "Remove.Name", "EMassObservedOperation::Remove" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassEntity,
		nullptr,
		"EMassObservedOperation",
		"EMassObservedOperation",
		Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassEntity_EMassObservedOperation()
	{
		if (!Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton, Z_Construct_UEnum_MassEntity_EMassObservedOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassObservedOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::EnumInfo[] = {
		{ EMassObservedOperation_StaticEnum, TEXT("EMassObservedOperation"), &Z_Registration_Info_UEnum_EMassObservedOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2222158168U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassFragment::StaticStruct, Z_Construct_UScriptStruct_FMassFragment_Statics::NewStructOps, TEXT("MassFragment"), &Z_Registration_Info_UScriptStruct_MassFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassFragment), 3311533483U) },
		{ FMassTag::StaticStruct, Z_Construct_UScriptStruct_FMassTag_Statics::NewStructOps, TEXT("MassTag"), &Z_Registration_Info_UScriptStruct_MassTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassTag), 2105018336U) },
		{ FMassChunkFragment::StaticStruct, Z_Construct_UScriptStruct_FMassChunkFragment_Statics::NewStructOps, TEXT("MassChunkFragment"), &Z_Registration_Info_UScriptStruct_MassChunkFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassChunkFragment), 1582651978U) },
		{ FMassSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassSharedFragment_Statics::NewStructOps, TEXT("MassSharedFragment"), &Z_Registration_Info_UScriptStruct_MassSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassSharedFragment), 2088372142U) },
		{ FMassEntityHandle::StaticStruct, Z_Construct_UScriptStruct_FMassEntityHandle_Statics::NewStructOps, TEXT("MassEntityHandle"), &Z_Registration_Info_UScriptStruct_MassEntityHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityHandle), 2284468209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_3340775894(TEXT("/Script/MassEntity"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
