// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/SIKRigRetargetChainList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIKRigRetargetChainList() {}
// Cross Module References
	IKRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigRetargetChainSettings();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings;
class UScriptStruct* FIKRigRetargetChainSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings, (UObject*)Z_Construct_UPackage__Script_IKRigEditor(), TEXT("IKRigRetargetChainSettings"));
	}
	return Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.OuterSingleton;
}
template<> IKRIGEDITOR_API UScriptStruct* StaticStruct<FIKRigRetargetChainSettings>()
{
	return FIKRigRetargetChainSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigEditor/SIKRigRetargetChainList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRigRetargetChainSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_ChainName_MetaData[] = {
		{ "Category", "Bone Chain" },
		{ "ModuleRelativePath", "Public/RigEditor/SIKRigRetargetChainList.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigRetargetChainSettings, ChainName), METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Bone Chain" },
		{ "ModuleRelativePath", "Public/RigEditor/SIKRigRetargetChainList.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigRetargetChainSettings, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Bone Chain" },
		{ "ModuleRelativePath", "Public/RigEditor/SIKRigRetargetChainList.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRigRetargetChainSettings, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_EndBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewProp_EndBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
		nullptr,
		&NewStructOps,
		"IKRigRetargetChainSettings",
		sizeof(FIKRigRetargetChainSettings),
		alignof(FIKRigRetargetChainSettings),
		Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRigRetargetChainSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.InnerSingleton, Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_SIKRigRetargetChainList_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_SIKRigRetargetChainList_h_Statics::ScriptStructInfo[] = {
		{ FIKRigRetargetChainSettings::StaticStruct, Z_Construct_UScriptStruct_FIKRigRetargetChainSettings_Statics::NewStructOps, TEXT("IKRigRetargetChainSettings"), &Z_Registration_Info_UScriptStruct_IKRigRetargetChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRigRetargetChainSettings), 3474890310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_SIKRigRetargetChainList_h_209556634(TEXT("/Script/IKRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_SIKRigRetargetChainList_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_SIKRigRetargetChainList_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
