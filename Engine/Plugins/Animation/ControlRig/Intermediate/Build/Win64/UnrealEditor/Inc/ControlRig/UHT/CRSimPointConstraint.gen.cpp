// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimPointConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointConstraint() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ECRSimConstraintType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECRSimConstraintType;
	static UEnum* ECRSimConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ECRSimConstraintType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ECRSimConstraintType"));
		}
		return Z_Registration_Info_UEnum_ECRSimConstraintType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ECRSimConstraintType>()
	{
		return ECRSimConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enumerators[] = {
		{ "ECRSimConstraintType::Distance", (int64)ECRSimConstraintType::Distance },
		{ "ECRSimConstraintType::DistanceFromA", (int64)ECRSimConstraintType::DistanceFromA },
		{ "ECRSimConstraintType::DistanceFromB", (int64)ECRSimConstraintType::DistanceFromB },
		{ "ECRSimConstraintType::Plane", (int64)ECRSimConstraintType::Plane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Distance.Name", "ECRSimConstraintType::Distance" },
		{ "DistanceFromA.Name", "ECRSimConstraintType::DistanceFromA" },
		{ "DistanceFromB.Name", "ECRSimConstraintType::DistanceFromB" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "Plane.Name", "ECRSimConstraintType::Plane" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ECRSimConstraintType",
		"ECRSimConstraintType",
		Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ECRSimConstraintType()
	{
		if (!Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton, Z_Construct_UEnum_ControlRig_ECRSimConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECRSimConstraintType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointConstraint;
class UScriptStruct* FCRSimPointConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointConstraint>()
{
	return FCRSimPointConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointConstraint>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * The type of the constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The type of the constraint" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointConstraint, Type), Z_Construct_UEnum_ControlRig_ECRSimConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_MetaData)) }; // 2557968550
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA_MetaData[] = {
		{ "Comment", "/**\n\x09 * The first point affected by this constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The first point affected by this constraint" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA = { "SubjectA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointConstraint, SubjectA), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB_MetaData[] = {
		{ "Comment", "/**\n\x09 * The (optional) second point affected by this constraint\n\x09 * This is currently only used for the distance constraint\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The (optional) second point affected by this constraint\nThis is currently only used for the distance constraint" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB = { "SubjectB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointConstraint, SubjectB), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA_MetaData[] = {
		{ "Comment", "/**\n\x09 * The first data member for the constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The first data member for the constraint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA = { "DataA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointConstraint, DataA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB_MetaData[] = {
		{ "Comment", "/**\n\x09 * The second data member for the constraint.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointConstraint.h" },
		{ "ToolTip", "The second data member for the constraint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB = { "DataB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointConstraint, DataB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_SubjectB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewProp_DataB,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimPointConstraint",
		sizeof(FCRSimPointConstraint),
		alignof(FCRSimPointConstraint),
		Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimPointConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::EnumInfo[] = {
		{ ECRSimConstraintType_StaticEnum, TEXT("ECRSimConstraintType"), &Z_Registration_Info_UEnum_ECRSimConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2557968550U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::ScriptStructInfo[] = {
		{ FCRSimPointConstraint::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointConstraint_Statics::NewStructOps, TEXT("CRSimPointConstraint"), &Z_Registration_Info_UScriptStruct_CRSimPointConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointConstraint), 2830395273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_2191949627(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointConstraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
