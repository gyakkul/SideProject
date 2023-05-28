// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/UMGEditorProjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGEditorProjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UUMGEditorProjectSettings();
	UMGEDITOR_API UClass* Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetCompilerRule_NoRegister();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDebugResolution();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetCompilerOptions();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugResolution;
class UScriptStruct* FDebugResolution::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugResolution.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugResolution.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugResolution, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("DebugResolution"));
	}
	return Z_Registration_Info_UScriptStruct_DebugResolution.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDebugResolution>()
{
	return FDebugResolution::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebugResolution_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugResolution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugResolution>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugResolution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugResolution, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugResolution, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Resolution" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugResolution, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugResolution_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugResolution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DebugResolution",
		sizeof(FDebugResolution),
		alignof(FDebugResolution),
		Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugResolution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugResolution()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugResolution.InnerSingleton, Z_Construct_UScriptStruct_FDebugResolution_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugResolution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel;
	static UEnum* EPropertyBindingPermissionLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EPropertyBindingPermissionLevel"));
		}
		return Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.OuterSingleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EPropertyBindingPermissionLevel>()
	{
		return EPropertyBindingPermissionLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enumerators[] = {
		{ "EPropertyBindingPermissionLevel::Allow", (int64)EPropertyBindingPermissionLevel::Allow },
		{ "EPropertyBindingPermissionLevel::Prevent", (int64)EPropertyBindingPermissionLevel::Prevent },
		{ "EPropertyBindingPermissionLevel::PreventAndWarn", (int64)EPropertyBindingPermissionLevel::PreventAndWarn },
		{ "EPropertyBindingPermissionLevel::PreventAndError", (int64)EPropertyBindingPermissionLevel::PreventAndError },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enum_MetaDataParams[] = {
		{ "Allow.Comment", "/** Freely allow the use of property binding. */" },
		{ "Allow.Name", "EPropertyBindingPermissionLevel::Allow" },
		{ "Allow.ToolTip", "Freely allow the use of property binding." },
		{ "Comment", "/** Controls the level of support you want to have for widget property binding. */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "Prevent.Comment", "/**\n\x09 * Prevent any new property binding, will still allow you to edit widgets with property binding, but\n\x09 * the buttons will be missing on all existing widgets that don't have bindings.\n\x09 */" },
		{ "Prevent.Name", "EPropertyBindingPermissionLevel::Prevent" },
		{ "Prevent.ToolTip", "Prevent any new property binding, will still allow you to edit widgets with property binding, but\nthe buttons will be missing on all existing widgets that don't have bindings." },
		{ "PreventAndError.Comment", "/**\n\x09* Prevent any new property binding, and error when compiling any existing bindings.\n\x09*/" },
		{ "PreventAndError.Name", "EPropertyBindingPermissionLevel::PreventAndError" },
		{ "PreventAndError.ToolTip", "Prevent any new property binding, and error when compiling any existing bindings." },
		{ "PreventAndWarn.Comment", "/**\n\x09 * Prevent any new property binding, and warn when compiling any existing bindings.\n\x09 */" },
		{ "PreventAndWarn.Name", "EPropertyBindingPermissionLevel::PreventAndWarn" },
		{ "PreventAndWarn.ToolTip", "Prevent any new property binding, and warn when compiling any existing bindings." },
		{ "ToolTip", "Controls the level of support you want to have for widget property binding." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		"EPropertyBindingPermissionLevel",
		"EPropertyBindingPermissionLevel",
		Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.InnerSingleton, Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetCompilerOptions;
class UScriptStruct* FWidgetCompilerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetCompilerOptions, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("WidgetCompilerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FWidgetCompilerOptions>()
{
	return FWidgetCompilerOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBlueprintTick_MetaData[];
#endif
		static void NewProp_bAllowBlueprintTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowBlueprintPaint_MetaData[];
#endif
		static void NewProp_bAllowBlueprintPaint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowBlueprintPaint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropertyBindingRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropertyBindingRule;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetCompilerOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/**\n\x09 * If you disable this, these widgets these compiler options apply to will not be allowed to implement Tick.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "If you disable this, these widgets these compiler options apply to will not be allowed to implement Tick." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bAllowBlueprintTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick = { "bAllowBlueprintTick", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/**\n\x09 * If you disable this, these widgets these compiler options apply to will not be allowed to implement Paint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "If you disable this, these widgets these compiler options apply to will not be allowed to implement Paint." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_SetBit(void* Obj)
	{
		((FWidgetCompilerOptions*)Obj)->bAllowBlueprintPaint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint = { "bAllowBlueprintPaint", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetCompilerOptions), &Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/**\n\x09 * Controls if you allow property bindings in widgets.  They can have a large performance impact if used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Controls if you allow property bindings in widgets.  They can have a large performance impact if used." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule = { "PropertyBindingRule", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCompilerOptions, PropertyBindingRule), Z_Construct_UEnum_UMGEditor_EPropertyBindingPermissionLevel, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_MetaData)) }; // 287405403
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetCompilerRule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/**\n\x09 * Custom rules.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Custom rules." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetCompilerOptions, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_bAllowBlueprintPaint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_PropertyBindingRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewProp_Rules,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"WidgetCompilerOptions",
		sizeof(FWidgetCompilerOptions),
		alignof(FWidgetCompilerOptions),
		Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetCompilerOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.InnerSingleton, Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetCompilerOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions;
class UScriptStruct* FDirectoryWidgetCompilerOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("DirectoryWidgetCompilerOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDirectoryWidgetCompilerOptions>()
{
	return FDirectoryWidgetCompilerOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Directory;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_IgnoredWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoredWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IgnoredWidgets;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectoryWidgetCompilerOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** The directory to limit the rules effects to. */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The directory to limit the rules effects to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, Directory), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_Inner = { "IgnoredWidgets", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** These widgets are ignored, and they will use the next most applicable directory to determine their rules. */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "These widgets are ignored, and they will use the next most applicable directory to determine their rules." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets = { "IgnoredWidgets", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, IgnoredWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "Compiler" },
		{ "Comment", "/** The directory specific compiler options for these widgets. */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The directory specific compiler options for these widgets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDirectoryWidgetCompilerOptions, Options), Z_Construct_UScriptStruct_FWidgetCompilerOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options_MetaData)) }; // 1155596797
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Directory,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_IgnoredWidgets,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewProp_Options,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DirectoryWidgetCompilerOptions",
		sizeof(FDirectoryWidgetCompilerOptions),
		alignof(FDirectoryWidgetCompilerOptions),
		Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.InnerSingleton, Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions.InnerSingleton;
	}
	void UUMGEditorProjectSettings::StaticRegisterNativesUUMGEditorProjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMGEditorProjectSettings);
	UClass* Z_Construct_UClass_UUMGEditorProjectSettings_NoRegister()
	{
		return UUMGEditorProjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUMGEditorProjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCompilerOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCompilerOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DirectoryCompilerOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectoryCompilerOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DirectoryCompilerOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetsFromEngineContent_MetaData[];
#endif
		static void NewProp_bShowWidgetsFromEngineContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetsFromEngineContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowWidgetsFromDeveloperContent_MetaData[];
#endif
		static void NewProp_bShowWidgetsFromDeveloperContent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWidgetsFromDeveloperContent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoriesToHide_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoriesToHide_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CategoriesToHide;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetClassesToHide_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClassesToHide_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetClassesToHide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWidgetTemplateSelector_MetaData[];
#endif
		static void NewProp_bUseWidgetTemplateSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWidgetTemplateSelector;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_CommonRootWidgetClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommonRootWidgetClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CommonRootWidgetClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRootWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultRootWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGraphEditorHidden_MetaData[];
#endif
		static void NewProp_bGraphEditorHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGraphEditorHidden;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideWidgetAnimationEditor_MetaData[];
#endif
		static void NewProp_bHideWidgetAnimationEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideWidgetAnimationEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEditorConfigPaletteFiltering_MetaData[];
#endif
		static void NewProp_bUseEditorConfigPaletteFiltering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEditorConfigPaletteFiltering;
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_FavoriteWidgetParentClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FavoriteWidgetParentClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FavoriteWidgetParentClasses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugResolutions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugResolutions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugResolutions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGEditorProjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the UMG Editor Project Settings\n */" },
		{ "IncludePath", "UMGEditorProjectSettings.h" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Implements the settings for the UMG Editor Project Settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions = { "DefaultCompilerOptions", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, DefaultCompilerOptions), Z_Construct_UScriptStruct_FWidgetCompilerOptions, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions_MetaData)) }; // 1155596797
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_Inner = { "DirectoryCompilerOptions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions, METADATA_PARAMS(nullptr, 0) }; // 3654790623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData[] = {
		{ "Category", "Compiler" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions = { "DirectoryCompilerOptions", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, DirectoryCompilerOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_MetaData)) }; // 3654790623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bShowWidgetsFromEngineContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent = { "bShowWidgetsFromEngineContent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bShowWidgetsFromDeveloperContent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent = { "bShowWidgetsFromDeveloperContent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_Inner = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, CategoriesToHide), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_Inner = { "WidgetClassesToHide", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData[] = {
		{ "Category", "Class Filtering" },
		{ "MetaClass", "/Script/UMG.Widget" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide = { "WidgetClassesToHide", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, WidgetClassesToHide), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** Enables a dialog that lets you select a root widget before creating a widget blueprint */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Enables a dialog that lets you select a root widget before creating a widget blueprint" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bUseWidgetTemplateSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector = { "bUseWidgetTemplateSelector", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses_Inner = { "CommonRootWidgetClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** This list populates the common class section of the root widget selection dialog */" },
		{ "EditCondition", "bUseWidgetTemplateSelector" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "This list populates the common class section of the root widget selection dialog" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses = { "CommonRootWidgetClasses", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, CommonRootWidgetClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** The panel widget to place at the root of all newly constructed widget blueprints. Can be empty. */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The panel widget to place at the root of all newly constructed widget blueprints. Can be empty." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget = { "DefaultRootWidget", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, DefaultRootWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** Set true to hide UMG-graph related elements when the graph editor is hidden  */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Set true to hide UMG-graph related elements when the graph editor is hidden" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bGraphEditorHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden = { "bGraphEditorHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** Set true to hide widget animation related elements in the UMG editor  */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Set true to hide widget animation related elements in the UMG editor" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bHideWidgetAnimationEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor = { "bHideWidgetAnimationEditor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering_MetaData[] = {
		{ "Category", "Designer" },
		{ "Comment", "/** Set true to filter all categories and widgets out in the palette, selectively enabling them later via permission lists  */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "Set true to filter all categories and widgets out in the palette, selectively enabling them later via permission lists" },
	};
#endif
	void Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering_SetBit(void* Obj)
	{
		((UUMGEditorProjectSettings*)Obj)->bUseEditorConfigPaletteFiltering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering = { "bUseEditorConfigPaletteFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUMGEditorProjectSettings), &Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering_MetaData)) };
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses_Inner = { "FavoriteWidgetParentClasses", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Designer" },
		{ "Comment", "/**\n\x09 * The list of parent classes to choose from for newly constructed widget blueprints.\n\x09 * The classes must have empty widget hierarchies.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
		{ "ToolTip", "The list of parent classes to choose from for newly constructed widget blueprints.\nThe classes must have empty widget hierarchies." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses = { "FavoriteWidgetParentClasses", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, FavoriteWidgetParentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_Inner = { "DebugResolutions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDebugResolution, METADATA_PARAMS(nullptr, 0) }; // 677368144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData[] = {
		{ "Category", "Designer" },
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions = { "DebugResolutions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, DebugResolutions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_MetaData)) }; // 677368144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGEditorProjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGEditorProjectSettings, Version), METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultCompilerOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DirectoryCompilerOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromEngineContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bShowWidgetsFromDeveloperContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CategoriesToHide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_WidgetClassesToHide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseWidgetTemplateSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_CommonRootWidgetClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DefaultRootWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bGraphEditorHidden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bHideWidgetAnimationEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_bUseEditorConfigPaletteFiltering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_FavoriteWidgetParentClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_DebugResolutions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGEditorProjectSettings_Statics::NewProp_Version,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGEditorProjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGEditorProjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMGEditorProjectSettings_Statics::ClassParams = {
		&UUMGEditorProjectSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGEditorProjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGEditorProjectSettings()
	{
		if (!Z_Registration_Info_UClass_UUMGEditorProjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMGEditorProjectSettings.OuterSingleton, Z_Construct_UClass_UUMGEditorProjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUMGEditorProjectSettings.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UUMGEditorProjectSettings>()
	{
		return UUMGEditorProjectSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGEditorProjectSettings);
	UUMGEditorProjectSettings::~UUMGEditorProjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::EnumInfo[] = {
		{ EPropertyBindingPermissionLevel_StaticEnum, TEXT("EPropertyBindingPermissionLevel"), &Z_Registration_Info_UEnum_EPropertyBindingPermissionLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 287405403U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ScriptStructInfo[] = {
		{ FDebugResolution::StaticStruct, Z_Construct_UScriptStruct_FDebugResolution_Statics::NewStructOps, TEXT("DebugResolution"), &Z_Registration_Info_UScriptStruct_DebugResolution, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugResolution), 677368144U) },
		{ FWidgetCompilerOptions::StaticStruct, Z_Construct_UScriptStruct_FWidgetCompilerOptions_Statics::NewStructOps, TEXT("WidgetCompilerOptions"), &Z_Registration_Info_UScriptStruct_WidgetCompilerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetCompilerOptions), 1155596797U) },
		{ FDirectoryWidgetCompilerOptions::StaticStruct, Z_Construct_UScriptStruct_FDirectoryWidgetCompilerOptions_Statics::NewStructOps, TEXT("DirectoryWidgetCompilerOptions"), &Z_Registration_Info_UScriptStruct_DirectoryWidgetCompilerOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectoryWidgetCompilerOptions), 3654790623U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUMGEditorProjectSettings, UUMGEditorProjectSettings::StaticClass, TEXT("UUMGEditorProjectSettings"), &Z_Registration_Info_UClass_UUMGEditorProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMGEditorProjectSettings), 682339128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_1010727377(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_UMGEditorProjectSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
