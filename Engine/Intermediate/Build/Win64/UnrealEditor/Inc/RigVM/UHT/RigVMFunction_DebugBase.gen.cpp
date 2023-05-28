// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Debug/RigVMFunction_DebugBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_DebugBase() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStructMutable();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_DebugBase>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigVMFunction_DebugBase cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase;
class UScriptStruct* FRigVMFunction_DebugBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugBase, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugBase>()
{
	return FRigVMFunction_DebugBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigVMFunction_DebugBase",
		sizeof(FRigVMFunction_DebugBase),
		alignof(FRigVMFunction_DebugBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigVMFunction_DebugBaseMutable>() == std::is_polymorphic<FRigVMStructMutable>(), "USTRUCT FRigVMFunction_DebugBaseMutable cannot be polymorphic unless super FRigVMStructMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable;
class UScriptStruct* FRigVMFunction_DebugBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_DebugBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_DebugBaseMutable>()
{
	return FRigVMFunction_DebugBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Debug/RigVMFunction_DebugBase.h" },
		{ "NodeColor", "0.83077 0.846873 0.049707" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_DebugBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMStructMutable,
		&NewStructOps,
		"RigVMFunction_DebugBaseMutable",
		sizeof(FRigVMFunction_DebugBaseMutable),
		alignof(FRigVMFunction_DebugBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_DebugBase::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugBase_Statics::NewStructOps, TEXT("RigVMFunction_DebugBase"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugBase), 3437666574U) },
		{ FRigVMFunction_DebugBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_DebugBaseMutable_Statics::NewStructOps, TEXT("RigVMFunction_DebugBaseMutable"), &Z_Registration_Info_UScriptStruct_RigVMFunction_DebugBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_DebugBaseMutable), 3910262059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_3656420312(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Debug_RigVMFunction_DebugBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
