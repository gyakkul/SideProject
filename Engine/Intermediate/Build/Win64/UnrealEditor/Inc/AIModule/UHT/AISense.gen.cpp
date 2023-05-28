// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISense.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionSystem_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense();
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAISenseNotifyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISense::StaticRegisterNativesUAISense()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense);
	UClass* Z_Construct_UClass_UAISense_NoRegister()
	{
		return UAISense::StaticClass();
	}
	struct Z_Construct_UClass_UAISense_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultExpirationAge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultExpirationAge;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NotifyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsNewPawnNotification_MetaData[];
#endif
		static void NewProp_bWantsNewPawnNotification_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsNewPawnNotification;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterAllPawnsAsSources_MetaData[];
#endif
		static void NewProp_bAutoRegisterAllPawnsAsSources_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterAllPawnsAsSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionSystemInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerceptionSystemInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISense_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** age past which stimulus of this sense are \"forgotten\". (DEPRECATED: This property will be removed in future versions. Use AISenseConfig::MaxAge instead.)*/" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "age past which stimulus of this sense are \"forgotten\". (DEPRECATED: This property will be removed in future versions. Use AISenseConfig::MaxAge instead.)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge = { "DefaultExpirationAge", nullptr, (EPropertyFlags)0x0020080000024015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense, DefaultExpirationAge), METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType = { "NotifyType", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense, NotifyType), Z_Construct_UEnum_AIModule_EAISenseNotifyType, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_MetaData)) }; // 87228147
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** whether this sense is interested in getting notified about new Pawns being spawned \n\x09 *\x09this can be used for example for automated sense sources registration */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "whether this sense is interested in getting notified about new Pawns being spawned\n    this can be used for example for automated sense sources registration" },
	};
#endif
	void Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_SetBit(void* Obj)
	{
		((UAISense*)Obj)->bWantsNewPawnNotification = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification = { "bWantsNewPawnNotification", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAISense), &Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** If true all newly spawned pawns will get auto registered as source for this sense. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
		{ "ToolTip", "If true all newly spawned pawns will get auto registered as source for this sense." },
	};
#endif
	void Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_SetBit(void* Obj)
	{
		((UAISense*)Obj)->bAutoRegisterAllPawnsAsSources = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources = { "bAutoRegisterAllPawnsAsSources", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAISense), &Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance = { "PerceptionSystemInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISense, PerceptionSystemInstance), Z_Construct_UClass_UAIPerceptionSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_DefaultExpirationAge,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_NotifyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_bWantsNewPawnNotification,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_bAutoRegisterAllPawnsAsSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Statics::NewProp_PerceptionSystemInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISense_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Statics::ClassParams = {
		&UAISense::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISense_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISense()
	{
		if (!Z_Registration_Info_UClass_UAISense.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense.OuterSingleton, Z_Construct_UClass_UAISense_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISense.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISense>()
	{
		return UAISense::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense);
	UAISense::~UAISense() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISense, UAISense::StaticClass, TEXT("UAISense"), &Z_Registration_Info_UClass_UAISense, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense), 452524452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_834824692(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
