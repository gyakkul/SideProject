// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Models/DMXControlConsoleEditorModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleEditorModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsole_NoRegister();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorModel();
	DMXCONTROLCONSOLEEDITOR_API UClass* Z_Construct_UClass_UDMXControlConsoleEditorModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsoleEditor();
// End Cross Module References
	void UDMXControlConsoleEditorModel::StaticRegisterNativesUDMXControlConsoleEditorModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleEditorModel);
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorModel_NoRegister()
	{
		return UDMXControlConsoleEditorModel::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorConsole_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorConsole;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultConsolePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultConsolePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsoleEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Model of the console currently being edited in the control console editor.  */" },
		{ "IncludePath", "Models/DMXControlConsoleEditorModel.h" },
		{ "ModuleRelativePath", "Private/Models/DMXControlConsoleEditorModel.h" },
		{ "ToolTip", "Model of the console currently being edited in the control console editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_EditorConsole_MetaData[] = {
		{ "Comment", "/** The currently edited console */" },
		{ "ModuleRelativePath", "Private/Models/DMXControlConsoleEditorModel.h" },
		{ "ToolTip", "The currently edited console" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_EditorConsole = { "EditorConsole", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleEditorModel, EditorConsole), Z_Construct_UClass_UDMXControlConsole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_EditorConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_EditorConsole_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_DefaultConsolePath_MetaData[] = {
		{ "Comment", "/** Control console saved in config */" },
		{ "ModuleRelativePath", "Private/Models/DMXControlConsoleEditorModel.h" },
		{ "ToolTip", "Control console saved in config" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_DefaultConsolePath = { "DefaultConsolePath", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleEditorModel, DefaultConsolePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_DefaultConsolePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_DefaultConsolePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_EditorConsole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::NewProp_DefaultConsolePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleEditorModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::ClassParams = {
		&UDMXControlConsoleEditorModel::StaticClass,
		"DMXEditor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleEditorModel()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleEditorModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleEditorModel.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleEditorModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleEditorModel.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLEEDITOR_API UClass* StaticClass<UDMXControlConsoleEditorModel>()
	{
		return UDMXControlConsoleEditorModel::StaticClass();
	}
	UDMXControlConsoleEditorModel::UDMXControlConsoleEditorModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleEditorModel);
	UDMXControlConsoleEditorModel::~UDMXControlConsoleEditorModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Models_DMXControlConsoleEditorModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Models_DMXControlConsoleEditorModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleEditorModel, UDMXControlConsoleEditorModel::StaticClass, TEXT("UDMXControlConsoleEditorModel"), &Z_Registration_Info_UClass_UDMXControlConsoleEditorModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleEditorModel), 1145179887U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Models_DMXControlConsoleEditorModel_h_437731892(TEXT("/Script/DMXControlConsoleEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Models_DMXControlConsoleEditorModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsoleEditor_Private_Models_DMXControlConsoleEditorModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
