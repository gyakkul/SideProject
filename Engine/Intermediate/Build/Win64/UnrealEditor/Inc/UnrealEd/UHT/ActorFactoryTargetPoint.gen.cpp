// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryTargetPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryTargetPoint() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTargetPoint();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTargetPoint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryTargetPoint::StaticRegisterNativesUActorFactoryTargetPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryTargetPoint);
	UClass* Z_Construct_UClass_UActorFactoryTargetPoint_NoRegister()
	{
		return UActorFactoryTargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryTargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryTargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryTargetPoint_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryTargetPoint.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryTargetPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryTargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryTargetPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryTargetPoint_Statics::ClassParams = {
		&UActorFactoryTargetPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryTargetPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryTargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryTargetPoint()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryTargetPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryTargetPoint.OuterSingleton, Z_Construct_UClass_UActorFactoryTargetPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryTargetPoint.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryTargetPoint>()
	{
		return UActorFactoryTargetPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryTargetPoint);
	UActorFactoryTargetPoint::~UActorFactoryTargetPoint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryTargetPoint, UActorFactoryTargetPoint::StaticClass, TEXT("UActorFactoryTargetPoint"), &Z_Registration_Info_UClass_UActorFactoryTargetPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryTargetPoint), 490233304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_658268507(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTargetPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
