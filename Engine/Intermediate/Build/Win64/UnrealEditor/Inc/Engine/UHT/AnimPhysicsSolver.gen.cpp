// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimPhysicsSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPhysicsSolver() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysTwistAxis;
	static UEnum* AnimPhysTwistAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysTwistAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimPhysTwistAxis"));
		}
		return Z_Registration_Info_UEnum_AnimPhysTwistAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimPhysTwistAxis>()
	{
		return AnimPhysTwistAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enumerators[] = {
		{ "AnimPhysTwistAxis::AxisX", (int64)AnimPhysTwistAxis::AxisX },
		{ "AnimPhysTwistAxis::AxisY", (int64)AnimPhysTwistAxis::AxisY },
		{ "AnimPhysTwistAxis::AxisZ", (int64)AnimPhysTwistAxis::AxisZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enum_MetaDataParams[] = {
		{ "AxisX.Name", "AnimPhysTwistAxis::AxisX" },
		{ "AxisY.Name", "AnimPhysTwistAxis::AxisY" },
		{ "AxisZ.Name", "AnimPhysTwistAxis::AxisZ" },
		{ "Comment", "// Enum for picking current angular twist axis\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimPhysicsSolver.h" },
		{ "ToolTip", "Enum for picking current angular twist axis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"AnimPhysTwistAxis",
		"AnimPhysTwistAxis",
		Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton, Z_Construct_UEnum_Engine_AnimPhysTwistAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimPhysTwistAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysCollisionType;
	static UEnum* AnimPhysCollisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimPhysCollisionType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimPhysCollisionType"));
		}
		return Z_Registration_Info_UEnum_AnimPhysCollisionType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimPhysCollisionType>()
	{
		return AnimPhysCollisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enumerators[] = {
		{ "AnimPhysCollisionType::CoM", (int64)AnimPhysCollisionType::CoM },
		{ "AnimPhysCollisionType::CustomSphere", (int64)AnimPhysCollisionType::CustomSphere },
		{ "AnimPhysCollisionType::InnerSphere", (int64)AnimPhysCollisionType::InnerSphere },
		{ "AnimPhysCollisionType::OuterSphere", (int64)AnimPhysCollisionType::OuterSphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enum_MetaDataParams[] = {
		{ "CoM.DisplayName", "CoM" },
		{ "CoM.DisplayValue", "CoM" },
		{ "CoM.Name", "AnimPhysCollisionType::CoM" },
		{ "CoM.ToolTip", "Only limit the center of mass from crossing planes." },
		{ "CustomSphere.Name", "AnimPhysCollisionType::CustomSphere" },
		{ "CustomSphere.ToolTip", "Use the specified sphere radius to collide with planes." },
		{ "InnerSphere.Name", "AnimPhysCollisionType::InnerSphere" },
		{ "InnerSphere.ToolTip", "Use the largest sphere that fits entirely within the body extents to collide with planes." },
		{ "ModuleRelativePath", "Public/Animation/AnimPhysicsSolver.h" },
		{ "OuterSphere.Name", "AnimPhysCollisionType::OuterSphere" },
		{ "OuterSphere.ToolTip", "Use the smallest sphere that wholely contains the body extents to collide with planes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"AnimPhysCollisionType",
		"AnimPhysCollisionType",
		Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton, Z_Construct_UEnum_Engine_AnimPhysCollisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimPhysCollisionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h_Statics::EnumInfo[] = {
		{ AnimPhysTwistAxis_StaticEnum, TEXT("AnimPhysTwistAxis"), &Z_Registration_Info_UEnum_AnimPhysTwistAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1872604052U) },
		{ AnimPhysCollisionType_StaticEnum, TEXT("AnimPhysCollisionType"), &Z_Registration_Info_UEnum_AnimPhysCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2956383599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h_3458539684(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimPhysicsSolver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
