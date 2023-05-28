// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IO/DMXInputPortReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXInputPortReference() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXInputPortReference;
class UScriptStruct* FDMXInputPortReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXInputPortReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXInputPortReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXInputPortReference, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXInputPortReference"));
	}
	return Z_Registration_Info_UScriptStruct_DMXInputPortReference.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXInputPortReference>()
{
	return FDMXInputPortReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXInputPortReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabledFlag_MetaData[];
#endif
		static void NewProp_bEnabledFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabledFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Reference of an input port */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortReference.h" },
		{ "ToolTip", "Reference of an input port" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXInputPortReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_PortGuid_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Unique identifier shared with port config and port instance.\n\x09 * Note: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization.\n\x09 */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortReference.h" },
		{ "ToolTip", "Unique identifier shared with port config and port instance.\nNote: This needs be BlueprintReadWrite to be accessible to property type customization, but is hidden by customization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_PortGuid = { "PortGuid", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXInputPortReference, PortGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_PortGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_PortGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Optional flag for port references that can be enabled or disabled */" },
		{ "ModuleRelativePath", "Public/IO/DMXInputPortReference.h" },
		{ "ToolTip", "Optional flag for port references that can be enabled or disabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag_SetBit(void* Obj)
	{
		((FDMXInputPortReference*)Obj)->bEnabledFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag = { "bEnabledFlag", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDMXInputPortReference), &Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_PortGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewProp_bEnabledFlag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXInputPortReference",
		sizeof(FDMXInputPortReference),
		alignof(FDMXInputPortReference),
		Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXInputPortReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXInputPortReference.InnerSingleton, Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXInputPortReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortReference_h_Statics::ScriptStructInfo[] = {
		{ FDMXInputPortReference::StaticStruct, Z_Construct_UScriptStruct_FDMXInputPortReference_Statics::NewStructOps, TEXT("DMXInputPortReference"), &Z_Registration_Info_UScriptStruct_DMXInputPortReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXInputPortReference), 3197363453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortReference_h_3252393749(TEXT("/Script/DMXProtocol"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_IO_DMXInputPortReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
