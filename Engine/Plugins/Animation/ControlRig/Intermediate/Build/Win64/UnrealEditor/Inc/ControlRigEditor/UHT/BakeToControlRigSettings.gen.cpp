// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/BakeToControlRigSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeToControlRigSettings() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UBakeToControlRigSettings();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UBakeToControlRigSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UBakeToControlRigSettings::StaticRegisterNativesUBakeToControlRigSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeToControlRigSettings);
	UClass* Z_Construct_UClass_UBakeToControlRigSettings_NoRegister()
	{
		return UBakeToControlRigSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBakeToControlRigSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeToControlRigSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeToControlRigSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BakeToControlRigSettings.h" },
		{ "ModuleRelativePath", "Private/BakeToControlRigSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Reduce Keys" },
		{ "Comment", "/** Reduce Keys */" },
		{ "ModuleRelativePath", "Private/BakeToControlRigSettings.h" },
		{ "ToolTip", "Reduce Keys" },
	};
#endif
	void Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UBakeToControlRigSettings*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeToControlRigSettings), &Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "Reduce Keys" },
		{ "Comment", "/** Reduce Keys Tolerance*/" },
		{ "ModuleRelativePath", "Private/BakeToControlRigSettings.h" },
		{ "ToolTip", "Reduce Keys Tolerance" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeToControlRigSettings, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeToControlRigSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeToControlRigSettings_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeToControlRigSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeToControlRigSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeToControlRigSettings_Statics::ClassParams = {
		&UBakeToControlRigSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeToControlRigSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeToControlRigSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeToControlRigSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeToControlRigSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeToControlRigSettings()
	{
		if (!Z_Registration_Info_UClass_UBakeToControlRigSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeToControlRigSettings.OuterSingleton, Z_Construct_UClass_UBakeToControlRigSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeToControlRigSettings.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UBakeToControlRigSettings>()
	{
		return UBakeToControlRigSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeToControlRigSettings);
	UBakeToControlRigSettings::~UBakeToControlRigSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeToControlRigSettings, UBakeToControlRigSettings::StaticClass, TEXT("UBakeToControlRigSettings"), &Z_Registration_Info_UClass_UBakeToControlRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeToControlRigSettings), 2701588834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_1557475174(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_BakeToControlRigSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
