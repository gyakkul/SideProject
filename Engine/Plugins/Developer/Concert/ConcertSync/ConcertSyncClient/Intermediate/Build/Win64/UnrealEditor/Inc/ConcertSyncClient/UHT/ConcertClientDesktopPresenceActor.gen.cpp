// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertClientDesktopPresenceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertClientDesktopPresenceActor() {}
// Cross Module References
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientDesktopPresenceActor();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientDesktopPresenceActor_NoRegister();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientPresenceActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncClient();
// End Cross Module References
	void AConcertClientDesktopPresenceActor::StaticRegisterNativesAConcertClientDesktopPresenceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcertClientDesktopPresenceActor);
	UClass* Z_Construct_UClass_AConcertClientDesktopPresenceActor_NoRegister()
	{
		return AConcertClientDesktopPresenceActor::StaticClass();
	}
	struct Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesktopMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DesktopMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserPointer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserPointer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserCoreMid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserCoreMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMovingCamera_MetaData[];
#endif
		static void NewProp_bMovingCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMovingCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastEndPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastEndPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLaserVisible_MetaData[];
#endif
		static void NewProp_bIsLaserVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLaserVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AConcertClientPresenceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * A AConcertClientDesktopPresenceActor is a child of AConcertClientPresenceActor that is used to represent users in desktop \n  */" },
		{ "IncludePath", "ConcertClientDesktopPresenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
		{ "ToolTip", "A AConcertClientDesktopPresenceActor is a child of AConcertClientPresenceActor that is used to represent users in desktop" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_DesktopMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/** The camera mesh component to show visually where the camera is placed */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
		{ "ToolTip", "The camera mesh component to show visually where the camera is placed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_DesktopMeshComponent = { "DesktopMeshComponent", nullptr, (EPropertyFlags)0x00440000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientDesktopPresenceActor, DesktopMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_DesktopMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_DesktopMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserPointer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Rendering" },
		{ "Comment", "/** Spline mesh representing laser */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
		{ "ToolTip", "Spline mesh representing laser" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserPointer = { "LaserPointer", nullptr, (EPropertyFlags)0x00440000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientDesktopPresenceActor, LaserPointer), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserPointer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserPointer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserMid_MetaData[] = {
		{ "Comment", "/** Dynamic material for the laser */" },
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the laser" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserMid = { "LaserMid", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientDesktopPresenceActor, LaserMid), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserMid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserMid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserCoreMid_MetaData[] = {
		{ "Comment", "/** Dynamic material for the laser */" },
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the laser" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserCoreMid = { "LaserCoreMid", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientDesktopPresenceActor, LaserCoreMid), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserCoreMid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserCoreMid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera_SetBit(void* Obj)
	{
		((AConcertClientDesktopPresenceActor*)Obj)->bMovingCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera = { "bMovingCamera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientDesktopPresenceActor), &Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LastEndPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LastEndPoint = { "LastEndPoint", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientDesktopPresenceActor, LastEndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LastEndPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LastEndPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientDesktopPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible_SetBit(void* Obj)
	{
		((AConcertClientDesktopPresenceActor*)Obj)->bIsLaserVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible = { "bIsLaserVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientDesktopPresenceActor), &Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_DesktopMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserPointer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserMid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LaserCoreMid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bMovingCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_LastEndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::NewProp_bIsLaserVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcertClientDesktopPresenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::ClassParams = {
		&AConcertClientDesktopPresenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::PropPointers),
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcertClientDesktopPresenceActor()
	{
		if (!Z_Registration_Info_UClass_AConcertClientDesktopPresenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcertClientDesktopPresenceActor.OuterSingleton, Z_Construct_UClass_AConcertClientDesktopPresenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConcertClientDesktopPresenceActor.OuterSingleton;
	}
	template<> CONCERTSYNCCLIENT_API UClass* StaticClass<AConcertClientDesktopPresenceActor>()
	{
		return AConcertClientDesktopPresenceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcertClientDesktopPresenceActor);
	AConcertClientDesktopPresenceActor::~AConcertClientDesktopPresenceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConcertClientDesktopPresenceActor, AConcertClientDesktopPresenceActor::StaticClass, TEXT("AConcertClientDesktopPresenceActor"), &Z_Registration_Info_UClass_AConcertClientDesktopPresenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcertClientDesktopPresenceActor), 3156682221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_3490185920(TEXT("/Script/ConcertSyncClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientDesktopPresenceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
