// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FoliageType_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_Actor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References
	void UFoliageType_Actor::StaticRegisterNativesUFoliageType_Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_Actor);
	UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister()
	{
		return UFoliageType_Actor::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldAttachToBaseComponent_MetaData[];
#endif
		static void NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldAttachToBaseComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshOnly_MetaData[];
#endif
		static void NewProp_bStaticMeshOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOnlyComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_StaticMeshOnlyComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoliageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_Actor.h" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_Actor, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj)
	{
		((UFoliageType_Actor*)Obj)->bShouldAttachToBaseComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent = { "bShouldAttachToBaseComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFoliageType_Actor), &Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
		{ "ToolTip", "If enabled, will place an instanced static mesh representation of this actor without placing an actual actor" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_SetBit(void* Obj)
	{
		((UFoliageType_Actor*)Obj)->bStaticMeshOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly = { "bStaticMeshOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFoliageType_Actor), &Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bStaticMeshOnly" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass = { "StaticMeshOnlyComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFoliageType_Actor, StaticMeshOnlyComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bStaticMeshOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_StaticMeshOnlyComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams = {
		&UFoliageType_Actor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_Actor()
	{
		if (!Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton, Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFoliageType_Actor.OuterSingleton;
	}
	template<> FOLIAGE_API UClass* StaticClass<UFoliageType_Actor>()
	{
		return UFoliageType_Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_Actor);
	UFoliageType_Actor::~UFoliageType_Actor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_Actor, UFoliageType_Actor::StaticClass, TEXT("UFoliageType_Actor"), &Z_Registration_Info_UClass_UFoliageType_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_Actor), 1371057117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_1485592770(TEXT("/Script/Foliage"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
