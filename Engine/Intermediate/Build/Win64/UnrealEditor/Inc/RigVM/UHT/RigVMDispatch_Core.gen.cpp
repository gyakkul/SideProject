// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/RigVMDispatch_Core.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDispatch_Core() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatchFactory();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMDispatch_CoreBase>() == std::is_polymorphic<FRigVMDispatchFactory>(), "USTRUCT FRigVMDispatch_CoreBase cannot be polymorphic unless super FRigVMDispatchFactory is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase;
class UScriptStruct* FRigVMDispatch_CoreBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CoreBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CoreBase>()
{
	return FRigVMDispatch_CoreBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Core" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Core.h" },
		{ "NodeColor", "0.762745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CoreBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatchFactory,
		&NewStructOps,
		"RigVMDispatch_CoreBase",
		sizeof(FRigVMDispatch_CoreBase),
		alignof(FRigVMDispatch_CoreBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMDispatch_CoreEquals>() == std::is_polymorphic<FRigVMDispatch_CoreBase>(), "USTRUCT FRigVMDispatch_CoreEquals cannot be polymorphic unless super FRigVMDispatch_CoreBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals;
class UScriptStruct* FRigVMDispatch_CoreEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CoreEquals"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CoreEquals>()
{
	return FRigVMDispatch_CoreEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Compares any two values and return true if they are identical\n */" },
		{ "DisplayName", "Equals" },
		{ "Keywords", "Same,==" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Core.h" },
		{ "ToolTip", "* Compares any two values and return true if they are identical" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CoreEquals>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase,
		&NewStructOps,
		"RigVMDispatch_CoreEquals",
		sizeof(FRigVMDispatch_CoreEquals),
		alignof(FRigVMDispatch_CoreEquals),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMDispatch_CoreNotEquals>() == std::is_polymorphic<FRigVMDispatch_CoreEquals>(), "USTRUCT FRigVMDispatch_CoreNotEquals cannot be polymorphic unless super FRigVMDispatch_CoreEquals is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals;
class UScriptStruct* FRigVMDispatch_CoreNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDispatch_CoreNotEquals"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDispatch_CoreNotEquals>()
{
	return FRigVMDispatch_CoreNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Compares any two values and return true if they are identical\n */" },
		{ "DisplayName", "Not Equals" },
		{ "Keywords", "Different,!=,Xor" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMDispatch_Core.h" },
		{ "ToolTip", "* Compares any two values and return true if they are identical" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDispatch_CoreNotEquals>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals,
		&NewStructOps,
		"RigVMDispatch_CoreNotEquals",
		sizeof(FRigVMDispatch_CoreNotEquals),
		alignof(FRigVMDispatch_CoreNotEquals),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Core_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Core_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDispatch_CoreBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CoreBase_Statics::NewStructOps, TEXT("RigVMDispatch_CoreBase"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CoreBase), 2069325787U) },
		{ FRigVMDispatch_CoreEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CoreEquals_Statics::NewStructOps, TEXT("RigVMDispatch_CoreEquals"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CoreEquals), 1133064280U) },
		{ FRigVMDispatch_CoreNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigVMDispatch_CoreNotEquals_Statics::NewStructOps, TEXT("RigVMDispatch_CoreNotEquals"), &Z_Registration_Info_UScriptStruct_RigVMDispatch_CoreNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDispatch_CoreNotEquals), 3323162497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Core_h_2179139361(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Core_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMDispatch_Core_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
