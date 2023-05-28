// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UndoHistorySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUndoHistorySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNDOHISTORYEDITOR_API UClass* Z_Construct_UClass_UUndoHistorySettings();
	UNDOHISTORYEDITOR_API UClass* Z_Construct_UClass_UUndoHistorySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UndoHistoryEditor();
// End Cross Module References
	void UUndoHistorySettings::StaticRegisterNativesUUndoHistorySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUndoHistorySettings);
	UClass* Z_Construct_UClass_UUndoHistorySettings_NoRegister()
	{
		return UUndoHistorySettings::StaticClass();
	}
	struct Z_Construct_UClass_UUndoHistorySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransactionDetails_MetaData[];
#endif
		static void NewProp_bShowTransactionDetails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransactionDetails;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUndoHistorySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UndoHistoryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the UndoHistory.\n */" },
		{ "IncludePath", "UndoHistorySettings.h" },
		{ "ModuleRelativePath", "Private/UndoHistorySettings.h" },
		{ "ToolTip", "Implements the settings for the UndoHistory." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData[] = {
		{ "Comment", "/** True when the UndoHistory is showing transaction details. */" },
		{ "ModuleRelativePath", "Private/UndoHistorySettings.h" },
		{ "ToolTip", "True when the UndoHistory is showing transaction details." },
	};
#endif
	void Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_SetBit(void* Obj)
	{
		((UUndoHistorySettings*)Obj)->bShowTransactionDetails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails = { "bShowTransactionDetails", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUndoHistorySettings), &Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUndoHistorySettings_Statics::NewProp_bShowTransactionDetails,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUndoHistorySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUndoHistorySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUndoHistorySettings_Statics::ClassParams = {
		&UUndoHistorySettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUndoHistorySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUndoHistorySettings()
	{
		if (!Z_Registration_Info_UClass_UUndoHistorySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUndoHistorySettings.OuterSingleton, Z_Construct_UClass_UUndoHistorySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUndoHistorySettings.OuterSingleton;
	}
	template<> UNDOHISTORYEDITOR_API UClass* StaticClass<UUndoHistorySettings>()
	{
		return UUndoHistorySettings::StaticClass();
	}
	UUndoHistorySettings::UUndoHistorySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUndoHistorySettings);
	UUndoHistorySettings::~UUndoHistorySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUndoHistorySettings, UUndoHistorySettings::StaticClass, TEXT("UUndoHistorySettings"), &Z_Registration_Info_UClass_UUndoHistorySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUndoHistorySettings), 2821589039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_708660503(TEXT("/Script/UndoHistoryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UndoHistoryEditor_Private_UndoHistorySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
