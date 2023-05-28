// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnitContext() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigInteractionType;
	static UEnum* EControlRigInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigInteractionType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigInteractionType"));
		}
		return Z_Registration_Info_UEnum_EControlRigInteractionType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigInteractionType>()
	{
		return EControlRigInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators[] = {
		{ "EControlRigInteractionType::None", (int64)EControlRigInteractionType::None },
		{ "EControlRigInteractionType::Translate", (int64)EControlRigInteractionType::Translate },
		{ "EControlRigInteractionType::Rotate", (int64)EControlRigInteractionType::Rotate },
		{ "EControlRigInteractionType::Scale", (int64)EControlRigInteractionType::Scale },
		{ "EControlRigInteractionType::All", (int64)EControlRigInteractionType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "All.Name", "EControlRigInteractionType::All" },
		{ "Comment", "/**\n * The type of interaction happening on a rig\n */" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "None.Name", "EControlRigInteractionType::None" },
		{ "Rotate.Name", "EControlRigInteractionType::Rotate" },
		{ "Scale.Name", "EControlRigInteractionType::Scale" },
		{ "ToolTip", "The type of interaction happening on a rig" },
		{ "Translate.Name", "EControlRigInteractionType::Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigInteractionType",
		"EControlRigInteractionType",
		Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigInteractionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigHierarchySettings;
class UScriptStruct* FRigHierarchySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigHierarchySettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigHierarchySettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigHierarchySettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigHierarchySettings>()
{
	return FRigHierarchySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigHierarchySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralElementLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProceduralElementLimit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigHierarchySettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData[] = {
		{ "Category", "Hierarchy Settings" },
		{ "Comment", "// Sets the limit for the number of elements to create procedurally\n" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
		{ "ToolTip", "Sets the limit for the number of elements to create procedurally" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit = { "ProceduralElementLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigHierarchySettings, ProceduralElementLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewProp_ProceduralElementLimit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigHierarchySettings",
		sizeof(FRigHierarchySettings),
		alignof(FRigHierarchySettings),
		Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigHierarchySettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FControlRigExecuteContext>() == std::is_polymorphic<FRigVMExecuteContext>(), "USTRUCT FControlRigExecuteContext cannot be polymorphic unless super FRigVMExecuteContext is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigExecuteContext;
class UScriptStruct* FControlRigExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigExecuteContext>()
{
	return FControlRigExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/RigUnitContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMExecuteContext,
		&NewStructOps,
		"ControlRigExecuteContext",
		sizeof(FControlRigExecuteContext),
		alignof(FControlRigExecuteContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigExecuteContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo[] = {
		{ EControlRigInteractionType_StaticEnum, TEXT("EControlRigInteractionType"), &Z_Registration_Info_UEnum_EControlRigInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2666209751U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo[] = {
		{ FRigHierarchySettings::StaticStruct, Z_Construct_UScriptStruct_FRigHierarchySettings_Statics::NewStructOps, TEXT("RigHierarchySettings"), &Z_Registration_Info_UScriptStruct_RigHierarchySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigHierarchySettings), 460636539U) },
		{ FControlRigExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FControlRigExecuteContext_Statics::NewStructOps, TEXT("ControlRigExecuteContext"), &Z_Registration_Info_UScriptStruct_ControlRigExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigExecuteContext), 1930646767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_1470370020(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnitContext_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
