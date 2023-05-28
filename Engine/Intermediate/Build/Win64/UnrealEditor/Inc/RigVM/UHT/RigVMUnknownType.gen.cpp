// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMUnknownType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMUnknownType() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnknownType();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMUnknownType;
class UScriptStruct* FRigVMUnknownType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUnknownType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMUnknownType"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMUnknownType.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMUnknownType>()
{
	return FRigVMUnknownType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMUnknownType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hash_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Hash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The unknown type is used to identify untyped nodes\n */" },
		{ "DisplayName", "Wildcard" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUnknownType.h" },
		{ "ToolTip", "The unknown type is used to identify untyped nodes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMUnknownType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMUnknownType.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash = { "Hash", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMUnknownType, Hash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewProp_Hash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMUnknownType",
		sizeof(FRigVMUnknownType),
		alignof(FRigVMUnknownType),
		Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMUnknownType()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton, Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMUnknownType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics::ScriptStructInfo[] = {
		{ FRigVMUnknownType::StaticStruct, Z_Construct_UScriptStruct_FRigVMUnknownType_Statics::NewStructOps, TEXT("RigVMUnknownType"), &Z_Registration_Info_UScriptStruct_RigVMUnknownType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMUnknownType), 3900118731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUnknownType_h_2568523808(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMUnknownType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
