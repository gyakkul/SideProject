// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigPoseProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigPoseProjectSettings() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseProjectSettings();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigPoseProjectSettings::StaticRegisterNativesUControlRigPoseProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigPoseProjectSettings);
	UClass* Z_Construct_UClass_UControlRigPoseProjectSettings_NoRegister()
	{
		return UControlRigPoseProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigPoseProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootSaveDirs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSaveDirs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootSaveDirs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/ControlRigPoseProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_Inner = { "RootSaveDirs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_MetaData[] = {
		{ "Category", "Control Rig Poses" },
		{ "Comment", "/** The root of the directory in which to save poses */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseProjectSettings.h" },
		{ "ToolTip", "The root of the directory in which to save poses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs = { "RootSaveDirs", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigPoseProjectSettings, RootSaveDirs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::NewProp_RootSaveDirs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigPoseProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::ClassParams = {
		&UControlRigPoseProjectSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigPoseProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton, Z_Construct_UClass_UControlRigPoseProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigPoseProjectSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigPoseProjectSettings>()
	{
		return UControlRigPoseProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigPoseProjectSettings);
	UControlRigPoseProjectSettings::~UControlRigPoseProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigPoseProjectSettings, UControlRigPoseProjectSettings::StaticClass, TEXT("UControlRigPoseProjectSettings"), &Z_Registration_Info_UClass_UControlRigPoseProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigPoseProjectSettings), 1555265874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_1710692165(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseProjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
