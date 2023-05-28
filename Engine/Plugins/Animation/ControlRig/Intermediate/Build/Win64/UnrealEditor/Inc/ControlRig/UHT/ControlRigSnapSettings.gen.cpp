// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/ControlRigSnapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSnapSettings() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSnapSettings();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	void UControlRigSnapSettings::StaticRegisterNativesUControlRigSnapSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSnapSettings);
	UClass* Z_Construct_UClass_UControlRigSnapSettings_NoRegister()
	{
		return UControlRigSnapSettings::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSnapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepOffset_MetaData[];
#endif
		static void NewProp_bKeepOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapPosition_MetaData[];
#endif
		static void NewProp_bSnapPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapRotation_MetaData[];
#endif
		static void NewProp_bSnapRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapScale_MetaData[];
#endif
		static void NewProp_bSnapScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSnapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/ControlRigSnapSettings.h" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping keep offset, if false snap completely" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bKeepOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset = { "bKeepOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap position" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition = { "bSnapPosition", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap rotation" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation = { "bSnapRotation", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData[] = {
		{ "Category", "Snap Settings" },
		{ "ModuleRelativePath", "Public/Tools/ControlRigSnapSettings.h" },
		{ "ToolTip", "When snapping, also snap scale" },
	};
#endif
	void Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_SetBit(void* Obj)
	{
		((UControlRigSnapSettings*)Obj)->bSnapScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale = { "bSnapScale", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRigSnapSettings), &Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bKeepOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigSnapSettings_Statics::NewProp_bSnapScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSnapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSnapSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSnapSettings_Statics::ClassParams = {
		&UControlRigSnapSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSnapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSnapSettings()
	{
		if (!Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton, Z_Construct_UClass_UControlRigSnapSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSnapSettings.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigSnapSettings>()
	{
		return UControlRigSnapSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSnapSettings);
	UControlRigSnapSettings::~UControlRigSnapSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigSnapSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSnapSettings, UControlRigSnapSettings::StaticClass, TEXT("UControlRigSnapSettings"), &Z_Registration_Info_UClass_UControlRigSnapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSnapSettings), 2768130211U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigSnapSettings_h_1789560247(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Tools_ControlRigSnapSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
