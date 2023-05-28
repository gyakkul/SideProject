// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorPythonScriptingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPythonScriptingLibrary() {}
// Cross Module References
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorPythonScriptingLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorPythonScriptingLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UEditorPythonScriptingLibrary::execGetKeepPythonScriptAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorPythonScriptingLibrary::GetKeepPythonScriptAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorPythonScriptingLibrary::execSetKeepPythonScriptAlive)
	{
		P_GET_UBOOL(Z_Param_bNewKeepAlive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorPythonScriptingLibrary::SetKeepPythonScriptAlive(Z_Param_bNewKeepAlive);
		P_NATIVE_END;
	}
	void UEditorPythonScriptingLibrary::StaticRegisterNativesUEditorPythonScriptingLibrary()
	{
		UClass* Class = UEditorPythonScriptingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetKeepPythonScriptAlive", &UEditorPythonScriptingLibrary::execGetKeepPythonScriptAlive },
			{ "SetKeepPythonScriptAlive", &UEditorPythonScriptingLibrary::execSetKeepPythonScriptAlive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics
	{
		struct EditorPythonScriptingLibrary_eventGetKeepPythonScriptAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorPythonScriptingLibrary_eventGetKeepPythonScriptAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorPythonScriptingLibrary_eventGetKeepPythonScriptAlive_Parms), &Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Python" },
		{ "Comment", "/**\n\x09 * Returns the value of the bKeepPythonScriptAlive flag.\n\x09 * \n\x09 * If this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).\n\x09 * If this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor(). \n\x09 * \n\x09 * @return The current value of the bKeepPythonScriptAlive flag.\n\x09*/" },
		{ "DisplayName", "Get Keep Python Script Alive" },
		{ "ModuleRelativePath", "Public/EditorPythonScriptingLibrary.h" },
		{ "ToolTip", "Returns the value of the bKeepPythonScriptAlive flag.\n\nIf this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).\nIf this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor().\n\n@return The current value of the bKeepPythonScriptAlive flag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorPythonScriptingLibrary, nullptr, "GetKeepPythonScriptAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::EditorPythonScriptingLibrary_eventGetKeepPythonScriptAlive_Parms), Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics
	{
		struct EditorPythonScriptingLibrary_eventSetKeepPythonScriptAlive_Parms
		{
			bool bNewKeepAlive;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewKeepAlive_MetaData[];
#endif
		static void NewProp_bNewKeepAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewKeepAlive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive_SetBit(void* Obj)
	{
		((EditorPythonScriptingLibrary_eventSetKeepPythonScriptAlive_Parms*)Obj)->bNewKeepAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive = { "bNewKeepAlive", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorPythonScriptingLibrary_eventSetKeepPythonScriptAlive_Parms), &Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::NewProp_bNewKeepAlive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Python" },
		{ "Comment", "/**\n\x09 * Sets the bKeepPythonScriptAlive flag.\n\x09 * \n\x09 * If this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).\n\x09 * If this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor(). \n\x09 * \n\x09 * @param bNewKeepAlive The new value of the bKeepPythonScriptAlive flag.\n\x09 * @return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode.\n\x09*/" },
		{ "DisplayName", "Set Keep Python Script Alive" },
		{ "ModuleRelativePath", "Public/EditorPythonScriptingLibrary.h" },
		{ "ToolTip", "Sets the bKeepPythonScriptAlive flag.\n\nIf this is false (default), it will close the editor during the next tick (when executing a Python script in the editor-environment using the UnrealEditor-Cmd commandline tool).\nIf this is true, it will not close the editor by itself, and you will have to close it manually, either by setting this value to false again, or by calling a function like unreal.SystemLibrary.quit_editor().\n\n@param bNewKeepAlive The new value of the bKeepPythonScriptAlive flag.\n@return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorPythonScriptingLibrary, nullptr, "SetKeepPythonScriptAlive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::EditorPythonScriptingLibrary_eventSetKeepPythonScriptAlive_Parms), Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorPythonScriptingLibrary);
	UClass* Z_Construct_UClass_UEditorPythonScriptingLibrary_NoRegister()
	{
		return UEditorPythonScriptingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorPythonScriptingLibrary_GetKeepPythonScriptAlive, "GetKeepPythonScriptAlive" }, // 1467753721
		{ &Z_Construct_UFunction_UEditorPythonScriptingLibrary_SetKeepPythonScriptAlive, "SetKeepPythonScriptAlive" }, // 1774489352
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class for Python scripting functionality.\n */" },
		{ "IncludePath", "EditorPythonScriptingLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorPythonScriptingLibrary.h" },
		{ "ScriptName", "EditorPythonScripting" },
		{ "ToolTip", "Utility class for Python scripting functionality." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorPythonScriptingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::ClassParams = {
		&UEditorPythonScriptingLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorPythonScriptingLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorPythonScriptingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorPythonScriptingLibrary.OuterSingleton, Z_Construct_UClass_UEditorPythonScriptingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorPythonScriptingLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorPythonScriptingLibrary>()
	{
		return UEditorPythonScriptingLibrary::StaticClass();
	}
	UEditorPythonScriptingLibrary::UEditorPythonScriptingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorPythonScriptingLibrary);
	UEditorPythonScriptingLibrary::~UEditorPythonScriptingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorPythonScriptingLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorPythonScriptingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorPythonScriptingLibrary, UEditorPythonScriptingLibrary::StaticClass, TEXT("UEditorPythonScriptingLibrary"), &Z_Registration_Info_UClass_UEditorPythonScriptingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorPythonScriptingLibrary), 1554855331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorPythonScriptingLibrary_h_2743502350(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorPythonScriptingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorPythonScriptingLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
