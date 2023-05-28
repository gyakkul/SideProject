// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTemplate() {}
// Cross Module References
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplate();
	MASSSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityTemplateID;
class UScriptStruct* FMassEntityTemplateID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityTemplateID, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntityTemplateID"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityTemplateID.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntityTemplateID>()
{
	return FMassEntityTemplateID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSet_MetaData[];
#endif
		static void NewProp_bIsSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//ID of the template an entity is using\n" },
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
		{ "ToolTip", "ID of the template an entity is using" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityTemplateID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassEntityTemplateID, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_Hash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet_SetBit(void* Obj)
	{
		((FMassEntityTemplateID*)Obj)->bIsSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet = { "bIsSet", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMassEntityTemplateID), &Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_Hash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewProp_bIsSet,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntityTemplateID",
		sizeof(FMassEntityTemplateID),
		alignof(FMassEntityTemplateID),
		Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplateID()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityTemplateID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassEntityTemplate;
class UScriptStruct* FMassEntityTemplate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassEntityTemplate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassEntityTemplate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityTemplate, (UObject*)Z_Construct_UPackage__Script_MassSpawner(), TEXT("MassEntityTemplate"));
	}
	return Z_Registration_Info_UScriptStruct_MassEntityTemplate.OuterSingleton;
}
template<> MASSSPAWNER_API UScriptStruct* StaticStruct<FMassEntityTemplate>()
{
	return FMassEntityTemplate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassEntityTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** @todo document\x09*/" },
		{ "ModuleRelativePath", "Public/MassEntityTemplate.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassEntityTemplate>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
		nullptr,
		&NewStructOps,
		"MassEntityTemplate",
		sizeof(FMassEntityTemplate),
		alignof(FMassEntityTemplate),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassEntityTemplate()
	{
		if (!Z_Registration_Info_UScriptStruct_MassEntityTemplate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassEntityTemplate.InnerSingleton, Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassEntityTemplate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo[] = {
		{ FMassEntityTemplateID::StaticStruct, Z_Construct_UScriptStruct_FMassEntityTemplateID_Statics::NewStructOps, TEXT("MassEntityTemplateID"), &Z_Registration_Info_UScriptStruct_MassEntityTemplateID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityTemplateID), 1781446094U) },
		{ FMassEntityTemplate::StaticStruct, Z_Construct_UScriptStruct_FMassEntityTemplate_Statics::NewStructOps, TEXT("MassEntityTemplate"), &Z_Registration_Info_UScriptStruct_MassEntityTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassEntityTemplate), 3059979917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_3329467403(TEXT("/Script/MassSpawner"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
