// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PainCausingVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePainCausingVolume() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume();
	ENGINE_API UClass* Z_Construct_UClass_APainCausingVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APainCausingVolume::StaticRegisterNativesAPainCausingVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APainCausingVolume);
	UClass* Z_Construct_UClass_APainCausingVolume_NoRegister()
	{
		return APainCausingVolume::StaticClass();
	}
	struct Z_Construct_UClass_APainCausingVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPainCausing_MetaData[];
#endif
		static void NewProp_bPainCausing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPainCausing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamagePerSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamagePerSec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DamageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PainInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PainInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEntryPain_MetaData[];
#endif
		static void NewProp_bEntryPain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEntryPain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BACKUP_bPainCausing_MetaData[];
#endif
		static void NewProp_BACKUP_bPainCausing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BACKUP_bPainCausing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageInstigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DamageInstigator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APainCausingVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Volume that causes damage over time to any Actor that overlaps its collision.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "GameFramework/PainCausingVolume.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Volume that causes damage over time to any Actor that overlaps its collision." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Whether volume currently causes damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Whether volume currently causes damage." },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->bPainCausing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing = { "bPainCausing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Damage done per second to actors in this volume when bPainCausing=true */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Damage done per second to actors in this volume when bPainCausing=true" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec = { "DamagePerSec", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APainCausingVolume, DamagePerSec), METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** Type of damage done */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Type of damage done" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType = { "DamageType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APainCausingVolume, DamageType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** If pain causing, time between damage applications. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "If pain causing, time between damage applications." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval = { "PainInterval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APainCausingVolume, PainInterval), METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData[] = {
		{ "Category", "PainCausingVolume" },
		{ "Comment", "/** if bPainCausing, cause pain when something enters the volume in addition to damage each second */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "if bPainCausing, cause pain when something enters the volume in addition to damage each second" },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->bEntryPain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain = { "bEntryPain", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData[] = {
		{ "Comment", "/** Checkpointed bPainCausing value */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Checkpointed bPainCausing value" },
	};
#endif
	void Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit(void* Obj)
	{
		((APainCausingVolume*)Obj)->BACKUP_bPainCausing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing = { "BACKUP_bPainCausing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APainCausingVolume), &Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData[] = {
		{ "Comment", "/** Controller that gets credit for any damage caused by this volume */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PainCausingVolume.h" },
		{ "ToolTip", "Controller that gets credit for any damage caused by this volume" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator = { "DamageInstigator", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APainCausingVolume, DamageInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APainCausingVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bPainCausing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamagePerSec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_PainInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_bEntryPain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_BACKUP_bPainCausing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APainCausingVolume_Statics::NewProp_DamageInstigator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APainCausingVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APainCausingVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APainCausingVolume_Statics::ClassParams = {
		&APainCausingVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APainCausingVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APainCausingVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APainCausingVolume()
	{
		if (!Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton, Z_Construct_UClass_APainCausingVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APainCausingVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APainCausingVolume>()
	{
		return APainCausingVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APainCausingVolume);
	APainCausingVolume::~APainCausingVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APainCausingVolume, APainCausingVolume::StaticClass, TEXT("APainCausingVolume"), &Z_Registration_Info_UClass_APainCausingVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APainCausingVolume), 2316176547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_1526569017(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PainCausingVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
