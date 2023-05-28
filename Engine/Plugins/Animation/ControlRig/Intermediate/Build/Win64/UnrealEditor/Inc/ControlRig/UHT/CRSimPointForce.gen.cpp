// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimPointForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointForce() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointForceType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimPointForceType;
	static UEnum* ECRSimPointForceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimPointForceType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimPointForceType"));
		}
		return Z_Registration_Info_UEnum_ECRSimPointForceType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimPointForceType>()
	{
		return ECRSimPointForceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enumerators[] = {
		{ "ECRSimPointForceType::Direction", (int64)ECRSimPointForceType::Direction },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enum_MetaDataParams[] = {
		{ "Direction.Name", "ECRSimPointForceType::Direction" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ECRSimPointForceType",
		"ECRSimPointForceType",
		Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ECRSimPointForceType()
	{
		if (!Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimPointForceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECRSimPointForceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointForce;
class UScriptStruct* FCRSimPointForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointForce, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointForce"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointForce.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointForce>()
{
	return FCRSimPointForce::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimPointForce_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ForceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ForceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Vector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Vector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[];
#endif
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointForce_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointForce>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The type of force.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The type of force." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType = { "ForceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointForce, ForceType), Z_Construct_UEnum_ControlRig_ECRSimPointForceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_MetaData)) }; // 1997166406
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The point / direction to use for the force.\n\x09 * This is a direction for direction based forces,\n\x09 * while this is a position for attractor / repel based forces.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The point / direction to use for the force.\nThis is a direction for direction based forces,\nwhile this is a position for attractor / repel based forces." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector = { "Vector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointForce, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The strength of the force (a multiplier for direction based forces)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "The strength of the force (a multiplier for direction based forces)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointForce, Coefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * If set to true the input vector will be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointForce.h" },
		{ "ToolTip", "If set to true the input vector will be normalized." },
	};
#endif
	void Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((FCRSimPointForce*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCRSimPointForce), &Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_ForceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Vector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_Coefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewProp_bNormalize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointForce_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimPointForce",
		sizeof(FCRSimPointForce),
		alignof(FCRSimPointForce),
		Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointForce_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointForce_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimPointForce.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::EnumInfo[] = {
		{ ECRSimPointForceType_StaticEnum, TEXT("ECRSimPointForceType"), &Z_Registration_Info_UEnum_ECRSimPointForceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1997166406U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::ScriptStructInfo[] = {
		{ FCRSimPointForce::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointForce_Statics::NewStructOps, TEXT("CRSimPointForce"), &Z_Registration_Info_UScriptStruct_CRSimPointForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointForce), 1073332189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_2038639274(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointForce_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
