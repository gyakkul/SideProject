// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PendingNetGame.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePendingNetGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame();
	ENGINE_API UClass* Z_Construct_UClass_UPendingNetGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPendingNetGame::StaticRegisterNativesUPendingNetGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPendingNetGame);
	UClass* Z_Construct_UClass_UPendingNetGame_NoRegister()
	{
		return UPendingNetGame::StaticClass();
	}
	struct Z_Construct_UClass_UPendingNetGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DemoNetDriver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DemoNetDriver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPendingNetGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PendingNetGame.h" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net driver created for contacting the new server\n\x09 * Transferred to world on successful connection\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ToolTip", "Net driver created for contacting the new server\nTransferred to world on successful connection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPendingNetGame, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData[] = {
		{ "Comment", "/** \n\x09 * Demo Net driver created for loading demos, but we need to go through pending net game\n\x09 * Transferred to world on successful connection\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/PendingNetGame.h" },
		{ "ToolTip", "Demo Net driver created for loading demos, but we need to go through pending net game\nTransferred to world on successful connection" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver = { "DemoNetDriver", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPendingNetGame, DemoNetDriver), Z_Construct_UClass_UDemoNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPendingNetGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_NetDriver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPendingNetGame_Statics::NewProp_DemoNetDriver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPendingNetGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPendingNetGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPendingNetGame_Statics::ClassParams = {
		&UPendingNetGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPendingNetGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPendingNetGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPendingNetGame()
	{
		if (!Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton, Z_Construct_UClass_UPendingNetGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPendingNetGame.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPendingNetGame>()
	{
		return UPendingNetGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPendingNetGame);
	UPendingNetGame::~UPendingNetGame() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPendingNetGame)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPendingNetGame, UPendingNetGame::StaticClass, TEXT("UPendingNetGame"), &Z_Registration_Info_UClass_UPendingNetGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPendingNetGame), 2954591169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_1465563201(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PendingNetGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
