// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StructReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructReference() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FStructReference();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructReference;
class UScriptStruct* FStructReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructReference, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("StructReference"));
	}
	return Z_Registration_Info_UScriptStruct_StructReference.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FStructReference>()
{
	return FStructReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStructReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Base class used to reference a struct in the graph. Don't use this directly, only derived classes.\n * Use the IMPLEMENT_STRUCT_REFERENCE macro to create new struct reference types easily.\n */" },
		{ "ModuleRelativePath", "Public/StructReference.h" },
		{ "ToolTip", "Base class used to reference a struct in the graph. Don't use this directly, only derived classes.\nUse the IMPLEMENT_STRUCT_REFERENCE macro to create new struct reference types easily." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"StructReference",
		sizeof(FStructReference),
		alignof(FStructReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructReference()
	{
		if (!Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton, Z_Construct_UScriptStruct_FStructReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StructReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics::ScriptStructInfo[] = {
		{ FStructReference::StaticStruct, Z_Construct_UScriptStruct_FStructReference_Statics::NewStructOps, TEXT("StructReference"), &Z_Registration_Info_UScriptStruct_StructReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructReference), 620785502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_966442790(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_StructReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
