// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PauseClothingSimulation() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_PauseClothingSimulation::StaticRegisterNativesUAnimNotify_PauseClothingSimulation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PauseClothingSimulation);
	UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_NoRegister()
	{
		return UAnimNotify_PauseClothingSimulation::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Pause Clothing Simulation" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PauseClothingSimulation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PauseClothingSimulation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams = {
		&UAnimNotify_PauseClothingSimulation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PauseClothingSimulation()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton, Z_Construct_UClass_UAnimNotify_PauseClothingSimulation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_PauseClothingSimulation>()
	{
		return UAnimNotify_PauseClothingSimulation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PauseClothingSimulation);
	UAnimNotify_PauseClothingSimulation::~UAnimNotify_PauseClothingSimulation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PauseClothingSimulation, UAnimNotify_PauseClothingSimulation::StaticClass, TEXT("UAnimNotify_PauseClothingSimulation"), &Z_Registration_Info_UClass_UAnimNotify_PauseClothingSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PauseClothingSimulation), 1535750302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_270113436(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PauseClothingSimulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
