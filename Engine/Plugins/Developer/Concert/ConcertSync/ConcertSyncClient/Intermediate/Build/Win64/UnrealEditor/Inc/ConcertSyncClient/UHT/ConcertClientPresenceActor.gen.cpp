// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertClientPresenceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertClientPresenceActor() {}
// Cross Module References
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientPresenceActor();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientPresenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncClient();
// End Cross Module References
	void AConcertClientPresenceActor::StaticRegisterNativesAConcertClientPresenceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcertClientPresenceActor);
	UClass* Z_Construct_UClass_AConcertClientPresenceActor_NoRegister()
	{
		return AConcertClientPresenceActor::StaticClass();
	}
	struct Z_Construct_UClass_AConcertClientPresenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceDeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PresenceDeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresenceMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceTextComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresenceTextComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresenceMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PresenceMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcertClientPresenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A ConcertClientPresenceActor is a transient actor representing other client presences during a concert client session.\n */" },
		{ "IncludePath", "ConcertClientPresenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ConcertClientPresenceActor is a transient actor representing other client presences during a concert client session." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceDeviceType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/* The device type that this presence represent (i.e Oculus, Vive, Desktop) */" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ToolTip", "The device type that this presence represent (i.e Oculus, Vive, Desktop)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceDeviceType = { "PresenceDeviceType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientPresenceActor, PresenceDeviceType), METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceDeviceType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/** The camera mesh component to show visually where the camera is placed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ToolTip", "The camera mesh component to show visually where the camera is placed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMeshComponent = { "PresenceMeshComponent", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientPresenceActor, PresenceMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceTextComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/** The text render component to display the associated client's name */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ToolTip", "The text render component to display the associated client's name" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceTextComponent = { "PresenceTextComponent", nullptr, (EPropertyFlags)0x00240800000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientPresenceActor, PresenceTextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceTextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceTextComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMID_MetaData[] = {
		{ "Comment", "/** Dynamic material for the presence actor */" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the presence actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMID = { "PresenceMID", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientPresenceActor, PresenceMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_TextMID_MetaData[] = {
		{ "Comment", "/** Dynamic material for the presence text */" },
		{ "ModuleRelativePath", "Public/ConcertClientPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the presence text" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_TextMID = { "TextMID", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientPresenceActor, TextMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_TextMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_TextMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcertClientPresenceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceDeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceTextComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_PresenceMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientPresenceActor_Statics::NewProp_TextMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcertClientPresenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcertClientPresenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcertClientPresenceActor_Statics::ClassParams = {
		&AConcertClientPresenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcertClientPresenceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::PropPointers),
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AConcertClientPresenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientPresenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcertClientPresenceActor()
	{
		if (!Z_Registration_Info_UClass_AConcertClientPresenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcertClientPresenceActor.OuterSingleton, Z_Construct_UClass_AConcertClientPresenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConcertClientPresenceActor.OuterSingleton;
	}
	template<> CONCERTSYNCCLIENT_API UClass* StaticClass<AConcertClientPresenceActor>()
	{
		return AConcertClientPresenceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcertClientPresenceActor);
	AConcertClientPresenceActor::~AConcertClientPresenceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientPresenceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientPresenceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConcertClientPresenceActor, AConcertClientPresenceActor::StaticClass, TEXT("AConcertClientPresenceActor"), &Z_Registration_Info_UClass_AConcertClientPresenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcertClientPresenceActor), 4268757996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientPresenceActor_h_107854946(TEXT("/Script/ConcertSyncClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientPresenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientPresenceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
