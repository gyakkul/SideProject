// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplateArgumentType();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType;
class UScriptStruct* FRigVMTemplateArgumentType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMTemplateArgumentType"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMTemplateArgumentType>()
{
	return FRigVMTemplateArgumentType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CPPTypeObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMTemplateArgumentType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMTemplateArgumentType, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMTemplateArgumentType, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewProp_CPPTypeObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMTemplateArgumentType",
		sizeof(FRigVMTemplateArgumentType),
		alignof(FRigVMTemplateArgumentType),
		Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMTemplateArgumentType()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton, Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics::ScriptStructInfo[] = {
		{ FRigVMTemplateArgumentType::StaticStruct, Z_Construct_UScriptStruct_FRigVMTemplateArgumentType_Statics::NewStructOps, TEXT("RigVMTemplateArgumentType"), &Z_Registration_Info_UScriptStruct_RigVMTemplateArgumentType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMTemplateArgumentType), 199257167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMTemplate_h_3620113907(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMTemplate_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
