// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/Movement/MassMovementTrait.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovementTrait() {}
// Cross Module References
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementTrait();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementTrait_NoRegister();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References
	void UMassMovementTrait::StaticRegisterNativesUMassMovementTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassMovementTrait);
	UClass* Z_Construct_UClass_UMassMovementTrait_NoRegister()
	{
		return UMassMovementTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassMovementTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Movement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassMovementTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovementTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Movement" },
		{ "IncludePath", "Movement/MassMovementTrait.h" },
		{ "ModuleRelativePath", "Public/Movement/MassMovementTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovementTrait_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Movement/MassMovementTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassMovementTrait_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassMovementTrait, Movement), Z_Construct_UScriptStruct_FMassMovementParameters, METADATA_PARAMS(Z_Construct_UClass_UMassMovementTrait_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementTrait_Statics::NewProp_Movement_MetaData)) }; // 2037809120
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassMovementTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassMovementTrait_Statics::NewProp_Movement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassMovementTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassMovementTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassMovementTrait_Statics::ClassParams = {
		&UMassMovementTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassMovementTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassMovementTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassMovementTrait()
	{
		if (!Z_Registration_Info_UClass_UMassMovementTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassMovementTrait.OuterSingleton, Z_Construct_UClass_UMassMovementTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassMovementTrait.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassMovementTrait>()
	{
		return UMassMovementTrait::StaticClass();
	}
	UMassMovementTrait::UMassMovementTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassMovementTrait);
	UMassMovementTrait::~UMassMovementTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassMovementTrait, UMassMovementTrait::StaticClass, TEXT("UMassMovementTrait"), &Z_Registration_Info_UClass_UMassMovementTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassMovementTrait), 899730555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_4186329135(TEXT("/Script/MassMovement"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Movement_MassMovementTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
