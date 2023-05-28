// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/OnlineBeaconHostObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void AOnlineBeaconHostObject::StaticRegisterNativesAOnlineBeaconHostObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOnlineBeaconHostObject);
	UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister()
	{
		return AOnlineBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeaconHostObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeaconTypeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BeaconTypeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientBeaconActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClientBeaconActorClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClientActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClientActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation \n *\n * By defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\n * can communicate with each other without officially connecting through normal Unreal networking\n */" },
		{ "IncludePath", "OnlineBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation\n\nBy defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\ncan communicate with each other without officially connecting through normal Unreal networking" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData[] = {
		{ "Comment", "/** Custom name for this beacon */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Custom name for this beacon" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName = { "BeaconTypeName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeaconHostObject, BeaconTypeName), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData[] = {
		{ "Comment", "/** Class reference for spawning client beacon actor */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Class reference for spawning client beacon actor" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass = { "ClientBeaconActorClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientBeaconActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner = { "ClientActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData[] = {
		{ "Comment", "/** List of all client beacon actors with active connections */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "List of all client beacon actors with active connections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors = { "ClientActors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHostObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams = {
		&AOnlineBeaconHostObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeaconHostObject()
	{
		if (!Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton, Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOnlineBeaconHostObject.OuterSingleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconHostObject>()
	{
		return AOnlineBeaconHostObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHostObject);
	AOnlineBeaconHostObject::~AOnlineBeaconHostObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOnlineBeaconHostObject, AOnlineBeaconHostObject::StaticClass, TEXT("AOnlineBeaconHostObject"), &Z_Registration_Info_UClass_AOnlineBeaconHostObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOnlineBeaconHostObject), 2820838467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_3594642891(TEXT("/Script/OnlineSubsystemUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconHostObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
