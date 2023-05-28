// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/UnrealEdKeyBindings.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealEdKeyBindings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings();
	UNREALED_API UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FEditorKeyBinding();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorKeyBinding;
class UScriptStruct* FEditorKeyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorKeyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorKeyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorKeyBinding, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EditorKeyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_EditorKeyBinding.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FEditorKeyBinding>()
{
	return FEditorKeyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorKeyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrlDown_MetaData[];
#endif
		static void NewProp_bCtrlDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrlDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAltDown_MetaData[];
#endif
		static void NewProp_bAltDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAltDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShiftDown_MetaData[];
#endif
		static void NewProp_bShiftDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShiftDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CommandName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** An editor hotkey binding to a parameterless exec. */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
		{ "ToolTip", "An editor hotkey binding to a parameterless exec." },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorKeyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bCtrlDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown = { "bCtrlDown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bAltDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown = { "bAltDown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit(void* Obj)
	{
		((FEditorKeyBinding*)Obj)->bShiftDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown = { "bShiftDown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FEditorKeyBinding), &Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorKeyBinding, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorKeyBinding, CommandName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bCtrlDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bAltDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_bShiftDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewProp_CommandName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"EditorKeyBinding",
		sizeof(FEditorKeyBinding),
		alignof(FEditorKeyBinding),
		Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorKeyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorKeyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorKeyBinding.InnerSingleton, Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorKeyBinding.InnerSingleton;
	}
	void UUnrealEdKeyBindings::StaticRegisterNativesUUnrealEdKeyBindings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealEdKeyBindings);
	UClass* Z_Construct_UClass_UUnrealEdKeyBindings_NoRegister()
	{
		return UUnrealEdKeyBindings::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealEdKeyBindings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealEdKeyBindings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Preferences/UnrealEdKeyBindings.h" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_Inner = { "KeyBindings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorKeyBinding, METADATA_PARAMS(nullptr, 0) }; // 158147771
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData[] = {
		{ "Comment", "/** Array of keybindings */" },
		{ "ModuleRelativePath", "Classes/Preferences/UnrealEdKeyBindings.h" },
		{ "ToolTip", "Array of keybindings" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings = { "KeyBindings", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnrealEdKeyBindings, KeyBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_MetaData)) }; // 158147771
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnrealEdKeyBindings_Statics::NewProp_KeyBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealEdKeyBindings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealEdKeyBindings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealEdKeyBindings_Statics::ClassParams = {
		&UUnrealEdKeyBindings::StaticClass,
		"EditorKeyBindings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealEdKeyBindings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealEdKeyBindings()
	{
		if (!Z_Registration_Info_UClass_UUnrealEdKeyBindings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealEdKeyBindings.OuterSingleton, Z_Construct_UClass_UUnrealEdKeyBindings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealEdKeyBindings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UUnrealEdKeyBindings>()
	{
		return UUnrealEdKeyBindings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealEdKeyBindings);
	UUnrealEdKeyBindings::~UUnrealEdKeyBindings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ScriptStructInfo[] = {
		{ FEditorKeyBinding::StaticStruct, Z_Construct_UScriptStruct_FEditorKeyBinding_Statics::NewStructOps, TEXT("EditorKeyBinding"), &Z_Registration_Info_UScriptStruct_EditorKeyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorKeyBinding), 158147771U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealEdKeyBindings, UUnrealEdKeyBindings::StaticClass, TEXT("UUnrealEdKeyBindings"), &Z_Registration_Info_UClass_UUnrealEdKeyBindings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealEdKeyBindings), 2138238020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_3520533595(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_UnrealEdKeyBindings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
