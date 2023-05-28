// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Actions/OptimusComponentBindingActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusComponentBindingActions() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

static_assert(std::is_polymorphic<FOptimusComponentBindingAction_AddBinding>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusComponentBindingAction_AddBinding cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding;
class UScriptStruct* FOptimusComponentBindingAction_AddBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComponentBindingAction_AddBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComponentBindingAction_AddBinding>()
{
	return FOptimusComponentBindingAction_AddBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusComponentBindingActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComponentBindingAction_AddBinding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusComponentBindingAction_AddBinding",
		sizeof(FOptimusComponentBindingAction_AddBinding),
		alignof(FOptimusComponentBindingAction_AddBinding),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusComponentBindingAction_RemoveBinding>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusComponentBindingAction_RemoveBinding cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding;
class UScriptStruct* FOptimusComponentBindingAction_RemoveBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComponentBindingAction_RemoveBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComponentBindingAction_RemoveBinding>()
{
	return FOptimusComponentBindingAction_RemoveBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusComponentBindingActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComponentBindingAction_RemoveBinding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusComponentBindingAction_RemoveBinding",
		sizeof(FOptimusComponentBindingAction_RemoveBinding),
		alignof(FOptimusComponentBindingAction_RemoveBinding),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusComponentBindingAction_RenameBinding>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusComponentBindingAction_RenameBinding cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding;
class UScriptStruct* FOptimusComponentBindingAction_RenameBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComponentBindingAction_RenameBinding"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComponentBindingAction_RenameBinding>()
{
	return FOptimusComponentBindingAction_RenameBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusComponentBindingActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComponentBindingAction_RenameBinding>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusComponentBindingAction_RenameBinding",
		sizeof(FOptimusComponentBindingAction_RenameBinding),
		alignof(FOptimusComponentBindingAction_RenameBinding),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusComponentBindingAction_SetComponentSource>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusComponentBindingAction_SetComponentSource cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource;
class UScriptStruct* FOptimusComponentBindingAction_SetComponentSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusComponentBindingAction_SetComponentSource"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusComponentBindingAction_SetComponentSource>()
{
	return FOptimusComponentBindingAction_SetComponentSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusComponentBindingActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusComponentBindingAction_SetComponentSource>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusComponentBindingAction_SetComponentSource",
		sizeof(FOptimusComponentBindingAction_SetComponentSource),
		alignof(FOptimusComponentBindingAction_SetComponentSource),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.InnerSingleton, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusComponentBindingActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusComponentBindingActions_h_Statics::ScriptStructInfo[] = {
		{ FOptimusComponentBindingAction_AddBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding_Statics::NewStructOps, TEXT("OptimusComponentBindingAction_AddBinding"), &Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_AddBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComponentBindingAction_AddBinding), 30494086U) },
		{ FOptimusComponentBindingAction_RemoveBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RemoveBinding_Statics::NewStructOps, TEXT("OptimusComponentBindingAction_RemoveBinding"), &Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RemoveBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComponentBindingAction_RemoveBinding), 954269337U) },
		{ FOptimusComponentBindingAction_RenameBinding::StaticStruct, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_RenameBinding_Statics::NewStructOps, TEXT("OptimusComponentBindingAction_RenameBinding"), &Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_RenameBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComponentBindingAction_RenameBinding), 318358784U) },
		{ FOptimusComponentBindingAction_SetComponentSource::StaticStruct, Z_Construct_UScriptStruct_FOptimusComponentBindingAction_SetComponentSource_Statics::NewStructOps, TEXT("OptimusComponentBindingAction_SetComponentSource"), &Z_Registration_Info_UScriptStruct_OptimusComponentBindingAction_SetComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusComponentBindingAction_SetComponentSource), 3575234101U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusComponentBindingActions_h_795101903(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusComponentBindingActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusComponentBindingActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
