// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APhysicsVolume::StaticRegisterNativesAPhysicsVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhysicsVolume);
	UClass* Z_Construct_UClass_APhysicsVolume_NoRegister()
	{
		return APhysicsVolume::StaticClass();
	}
	struct Z_Construct_UClass_APhysicsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerminalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TerminalVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FluidFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FluidFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaterVolume_MetaData[];
#endif
		static void NewProp_bWaterVolume_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaterVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPhysicsOnContact_MetaData[];
#endif
		static void NewProp_bPhysicsOnContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPhysicsOnContact;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhysicsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * PhysicsVolume: A bounding volume which affects actor physics.\n * Each AActor is affected at any time by one PhysicsVolume.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/PhysicsVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "PhysicsVolume: A bounding volume which affects actor physics.\nEach AActor is affected at any time by one PhysicsVolume." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** Terminal velocity of pawns using CharacterMovement when falling. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "Terminal velocity of pawns using CharacterMovement when falling." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity = { "TerminalVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsVolume, TerminalVelocity), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** Determines which PhysicsVolume takes precedence if they overlap (higher number = higher priority). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "Determines which PhysicsVolume takes precedence if they overlap (higher number = higher priority)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsVolume, Priority), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** This property controls the amount of friction applied by the volume as pawns using CharacterMovement move through it. The higher this value, the harder it will feel to move through */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "This property controls the amount of friction applied by the volume as pawns using CharacterMovement move through it. The higher this value, the harder it will feel to move through" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction = { "FluidFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhysicsVolume, FluidFriction), METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData[] = {
		{ "Category", "CharacterMovement" },
		{ "Comment", "/** True if this volume contains a fluid like water */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "True if this volume contains a fluid like water" },
	};
#endif
	void Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_SetBit(void* Obj)
	{
		((APhysicsVolume*)Obj)->bWaterVolume = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume = { "bWaterVolume", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APhysicsVolume), &Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData[] = {
		{ "Category", "Volume" },
		{ "Comment", "/**\x09""By default, the origin of an AActor must be inside a PhysicsVolume for it to affect the actor. However if this flag is true, the other actor only has to touch the volume to be affected by it. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PhysicsVolume.h" },
		{ "ToolTip", "By default, the origin of an AActor must be inside a PhysicsVolume for it to affect the actor. However if this flag is true, the other actor only has to touch the volume to be affected by it." },
	};
#endif
	void Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_SetBit(void* Obj)
	{
		((APhysicsVolume*)Obj)->bPhysicsOnContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact = { "bPhysicsOnContact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APhysicsVolume), &Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_SetBit, METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhysicsVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_TerminalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_FluidFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bWaterVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhysicsVolume_Statics::NewProp_bPhysicsOnContact,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhysicsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhysicsVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhysicsVolume_Statics::ClassParams = {
		&APhysicsVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhysicsVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhysicsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhysicsVolume()
	{
		if (!Z_Registration_Info_UClass_APhysicsVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhysicsVolume.OuterSingleton, Z_Construct_UClass_APhysicsVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhysicsVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APhysicsVolume>()
	{
		return APhysicsVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhysicsVolume);
	APhysicsVolume::~APhysicsVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhysicsVolume, APhysicsVolume::StaticClass, TEXT("APhysicsVolume"), &Z_Registration_Info_UClass_APhysicsVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhysicsVolume), 3149541982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_252198630(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PhysicsVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
