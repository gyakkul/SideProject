// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPSettings.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_VPSettings();
	VPSETTINGS_API UClass* Z_Construct_UClass_UVPSettings();
	VPSETTINGS_API UClass* Z_Construct_UClass_UVPSettings_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPSettings::execGetVPSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVPSettings**)Z_Param__Result=UVPSettings::GetVPSettings();
		P_NATIVE_END;
	}
	void UVPSettings::StaticRegisterNativesUVPSettings()
	{
		UClass* Class = UVPSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVPSettings", &UVPSettings::execGetVPSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics
	{
		struct VPSettings_eventGetVPSettings_Parms
		{
			UVPSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPSettings_eventGetVPSettings_Parms, ReturnValue), Z_Construct_UClass_UVPSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPSettings, nullptr, "GetVPSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::VPSettings_eventGetVPSettings_Parms), Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPSettings_GetVPSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPSettings_GetVPSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPSettings);
	UClass* Z_Construct_UClass_UVPSettings_NoRegister()
	{
		return UVPSettings::StaticClass();
	}
	struct Z_Construct_UClass_UVPSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FocalLengthPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FocalLengthPresets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AperturePresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AperturePresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AperturePresets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultShutterSpeedPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultShutterSpeedPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultShutterSpeedPresets;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultISOPresets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultISOPresets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultISOPresets;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRoleInEditor_MetaData[];
#endif
		static void NewProp_bShowRoleInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRoleInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DirectorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShowName;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Roles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VPSettings,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPSettings_GetVPSettings, "GetVPSettings" }, // 2888230856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "VPSettings.h" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets_Inner = { "FocalLengthPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets_MetaData[] = {
		{ "Category", "VirtualCamera|Presets" },
		{ "Comment", "/** Default Kit of Focal Lengths for Virtual Camera */" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "Default Kit of Focal Lengths for Virtual Camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets = { "FocalLengthPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, FocalLengthPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets_Inner = { "AperturePresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets_MetaData[] = {
		{ "Category", "VirtualCamera|Presets" },
		{ "Comment", "/** Default Apertures for for Virtual Camera  */" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "Default Apertures for for Virtual Camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets = { "AperturePresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, AperturePresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets_Inner = { "DefaultShutterSpeedPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets_MetaData[] = {
		{ "Category", "VirtualCamera|Presets" },
		{ "Comment", "/** Default Shutter Speeds (1/s) for Virtual Camera*/" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "Default Shutter Speeds (1/s) for Virtual Camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets = { "DefaultShutterSpeedPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, DefaultShutterSpeedPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets_Inner = { "DefaultISOPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets_MetaData[] = {
		{ "Category", "VirtualCamera|Presets" },
		{ "Comment", "/** Default ISOs for Virtual Camera*/" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "Default ISOs for Virtual Camera" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets = { "DefaultISOPresets", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, DefaultISOPresets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** When enabled, the virtual production role(s) will be displayed in the main editor UI. */" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "When enabled, the virtual production role(s) will be displayed in the main editor UI." },
	};
#endif
	void Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor_SetBit(void* Obj)
	{
		((UVPSettings*)Obj)->bShowRoleInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor = { "bShowRoleInEditor", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVPSettings), &Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_DirectorName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "DisplayName", "Director Name" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_DirectorName = { "DirectorName", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, DirectorName), METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_DirectorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_DirectorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_ShowName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "DisplayName", "Project Name" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_ShowName = { "ShowName", nullptr, (EPropertyFlags)0x0010000800004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, ShowName), METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_ShowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_ShowName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPSettings_Statics::NewProp_Roles_MetaData[] = {
		{ "Comment", "/**\n\x09 * The machine role(s) in a virtual production context.\n\x09 * @note The role may be override via the command line, \"-VPRole=[Role.SubRole1|Role.SubRole2]\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPSettings.h" },
		{ "ToolTip", "The machine role(s) in a virtual production context.\n@note The role may be override via the command line, \"-VPRole=[Role.SubRole1|Role.SubRole2]\"" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPSettings_Statics::NewProp_Roles = { "Roles", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPSettings, Roles), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::NewProp_Roles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::NewProp_Roles_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_FocalLengthPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_AperturePresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultShutterSpeedPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_DefaultISOPresets,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_bShowRoleInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_DirectorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_ShowName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPSettings_Statics::NewProp_Roles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPSettings_Statics::ClassParams = {
		&UVPSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVPSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPSettings()
	{
		if (!Z_Registration_Info_UClass_UVPSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPSettings.OuterSingleton, Z_Construct_UClass_UVPSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPSettings.OuterSingleton;
	}
	template<> VPSETTINGS_API UClass* StaticClass<UVPSettings>()
	{
		return UVPSettings::StaticClass();
	}
	UVPSettings::UVPSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPSettings);
	UVPSettings::~UVPSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPSettings, UVPSettings::StaticClass, TEXT("UVPSettings"), &Z_Registration_Info_UClass_UVPSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPSettings), 994312769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_3588620642(TEXT("/Script/VPSettings"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProduction_VPSettings_Source_Public_VPSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
