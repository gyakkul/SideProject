// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/Factory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetImportTask_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAutomatedAssetImportData_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	struct Factory_eventScriptFactoryCanImport_Parms
	{
		FString Filename;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Factory_eventScriptFactoryCanImport_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct Factory_eventScriptFactoryCreateFile_Parms
	{
		UAssetImportTask* InTask;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Factory_eventScriptFactoryCreateFile_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UFactory_ScriptFactoryCanImport = FName(TEXT("ScriptFactoryCanImport"));
	bool UFactory::ScriptFactoryCanImport(const FString& Filename)
	{
		Factory_eventScriptFactoryCanImport_Parms Parms;
		Parms.Filename=Filename;
		ProcessEvent(FindFunctionChecked(NAME_UFactory_ScriptFactoryCanImport),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UFactory_ScriptFactoryCreateFile = FName(TEXT("ScriptFactoryCreateFile"));
	bool UFactory::ScriptFactoryCreateFile(UAssetImportTask* InTask)
	{
		Factory_eventScriptFactoryCreateFile_Parms Parms;
		Parms.InTask=InTask;
		ProcessEvent(FindFunctionChecked(NAME_UFactory_ScriptFactoryCreateFile),&Parms);
		return !!Parms.ReturnValue;
	}
	void UFactory::StaticRegisterNativesUFactory()
	{
	}
	struct Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Factory_eventScriptFactoryCanImport_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Factory_eventScriptFactoryCanImport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Factory_eventScriptFactoryCanImport_Parms), &Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Whether the specified file can be imported by this factory. (Implemented in script)\n\x09 *\n\x09 * @return true if the file is supported, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Whether the specified file can be imported by this factory. (Implemented in script)\n\n@return true if the file is supported, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactory, nullptr, "ScriptFactoryCanImport", nullptr, nullptr, sizeof(Factory_eventScriptFactoryCanImport_Parms), Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCanImport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactory_ScriptFactoryCanImport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_InTask = { "InTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Factory_eventScriptFactoryCreateFile_Parms, InTask), Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Factory_eventScriptFactoryCreateFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Factory_eventScriptFactoryCreateFile_Parms), &Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_InTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Import object(s) using a task via script\n\x09 *\n\x09 * @param InTask\n\x09 * @return True if script implements\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Import object(s) using a task via script\n\n@param InTask\n@return True if script implements" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFactory, nullptr, "ScriptFactoryCreateFile", nullptr, nullptr, sizeof(Factory_eventScriptFactoryCreateFile_Parms), Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFactory);
	UClass* Z_Construct_UClass_UFactory_NoRegister()
	{
		return UFactory::StaticClass();
	}
	struct Z_Construct_UClass_UFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNew_MetaData[];
#endif
		static void NewProp_bCreateNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ContextClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Formats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Formats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Formats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditAfterNew_MetaData[];
#endif
		static void NewProp_bEditAfterNew_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditAfterNew;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditorImport_MetaData[];
#endif
		static void NewProp_bEditorImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorImport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[];
#endif
		static void NewProp_bText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomatedImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutomatedImportData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetImportTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverwriteYesOrNoToAllState_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OverwriteYesOrNoToAllState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFactory_ScriptFactoryCanImport, "ScriptFactoryCanImport" }, // 1091006475
		{ &Z_Construct_UFunction_UFactory_ScriptFactoryCreateFile, "ScriptFactoryCreateFile" }, // 1906630387
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all factories\n * An object responsible for creating and importing new objects.\n * \n */" },
		{ "IncludePath", "Factories/Factory.h" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Base class for all factories\nAn object responsible for creating and importing new objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The default value to return from CanCreateNew() */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "The default value to return from CanCreateNew()" },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bCreateNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew = { "bCreateNew", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** The class manufactured by this factory. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "The class manufactured by this factory." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, SupportedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Class of the context object used to help create the object. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Class of the context object used to help create the object." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass = { "ContextClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, ContextClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** List of formats supported by the factory. Each entry is of the form \"ext;Description\" where ext is the file extension. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "List of formats supported by the factory. Each entry is of the form \"ext;Description\" where ext is the file extension." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, Formats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_Formats_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** true if the associated editor should be opened after creating a new object. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the associated editor should be opened after creating a new object." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bEditAfterNew = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew = { "bEditAfterNew", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** true if the factory imports objects from files. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the factory imports objects from files." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bEditorImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport = { "bEditorImport", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** true if the factory imports objects from text. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "true if the factory imports objects from text." },
	};
#endif
	void Z_Construct_UClass_UFactory_Statics::NewProp_bText_SetBit(void* Obj)
	{
		((UFactory*)Obj)->bText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_bText = { "bText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UFactory), &Z_Construct_UClass_UFactory_Statics::NewProp_bText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_bText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData[] = {
		{ "Comment", "/** Determines the order in which factories are tried when importing or reimporting an object.\n\x09""Factories with higher priority values will go first. Factories with negative priorities will be excluded. */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Determines the order in which factories are tried when importing or reimporting an object.\n      Factories with higher priority values will go first. Factories with negative priorities will be excluded." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority = { "ImportPriority", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, ImportPriority), METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Data for how to import files via the automated command line importing interface */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Data for how to import files via the automated command line importing interface" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData = { "AutomatedImportData", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, AutomatedImportData), Z_Construct_UClass_UAutomatedAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Task for importing file via script interfaces */" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "Task for importing file via script interfaces" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask = { "AssetImportTask", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, AssetImportTask), Z_Construct_UClass_UAssetImportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData[] = {
		{ "Comment", "/**\n\x09 * For interactive object imports, this value indicates whether the user wants\n\x09 * objects to be automatically overwritten (See EAppReturnType), or -1 if the\n\x09  * user should be prompted.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Factories/Factory.h" },
		{ "ToolTip", "For interactive object imports, this value indicates whether the user wants\nobjects to be automatically overwritten (See EAppReturnType), or -1 if the\nuser should be prompted." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState = { "OverwriteYesOrNoToAllState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFactory, OverwriteYesOrNoToAllState), METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bCreateNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_SupportedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_ContextClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_Formats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_Formats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bEditAfterNew,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bEditorImport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_bText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_ImportPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_AutomatedImportData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_AssetImportTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFactory_Statics::NewProp_OverwriteYesOrNoToAllState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFactory_Statics::ClassParams = {
		&UFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFactory()
	{
		if (!Z_Registration_Info_UClass_UFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFactory.OuterSingleton, Z_Construct_UClass_UFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UFactory>()
	{
		return UFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFactory);
	UFactory::~UFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFactory, UFactory::StaticClass, TEXT("UFactory"), &Z_Registration_Info_UClass_UFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFactory), 1020289431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_4108444617(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_Factory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
