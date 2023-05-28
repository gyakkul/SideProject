// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationObjectBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ANavigationObjectBase::StaticRegisterNativesANavigationObjectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavigationObjectBase);
	UClass* Z_Construct_UClass_ANavigationObjectBase_NoRegister()
	{
		return ANavigationObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_ANavigationObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoodSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GoodSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BadSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BadSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPIEPlayerStart_MetaData[];
#endif
		static void NewProp_bIsPIEPlayerStart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPIEPlayerStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavigationObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Lighting LightColor Force" },
		{ "IncludePath", "Engine/NavigationObjectBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationObjectBase, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData[] = {
		{ "Comment", "/** Normal editor sprite. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Normal editor sprite." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite = { "GoodSprite", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationObjectBase, GoodSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData[] = {
		{ "Comment", "/** Used to draw bad collision intersection in editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "Used to draw bad collision intersection in editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite = { "BadSprite", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavigationObjectBase, BadSprite), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData[] = {
		{ "Comment", "/** True if this nav point was spawned to be a PIE player start. */" },
		{ "ModuleRelativePath", "Classes/Engine/NavigationObjectBase.h" },
		{ "ToolTip", "True if this nav point was spawned to be a PIE player start." },
	};
#endif
	void Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit(void* Obj)
	{
		((ANavigationObjectBase*)Obj)->bIsPIEPlayerStart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart = { "bIsPIEPlayerStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavigationObjectBase), &Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_CapsuleComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_GoodSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_BadSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavigationObjectBase_Statics::NewProp_bIsPIEPlayerStart,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavigationObjectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(ANavigationObjectBase, INavAgentInterface), false },  // 4068322959
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavigationObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavigationObjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams = {
		&ANavigationObjectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavigationObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavigationObjectBase()
	{
		if (!Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton, Z_Construct_UClass_ANavigationObjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavigationObjectBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ANavigationObjectBase>()
	{
		return ANavigationObjectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavigationObjectBase);
	ANavigationObjectBase::~ANavigationObjectBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavigationObjectBase, ANavigationObjectBase::StaticClass, TEXT("ANavigationObjectBase"), &Z_Registration_Info_UClass_ANavigationObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavigationObjectBase), 4284449105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_1019093427(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_NavigationObjectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
