// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameEngine() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine();
	ENGINE_API UClass* Z_Construct_UClass_UGameEngine_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UGameEngine::StaticRegisterNativesUGameEngine()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameEngine);
	UClass* Z_Construct_UClass_UGameEngine_NoRegister()
	{
		return UGameEngine::StaticClass();
	}
	struct Z_Construct_UClass_UGameEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ServerFlushLogInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ServerFlushLogInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngine,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Engine that manages core systems that enable a game.\n */" },
		{ "IncludePath", "Engine/GameEngine.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Engine that manages core systems that enable a game." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData[] = {
		{ "Comment", "/** Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium delta time the engine uses to populate FApp::DeltaTime. If 0, unbound." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime = { "MaxDeltaTime", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameEngine, MaxDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData[] = {
		{ "Comment", "/** Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
		{ "ToolTip", "Maximium time (in seconds) between the flushes of the logs on the server (best effort). If 0, this will happen every tick." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval = { "ServerFlushLogInterval", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameEngine, ServerFlushLogInterval), METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameEngine.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameEngine, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_MaxDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_ServerFlushLogInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameEngine_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameEngine_Statics::ClassParams = {
		&UGameEngine::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::PropPointers),
		0,
		0x001000AEu,
		METADATA_PARAMS(Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameEngine()
	{
		if (!Z_Registration_Info_UClass_UGameEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameEngine.OuterSingleton, Z_Construct_UClass_UGameEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameEngine.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGameEngine>()
	{
		return UGameEngine::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameEngine);
	UGameEngine::~UGameEngine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameEngine, UGameEngine::StaticClass, TEXT("UGameEngine"), &Z_Registration_Info_UClass_UGameEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameEngine), 2267646093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_1704167647(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameEngine_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
