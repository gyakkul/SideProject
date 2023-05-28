// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LevelFolders.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelFolders() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WorldBrowser();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UEditorLevelFolders();
	WORLDBROWSER_API UClass* Z_Construct_UClass_UEditorLevelFolders_NoRegister();
	WORLDBROWSER_API UScriptStruct* Z_Construct_UScriptStruct_FLevelFolderProps();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelFolderProps;
class UScriptStruct* FLevelFolderProps::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelFolderProps.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelFolderProps.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelFolderProps, (UObject*)Z_Construct_UPackage__Script_WorldBrowser(), TEXT("LevelFolderProps"));
	}
	return Z_Registration_Info_UScriptStruct_LevelFolderProps.OuterSingleton;
}
template<> WORLDBROWSER_API UScriptStruct* StaticStruct<FLevelFolderProps>()
{
	return FLevelFolderProps::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelFolderProps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Properties for level folders */" },
		{ "ModuleRelativePath", "Private/LevelFolders.h" },
		{ "ToolTip", "Properties for level folders" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelFolderProps_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelFolderProps>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelFolderProps_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
		nullptr,
		&NewStructOps,
		"LevelFolderProps",
		sizeof(FLevelFolderProps),
		alignof(FLevelFolderProps),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelFolderProps_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelFolderProps()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelFolderProps.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelFolderProps.InnerSingleton, Z_Construct_UScriptStruct_FLevelFolderProps_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelFolderProps.InnerSingleton;
	}
	void UEditorLevelFolders::StaticRegisterNativesUEditorLevelFolders()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorLevelFolders);
	UClass* Z_Construct_UClass_UEditorLevelFolders_NoRegister()
	{
		return UEditorLevelFolders::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelFolders_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelFolders_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldBrowser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Level folder UObject, for supporting undo/redo functionality */" },
		{ "IncludePath", "LevelFolders.h" },
		{ "ModuleRelativePath", "Private/LevelFolders.h" },
		{ "ToolTip", "Level folder UObject, for supporting undo/redo functionality" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelFolders_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelFolders>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelFolders_Statics::ClassParams = {
		&UEditorLevelFolders::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLevelFolders_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelFolders()
	{
		if (!Z_Registration_Info_UClass_UEditorLevelFolders.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorLevelFolders.OuterSingleton, Z_Construct_UClass_UEditorLevelFolders_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorLevelFolders.OuterSingleton;
	}
	template<> WORLDBROWSER_API UClass* StaticClass<UEditorLevelFolders>()
	{
		return UEditorLevelFolders::StaticClass();
	}
	UEditorLevelFolders::UEditorLevelFolders(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelFolders);
	UEditorLevelFolders::~UEditorLevelFolders() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorLevelFolders)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ScriptStructInfo[] = {
		{ FLevelFolderProps::StaticStruct, Z_Construct_UScriptStruct_FLevelFolderProps_Statics::NewStructOps, TEXT("LevelFolderProps"), &Z_Registration_Info_UScriptStruct_LevelFolderProps, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelFolderProps), 4278910449U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorLevelFolders, UEditorLevelFolders::StaticClass, TEXT("UEditorLevelFolders"), &Z_Registration_Info_UClass_UEditorLevelFolders, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorLevelFolders), 3148308355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_3760988194(TEXT("/Script/WorldBrowser"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldBrowser_Private_LevelFolders_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
