// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCollisionHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPhysicsCollisionHandler::StaticRegisterNativesUPhysicsCollisionHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsCollisionHandler);
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler_NoRegister()
	{
		return UPhysicsCollisionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsCollisionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactReFireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactReFireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImpactSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultImpactSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastImpactSoundTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastImpactSoundTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** How hard an impact must be to trigger effect/sound */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "How hard an impact must be to trigger effect/sound" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold = { "ImpactThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactThreshold), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Min time between effect/sound being triggered */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Min time between effect/sound being triggered" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay = { "ImpactReFireDelay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, ImpactReFireDelay), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData[] = {
		{ "Category", "Impact" },
		{ "Comment", "/** Sound to play  */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Sound to play" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound = { "DefaultImpactSound", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, DefaultImpactSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData[] = {
		{ "Comment", "/** Time since last impact sound */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsCollisionHandler.h" },
		{ "ToolTip", "Time since last impact sound" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime = { "LastImpactSoundTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsCollisionHandler, LastImpactSoundTime), METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_ImpactReFireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_DefaultImpactSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsCollisionHandler_Statics::NewProp_LastImpactSoundTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsCollisionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsCollisionHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams = {
		&UPhysicsCollisionHandler::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsCollisionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsCollisionHandler()
	{
		if (!Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton, Z_Construct_UClass_UPhysicsCollisionHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsCollisionHandler.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsCollisionHandler>()
	{
		return UPhysicsCollisionHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsCollisionHandler);
	UPhysicsCollisionHandler::~UPhysicsCollisionHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsCollisionHandler, UPhysicsCollisionHandler::StaticClass, TEXT("UPhysicsCollisionHandler"), &Z_Registration_Info_UClass_UPhysicsCollisionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsCollisionHandler), 505618456U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_4275734796(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsCollisionHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
