// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UGameViewportClient::execSetConsoleTarget)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConsoleTarget(Z_Param_PlayerIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportClient::execShowTitleSafeArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowTitleSafeArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameViewportClient::execSSSwapControllers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SSSwapControllers();
		P_NATIVE_END;
	}
	void UGameViewportClient::StaticRegisterNativesUGameViewportClient()
	{
		UClass* Class = UGameViewportClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetConsoleTarget", &UGameViewportClient::execSetConsoleTarget },
			{ "ShowTitleSafeArea", &UGameViewportClient::execShowTitleSafeArea },
			{ "SSSwapControllers", &UGameViewportClient::execSSSwapControllers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics
	{
		struct GameViewportClient_eventSetConsoleTarget_Parms
		{
			int32 PlayerIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameViewportClient_eventSetConsoleTarget_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the player which console commands will be executed in the context of. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Sets the player which console commands will be executed in the context of." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SetConsoleTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::GameViewportClient_eventSetConsoleTarget_Parms), Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Exec for toggling the display of the title safe area\n\x09  * @deprecated Use the cvar \"r.DebugSafeZone.Mode=1\".\n\x09  */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the cvar \"r.DebugSafeZone.Mode=1." },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Exec for toggling the display of the title safe area\n@deprecated Use the cvar \"r.DebugSafeZone.Mode=1\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "ShowTitleSafeArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SSSwapControllers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameViewportClient_SSSwapControllers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameViewportClient);
	UClass* Z_Construct_UClass_UGameViewportClient_NoRegister()
	{
		return UGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportConsole_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportConsole;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreenPlayers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSplitscreenPlayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameViewportClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget, "SetConsoleTarget" }, // 2078621874
		{ &Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea, "ShowTitleSafeArea" }, // 3038068482
		{ &Z_Construct_UFunction_UGameViewportClient_SSSwapControllers, "SSSwapControllers" }, // 414337269
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A game viewport (FViewport) is a high-level abstract interface for the\n * platform specific rendering, audio, and input subsystems.\n * GameViewportClient is the engine's interface to a game viewport.\n * Exactly one GameViewportClient is created for each instance of the game.  The\n * only case (so far) where you might have a single instance of Engine, but\n * multiple instances of the game (and thus multiple GameViewportClients) is when\n * you have more than one PIE window running.\n *\n * Responsibilities:\n * propagating input events to the global interactions list\n *\n * @see UGameViewportClient\n */" },
		{ "IncludePath", "Engine/GameViewportClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "A game viewport (FViewport) is a high-level abstract interface for the\nplatform specific rendering, audio, and input subsystems.\nGameViewportClient is the engine's interface to a game viewport.\nExactly one GameViewportClient is created for each instance of the game.  The\nonly case (so far) where you might have a single instance of Engine, but\nmultiple instances of the game (and thus multiple GameViewportClients) is when\nyou have more than one PIE window running.\n\nResponsibilities:\npropagating input events to the global interactions list\n\n@see UGameViewportClient" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData[] = {
		{ "Comment", "/** The viewport's console.   Might be null on consoles */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The viewport's console.   Might be null on consoles" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole = { "ViewportConsole", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameViewportClient, ViewportConsole), Z_Construct_UClass_UConsole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner = { "DebugProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDebugDisplayProperty, METADATA_PARAMS(nullptr, 0) }; // 3163862492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData[] = {
		{ "Comment", "/** Debug properties that have been added via one of the \"displayall\" commands */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Debug properties that have been added via one of the \"displayall\" commands" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties = { "DebugProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameViewportClient, DebugProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_MetaData)) }; // 3163862492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers = { "MaxSplitscreenPlayers", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameViewportClient, MaxSplitscreenPlayers), METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "/* The relative world context for this viewport */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The relative world context for this viewport" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameViewportClient, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameViewportClient, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameViewportClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameViewportClient_Statics::ClassParams = {
		&UGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameViewportClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton, Z_Construct_UClass_UGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGameViewportClient>()
	{
		return UGameViewportClient::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameViewportClient, UGameViewportClient::StaticClass, TEXT("UGameViewportClient"), &Z_Registration_Info_UClass_UGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameViewportClient), 4016531292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_3447746051(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
