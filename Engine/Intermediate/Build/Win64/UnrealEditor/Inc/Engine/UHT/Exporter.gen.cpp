// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Exporters/Exporter.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetExportTask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	ENGINE_API UClass* Z_Construct_UClass_UExporter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UExporter::execRunAssetExportTasks)
	{
		P_GET_TARRAY_REF(UAssetExportTask*,Z_Param_Out_ExportTasks);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTasks(Z_Param_Out_ExportTasks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExporter::execRunAssetExportTask)
	{
		P_GET_OBJECT(UAssetExportTask,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UExporter::RunAssetExportTask(Z_Param_Task);
		P_NATIVE_END;
	}
	struct Exporter_eventScriptRunAssetExportTask_Parms
	{
		UAssetExportTask* Task;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		Exporter_eventScriptRunAssetExportTask_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UExporter_ScriptRunAssetExportTask = FName(TEXT("ScriptRunAssetExportTask"));
	bool UExporter::ScriptRunAssetExportTask(UAssetExportTask* Task)
	{
		Exporter_eventScriptRunAssetExportTask_Parms Parms;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UExporter_ScriptRunAssetExportTask),&Parms);
		return !!Parms.ReturnValue;
	}
	void UExporter::StaticRegisterNativesUExporter()
	{
		UClass* Class = UExporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunAssetExportTask", &UExporter::execRunAssetExportTask },
			{ "RunAssetExportTasks", &UExporter::execRunAssetExportTasks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics
	{
		struct Exporter_eventRunAssetExportTask_Parms
		{
			UAssetExportTask* Task;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Exporter_eventRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Exporter_eventRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Child classes do not override this, but they do provide an Export() function\n\x09* to do the resource-specific export work.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if the the object was successfully exported\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param        Task            The task to export.\n\n@return       true if the the object was successfully exported" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Exporter_eventRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics
	{
		struct Exporter_eventRunAssetExportTasks_Parms
		{
			TArray<UAssetExportTask*> ExportTasks;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ExportTasks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportTasks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExportTasks;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner = { "ExportTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks = { "ExportTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Exporter_eventRunAssetExportTasks_Parms, ExportTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_MetaData)) };
	void Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventRunAssetExportTasks_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Exporter_eventRunAssetExportTasks_Parms), &Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ExportTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09 * Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\n\x09 * to do the resource-specific export work.\n\x09 * \n\x09 * @param\x09""ExportTasks\x09\x09The array of tasks to export.\n\x09 *\n\x09 * @return\x09true if all tasks ran without error\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given objects to files.  Child classes do not override this, but they do provide an Export() function\nto do the resource-specific export work.\n\n@param       ExportTasks             The array of tasks to export.\n\n@return      true if all tasks ran without error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "RunAssetExportTasks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Exporter_eventRunAssetExportTasks_Parms), Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_RunAssetExportTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_RunAssetExportTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Exporter_eventScriptRunAssetExportTask_Parms, Task), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Exporter_eventScriptRunAssetExportTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Exporter_eventScriptRunAssetExportTask_Parms), &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_Task,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "Comment", "/**\n\x09* Export the given object to file.  Overridden by script based exporters.\n\x09*\n\x09* @param\x09Task\x09\x09The task to export.\n\x09*\n\x09* @return\x09true if overridden by script exporter.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Export the given object to file.  Overridden by script based exporters.\n\n@param        Task            The task to export.\n\n@return       true if overridden by script exporter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExporter, nullptr, "ScriptRunAssetExportTask", nullptr, nullptr, sizeof(Exporter_eventScriptRunAssetExportTask_Parms), Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExporter);
	UClass* Z_Construct_UClass_UExporter_NoRegister()
	{
		return UExporter::StaticClass();
	}
	struct Z_Construct_UClass_UExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportRootScope_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExportRootScope;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatExtension_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatExtension_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FormatExtension;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatDescription_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatDescription_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FormatDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredFormatIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreferredFormatIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextIndent_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextIndent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bText_MetaData[];
#endif
		static void NewProp_bText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectedOnly_MetaData[];
#endif
		static void NewProp_bSelectedOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectedOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFileOperations_MetaData[];
#endif
		static void NewProp_bForceFileOperations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFileOperations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExportTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExportTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTask, "RunAssetExportTask" }, // 345479325
		{ &Z_Construct_UFunction_UExporter_RunAssetExportTasks, "RunAssetExportTasks" }, // 387066196
		{ &Z_Construct_UFunction_UExporter_ScriptRunAssetExportTask, "ScriptRunAssetExportTask" }, // 2756976476
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/Exporter.h" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Supported class of this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Supported class of this exporter" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, SupportedClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData[] = {
		{ "Comment", "/**\n\x09 * The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\n\x09 * Objects being exported that are contained within ExportRootScope will use just their name instead of a full path\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "The root scope of objects to be exported, only used if PPF_ExportsNotFullyQualfied is set\nObjects being exported that are contained within ExportRootScope will use just their name instead of a full path" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope = { "ExportRootScope", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, ExportRootScope), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner = { "FormatExtension", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** File extension to use for this exporter */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "File extension to use for this exporter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension = { "FormatExtension", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, FormatExtension), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner = { "FormatDescription", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** Descriptiong of the export format */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Descriptiong of the export format" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription = { "FormatDescription", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, FormatDescription), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData[] = {
		{ "Comment", "/** Index into FormatExtension/FormatDescription of the preferred export format. */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Index into FormatExtension/FormatDescription of the preferred export format." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex = { "PreferredFormatIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, PreferredFormatIndex), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData[] = {
		{ "Comment", "/** Current indentation of spaces of the exported text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "Current indentation of spaces of the exported text" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent = { "TextIndent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, TextIndent), METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData[] = {
		{ "Category", "Misc" },
		{ "Comment", "/** If true, this will export the data as text */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export the data as text" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bText = { "bText", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData[] = {
		{ "Comment", "/** If true, this will export only the selected objects */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will export only the selected objects" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bSelectedOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly = { "bSelectedOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData[] = {
		{ "Comment", "/** If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory) */" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
		{ "ToolTip", "If true, this will force the exporter code to create a file-based Ar (this can keep large output files from taking too much memory)" },
	};
#endif
	void Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit(void* Obj)
	{
		((UExporter*)Obj)->bForceFileOperations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations = { "bForceFileOperations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UExporter), &Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Classes/Exporters/Exporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask = { "ExportTask", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UExporter, ExportTask), Z_Construct_UClass_UAssetExportTask_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_SupportedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportRootScope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_FormatDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_PreferredFormatIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_TextIndent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bSelectedOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_bForceFileOperations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExporter_Statics::NewProp_ExportTask,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExporter_Statics::ClassParams = {
		&UExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::PropPointers),
		0,
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExporter()
	{
		if (!Z_Registration_Info_UClass_UExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExporter.OuterSingleton, Z_Construct_UClass_UExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExporter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UExporter>()
	{
		return UExporter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExporter);
	UExporter::~UExporter() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExporter)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExporter, UExporter::StaticClass, TEXT("UExporter"), &Z_Registration_Info_UClass_UExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExporter), 1335184308U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_2854606911(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Exporters_Exporter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
