// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMDrawContainer.h"
#include "RigVMCore/RigVMDrawInstruction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMDrawContainer() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawInstruction();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMDrawContainer;
class UScriptStruct* FRigVMDrawContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMDrawContainer, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMDrawContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMDrawContainer.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMDrawContainer>()
{
	return FRigVMDrawContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Instructions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instructions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Instructions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMDrawContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_Inner = { "Instructions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMDrawInstruction, METADATA_PARAMS(nullptr, 0) }; // 1536276154
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_MetaData[] = {
		{ "Category", "DrawContainer" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMDrawContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions = { "Instructions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMDrawContainer, Instructions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_MetaData)) }; // 1536276154
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewProp_Instructions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMDrawContainer",
		sizeof(FRigVMDrawContainer),
		alignof(FRigVMDrawContainer),
		Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMDrawContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics::ScriptStructInfo[] = {
		{ FRigVMDrawContainer::StaticStruct, Z_Construct_UScriptStruct_FRigVMDrawContainer_Statics::NewStructOps, TEXT("RigVMDrawContainer"), &Z_Registration_Info_UScriptStruct_RigVMDrawContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMDrawContainer), 1476167880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawContainer_h_55700311(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMDrawContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
