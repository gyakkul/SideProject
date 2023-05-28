// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/DMXLibraryFromMVRImportOptions.h"
#include "IO/DMXInputPortReference.h"
#include "IO/DMXOutputPortReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXLibraryFromMVRImportOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFromMVRImportOptions();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortReference();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXLibraryFromMVRImportOptions::StaticRegisterNativesUDMXLibraryFromMVRImportOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXLibraryFromMVRImportOptions);
	UClass* Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_NoRegister()
	{
		return UDMXLibraryFromMVRImportOptions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReimport_MetaData[];
#endif
		static void NewProp_bIsReimport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReimport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateNewDMXLibrary_MetaData[];
#endif
		static void NewProp_bCreateNewDMXLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateNewDMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportIntoDMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportIntoDMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReimportExisitingGDTFs_MetaData[];
#endif
		static void NewProp_bReimportExisitingGDTFs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReimportExisitingGDTFs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInputPort_MetaData[];
#endif
		static void NewProp_bUpdateInputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPortToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortToUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOutputPort_MetaData[];
#endif
		static void NewProp_bUpdateOutputPort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOutputPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortToUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortToUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Import Options when importing an MVR File as DMX Library.\n *\n * Note:\n * - A MVR File Path and Name is expected to be set.\n * - bCancelled has to be set to true when the user cancels import while Options here are presented.\n */" },
		{ "IncludePath", "Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "Import Options when importing an MVR File as DMX Library.\n\nNote:\n- A MVR File Path and Name is expected to be set.\n- bCancelled has to be set to true when the user cancels import while Options here are presented." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport_MetaData[] = {
		{ "Comment", "/** If true, show options for Reimport */" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "If true, show options for Reimport" },
	};
#endif
	void Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport_SetBit(void* Obj)
	{
		((UDMXLibraryFromMVRImportOptions*)Obj)->bIsReimport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport = { "bIsReimport", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXLibraryFromMVRImportOptions), &Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary_MetaData[] = {
		{ "Category", "Reimport" },
		{ "Comment", "/** If checked, creates a new DMX Library */" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "If checked, creates a new DMX Library" },
	};
#endif
	void Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary_SetBit(void* Obj)
	{
		((UDMXLibraryFromMVRImportOptions*)Obj)->bCreateNewDMXLibrary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary = { "bCreateNewDMXLibrary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXLibraryFromMVRImportOptions), &Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_ImportIntoDMXLibrary_MetaData[] = {
		{ "Category", "Reimport" },
		{ "Comment", "/** Imports the MVR into the specified DMX Library. Note this will not merge, but clear Patches in the DMX Library. */" },
		{ "DisplayName", "Import into DMX Library" },
		{ "EditCondition", "!bCreateNewDMXLibrary" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "Imports the MVR into the specified DMX Library. Note this will not merge, but clear Patches in the DMX Library." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_ImportIntoDMXLibrary = { "ImportIntoDMXLibrary", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibraryFromMVRImportOptions, ImportIntoDMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_ImportIntoDMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_ImportIntoDMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs_MetaData[] = {
		{ "Category", "Reimport" },
		{ "Comment", "/** If checked, reimports GDTF that were previously imported */" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "If checked, reimports GDTF that were previously imported" },
	};
#endif
	void Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs_SetBit(void* Obj)
	{
		((UDMXLibraryFromMVRImportOptions*)Obj)->bReimportExisitingGDTFs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs = { "bReimportExisitingGDTFs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXLibraryFromMVRImportOptions), &Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort_MetaData[] = {
		{ "Category", "Ports" },
		{ "Comment", "/** If checked, updates the specified Input Port to span the Universe range of all Patches in the MVR file, or creates a new Input Port if none exist. */" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "If checked, updates the specified Input Port to span the Universe range of all Patches in the MVR file, or creates a new Input Port if none exist." },
	};
#endif
	void Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort_SetBit(void* Obj)
	{
		((UDMXLibraryFromMVRImportOptions*)Obj)->bUpdateInputPort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort = { "bUpdateInputPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXLibraryFromMVRImportOptions), &Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_InputPortToUpdate_MetaData[] = {
		{ "Category", "Ports" },
		{ "Comment", "/** The Input Port which is updated */" },
		{ "EditCondition", "bUpdateInputPort" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Input Port which is updated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_InputPortToUpdate = { "InputPortToUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibraryFromMVRImportOptions, InputPortToUpdate), Z_Construct_UScriptStruct_FDMXInputPortReference, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_InputPortToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_InputPortToUpdate_MetaData)) }; // 3197363453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort_MetaData[] = {
		{ "Category", "Ports" },
		{ "Comment", "/** If checked, updates the specified Ouput Port to span the Universe range of all Patches in the MVR file, or creates a new Output Port if none exist. */" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ToolTip", "If checked, updates the specified Ouput Port to span the Universe range of all Patches in the MVR file, or creates a new Output Port if none exist." },
	};
#endif
	void Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort_SetBit(void* Obj)
	{
		((UDMXLibraryFromMVRImportOptions*)Obj)->bUpdateOutputPort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort = { "bUpdateOutputPort", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXLibraryFromMVRImportOptions), &Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_OutputPortToUpdate_MetaData[] = {
		{ "Category", "Ports" },
		{ "Comment", "/** The Output Port which is updated */" },
		{ "EditCondition", "bUpdateOutputPort" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/Factories/DMXLibraryFromMVRImportOptions.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Output Port which is updated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_OutputPortToUpdate = { "OutputPortToUpdate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibraryFromMVRImportOptions, OutputPortToUpdate), Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_OutputPortToUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_OutputPortToUpdate_MetaData)) }; // 3396692900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bIsReimport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bCreateNewDMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_ImportIntoDMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bReimportExisitingGDTFs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateInputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_InputPortToUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_bUpdateOutputPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::NewProp_OutputPortToUpdate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXLibraryFromMVRImportOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::ClassParams = {
		&UDMXLibraryFromMVRImportOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXLibraryFromMVRImportOptions()
	{
		if (!Z_Registration_Info_UClass_UDMXLibraryFromMVRImportOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXLibraryFromMVRImportOptions.OuterSingleton, Z_Construct_UClass_UDMXLibraryFromMVRImportOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXLibraryFromMVRImportOptions.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXLibraryFromMVRImportOptions>()
	{
		return UDMXLibraryFromMVRImportOptions::StaticClass();
	}
	UDMXLibraryFromMVRImportOptions::UDMXLibraryFromMVRImportOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXLibraryFromMVRImportOptions);
	UDMXLibraryFromMVRImportOptions::~UDMXLibraryFromMVRImportOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXLibraryFromMVRImportOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXLibraryFromMVRImportOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXLibraryFromMVRImportOptions, UDMXLibraryFromMVRImportOptions::StaticClass, TEXT("UDMXLibraryFromMVRImportOptions"), &Z_Registration_Info_UClass_UDMXLibraryFromMVRImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXLibraryFromMVRImportOptions), 3004214942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXLibraryFromMVRImportOptions_h_3144569875(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXLibraryFromMVRImportOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXLibraryFromMVRImportOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
