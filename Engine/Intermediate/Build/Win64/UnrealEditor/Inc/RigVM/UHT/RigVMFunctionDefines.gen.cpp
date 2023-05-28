// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/RigVMFunctionDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunctionDefines() {}
// Cross Module References
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMTransformSpace;
	static UEnum* ERigVMTransformSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMTransformSpace, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMTransformSpace"));
		}
		return Z_Registration_Info_UEnum_ERigVMTransformSpace.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMTransformSpace>()
	{
		return ERigVMTransformSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enumerators[] = {
		{ "ERigVMTransformSpace::LocalSpace", (int64)ERigVMTransformSpace::LocalSpace },
		{ "ERigVMTransformSpace::GlobalSpace", (int64)ERigVMTransformSpace::GlobalSpace },
		{ "ERigVMTransformSpace::Max", (int64)ERigVMTransformSpace::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enum_MetaDataParams[] = {
		{ "GlobalSpace.Comment", "/** Apply in rig space*/" },
		{ "GlobalSpace.Name", "ERigVMTransformSpace::GlobalSpace" },
		{ "GlobalSpace.ToolTip", "Apply in rig space" },
		{ "LocalSpace.Comment", "/** Apply in parent space */" },
		{ "LocalSpace.Name", "ERigVMTransformSpace::LocalSpace" },
		{ "LocalSpace.ToolTip", "Apply in parent space" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigVMTransformSpace::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunctionDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMTransformSpace",
		"ERigVMTransformSpace",
		Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace()
	{
		if (!Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMTransformSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMTransformSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigVMClampSpatialMode;
	static UEnum* ERigVMClampSpatialMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("ERigVMClampSpatialMode"));
		}
		return Z_Registration_Info_UEnum_ERigVMClampSpatialMode.OuterSingleton;
	}
	template<> RIGVM_API UEnum* StaticEnum<ERigVMClampSpatialMode::Type>()
	{
		return ERigVMClampSpatialMode_StaticEnum();
	}
	struct Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enumerators[] = {
		{ "ERigVMClampSpatialMode::Plane", (int64)ERigVMClampSpatialMode::Plane },
		{ "ERigVMClampSpatialMode::Cylinder", (int64)ERigVMClampSpatialMode::Cylinder },
		{ "ERigVMClampSpatialMode::Sphere", (int64)ERigVMClampSpatialMode::Sphere },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enum_MetaDataParams[] = {
		{ "Cylinder.Name", "ERigVMClampSpatialMode::Cylinder" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/RigVMFunctionDefines.h" },
		{ "Plane.Name", "ERigVMClampSpatialMode::Plane" },
		{ "Sphere.Name", "ERigVMClampSpatialMode::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		"ERigVMClampSpatialMode",
		"ERigVMClampSpatialMode::Type",
		Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode()
	{
		if (!Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton, Z_Construct_UEnum_RigVM_ERigVMClampSpatialMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigVMClampSpatialMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h_Statics::EnumInfo[] = {
		{ ERigVMTransformSpace_StaticEnum, TEXT("ERigVMTransformSpace"), &Z_Registration_Info_UEnum_ERigVMTransformSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1140043897U) },
		{ ERigVMClampSpatialMode_StaticEnum, TEXT("ERigVMClampSpatialMode"), &Z_Registration_Info_UEnum_ERigVMClampSpatialMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1269617596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h_629257012(TEXT("/Script/RigVM"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_RigVMFunctionDefines_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
