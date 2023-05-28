// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimSoftCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimSoftCollision() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMAnimEasingType();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimSoftCollisionType;
	static UEnum* ECRSimSoftCollisionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimSoftCollisionType"));
		}
		return Z_Registration_Info_UEnum_ECRSimSoftCollisionType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimSoftCollisionType>()
	{
		return ECRSimSoftCollisionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enumerators[] = {
		{ "ECRSimSoftCollisionType::Plane", (int64)ECRSimSoftCollisionType::Plane },
		{ "ECRSimSoftCollisionType::Sphere", (int64)ECRSimSoftCollisionType::Sphere },
		{ "ECRSimSoftCollisionType::Cone", (int64)ECRSimSoftCollisionType::Cone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enum_MetaDataParams[] = {
		{ "Cone.Name", "ECRSimSoftCollisionType::Cone" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "Plane.Name", "ECRSimSoftCollisionType::Plane" },
		{ "Sphere.Name", "ECRSimSoftCollisionType::Sphere" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ECRSimSoftCollisionType",
		"ECRSimSoftCollisionType",
		Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType()
	{
		if (!Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECRSimSoftCollisionType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimSoftCollision;
class UScriptStruct* FCRSimSoftCollision::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimSoftCollision.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimSoftCollision.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimSoftCollision, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimSoftCollision"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimSoftCollision.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimSoftCollision>()
{
	return FCRSimSoftCollision::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FalloffType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalloffType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FalloffType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInverted_MetaData[];
#endif
		static void NewProp_bInverted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInverted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimSoftCollision>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The world / global transform of the collisoin\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The world / global transform of the collisoin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The type of collision shape\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The type of collision shape" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, ShapeType), Z_Construct_UEnum_ControlRig_ECRSimSoftCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType_MetaData)) }; // 3507775989
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MinimumDistance_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The minimum distance for the collision.\n\x09 * If this is equal or higher than the maximum there's no falloff.\n\x09 * For a cone shape this represents the minimum angle in degrees.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The minimum distance for the collision.\nIf this is equal or higher than the maximum there's no falloff.\nFor a cone shape this represents the minimum angle in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MinimumDistance = { "MinimumDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, MinimumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MinimumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MinimumDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The maximum distance for the collision.\n\x09 * If this is equal or lower than the minimum there's no falloff.\n\x09 * For a cone shape this represents the maximum angle in degrees.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The maximum distance for the collision.\nIf this is equal or lower than the minimum there's no falloff.\nFor a cone shape this represents the maximum angle in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MaximumDistance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The type of falloff to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The type of falloff to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType = { "FalloffType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, FalloffType), Z_Construct_UEnum_RigVM_ERigVMAnimEasingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType_MetaData)) }; // 3365060979
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The strength of the collision force\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "The strength of the collision force" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimSoftCollision, Coefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Coefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Coefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * If set to true the collision volume will be inverted\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimSoftCollision.h" },
		{ "ToolTip", "If set to true the collision volume will be inverted" },
	};
#endif
	void Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_SetBit(void* Obj)
	{
		((FCRSimSoftCollision*)Obj)->bInverted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted = { "bInverted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCRSimSoftCollision), &Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MinimumDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_MaximumDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_FalloffType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_Coefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewProp_bInverted,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimSoftCollision",
		sizeof(FCRSimSoftCollision),
		alignof(FCRSimSoftCollision),
		Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimSoftCollision.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimSoftCollision.InnerSingleton, Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimSoftCollision.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::EnumInfo[] = {
		{ ECRSimSoftCollisionType_StaticEnum, TEXT("ECRSimSoftCollisionType"), &Z_Registration_Info_UEnum_ECRSimSoftCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3507775989U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::ScriptStructInfo[] = {
		{ FCRSimSoftCollision::StaticStruct, Z_Construct_UScriptStruct_FCRSimSoftCollision_Statics::NewStructOps, TEXT("CRSimSoftCollision"), &Z_Registration_Info_UScriptStruct_CRSimSoftCollision, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimSoftCollision), 3884990973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_2869443809(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimSoftCollision_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
