// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovementTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyle();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleParameters();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleRef();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovementStyleRef;
class UScriptStruct* FMassMovementStyleRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovementStyleRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovementStyleRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovementStyleRef, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassMovementStyleRef"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovementStyleRef.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassMovementStyleRef>()
{
	return FMassMovementStyleRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Reference to movement style in MassMovementSettings. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Reference to movement style in MassMovementSettings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovementStyleRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleRef, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleRef, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		nullptr,
		&NewStructOps,
		"MassMovementStyleRef",
		sizeof(FMassMovementStyleRef),
		alignof(FMassMovementStyleRef),
		Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleRef()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovementStyleRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovementStyleRef.InnerSingleton, Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovementStyleRef.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovementStyle;
class UScriptStruct* FMassMovementStyle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovementStyle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovementStyle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovementStyle, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassMovementStyle"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovementStyle.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassMovementStyle>()
{
	return FMassMovementStyle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovementStyle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes movement style name. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Describes movement style name." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovementStyle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyle, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyle, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovementStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovementStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		nullptr,
		&NewStructOps,
		"MassMovementStyle",
		sizeof(FMassMovementStyle),
		alignof(FMassMovementStyle),
		Z_Construct_UScriptStruct_FMassMovementStyle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovementStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovementStyle.InnerSingleton, Z_Construct_UScriptStruct_FMassMovementStyle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovementStyle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters;
class UScriptStruct* FMassMovementStyleSpeedParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassMovementStyleSpeedParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassMovementStyleSpeedParameters>()
{
	return FMassMovementStyleSpeedParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Variance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Movement style consists of multiple speeds which are assigned to agents based on agents unique ID.\n * Same speed is assigned consistently for the same ID.\n */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Movement style consists of multiple speeds which are assigned to agents based on agents unique ID.\nSame speed is assigned consistently for the same ID." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovementStyleSpeedParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement Style" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Desired speed */" },
		{ "ForceUnits", "cm/s" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Desired speed" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleSpeedParameters, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Variance_MetaData[] = {
		{ "Category", "Movement Style" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** How much default desired speed is varied randomly. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "How much default desired speed is varied randomly." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Variance = { "Variance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleSpeedParameters, Variance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Variance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Variance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "Movement Style" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Probability to assign this speed. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Probability to assign this speed." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleSpeedParameters, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Probability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Probability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Variance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewProp_Probability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		nullptr,
		&NewStructOps,
		"MassMovementStyleSpeedParameters",
		sizeof(FMassMovementStyleSpeedParameters),
		alignof(FMassMovementStyleSpeedParameters),
		Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassMovementStyleParameters;
class UScriptStruct* FMassMovementStyleParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassMovementStyleParameters, (UObject*)Z_Construct_UPackage__Script_MassMovement(), TEXT("MassMovementStyleParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.OuterSingleton;
}
template<> MASSMOVEMENT_API UScriptStruct* StaticStruct<FMassMovementStyleParameters>()
{
	return FMassMovementStyleParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Style;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSpeeds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSpeeds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredSpeeds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Movement style parameters. A movement style abstracts movement properties for specific style. Behaviors can refer to specific styles when handling speeds. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Movement style parameters. A movement style abstracts movement properties for specific style. Behaviors can refer to specific styles when handling speeds." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassMovementStyleParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Movement Style" },
		{ "Comment", "/** Style of the movement */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Style of the movement" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleParameters, Style), Z_Construct_UScriptStruct_FMassMovementStyleRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_Style_MetaData)) }; // 1861884141
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds_Inner = { "DesiredSpeeds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters, METADATA_PARAMS(nullptr, 0) }; // 2188844401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds_MetaData[] = {
		{ "Category", "Movement Style" },
		{ "Comment", "/** Array of desired speeds (cm/s) assigned to agents based on probability. */" },
		{ "ModuleRelativePath", "Public/MassMovementTypes.h" },
		{ "ToolTip", "Array of desired speeds (cm/s) assigned to agents based on probability." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds = { "DesiredSpeeds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassMovementStyleParameters, DesiredSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds_MetaData)) }; // 2188844401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewProp_DesiredSpeeds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
		nullptr,
		&NewStructOps,
		"MassMovementStyleParameters",
		sizeof(FMassMovementStyleParameters),
		alignof(FMassMovementStyleParameters),
		Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyleParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassMovementStyleParameters.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementTypes_h_Statics::ScriptStructInfo[] = {
		{ FMassMovementStyleRef::StaticStruct, Z_Construct_UScriptStruct_FMassMovementStyleRef_Statics::NewStructOps, TEXT("MassMovementStyleRef"), &Z_Registration_Info_UScriptStruct_MassMovementStyleRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovementStyleRef), 1861884141U) },
		{ FMassMovementStyle::StaticStruct, Z_Construct_UScriptStruct_FMassMovementStyle_Statics::NewStructOps, TEXT("MassMovementStyle"), &Z_Registration_Info_UScriptStruct_MassMovementStyle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovementStyle), 4121061834U) },
		{ FMassMovementStyleSpeedParameters::StaticStruct, Z_Construct_UScriptStruct_FMassMovementStyleSpeedParameters_Statics::NewStructOps, TEXT("MassMovementStyleSpeedParameters"), &Z_Registration_Info_UScriptStruct_MassMovementStyleSpeedParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovementStyleSpeedParameters), 2188844401U) },
		{ FMassMovementStyleParameters::StaticStruct, Z_Construct_UScriptStruct_FMassMovementStyleParameters_Statics::NewStructOps, TEXT("MassMovementStyleParameters"), &Z_Registration_Info_UScriptStruct_MassMovementStyleParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassMovementStyleParameters), 2860462455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementTypes_h_4253472478(TEXT("/Script/MassMovement"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
