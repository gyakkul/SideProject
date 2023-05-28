// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/Highlevel/RigUnit_HighlevelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_HighlevelBase() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigVectorKind;
	static UEnum* EControlRigVectorKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigVectorKind, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigVectorKind"));
		}
		return Z_Registration_Info_UEnum_EControlRigVectorKind.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigVectorKind>()
	{
		return EControlRigVectorKind_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enumerators[] = {
		{ "EControlRigVectorKind::Direction", (int64)EControlRigVectorKind::Direction },
		{ "EControlRigVectorKind::Location", (int64)EControlRigVectorKind::Location },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enum_MetaDataParams[] = {
		{ "Direction.Name", "EControlRigVectorKind::Direction" },
		{ "Location.Name", "EControlRigVectorKind::Location" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigVectorKind",
		"EControlRigVectorKind",
		Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind()
	{
		if (!Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigVectorKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigVectorKind.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_HighlevelBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HighlevelBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase;
class UScriptStruct* FRigUnit_HighlevelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HighlevelBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HighlevelBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HighlevelBase>()
{
	return FRigUnit_HighlevelBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
		{ "NodeColor", "0.462745 1.0 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HighlevelBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_HighlevelBase",
		sizeof(FRigUnit_HighlevelBase),
		alignof(FRigUnit_HighlevelBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_HighlevelBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_HighlevelBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable;
class UScriptStruct* FRigUnit_HighlevelBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HighlevelBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HighlevelBaseMutable>()
{
	return FRigUnit_HighlevelBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/RigUnit_HighlevelBase.h" },
		{ "NodeColor", "0 0.364706 1.0" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HighlevelBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_HighlevelBaseMutable",
		sizeof(FRigUnit_HighlevelBaseMutable),
		alignof(FRigUnit_HighlevelBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::EnumInfo[] = {
		{ EControlRigVectorKind_StaticEnum, TEXT("EControlRigVectorKind"), &Z_Registration_Info_UEnum_EControlRigVectorKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2351274891U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_HighlevelBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HighlevelBase_Statics::NewStructOps, TEXT("RigUnit_HighlevelBase"), &Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HighlevelBase), 3908562378U) },
		{ FRigUnit_HighlevelBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable_Statics::NewStructOps, TEXT("RigUnit_HighlevelBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_HighlevelBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HighlevelBaseMutable), 841861152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_4175649003(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_RigUnit_HighlevelBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
