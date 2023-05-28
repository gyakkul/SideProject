// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityWidgetBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityWidgetBlueprint() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityWidgetBlueprint::StaticRegisterNativesUEditorUtilityWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityWidgetBlueprint);
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister()
	{
		return UEditorUtilityWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledInPIE_MetaData[];
#endif
		static void NewProp_bIsEnabledInPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledInPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabledInDebugging_MetaData[];
#endif
		static void NewProp_bIsEnabledInDebugging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabledInDebugging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreatedUMGWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CreatedUMGWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilityWidgetBlueprint.h" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the widget be enabled when running PIE\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprint.h" },
		{ "ToolTip", "Should the widget be enabled when running PIE" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE_SetBit(void* Obj)
	{
		((UEditorUtilityWidgetBlueprint*)Obj)->bIsEnabledInPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE = { "bIsEnabledInPIE", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorUtilityWidgetBlueprint), &Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should the widget be enabled when debugging BP\n" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprint.h" },
		{ "ToolTip", "Should the widget be enabled when debugging BP" },
	};
#endif
	void Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging_SetBit(void* Obj)
	{
		((UEditorUtilityWidgetBlueprint*)Obj)->bIsEnabledInDebugging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging = { "bIsEnabledInDebugging", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorUtilityWidgetBlueprint), &Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_CreatedUMGWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityWidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_CreatedUMGWidget = { "CreatedUMGWidget", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilityWidgetBlueprint, CreatedUMGWidget), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_CreatedUMGWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_CreatedUMGWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_bIsEnabledInDebugging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::NewProp_CreatedUMGWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::ClassParams = {
		&UEditorUtilityWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UEditorUtilityWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprint.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityWidgetBlueprint>()
	{
		return UEditorUtilityWidgetBlueprint::StaticClass();
	}
	UEditorUtilityWidgetBlueprint::UEditorUtilityWidgetBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityWidgetBlueprint);
	UEditorUtilityWidgetBlueprint::~UEditorUtilityWidgetBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityWidgetBlueprint, UEditorUtilityWidgetBlueprint::StaticClass, TEXT("UEditorUtilityWidgetBlueprint"), &Z_Registration_Info_UClass_UEditorUtilityWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityWidgetBlueprint), 830391330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_3347511589(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityWidgetBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
