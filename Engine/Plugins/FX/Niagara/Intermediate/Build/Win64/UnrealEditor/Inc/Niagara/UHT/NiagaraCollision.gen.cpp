// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraCollision() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraCollisionMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraCollisionMode;
	static UEnum* ENiagaraCollisionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCollisionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraCollisionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraCollisionMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraCollisionMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCollisionMode>()
	{
		return ENiagaraCollisionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enumerators[] = {
		{ "ENiagaraCollisionMode::None", (int64)ENiagaraCollisionMode::None },
		{ "ENiagaraCollisionMode::SceneGeometry", (int64)ENiagaraCollisionMode::SceneGeometry },
		{ "ENiagaraCollisionMode::DepthBuffer", (int64)ENiagaraCollisionMode::DepthBuffer },
		{ "ENiagaraCollisionMode::DistanceField", (int64)ENiagaraCollisionMode::DistanceField },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enum_MetaDataParams[] = {
		{ "DepthBuffer.Name", "ENiagaraCollisionMode::DepthBuffer" },
		{ "DistanceField.Name", "ENiagaraCollisionMode::DistanceField" },
		{ "ModuleRelativePath", "Classes/NiagaraCollision.h" },
		{ "None.Name", "ENiagaraCollisionMode::None" },
		{ "SceneGeometry.Name", "ENiagaraCollisionMode::SceneGeometry" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraCollisionMode",
		"ENiagaraCollisionMode",
		Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraCollisionMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraCollisionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraCollisionMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraCollisionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraCollisionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h_Statics::EnumInfo[] = {
		{ ENiagaraCollisionMode_StaticEnum, TEXT("ENiagaraCollisionMode"), &Z_Registration_Info_UEnum_ENiagaraCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 9796567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h_902884180(TEXT("/Script/Niagara"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
