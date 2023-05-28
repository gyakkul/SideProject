// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryBasicShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryBasicShape() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBasicShape();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBasicShape_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryStaticMesh();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryBasicShape::StaticRegisterNativesUActorFactoryBasicShape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryBasicShape);
	UClass* Z_Construct_UClass_UActorFactoryBasicShape_NoRegister()
	{
		return UActorFactoryBasicShape::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryBasicShape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryBasicShape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactoryStaticMesh,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryBasicShape.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryBasicShape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryBasicShape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryBasicShape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryBasicShape_Statics::ClassParams = {
		&UActorFactoryBasicShape::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryBasicShape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryBasicShape()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryBasicShape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryBasicShape.OuterSingleton, Z_Construct_UClass_UActorFactoryBasicShape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryBasicShape.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryBasicShape>()
	{
		return UActorFactoryBasicShape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryBasicShape);
	UActorFactoryBasicShape::~UActorFactoryBasicShape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryBasicShape, UActorFactoryBasicShape::StaticClass, TEXT("UActorFactoryBasicShape"), &Z_Registration_Info_UClass_UActorFactoryBasicShape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryBasicShape), 3711396949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_2711400262(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBasicShape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
