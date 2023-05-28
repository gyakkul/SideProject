// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BodySetupEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodySetupEnums() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECollisionTraceFlag;
	static UEnum* ECollisionTraceFlag_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("ECollisionTraceFlag"));
		}
		return Z_Registration_Info_UEnum_ECollisionTraceFlag.OuterSingleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<ECollisionTraceFlag>()
	{
		return ECollisionTraceFlag_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enumerators[] = {
		{ "CTF_UseDefault", (int64)CTF_UseDefault },
		{ "CTF_UseSimpleAndComplex", (int64)CTF_UseSimpleAndComplex },
		{ "CTF_UseSimpleAsComplex", (int64)CTF_UseSimpleAsComplex },
		{ "CTF_UseComplexAsSimple", (int64)CTF_UseComplexAsSimple },
		{ "CTF_MAX", (int64)CTF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CTF_MAX.Name", "CTF_MAX" },
		{ "CTF_UseComplexAsSimple.Comment", "/** Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.) */" },
		{ "CTF_UseComplexAsSimple.DisplayName", "Use Complex Collision As Simple" },
		{ "CTF_UseComplexAsSimple.Name", "CTF_UseComplexAsSimple" },
		{ "CTF_UseComplexAsSimple.ToolTip", "Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.)" },
		{ "CTF_UseDefault.Comment", "/** Use project physics settings (DefaultShapeComplexity) */" },
		{ "CTF_UseDefault.DisplayName", "Project Default" },
		{ "CTF_UseDefault.Name", "CTF_UseDefault" },
		{ "CTF_UseDefault.ToolTip", "Use project physics settings (DefaultShapeComplexity)" },
		{ "CTF_UseSimpleAndComplex.Comment", "/** Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries.*/" },
		{ "CTF_UseSimpleAndComplex.DisplayName", "Simple And Complex" },
		{ "CTF_UseSimpleAndComplex.Name", "CTF_UseSimpleAndComplex" },
		{ "CTF_UseSimpleAndComplex.ToolTip", "Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries." },
		{ "CTF_UseSimpleAsComplex.Comment", "/** Create only simple shapes. Use simple shapes for all scene queries and collision tests.*/" },
		{ "CTF_UseSimpleAsComplex.DisplayName", "Use Simple Collision As Complex" },
		{ "CTF_UseSimpleAsComplex.Name", "CTF_UseSimpleAsComplex" },
		{ "CTF_UseSimpleAsComplex.ToolTip", "Create only simple shapes. Use simple shapes for all scene queries and collision tests." },
		{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
		nullptr,
		"ECollisionTraceFlag",
		"ECollisionTraceFlag",
		Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag()
	{
		if (!Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton, Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECollisionTraceFlag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhysicsType;
	static UEnum* EPhysicsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EPhysicsType, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EPhysicsType"));
		}
		return Z_Registration_Info_UEnum_EPhysicsType.OuterSingleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EPhysicsType>()
	{
		return EPhysicsType_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enumerators[] = {
		{ "PhysType_Default", (int64)PhysType_Default },
		{ "PhysType_Kinematic", (int64)PhysType_Kinematic },
		{ "PhysType_Simulated", (int64)PhysType_Simulated },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
		{ "PhysType_Default.Comment", "/** Follow owner. */" },
		{ "PhysType_Default.DisplayName", "Default" },
		{ "PhysType_Default.Name", "PhysType_Default" },
		{ "PhysType_Default.ToolTip", "Follow owner." },
		{ "PhysType_Kinematic.Comment", "/** Do not follow owner, but make kinematic. */" },
		{ "PhysType_Kinematic.DisplayName", "Kinematic" },
		{ "PhysType_Kinematic.Name", "PhysType_Kinematic" },
		{ "PhysType_Kinematic.ToolTip", "Do not follow owner, but make kinematic." },
		{ "PhysType_Simulated.Comment", "/** Do not follow owner, but simulate. */" },
		{ "PhysType_Simulated.DisplayName", "Simulated" },
		{ "PhysType_Simulated.Name", "PhysType_Simulated" },
		{ "PhysType_Simulated.ToolTip", "Do not follow owner, but simulate." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
		nullptr,
		"EPhysicsType",
		"EPhysicsType",
		Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicsType()
	{
		if (!Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton, Z_Construct_UEnum_PhysicsCore_EPhysicsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhysicsType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBodyCollisionResponse;
	static UEnum* EBodyCollisionResponse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EBodyCollisionResponse"));
		}
		return Z_Registration_Info_UEnum_EBodyCollisionResponse.OuterSingleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EBodyCollisionResponse::Type>()
	{
		return EBodyCollisionResponse_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enumerators[] = {
		{ "EBodyCollisionResponse::BodyCollision_Enabled", (int64)EBodyCollisionResponse::BodyCollision_Enabled },
		{ "EBodyCollisionResponse::BodyCollision_Disabled", (int64)EBodyCollisionResponse::BodyCollision_Disabled },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enum_MetaDataParams[] = {
		{ "BodyCollision_Disabled.DisplayName", "Disabled" },
		{ "BodyCollision_Disabled.Name", "EBodyCollisionResponse::BodyCollision_Disabled" },
		{ "BodyCollision_Enabled.DisplayName", "Enabled" },
		{ "BodyCollision_Enabled.Name", "EBodyCollisionResponse::BodyCollision_Enabled" },
		{ "ModuleRelativePath", "Public/BodySetupEnums.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
		nullptr,
		"EBodyCollisionResponse",
		"EBodyCollisionResponse::Type",
		Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse()
	{
		if (!Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton, Z_Construct_UEnum_PhysicsCore_EBodyCollisionResponse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBodyCollisionResponse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h_Statics::EnumInfo[] = {
		{ ECollisionTraceFlag_StaticEnum, TEXT("ECollisionTraceFlag"), &Z_Registration_Info_UEnum_ECollisionTraceFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3043805667U) },
		{ EPhysicsType_StaticEnum, TEXT("EPhysicsType"), &Z_Registration_Info_UEnum_EPhysicsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3667393612U) },
		{ EBodyCollisionResponse_StaticEnum, TEXT("EBodyCollisionResponse"), &Z_Registration_Info_UEnum_EBodyCollisionResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3090169330U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h_113596838(TEXT("/Script/PhysicsCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_BodySetupEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
