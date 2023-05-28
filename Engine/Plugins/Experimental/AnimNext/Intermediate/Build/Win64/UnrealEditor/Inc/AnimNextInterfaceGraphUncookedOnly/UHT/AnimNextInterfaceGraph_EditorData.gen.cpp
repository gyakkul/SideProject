// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/AnimNextInterfaceGraph_EditorData.h"
#include "ControlRigBlueprint.h"
#include "RigVMCompiler/RigVMCompiler.h"
#include "RigVMCore/RigVMExecuteContext.h"
#include "RigVMCore/RigVMGraphFunctionHost.h"
#include "RigVMCore/RigVMMemoryCommon.h"
#include "RigVMModel/RigVMClient.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterfaceGraph_EditorData() {}
// Cross Module References
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister();
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData();
	ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_NoRegister();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigPythonSettings();
	CONTROLRIGDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigGraphDisplaySettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	RIGVM_API UClass* Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphFunctionStore();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMOperand();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMLibraryNode_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMCompileSettings();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly();
// End Cross Module References
	void UAnimNextInterfaceGraph_EditorData::StaticRegisterNativesUAnimNextInterfaceGraph_EditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterfaceGraph_EditorData);
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_NoRegister()
	{
		return UAnimNextInterfaceGraph_EditorData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryPointGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryPointGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibraryEdGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibraryEdGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMClient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigVMClient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphFunctionStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GraphFunctionStore;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigVMGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigVMFunctionLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigVMFunctionLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EntryPoint;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controllers_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controllers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Controllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigGraphDisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigGraphDisplaySettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VMCompileSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VMCompileSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonLogSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PythonLogSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinToOperandMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PinToOperandMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinToOperandMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinToOperandMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVMRecompilationRequired_MetaData[];
#endif
		static void NewProp_bVMRecompilationRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVMRecompilationRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCompiling_MetaData[];
#endif
		static void NewProp_bIsCompiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCompiling;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraphUncookedOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterfaceGraph_EditorData.h" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RootGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RootGraph = { "RootGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, RootGraph), Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RootGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RootGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPointGraph = { "EntryPointGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, EntryPointGraph), Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPointGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph = { "FunctionLibraryEdGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, FunctionLibraryEdGraph), Z_Construct_UClass_UAnimNextInterfaceGraph_EdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMClient_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMClient = { "RigVMClient", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, RigVMClient), Z_Construct_UScriptStruct_FRigVMClient, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMClient_MetaData)) }; // 1783123471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_GraphFunctionStore = { "GraphFunctionStore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, GraphFunctionStore), Z_Construct_UScriptStruct_FRigVMGraphFunctionStore, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_GraphFunctionStore_MetaData)) }; // 2229006788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMGraph_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMGraph = { "RigVMGraph", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, RigVMGraph_DEPRECATED), Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMFunctionLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMFunctionLibrary = { "RigVMFunctionLibrary", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, RigVMFunctionLibrary_DEPRECATED), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMFunctionLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMFunctionLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPoint_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, EntryPoint), Z_Construct_UClass_URigVMLibraryNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPoint_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_ValueProp = { "Controllers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_Key_KeyProp = { "Controllers_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, Controllers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings = { "RigGraphDisplaySettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, RigGraphDisplaySettings), Z_Construct_UScriptStruct_FRigGraphDisplaySettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings_MetaData)) }; // 4228744140
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData[] = {
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMRuntimeSettings_MetaData)) }; // 2495750411
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VM" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMCompileSettings = { "VMCompileSettings", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, VMCompileSettings), Z_Construct_UScriptStruct_FRigVMCompileSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMCompileSettings_MetaData)) }; // 3903670742
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PythonLogSettings_MetaData[] = {
		{ "Category", "Python Log Settings" },
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PythonLogSettings = { "PythonLogSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, PythonLogSettings), Z_Construct_UScriptStruct_FControlRigPythonSettings, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PythonLogSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PythonLogSettings_MetaData)) }; // 4285085245
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_ValueProp = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigVMOperand, METADATA_PARAMS(nullptr, 0) }; // 1902833667
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp = { "PinToOperandMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap = { "PinToOperandMap", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterfaceGraph_EditorData, PinToOperandMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_MetaData)) }; // 1902833667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit(void* Obj)
	{
		((UAnimNextInterfaceGraph_EditorData*)Obj)->bVMRecompilationRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired = { "bVMRecompilationRequired", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNextInterfaceGraph_EditorData), &Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData[] = {
		{ "ModuleRelativePath", "Internal/AnimNextInterfaceGraph_EditorData.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling_SetBit(void* Obj)
	{
		((UAnimNextInterfaceGraph_EditorData*)Obj)->bIsCompiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling = { "bIsCompiling", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNextInterfaceGraph_EditorData), &Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RootGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPointGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_FunctionLibraryEdGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMClient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_GraphFunctionStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigVMFunctionLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_EntryPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_Controllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_RigGraphDisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMRuntimeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_VMCompileSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PythonLogSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_PinToOperandMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bVMRecompilationRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::NewProp_bIsCompiling,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_URigVMClientHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterfaceGraph_EditorData, IRigVMClientHost), false },  // 4096289824
			{ Z_Construct_UClass_URigVMGraphFunctionHost_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterfaceGraph_EditorData, IRigVMGraphFunctionHost), false },  // 3482932937
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterfaceGraph_EditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::ClassParams = {
		&UAnimNextInterfaceGraph_EditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EditorData.OuterSingleton, Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EditorData.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPHUNCOOKEDONLY_API UClass* StaticClass<UAnimNextInterfaceGraph_EditorData>()
	{
		return UAnimNextInterfaceGraph_EditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterfaceGraph_EditorData);
	UAnimNextInterfaceGraph_EditorData::~UAnimNextInterfaceGraph_EditorData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimNextInterfaceGraph_EditorData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterfaceGraph_EditorData, UAnimNextInterfaceGraph_EditorData::StaticClass, TEXT("UAnimNextInterfaceGraph_EditorData"), &Z_Registration_Info_UClass_UAnimNextInterfaceGraph_EditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterfaceGraph_EditorData), 2827695850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EditorData_h_3035471487(TEXT("/Script/AnimNextInterfaceGraphUncookedOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraphUncookedOnly_Internal_AnimNextInterfaceGraph_EditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
