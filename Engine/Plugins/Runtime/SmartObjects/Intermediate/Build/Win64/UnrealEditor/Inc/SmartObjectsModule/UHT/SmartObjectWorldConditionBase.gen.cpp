// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditions/SmartObjectWorldConditionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectWorldConditionBase() {}
// Cross Module References
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionBase();
// End Cross Module References

static_assert(std::is_polymorphic<FSmartObjectWorldConditionBase>() == std::is_polymorphic<FWorldConditionBase>(), "USTRUCT FSmartObjectWorldConditionBase cannot be polymorphic unless super FWorldConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase;
class UScriptStruct* FSmartObjectWorldConditionBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase, (UObject*)Z_Construct_UPackage__Script_SmartObjectsModule(), TEXT("SmartObjectWorldConditionBase"));
	}
	return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.OuterSingleton;
}
template<> SMARTOBJECTSMODULE_API UScriptStruct* StaticStruct<FSmartObjectWorldConditionBase>()
{
	return FSmartObjectWorldConditionBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base struct for all conditions accepted by Smart Objects.\n */" },
		{ "Hidden", "" },
		{ "ModuleRelativePath", "Public/WorldConditions/SmartObjectWorldConditionBase.h" },
		{ "ToolTip", "Base struct for all conditions accepted by Smart Objects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartObjectWorldConditionBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
		Z_Construct_UScriptStruct_FWorldConditionBase,
		&NewStructOps,
		"SmartObjectWorldConditionBase",
		sizeof(FSmartObjectWorldConditionBase),
		alignof(FSmartObjectWorldConditionBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.InnerSingleton, Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionBase_h_Statics::ScriptStructInfo[] = {
		{ FSmartObjectWorldConditionBase::StaticStruct, Z_Construct_UScriptStruct_FSmartObjectWorldConditionBase_Statics::NewStructOps, TEXT("SmartObjectWorldConditionBase"), &Z_Registration_Info_UScriptStruct_SmartObjectWorldConditionBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartObjectWorldConditionBase), 3557981359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionBase_h_2921293053(TEXT("/Script/SmartObjectsModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_WorldConditions_SmartObjectWorldConditionBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
