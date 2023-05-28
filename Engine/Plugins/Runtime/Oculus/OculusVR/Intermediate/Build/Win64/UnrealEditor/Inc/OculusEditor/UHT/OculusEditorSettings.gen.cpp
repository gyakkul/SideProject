// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OCULUSEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings();
	OCULUSEDITOR_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_NoRegister();
	OCULUSEDITOR_API UEnum* Z_Construct_UEnum_OculusEditor_EOculusPlatform();
	UPackage* Z_Construct_UPackage__Script_OculusEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusPlatform;
	static UEnum* EOculusPlatform_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusPlatform.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusPlatform.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusEditor_EOculusPlatform, (UObject*)Z_Construct_UPackage__Script_OculusEditor(), TEXT("EOculusPlatform"));
		}
		return Z_Registration_Info_UEnum_EOculusPlatform.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UEnum* StaticEnum<EOculusPlatform>()
	{
		return EOculusPlatform_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enumerators[] = {
		{ "EOculusPlatform::PC", (int64)EOculusPlatform::PC },
		{ "EOculusPlatform::Mobile", (int64)EOculusPlatform::Mobile },
		{ "EOculusPlatform::Length", (int64)EOculusPlatform::Length },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enum_MetaDataParams[] = {
		{ "Length.DisplayName", "Invalid" },
		{ "Length.Name", "EOculusPlatform::Length" },
		{ "Mobile.DisplayName", "Mobile" },
		{ "Mobile.Name", "EOculusPlatform::Mobile" },
		{ "ModuleRelativePath", "Public/OculusEditorSettings.h" },
		{ "PC.DisplayName", "PC" },
		{ "PC.Name", "EOculusPlatform::PC" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusEditor,
		nullptr,
		"EOculusPlatform",
		"EOculusPlatform",
		Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusEditor_EOculusPlatform()
	{
		if (!Z_Registration_Info_UEnum_EOculusPlatform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusPlatform.InnerSingleton, Z_Construct_UEnum_OculusEditor_EOculusPlatform_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusPlatform.InnerSingleton;
	}
	void UDEPRECATED_UOculusEditorSettings::StaticRegisterNativesUDEPRECATED_UOculusEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusEditorSettings);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_NoRegister()
	{
		return UDEPRECATED_UOculusEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PerfToolIgnoreList_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PerfToolIgnoreList_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolIgnoreList_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerfToolIgnoreList;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PerfToolTargetPlatform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerfToolTargetPlatform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PerfToolTargetPlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddMenuOption_MetaData[];
#endif
		static void NewProp_bAddMenuOption_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddMenuOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusEditorSettings.h" },
		{ "ModuleRelativePath", "Public/OculusEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_ValueProp = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_Key_KeyProp = { "PerfToolIgnoreList_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList = { "PerfToolIgnoreList", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusEditorSettings, PerfToolIgnoreList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform = { "PerfToolTargetPlatform", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_UOculusEditorSettings, PerfToolTargetPlatform), Z_Construct_UEnum_OculusEditor_EOculusPlatform, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform_MetaData)) }; // 2617365298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption_MetaData[] = {
		{ "Category", "Oculus" },
		{ "ModuleRelativePath", "Public/OculusEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption_SetBit(void* Obj)
	{
		((UDEPRECATED_UOculusEditorSettings*)Obj)->bAddMenuOption = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption = { "bAddMenuOption", nullptr, (EPropertyFlags)0x0010000000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_UOculusEditorSettings), &Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolIgnoreList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_PerfToolTargetPlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::NewProp_bAddMenuOption,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::ClassParams = {
		&UDEPRECATED_UOculusEditorSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::PropPointers),
		0,
		0x021002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusEditorSettings.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusEditorSettings.OuterSingleton;
	}
	template<> OCULUSEDITOR_API UClass* StaticClass<UDEPRECATED_UOculusEditorSettings>()
	{
		return UDEPRECATED_UOculusEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusEditorSettings);
	UDEPRECATED_UOculusEditorSettings::~UDEPRECATED_UOculusEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::EnumInfo[] = {
		{ EOculusPlatform_StaticEnum, TEXT("EOculusPlatform"), &Z_Registration_Info_UEnum_EOculusPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2617365298U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusEditorSettings, UDEPRECATED_UOculusEditorSettings::StaticClass, TEXT("UDEPRECATED_UOculusEditorSettings"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusEditorSettings), 199014121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_4064837545(TEXT("/Script/OculusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusEditor_Public_OculusEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
