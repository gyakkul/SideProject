// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableTypes() {}
// Cross Module References
	CHAOSFLESHENGINE_API UEnum* Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeformableExecutionModel;
	static UEnum* EDeformableExecutionModel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDeformableExecutionModel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDeformableExecutionModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("EDeformableExecutionModel"));
		}
		return Z_Registration_Info_UEnum_EDeformableExecutionModel.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UEnum* StaticEnum<EDeformableExecutionModel>()
	{
		return EDeformableExecutionModel_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enumerators[] = {
		{ "EDeformableExecutionModel::Chaos_Deformable_PrePhysics", (int64)EDeformableExecutionModel::Chaos_Deformable_PrePhysics },
		{ "EDeformableExecutionModel::Chaos_Deformable_DuringPhysics", (int64)EDeformableExecutionModel::Chaos_Deformable_DuringPhysics },
		{ "EDeformableExecutionModel::Chaos_Deformable_PostPhysics", (int64)EDeformableExecutionModel::Chaos_Deformable_PostPhysics },
		{ "EDeformableExecutionModel::Chaos_Max", (int64)EDeformableExecutionModel::Chaos_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Chaos_Deformable_DuringPhysics.DisplayName", "During Physics" },
		{ "Chaos_Deformable_DuringPhysics.Name", "EDeformableExecutionModel::Chaos_Deformable_DuringPhysics" },
		{ "Chaos_Deformable_PostPhysics.DisplayName", "After Physics" },
		{ "Chaos_Deformable_PostPhysics.Name", "EDeformableExecutionModel::Chaos_Deformable_PostPhysics" },
		{ "Chaos_Deformable_PrePhysics.DisplayName", "Before Physics" },
		{ "Chaos_Deformable_PrePhysics.Name", "EDeformableExecutionModel::Chaos_Deformable_PrePhysics" },
		{ "Chaos_Max.Comment", "//\n" },
		{ "Chaos_Max.Hidden", "" },
		{ "Chaos_Max.Name", "EDeformableExecutionModel::Chaos_Max" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		nullptr,
		"EDeformableExecutionModel",
		"EDeformableExecutionModel",
		Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel()
	{
		if (!Z_Registration_Info_UEnum_EDeformableExecutionModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeformableExecutionModel.InnerSingleton, Z_Construct_UEnum_ChaosFleshEngine_EDeformableExecutionModel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDeformableExecutionModel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h_Statics::EnumInfo[] = {
		{ EDeformableExecutionModel_StaticEnum, TEXT("EDeformableExecutionModel"), &Z_Registration_Info_UEnum_EDeformableExecutionModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 885276516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h_2971705805(TEXT("/Script/ChaosFleshEngine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
