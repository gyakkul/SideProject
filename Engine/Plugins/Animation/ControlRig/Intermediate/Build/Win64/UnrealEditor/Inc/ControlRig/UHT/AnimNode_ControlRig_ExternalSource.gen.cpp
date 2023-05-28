// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_ControlRig_ExternalSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_ControlRig_ExternalSource() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRigBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_ControlRig_ExternalSource>() == std::is_polymorphic<FAnimNode_ControlRigBase>(), "USTRUCT FAnimNode_ControlRig_ExternalSource cannot be polymorphic unless super FAnimNode_ControlRigBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource;
class UScriptStruct* FAnimNode_ControlRig_ExternalSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("AnimNode_ControlRig_ExternalSource"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FAnimNode_ControlRig_ExternalSource>()
{
	return FAnimNode_ControlRig_ExternalSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Animation node that allows animation ControlRig output to be used in an animation graph\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_ExternalSource.h" },
		{ "ToolTip", "Animation node that allows animation ControlRig output to be used in an animation graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_ControlRig_ExternalSource>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewProp_ControlRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_ControlRig_ExternalSource.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_ControlRig_ExternalSource, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewProp_ControlRig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewProp_ControlRig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FAnimNode_ControlRigBase,
		&NewStructOps,
		"AnimNode_ControlRig_ExternalSource",
		sizeof(FAnimNode_ControlRig_ExternalSource),
		alignof(FAnimNode_ControlRig_ExternalSource),
		Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_ControlRig_ExternalSource::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_ControlRig_ExternalSource_Statics::NewStructOps, TEXT("AnimNode_ControlRig_ExternalSource"), &Z_Registration_Info_UScriptStruct_AnimNode_ControlRig_ExternalSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_ControlRig_ExternalSource), 2484103791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h_2630987416(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_AnimNode_ControlRig_ExternalSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
