// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationState/IrisFastArraySerializer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrisFastArraySerializer() {}
// Cross Module References
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIrisFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References

static_assert(std::is_polymorphic<FIrisFastArraySerializer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FIrisFastArraySerializer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IrisFastArraySerializer;
class UScriptStruct* FIrisFastArraySerializer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIrisFastArraySerializer, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("IrisFastArraySerializer"));
	}
	return Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FIrisFastArraySerializer>()
{
	return FIrisFastArraySerializer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChangeMaskStorage_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ChangeMaskStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Specialization of FFastArraySerializer in order to add state tracking support for Iris\n * Current usage is to inherit from this struct instead of FFastArraySerializer, backwards compatible with existing system as it simply forwards calls to MarkDirty/MarkItemDirty\n * This class could be named FFastArrayReplicationState, but kept the FIrisFastArraySerializer to match old naming for the time being\n */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/IrisFastArraySerializer.h" },
		{ "ToolTip", "Specialization of FFastArraySerializer in order to add state tracking support for Iris\nCurrent usage is to inherit from this struct instead of FFastArraySerializer, backwards compatible with existing system as it simply forwards calls to MarkDirty/MarkItemDirty\nThis class could be named FFastArrayReplicationState, but kept the FIrisFastArraySerializer to match old naming for the time being" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIrisFastArraySerializer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage_MetaData[] = {
		{ "Comment", "// Storage for changemask, this is currently hardcoded\n" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/IrisFastArraySerializer.h" },
		{ "ToolTip", "Storage for changemask, this is currently hardcoded" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage = { "ChangeMaskStorage", nullptr, (EPropertyFlags)0x0040000080002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ChangeMaskStorage, FIrisFastArraySerializer), nullptr, nullptr, STRUCT_OFFSET(FIrisFastArraySerializer, ChangeMaskStorage), METADATA_PARAMS(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewProp_ChangeMaskStorage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"IrisFastArraySerializer",
		sizeof(FIrisFastArraySerializer),
		alignof(FIrisFastArraySerializer),
		Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIrisFastArraySerializer()
	{
		if (!Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton, Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IrisFastArraySerializer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics::ScriptStructInfo[] = {
		{ FIrisFastArraySerializer::StaticStruct, Z_Construct_UScriptStruct_FIrisFastArraySerializer_Statics::NewStructOps, TEXT("IrisFastArraySerializer"), &Z_Registration_Info_UScriptStruct_IrisFastArraySerializer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIrisFastArraySerializer), 166581456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_1167706414(TEXT("/Script/IrisCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_IrisFastArraySerializer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
