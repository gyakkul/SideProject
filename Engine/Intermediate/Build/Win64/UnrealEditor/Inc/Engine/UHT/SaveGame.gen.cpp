// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/SaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USaveGame::StaticRegisterNativesUSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGame);
	UClass* Z_Construct_UClass_USaveGame_NoRegister()
	{
		return USaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *\x09This class acts as a base class for a save game object that can be used to save state about the game. \n *\x09When you create your own save game subclass, you would add member variables for the information that you want to save.\n *\x09Then when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\n *\x09To load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n *\n *\x09@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame\n */" },
		{ "IncludePath", "GameFramework/SaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "This class acts as a base class for a save game object that can be used to save state about the game.\nWhen you create your own save game subclass, you would add member variables for the information that you want to save.\nThen when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\nTo load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_Statics::ClassParams = {
		&USaveGame::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGame()
	{
		if (!Z_Registration_Info_UClass_USaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGame.OuterSingleton, Z_Construct_UClass_USaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveGame.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USaveGame>()
	{
		return USaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame);
	USaveGame::~USaveGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveGame, USaveGame::StaticClass, TEXT("USaveGame"), &Z_Registration_Info_UClass_USaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGame), 2754970668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_1510628051(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
