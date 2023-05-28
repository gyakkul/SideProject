// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityQuery.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityQuery() {}
// Cross Module References
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityQuery();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragmentRequirements();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References

static_assert(std::is_polymorphic<FMassEntityQuery>() == std::is_polymorphic<FMassFragmentRequirements>(), "USTRUCT FMassEntityQuery cannot be polymorphic unless super FMassFragmentRequirements is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityQuery;
class UScriptStruct* FMassEntityQuery::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityQuery, (UObject*)Z_Construct_UPackage__Script_MassEntity(), TEXT("MassEntityQuery"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityQuery.OuterSingleton;
}
template<> MASSENTITY_API UScriptStruct* StaticStruct<FMassEntityQuery>()
{
	return FMassEntityQuery::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityQuery_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityQuery_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *  FMassEntityQuery is a structure that is used to trigger calculations on cached set of valid archetypes as described \n *  by requirements. See the parent classes FMassFragmentRequirements and FMassSubsystemRequirements for setting up the \n *\x09required fragments and subsystems.\n * \n *  A query to be considered valid needs declared at least one EMassFragmentPresence::All, EMassFragmentPresence::Any \n *  EMassFragmentPresence::Optional fragment requirement.\n */" },
		{ "ModuleRelativePath", "Public/MassEntityQuery.h" },
		{ "ToolTip", "FMassEntityQuery is a structure that is used to trigger calculations on cached set of valid archetypes as described\nby requirements. See the parent classes FMassFragmentRequirements and FMassSubsystemRequirements for setting up the\n   required fragments and subsystems.\n\nA query to be considered valid needs declared at least one EMassFragmentPresence::All, EMassFragmentPresence::Any\nEMassFragmentPresence::Optional fragment requirement." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityQuery>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
		Z_Construct_UScriptStruct_FMassFragmentRequirements,
		&NewStructOps,
		"MassEntityQuery",
		sizeof(FMassEntityQuery),
		alignof(FMassEntityQuery),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityQuery()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityQuery_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityQuery.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityQuery_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityQuery_h_Statics::ScriptStructInfo[] = {
		{ FMassEntityQuery::StaticStruct, Z_Construct_UScriptStruct_FMassEntityQuery_Statics::NewStructOps, TEXT("MassEntityQuery"), &Z_Registration_Info_UScriptStruct_MassEntityQuery, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityQuery), 877718425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityQuery_h_4229097163(TEXT("/Script/MassEntity"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityQuery_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntityQuery_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
