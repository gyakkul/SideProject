// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigPoseMirrorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigPoseMirrorSettings() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseMirrorSettings();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigPoseMirrorSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigPoseMirrorSettings::StaticRegisterNativesUControlRigPoseMirrorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigPoseMirrorSettings);
	UClass* Z_Construct_UClass_UControlRigPoseMirrorSettings_NoRegister()
	{
		return UControlRigPoseMirrorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightSide_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RightSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftSide_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LeftSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MirrorAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisToFlip_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisToFlip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/ControlRigPoseMirrorSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseMirrorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_RightSide_MetaData[] = {
		{ "Category", "Mirror Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseMirrorSettings.h" },
		{ "ToolTip", "String To Denote Right Side" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_RightSide = { "RightSide", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigPoseMirrorSettings, RightSide), METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_RightSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_RightSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_LeftSide_MetaData[] = {
		{ "Category", "Mirror Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseMirrorSettings.h" },
		{ "ToolTip", "String To Denote Left Side" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_LeftSide = { "LeftSide", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigPoseMirrorSettings, LeftSide), METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_LeftSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_LeftSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_MirrorAxis_MetaData[] = {
		{ "Category", "Mirror Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseMirrorSettings.h" },
		{ "ToolTip", "Axis to Mirror Translations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_MirrorAxis = { "MirrorAxis", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigPoseMirrorSettings, MirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_MirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_MirrorAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_AxisToFlip_MetaData[] = {
		{ "Category", "Mirror Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigPoseMirrorSettings.h" },
		{ "ToolTip", "Axis to Flip for Rotations" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_AxisToFlip = { "AxisToFlip", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigPoseMirrorSettings, AxisToFlip), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_AxisToFlip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_AxisToFlip_MetaData)) }; // 2376982772
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_RightSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_LeftSide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_MirrorAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::NewProp_AxisToFlip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigPoseMirrorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::ClassParams = {
		&UControlRigPoseMirrorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigPoseMirrorSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.OuterSingleton, Z_Construct_UClass_UControlRigPoseMirrorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigPoseMirrorSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigPoseMirrorSettings>()
	{
		return UControlRigPoseMirrorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigPoseMirrorSettings);
	UControlRigPoseMirrorSettings::~UControlRigPoseMirrorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseMirrorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseMirrorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigPoseMirrorSettings, UControlRigPoseMirrorSettings::StaticClass, TEXT("UControlRigPoseMirrorSettings"), &Z_Registration_Info_UClass_UControlRigPoseMirrorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigPoseMirrorSettings), 2155945048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseMirrorSettings_h_1259560596(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseMirrorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigPoseMirrorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
