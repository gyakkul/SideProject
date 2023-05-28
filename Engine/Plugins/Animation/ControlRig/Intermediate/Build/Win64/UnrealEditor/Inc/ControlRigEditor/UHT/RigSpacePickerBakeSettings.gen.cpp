// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigSpacePickerBakeSettings.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigSpacePickerBakeSettings() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings;
class UScriptStruct* FRigSpacePickerBakeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings, (UObject*)Z_Construct_UPackage__Script_ControlRigEditor(), TEXT("RigSpacePickerBakeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.OuterSingleton;
}
template<> CONTROLRIGEDITOR_API UScriptStruct* StaticStruct<FRigSpacePickerBakeSettings>()
{
	return FRigSpacePickerBakeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigSpacePickerBakeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_TargetSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_TargetSpace = { "TargetSpace", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpacePickerBakeSettings, TargetSpace), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_TargetSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_TargetSpace_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpacePickerBakeSettings, StartFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpacePickerBakeSettings, EndFrame), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_EndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((FRigSpacePickerBakeSettings*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigSpacePickerBakeSettings), &Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/RigSpacePickerBakeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigSpacePickerBakeSettings, Tolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_TargetSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewProp_Tolerance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
		nullptr,
		&NewStructOps,
		"RigSpacePickerBakeSettings",
		sizeof(FRigSpacePickerBakeSettings),
		alignof(FRigSpacePickerBakeSettings),
		Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_RigSpacePickerBakeSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_RigSpacePickerBakeSettings_h_Statics::ScriptStructInfo[] = {
		{ FRigSpacePickerBakeSettings::StaticStruct, Z_Construct_UScriptStruct_FRigSpacePickerBakeSettings_Statics::NewStructOps, TEXT("RigSpacePickerBakeSettings"), &Z_Registration_Info_UScriptStruct_RigSpacePickerBakeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigSpacePickerBakeSettings), 2717217784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_RigSpacePickerBakeSettings_h_3476201436(TEXT("/Script/ControlRigEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_RigSpacePickerBakeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_RigSpacePickerBakeSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
