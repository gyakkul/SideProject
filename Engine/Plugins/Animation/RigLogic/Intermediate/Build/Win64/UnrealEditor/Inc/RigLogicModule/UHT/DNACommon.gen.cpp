// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DNACommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNACommon() {}
// Cross Module References
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EActivationFunction();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EArchetype();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EDirection();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EDNADataLayer();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_EGender();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERotationUnit();
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationUnit();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FCoordinateSystem();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureCoordinate();
	RIGLOGICMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FVertexLayout();
	UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArchetype;
	static UEnum* EArchetype_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EArchetype.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EArchetype.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EArchetype, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EArchetype"));
		}
		return Z_Registration_Info_UEnum_EArchetype.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<EArchetype>()
	{
		return EArchetype_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_EArchetype_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enumerators[] = {
		{ "EArchetype::Asian", (int64)EArchetype::Asian },
		{ "EArchetype::Black", (int64)EArchetype::Black },
		{ "EArchetype::Caucasian", (int64)EArchetype::Caucasian },
		{ "EArchetype::Hispanic", (int64)EArchetype::Hispanic },
		{ "EArchetype::Alien", (int64)EArchetype::Alien },
		{ "EArchetype::Other", (int64)EArchetype::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enum_MetaDataParams[] = {
		{ "Alien.Name", "EArchetype::Alien" },
		{ "Asian.Name", "EArchetype::Asian" },
		{ "Black.Name", "EArchetype::Black" },
		{ "BlueprintType", "true" },
		{ "Caucasian.Name", "EArchetype::Caucasian" },
		{ "Hispanic.Name", "EArchetype::Hispanic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Other.Name", "EArchetype::Other" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"EArchetype",
		"EArchetype",
		Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_EArchetype()
	{
		if (!Z_Registration_Info_UEnum_EArchetype.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArchetype.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EArchetype_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EArchetype.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGender;
	static UEnum* EGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EGender, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EGender"));
		}
		return Z_Registration_Info_UEnum_EGender.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<EGender>()
	{
		return EGender_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_EGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enumerators[] = {
		{ "EGender::Male", (int64)EGender::Male },
		{ "EGender::Female", (int64)EGender::Female },
		{ "EGender::Other", (int64)EGender::Other },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Female.Name", "EGender::Female" },
		{ "Male.Name", "EGender::Male" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Other.Name", "EGender::Other" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"EGender",
		"EGender",
		Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EGender_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_EGender()
	{
		if (!Z_Registration_Info_UEnum_EGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGender.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETranslationUnit;
	static UEnum* ETranslationUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ETranslationUnit, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ETranslationUnit"));
		}
		return Z_Registration_Info_UEnum_ETranslationUnit.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<ETranslationUnit>()
	{
		return ETranslationUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enumerators[] = {
		{ "ETranslationUnit::CM", (int64)ETranslationUnit::CM },
		{ "ETranslationUnit::M", (int64)ETranslationUnit::M },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CM.Name", "ETranslationUnit::CM" },
		{ "M.Name", "ETranslationUnit::M" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"ETranslationUnit",
		"ETranslationUnit",
		Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_ETranslationUnit()
	{
		if (!Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ETranslationUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETranslationUnit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERotationUnit;
	static UEnum* ERotationUnit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERotationUnit, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERotationUnit"));
		}
		return Z_Registration_Info_UEnum_ERotationUnit.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERotationUnit>()
	{
		return ERotationUnit_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enumerators[] = {
		{ "ERotationUnit::Degrees", (int64)ERotationUnit::Degrees },
		{ "ERotationUnit::Radians", (int64)ERotationUnit::Radians },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Degrees.Name", "ERotationUnit::Degrees" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Radians.Name", "ERotationUnit::Radians" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"ERotationUnit",
		"ERotationUnit",
		Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_ERotationUnit()
	{
		if (!Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERotationUnit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERotationUnit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDirection;
	static UEnum* EDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDirection, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EDirection"));
		}
		return Z_Registration_Info_UEnum_EDirection.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDirection>()
	{
		return EDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_EDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enumerators[] = {
		{ "EDirection::Left", (int64)EDirection::Left },
		{ "EDirection::Right", (int64)EDirection::Right },
		{ "EDirection::Up", (int64)EDirection::Up },
		{ "EDirection::Down", (int64)EDirection::Down },
		{ "EDirection::Front", (int64)EDirection::Front },
		{ "EDirection::Back", (int64)EDirection::Back },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EDirection::Back" },
		{ "BlueprintType", "true" },
		{ "Down.Name", "EDirection::Down" },
		{ "Front.Name", "EDirection::Front" },
		{ "Left.Name", "EDirection::Left" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "Right.Name", "EDirection::Right" },
		{ "Up.Name", "EDirection::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"EDirection",
		"EDirection",
		Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_EDirection()
	{
		if (!Z_Registration_Info_UEnum_EDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDirection.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDNADataLayer;
	static UEnum* EDNADataLayer_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EDNADataLayer, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EDNADataLayer"));
		}
		return Z_Registration_Info_UEnum_EDNADataLayer.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<EDNADataLayer>()
	{
		return EDNADataLayer_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enumerators[] = {
		{ "EDNADataLayer::None", (int64)EDNADataLayer::None },
		{ "EDNADataLayer::Descriptor", (int64)EDNADataLayer::Descriptor },
		{ "EDNADataLayer::Definition", (int64)EDNADataLayer::Definition },
		{ "EDNADataLayer::Behavior", (int64)EDNADataLayer::Behavior },
		{ "EDNADataLayer::Geometry", (int64)EDNADataLayer::Geometry },
		{ "EDNADataLayer::GeometryWithoutBlendShapes", (int64)EDNADataLayer::GeometryWithoutBlendShapes },
		{ "EDNADataLayer::MachineLearnedBehavior", (int64)EDNADataLayer::MachineLearnedBehavior },
		{ "EDNADataLayer::All", (int64)EDNADataLayer::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "// Implicitly loads Definition\n" },
		{ "All.Name", "EDNADataLayer::All" },
		{ "All.ToolTip", "Implicitly loads Definition" },
		{ "Behavior.Comment", "// Implicitly loads Descriptor\n" },
		{ "Behavior.Name", "EDNADataLayer::Behavior" },
		{ "Behavior.ToolTip", "Implicitly loads Descriptor" },
		{ "BlueprintType", "true" },
		{ "Definition.Name", "EDNADataLayer::Definition" },
		{ "Descriptor.Name", "EDNADataLayer::Descriptor" },
		{ "Geometry.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "Geometry.Name", "EDNADataLayer::Geometry" },
		{ "Geometry.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "GeometryWithoutBlendShapes.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "GeometryWithoutBlendShapes.Name", "EDNADataLayer::GeometryWithoutBlendShapes" },
		{ "GeometryWithoutBlendShapes.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "MachineLearnedBehavior.Comment", "// Implicitly loads Descriptor and Definition\n" },
		{ "MachineLearnedBehavior.Name", "EDNADataLayer::MachineLearnedBehavior" },
		{ "MachineLearnedBehavior.ToolTip", "Implicitly loads Descriptor and Definition" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "None.Name", "EDNADataLayer::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"EDNADataLayer",
		"EDNADataLayer",
		Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_EDNADataLayer()
	{
		if (!Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EDNADataLayer_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDNADataLayer.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActivationFunction;
	static UEnum* EActivationFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_EActivationFunction, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("EActivationFunction"));
		}
		return Z_Registration_Info_UEnum_EActivationFunction.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<EActivationFunction>()
	{
		return EActivationFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enumerators[] = {
		{ "EActivationFunction::Linear", (int64)EActivationFunction::Linear },
		{ "EActivationFunction::ReLU", (int64)EActivationFunction::ReLU },
		{ "EActivationFunction::LeakyReLU", (int64)EActivationFunction::LeakyReLU },
		{ "EActivationFunction::Tanh", (int64)EActivationFunction::Tanh },
		{ "EActivationFunction::Sigmoid", (int64)EActivationFunction::Sigmoid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LeakyReLU.Name", "EActivationFunction::LeakyReLU" },
		{ "Linear.Name", "EActivationFunction::Linear" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
		{ "ReLU.Name", "EActivationFunction::ReLU" },
		{ "Sigmoid.Name", "EActivationFunction::Sigmoid" },
		{ "Tanh.Name", "EActivationFunction::Tanh" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"EActivationFunction",
		"EActivationFunction",
		Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_EActivationFunction()
	{
		if (!Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton, Z_Construct_UEnum_RigLogicModule_EActivationFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActivationFunction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CoordinateSystem;
class UScriptStruct* FCoordinateSystem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoordinateSystem, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("CoordinateSystem"));
	}
	return Z_Registration_Info_UScriptStruct_CoordinateSystem.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FCoordinateSystem>()
{
	return FCoordinateSystem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCoordinateSystem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_XAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_XAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_YAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_YAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ZAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ZAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinateSystem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoordinateSystem>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis = { "XAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoordinateSystem, XAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_MetaData)) }; // 2125776145
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis = { "YAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoordinateSystem, YAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_MetaData)) }; // 2125776145
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis = { "ZAxis", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCoordinateSystem, ZAxis), Z_Construct_UEnum_RigLogicModule_EDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_MetaData)) }; // 2125776145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_XAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_YAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewProp_ZAxis,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoordinateSystem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		&NewStructOps,
		"CoordinateSystem",
		sizeof(FCoordinateSystem),
		alignof(FCoordinateSystem),
		Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoordinateSystem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCoordinateSystem()
	{
		if (!Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton, Z_Construct_UScriptStruct_FCoordinateSystem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CoordinateSystem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping;
class UScriptStruct* FMeshBlendShapeChannelMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("MeshBlendShapeChannelMapping"));
	}
	return Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FMeshBlendShapeChannelMapping>()
{
	return FMeshBlendShapeChannelMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeChannelIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BlendShapeChannelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshBlendShapeChannelMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBlendShapeChannelMapping, MeshIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex = { "BlendShapeChannelIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshBlendShapeChannelMapping, BlendShapeChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_MeshIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewProp_BlendShapeChannelIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		&NewStructOps,
		"MeshBlendShapeChannelMapping",
		sizeof(FMeshBlendShapeChannelMapping),
		alignof(FMeshBlendShapeChannelMapping),
		Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton, Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureCoordinate;
class UScriptStruct* FTextureCoordinate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureCoordinate, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("TextureCoordinate"));
	}
	return Z_Registration_Info_UScriptStruct_TextureCoordinate.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FTextureCoordinate>()
{
	return FTextureCoordinate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureCoordinate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_U_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_U;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_V_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCoordinate_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureCoordinate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureCoordinate, U), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureCoordinate, V), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_U,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewProp_V,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureCoordinate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		&NewStructOps,
		"TextureCoordinate",
		sizeof(FTextureCoordinate),
		alignof(FTextureCoordinate),
		Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureCoordinate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureCoordinate()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton, Z_Construct_UScriptStruct_FTextureCoordinate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureCoordinate.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexLayout;
class UScriptStruct* FVertexLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexLayout, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("VertexLayout"));
	}
	return Z_Registration_Info_UScriptStruct_VertexLayout.OuterSingleton;
}
template<> RIGLOGICMODULE_API UScriptStruct* StaticStruct<FVertexLayout>()
{
	return FVertexLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Normal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexLayout_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexLayout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVertexLayout, Position), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate = { "TextureCoordinate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVertexLayout, TextureCoordinate), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "RigLogic" },
		{ "ModuleRelativePath", "Public/DNACommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVertexLayout, Normal), METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_TextureCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVertexLayout_Statics::NewProp_Normal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		&NewStructOps,
		"VertexLayout",
		sizeof(FVertexLayout),
		alignof(FVertexLayout),
		Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton, Z_Construct_UScriptStruct_FVertexLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexLayout.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::EnumInfo[] = {
		{ EArchetype_StaticEnum, TEXT("EArchetype"), &Z_Registration_Info_UEnum_EArchetype, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 104689238U) },
		{ EGender_StaticEnum, TEXT("EGender"), &Z_Registration_Info_UEnum_EGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1779097382U) },
		{ ETranslationUnit_StaticEnum, TEXT("ETranslationUnit"), &Z_Registration_Info_UEnum_ETranslationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3827723330U) },
		{ ERotationUnit_StaticEnum, TEXT("ERotationUnit"), &Z_Registration_Info_UEnum_ERotationUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3686938738U) },
		{ EDirection_StaticEnum, TEXT("EDirection"), &Z_Registration_Info_UEnum_EDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2125776145U) },
		{ EDNADataLayer_StaticEnum, TEXT("EDNADataLayer"), &Z_Registration_Info_UEnum_EDNADataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 7275564U) },
		{ EActivationFunction_StaticEnum, TEXT("EActivationFunction"), &Z_Registration_Info_UEnum_EActivationFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 851941968U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::ScriptStructInfo[] = {
		{ FCoordinateSystem::StaticStruct, Z_Construct_UScriptStruct_FCoordinateSystem_Statics::NewStructOps, TEXT("CoordinateSystem"), &Z_Registration_Info_UScriptStruct_CoordinateSystem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoordinateSystem), 3012478425U) },
		{ FMeshBlendShapeChannelMapping::StaticStruct, Z_Construct_UScriptStruct_FMeshBlendShapeChannelMapping_Statics::NewStructOps, TEXT("MeshBlendShapeChannelMapping"), &Z_Registration_Info_UScriptStruct_MeshBlendShapeChannelMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshBlendShapeChannelMapping), 3801669820U) },
		{ FTextureCoordinate::StaticStruct, Z_Construct_UScriptStruct_FTextureCoordinate_Statics::NewStructOps, TEXT("TextureCoordinate"), &Z_Registration_Info_UScriptStruct_TextureCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureCoordinate), 3887326156U) },
		{ FVertexLayout::StaticStruct, Z_Construct_UScriptStruct_FVertexLayout_Statics::NewStructOps, TEXT("VertexLayout"), &Z_Registration_Info_UScriptStruct_VertexLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexLayout), 1528706375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_3125770415(TEXT("/Script/RigLogicModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_DNACommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
