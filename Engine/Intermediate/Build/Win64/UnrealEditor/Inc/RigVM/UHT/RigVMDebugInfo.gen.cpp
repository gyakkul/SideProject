// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDebugInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDebugInfo() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMBreakpoint();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDebugInfo();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMBreakpoint;
class UScriptStruct* FRigVMBreakpoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMBreakpoint, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMBreakpoint"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMBreakpoint.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMBreakpoint>()
{
	return FRigVMBreakpoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDebugInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMBreakpoint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMBreakpoint",
		sizeof(FRigVMBreakpoint),
		alignof(FRigVMBreakpoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMBreakpoint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton, Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMBreakpoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDebugInfo;
class UScriptStruct* FRigVMDebugInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDebugInfo, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDebugInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDebugInfo.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDebugInfo>()
{
	return FRigVMDebugInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDebugInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDebugInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMDebugInfo",
		sizeof(FRigVMDebugInfo),
		alignof(FRigVMDebugInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDebugInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDebugInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::ScriptStructInfo[] = {
		{ FRigVMBreakpoint::StaticStruct, Z_Construct_UScriptStruct_FRigVMBreakpoint_Statics::NewStructOps, TEXT("RigVMBreakpoint"), &Z_Registration_Info_UScriptStruct_RigVMBreakpoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMBreakpoint), 1349337312U) },
		{ FRigVMDebugInfo::StaticStruct, Z_Construct_UScriptStruct_FRigVMDebugInfo_Statics::NewStructOps, TEXT("RigVMDebugInfo"), &Z_Registration_Info_UScriptStruct_RigVMDebugInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDebugInfo), 3491064752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDebugInfo_h_437706122(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDebugInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
