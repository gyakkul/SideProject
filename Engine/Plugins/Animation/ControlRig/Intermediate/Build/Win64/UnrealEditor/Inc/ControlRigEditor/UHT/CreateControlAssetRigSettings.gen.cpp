// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/CreateControlAssetRigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateControlAssetRigSettings() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UCreateControlPoseAssetRigSettings();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UCreateControlPoseAssetRigSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UCreateControlPoseAssetRigSettings::StaticRegisterNativesUCreateControlPoseAssetRigSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateControlPoseAssetRigSettings);
	UClass* Z_Construct_UClass_UCreateControlPoseAssetRigSettings_NoRegister()
	{
		return UCreateControlPoseAssetRigSettings::StaticClass();
	}
	struct Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tools/CreateControlAssetRigSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/CreateControlAssetRigSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Control Pose" },
		{ "Comment", "/** Asset Name*/" },
		{ "ModuleRelativePath", "Public/Tools/CreateControlAssetRigSettings.h" },
		{ "ToolTip", "Asset Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateControlPoseAssetRigSettings, AssetName), METADATA_PARAMS(Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::NewProp_AssetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::NewProp_AssetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateControlPoseAssetRigSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::ClassParams = {
		&UCreateControlPoseAssetRigSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateControlPoseAssetRigSettings()
	{
		if (!Z_Registration_Info_UClass_UCreateControlPoseAssetRigSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateControlPoseAssetRigSettings.OuterSingleton, Z_Construct_UClass_UCreateControlPoseAssetRigSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateControlPoseAssetRigSettings.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UCreateControlPoseAssetRigSettings>()
	{
		return UCreateControlPoseAssetRigSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateControlPoseAssetRigSettings);
	UCreateControlPoseAssetRigSettings::~UCreateControlPoseAssetRigSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateControlPoseAssetRigSettings, UCreateControlPoseAssetRigSettings::StaticClass, TEXT("UCreateControlPoseAssetRigSettings"), &Z_Registration_Info_UClass_UCreateControlPoseAssetRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateControlPoseAssetRigSettings), 4156375841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_2543332273(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Public_Tools_CreateControlAssetRigSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
