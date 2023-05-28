// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Chaos/Deformable/ChaosDeformableSolverProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverProxy() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ChaosDeformableSimSpace;
	static UEnum* ChaosDeformableSimSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ChaosDeformableSimSpace"));
		}
		return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<ChaosDeformableSimSpace>()
	{
		return ChaosDeformableSimSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enumerators[] = {
		{ "World", (int64)World },
		{ "ComponentXf", (int64)ComponentXf },
		{ "Bone", (int64)Bone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enum_MetaDataParams[] = {
		{ "Bone.Comment", "// Component fails on Mac\n" },
		{ "Bone.DisplayName", "Bone" },
		{ "Bone.Name", "Bone" },
		{ "Bone.ToolTip", "Component fails on Mac" },
		{ "Comment", "/**\n* Supported simulation spaces for the ChaosDeformable solver.\n*/" },
		{ "ComponentXf.DisplayName", "Component" },
		{ "ComponentXf.Name", "ComponentXf" },
		{ "ModuleRelativePath", "Public/Chaos/Deformable/ChaosDeformableSolverProxy.h" },
		{ "ToolTip", "Supported simulation spaces for the ChaosDeformable solver." },
		{ "World.DisplayName", "World" },
		{ "World.Name", "World" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"ChaosDeformableSimSpace",
		"ChaosDeformableSimSpace",
		Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace()
	{
		if (!Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton, Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ChaosDeformableSimSpace.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics::EnumInfo[] = {
		{ ChaosDeformableSimSpace_StaticEnum, TEXT("ChaosDeformableSimSpace"), &Z_Registration_Info_UEnum_ChaosDeformableSimSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 35828405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_3280141581(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Chaos_Deformable_ChaosDeformableSolverProxy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
