// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LakeCollisionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLakeCollisionComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_ULakeCollisionComponent();
	WATER_API UClass* Z_Construct_UClass_ULakeCollisionComponent_NoRegister();
// End Cross Module References
	void ULakeCollisionComponent::StaticRegisterNativesULakeCollisionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULakeCollisionComponent);
	UClass* Z_Construct_UClass_ULakeCollisionComponent_NoRegister()
	{
		return ULakeCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULakeCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedBodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULakeCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULakeCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LakeCollisionComponent.h" },
		{ "ModuleRelativePath", "Public/LakeCollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/LakeCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0044800000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULakeCollisionComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_CachedBodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/LakeCollisionComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULakeCollisionComponent, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_BoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_BoxExtent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULakeCollisionComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_CachedBodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULakeCollisionComponent_Statics::NewProp_BoxExtent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULakeCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULakeCollisionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULakeCollisionComponent_Statics::ClassParams = {
		&ULakeCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULakeCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULakeCollisionComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULakeCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULakeCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULakeCollisionComponent()
	{
		if (!Z_Registration_Info_UClass_ULakeCollisionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULakeCollisionComponent.OuterSingleton, Z_Construct_UClass_ULakeCollisionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULakeCollisionComponent.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<ULakeCollisionComponent>()
	{
		return ULakeCollisionComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULakeCollisionComponent);
	ULakeCollisionComponent::~ULakeCollisionComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULakeCollisionComponent, ULakeCollisionComponent::StaticClass, TEXT("ULakeCollisionComponent"), &Z_Registration_Info_UClass_ULakeCollisionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULakeCollisionComponent), 3285811041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_281276850(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_LakeCollisionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
