// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Managers/MLAdapterManager.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/MLAdapterLibrarian.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterManager();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterManager_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSession_NoRegister();
	MLADAPTER_API UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode();
	MLADAPTER_API UScriptStruct* Z_Construct_UScriptStruct_FMLAdapterLibrarian();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMLAdapterServerMode;
	static UEnum* EMLAdapterServerMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterServerMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMLAdapterServerMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode, (UObject*)Z_Construct_UPackage__Script_MLAdapter(), TEXT("EMLAdapterServerMode"));
		}
		return Z_Registration_Info_UEnum_EMLAdapterServerMode.OuterSingleton;
	}
	template<> MLADAPTER_API UEnum* StaticEnum<EMLAdapterServerMode>()
	{
		return EMLAdapterServerMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enumerators[] = {
		{ "EMLAdapterServerMode::Invalid", (int64)EMLAdapterServerMode::Invalid },
		{ "EMLAdapterServerMode::Server", (int64)EMLAdapterServerMode::Server },
		{ "EMLAdapterServerMode::Client", (int64)EMLAdapterServerMode::Client },
		{ "EMLAdapterServerMode::Standalone", (int64)EMLAdapterServerMode::Standalone },
		{ "EMLAdapterServerMode::AutoDetect", (int64)EMLAdapterServerMode::AutoDetect },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enum_MetaDataParams[] = {
		{ "AutoDetect.Comment", "// this applies both to Standalone games as well as PIE\n" },
		{ "AutoDetect.Name", "EMLAdapterServerMode::AutoDetect" },
		{ "AutoDetect.ToolTip", "this applies both to Standalone games as well as PIE" },
		{ "Client.Name", "EMLAdapterServerMode::Client" },
		{ "Invalid.Name", "EMLAdapterServerMode::Invalid" },
		{ "ModuleRelativePath", "Public/Managers/MLAdapterManager.h" },
		{ "Server.Name", "EMLAdapterServerMode::Server" },
		{ "Standalone.Name", "EMLAdapterServerMode::Standalone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MLAdapter,
		nullptr,
		"EMLAdapterServerMode",
		"EMLAdapterServerMode",
		Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode()
	{
		if (!Z_Registration_Info_UEnum_EMLAdapterServerMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMLAdapterServerMode.InnerSingleton, Z_Construct_UEnum_MLAdapter_EMLAdapterServerMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMLAdapterServerMode.InnerSingleton;
	}
	void UMLAdapterManager::StaticRegisterNativesUMLAdapterManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterManager);
	UClass* Z_Construct_UClass_UMLAdapterManager_NoRegister()
	{
		return UMLAdapterManager::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Session_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Session;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastActiveWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastActiveWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Librarian_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Librarian;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The manager of the MLAdapter system. Sets up the RPC server for communication with remote client. Based on settings,\n * creates and ticks the UMLAdapterSession. Tells the UMLAdapterLibrarian to gather its classes.\n * A singleton instance is setup automatically during OnPostEngineInit if this plugin is included.\n */" },
		{ "IncludePath", "Managers/MLAdapterManager.h" },
		{ "ModuleRelativePath", "Public/Managers/MLAdapterManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The manager of the MLAdapter system. Sets up the RPC server for communication with remote client. Based on settings,\ncreates and ticks the UMLAdapterSession. Tells the UMLAdapterLibrarian to gather its classes.\nA singleton instance is setup automatically during OnPostEngineInit if this plugin is included." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Session_MetaData[] = {
		{ "ModuleRelativePath", "Public/Managers/MLAdapterManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Session = { "Session", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterManager, Session), Z_Construct_UClass_UMLAdapterSession_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Session_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Session_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_LastActiveWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Managers/MLAdapterManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_LastActiveWorld = { "LastActiveWorld", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterManager, LastActiveWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_LastActiveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_LastActiveWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Librarian_MetaData[] = {
		{ "ModuleRelativePath", "Public/Managers/MLAdapterManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Librarian = { "Librarian", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterManager, Librarian), Z_Construct_UScriptStruct_FMLAdapterLibrarian, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Librarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Librarian_MetaData)) }; // 284764233
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Session,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_LastActiveWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterManager_Statics::NewProp_Librarian,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterManager_Statics::ClassParams = {
		&UMLAdapterManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterManager_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterManager()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterManager.OuterSingleton, Z_Construct_UClass_UMLAdapterManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterManager.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterManager>()
	{
		return UMLAdapterManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterManager);
	UMLAdapterManager::~UMLAdapterManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::EnumInfo[] = {
		{ EMLAdapterServerMode_StaticEnum, TEXT("EMLAdapterServerMode"), &Z_Registration_Info_UEnum_EMLAdapterServerMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4206702701U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterManager, UMLAdapterManager::StaticClass, TEXT("UMLAdapterManager"), &Z_Registration_Info_UClass_UMLAdapterManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterManager), 2508797234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_2430302245(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Managers_MLAdapterManager_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
