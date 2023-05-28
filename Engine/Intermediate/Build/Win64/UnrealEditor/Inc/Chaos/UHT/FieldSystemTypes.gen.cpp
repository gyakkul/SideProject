// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Field/FieldSystemTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFieldSystemTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldCullingOperationType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldObjectType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldOperationType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldOutputType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldPositionType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldResolutionType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ESetMaskConditionType();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EWaveFunctionType();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESetMaskConditionType;
	static UEnum* ESetMaskConditionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_ESetMaskConditionType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ESetMaskConditionType"));
		}
		return Z_Registration_Info_UEnum_ESetMaskConditionType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<ESetMaskConditionType>()
	{
		return ESetMaskConditionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enumerators[] = {
		{ "Field_Set_Always", (int64)Field_Set_Always },
		{ "Field_Set_IFF_NOT_Interior", (int64)Field_Set_IFF_NOT_Interior },
		{ "Field_Set_IFF_NOT_Exterior", (int64)Field_Set_IFF_NOT_Exterior },
		{ "Field_MaskCondition_Max", (int64)Field_MaskCondition_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_MaskCondition_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_MaskCondition_Max.Hidden", "" },
		{ "Field_MaskCondition_Max.Name", "Field_MaskCondition_Max" },
		{ "Field_MaskCondition_Max.ToolTip", "//256th entry" },
		{ "Field_Set_Always.Comment", "/**\n*\n*/" },
		{ "Field_Set_Always.DisplayName", "Set Always" },
		{ "Field_Set_Always.Name", "Field_Set_Always" },
		{ "Field_Set_Always.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside a sphere / Exterior-value otherwise." },
		{ "Field_Set_IFF_NOT_Exterior.Comment", "/**\n*\n*/" },
		{ "Field_Set_IFF_NOT_Exterior.DisplayName", "Merge Exterior" },
		{ "Field_Set_IFF_NOT_Exterior.Name", "Field_Set_IFF_NOT_Exterior" },
		{ "Field_Set_IFF_NOT_Exterior.ToolTip", "The particle output value will be equal to Exterior-value if the particle position is outside the sphere or if the particle input value is already Exterior-Value / Interior-value otherwise." },
		{ "Field_Set_IFF_NOT_Interior.Comment", "/**\n*\n*/" },
		{ "Field_Set_IFF_NOT_Interior.DisplayName", "Merge Interior" },
		{ "Field_Set_IFF_NOT_Interior.Name", "Field_Set_IFF_NOT_Interior" },
		{ "Field_Set_IFF_NOT_Interior.ToolTip", "The particle output value will be equal to Interior-value if the particle position is inside the sphere or if the particle input value is already Interior-Value / Exterior-value otherwise." },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"ESetMaskConditionType",
		"ESetMaskConditionType",
		Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_ESetMaskConditionType()
	{
		if (!Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton, Z_Construct_UEnum_Chaos_ESetMaskConditionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESetMaskConditionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWaveFunctionType;
	static UEnum* EWaveFunctionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EWaveFunctionType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EWaveFunctionType"));
		}
		return Z_Registration_Info_UEnum_EWaveFunctionType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EWaveFunctionType>()
	{
		return EWaveFunctionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enumerators[] = {
		{ "Field_Wave_Cosine", (int64)Field_Wave_Cosine },
		{ "Field_Wave_Gaussian", (int64)Field_Wave_Gaussian },
		{ "Field_Wave_Falloff", (int64)Field_Wave_Falloff },
		{ "Field_Wave_Decay", (int64)Field_Wave_Decay },
		{ "Field_Wave_Max", (int64)Field_Wave_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Wave_Cosine.Comment", "/**\n*\n*/" },
		{ "Field_Wave_Cosine.DisplayName", "Cosine" },
		{ "Field_Wave_Cosine.Name", "Field_Wave_Cosine" },
		{ "Field_Wave_Cosine.ToolTip", "Cosine wave that will move in time." },
		{ "Field_Wave_Decay.Comment", "/**\n*\n*/" },
		{ "Field_Wave_Decay.DisplayName", "Decay" },
		{ "Field_Wave_Decay.Name", "Field_Wave_Decay" },
		{ "Field_Wave_Decay.ToolTip", "The magnitude of the field will decay in time." },
		{ "Field_Wave_Falloff.Comment", "/**\n*\n*/" },
		{ "Field_Wave_Falloff.DisplayName", "Falloff" },
		{ "Field_Wave_Falloff.Name", "Field_Wave_Falloff" },
		{ "Field_Wave_Falloff.ToolTip", "The radial falloff radius will move along temporal wave." },
		{ "Field_Wave_Gaussian.Comment", "/**\n*\n*/" },
		{ "Field_Wave_Gaussian.DisplayName", "Gaussian" },
		{ "Field_Wave_Gaussian.Name", "Field_Wave_Gaussian" },
		{ "Field_Wave_Gaussian.ToolTip", "Gaussian wave that will move in time." },
		{ "Field_Wave_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Wave_Max.Hidden", "" },
		{ "Field_Wave_Max.Name", "Field_Wave_Max" },
		{ "Field_Wave_Max.ToolTip", "//256th entry" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EWaveFunctionType",
		"EWaveFunctionType",
		Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EWaveFunctionType()
	{
		if (!Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton, Z_Construct_UEnum_Chaos_EWaveFunctionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWaveFunctionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldOperationType;
	static UEnum* EFieldOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOperationType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldOperationType"));
		}
		return Z_Registration_Info_UEnum_EFieldOperationType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldOperationType>()
	{
		return EFieldOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enumerators[] = {
		{ "Field_Multiply", (int64)Field_Multiply },
		{ "Field_Divide", (int64)Field_Divide },
		{ "Field_Add", (int64)Field_Add },
		{ "Field_Substract", (int64)Field_Substract },
		{ "Field_Operation_Max", (int64)Field_Operation_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Add.Comment", "/**\n*\n*/" },
		{ "Field_Add.DisplayName", "Add" },
		{ "Field_Add.Name", "Field_Add" },
		{ "Field_Add.ToolTip", "Add the fields output values : Output = Left + Right" },
		{ "Field_Divide.Comment", "/**\n*\n*/" },
		{ "Field_Divide.DisplayName", "Divide" },
		{ "Field_Divide.Name", "Field_Divide" },
		{ "Field_Divide.ToolTip", "Divide the fields output values : Output = Left / Right" },
		{ "Field_Multiply.Comment", "/**\n*\n*/" },
		{ "Field_Multiply.DisplayName", "Multiply" },
		{ "Field_Multiply.Name", "Field_Multiply" },
		{ "Field_Multiply.ToolTip", "Multiply the fields output values : Output = Left * Right" },
		{ "Field_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Operation_Max.Hidden", "" },
		{ "Field_Operation_Max.Name", "Field_Operation_Max" },
		{ "Field_Operation_Max.ToolTip", "//256th entry" },
		{ "Field_Substract.Comment", "/**\n*\n*/" },
		{ "Field_Substract.DisplayName", "Subtract" },
		{ "Field_Substract.Name", "Field_Substract" },
		{ "Field_Substract.ToolTip", "Subtract the fields output : Output = Left - Right" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldOperationType",
		"EFieldOperationType",
		Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldOperationType()
	{
		if (!Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldOperationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldCullingOperationType;
	static UEnum* EFieldCullingOperationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldCullingOperationType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldCullingOperationType"));
		}
		return Z_Registration_Info_UEnum_EFieldCullingOperationType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldCullingOperationType>()
	{
		return EFieldCullingOperationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enumerators[] = {
		{ "Field_Culling_Inside", (int64)Field_Culling_Inside },
		{ "Field_Culling_Outside", (int64)Field_Culling_Outside },
		{ "Field_Culling_Operation_Max", (int64)Field_Culling_Operation_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Culling_Inside.Comment", "/**\n*\n*/" },
		{ "Field_Culling_Inside.DisplayName", "Inside" },
		{ "Field_Culling_Inside.Name", "Field_Culling_Inside" },
		{ "Field_Culling_Inside.ToolTip", "Evaluate the input field if the result of the culling field is equal to 0" },
		{ "Field_Culling_Operation_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Culling_Operation_Max.Hidden", "" },
		{ "Field_Culling_Operation_Max.Name", "Field_Culling_Operation_Max" },
		{ "Field_Culling_Operation_Max.ToolTip", "//256th entry" },
		{ "Field_Culling_Outside.Comment", "/**\n*\n*/" },
		{ "Field_Culling_Outside.DisplayName", "Outside" },
		{ "Field_Culling_Outside.Name", "Field_Culling_Outside" },
		{ "Field_Culling_Outside.ToolTip", "Evaluate the input field if the result of the culling field is different from 0" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldCullingOperationType",
		"EFieldCullingOperationType",
		Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldCullingOperationType()
	{
		if (!Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldCullingOperationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldCullingOperationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldResolutionType;
	static UEnum* EFieldResolutionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldResolutionType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldResolutionType"));
		}
		return Z_Registration_Info_UEnum_EFieldResolutionType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldResolutionType>()
	{
		return EFieldResolutionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enumerators[] = {
		{ "Field_Resolution_Minimal", (int64)Field_Resolution_Minimal },
		{ "Field_Resolution_DisabledParents", (int64)Field_Resolution_DisabledParents },
		{ "Field_Resolution_Maximum", (int64)Field_Resolution_Maximum },
		{ "Field_Resolution_Max", (int64)Field_Resolution_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Resolution_DisabledParents.Comment", "/**\n*\n*/" },
		{ "Field_Resolution_DisabledParents.DisplayName", "Parents" },
		{ "Field_Resolution_DisabledParents.Name", "Field_Resolution_DisabledParents" },
		{ "Field_Resolution_DisabledParents.ToolTip", "Apply the field to all the parent particles" },
		{ "Field_Resolution_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Resolution_Max.Hidden", "" },
		{ "Field_Resolution_Max.Name", "Field_Resolution_Max" },
		{ "Field_Resolution_Max.ToolTip", "//256th entry" },
		{ "Field_Resolution_Maximum.Comment", "/**\n*\n*/" },
		{ "Field_Resolution_Maximum.DisplayName", "Maximum" },
		{ "Field_Resolution_Maximum.Name", "Field_Resolution_Maximum" },
		{ "Field_Resolution_Maximum.ToolTip", "Apply the field to all the solver particles" },
		{ "Field_Resolution_Minimal.Comment", "/**\n*\n*/" },
		{ "Field_Resolution_Minimal.DisplayName", "Minimum" },
		{ "Field_Resolution_Minimal.Name", "Field_Resolution_Minimal" },
		{ "Field_Resolution_Minimal.ToolTip", "Apply the field to all the active particles" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldResolutionType",
		"EFieldResolutionType",
		Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldResolutionType()
	{
		if (!Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldResolutionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldResolutionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldFilterType;
	static UEnum* EFieldFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFilterType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldFilterType"));
		}
		return Z_Registration_Info_UEnum_EFieldFilterType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldFilterType>()
	{
		return EFieldFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enumerators[] = {
		{ "Field_Filter_Dynamic", (int64)Field_Filter_Dynamic },
		{ "Field_Filter_Kinematic", (int64)Field_Filter_Kinematic },
		{ "Field_Filter_Static", (int64)Field_Filter_Static },
		{ "Field_Filter_All", (int64)Field_Filter_All },
		{ "Field_Filter_Sleeping", (int64)Field_Filter_Sleeping },
		{ "Field_Filter_Disabled", (int64)Field_Filter_Disabled },
		{ "Field_Filter_Max", (int64)Field_Filter_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Filter_All.Comment", "/**\n*\n*/" },
		{ "Field_Filter_All.DisplayName", "All" },
		{ "Field_Filter_All.Name", "Field_Filter_All" },
		{ "Field_Filter_All.ToolTip", "Apply the field to all the solver particles" },
		{ "Field_Filter_Disabled.Comment", "/**\n*\n*/" },
		{ "Field_Filter_Disabled.DisplayName", "Disabled" },
		{ "Field_Filter_Disabled.Name", "Field_Filter_Disabled" },
		{ "Field_Filter_Disabled.ToolTip", "Apply the field to all the disabled particles" },
		{ "Field_Filter_Dynamic.Comment", "/**\n*\n*/" },
		{ "Field_Filter_Dynamic.DisplayName", "Dynamic" },
		{ "Field_Filter_Dynamic.Name", "Field_Filter_Dynamic" },
		{ "Field_Filter_Dynamic.ToolTip", "Apply the field to all the dynamic particles" },
		{ "Field_Filter_Kinematic.Comment", "/**\n*\n*/" },
		{ "Field_Filter_Kinematic.DisplayName", "Kinematic" },
		{ "Field_Filter_Kinematic.Name", "Field_Filter_Kinematic" },
		{ "Field_Filter_Kinematic.ToolTip", "Apply the field to all the kinematic particles" },
		{ "Field_Filter_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Filter_Max.Hidden", "" },
		{ "Field_Filter_Max.Name", "Field_Filter_Max" },
		{ "Field_Filter_Max.ToolTip", "//256th entry" },
		{ "Field_Filter_Sleeping.Comment", "/**\n*\n*/" },
		{ "Field_Filter_Sleeping.DisplayName", "Sleeping" },
		{ "Field_Filter_Sleeping.Name", "Field_Filter_Sleeping" },
		{ "Field_Filter_Sleeping.ToolTip", "Apply the field to all the sleeping particles" },
		{ "Field_Filter_Static.Comment", "/**\n*\n*/" },
		{ "Field_Filter_Static.DisplayName", "Static" },
		{ "Field_Filter_Static.Name", "Field_Filter_Static" },
		{ "Field_Filter_Static.ToolTip", "Apply the field to all the static particles" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldFilterType",
		"EFieldFilterType",
		Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldFilterType()
	{
		if (!Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldFilterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldObjectType;
	static UEnum* EFieldObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldObjectType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldObjectType"));
		}
		return Z_Registration_Info_UEnum_EFieldObjectType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldObjectType>()
	{
		return EFieldObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enumerators[] = {
		{ "Field_Object_Rigid", (int64)Field_Object_Rigid },
		{ "Field_Object_Cloth", (int64)Field_Object_Cloth },
		{ "Field_Object_Destruction", (int64)Field_Object_Destruction },
		{ "Field_Object_Character", (int64)Field_Object_Character },
		{ "Field_Object_All", (int64)Field_Object_All },
		{ "Field_Object_Max", (int64)Field_Object_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Object_All.Comment", "/**\n*\n*/" },
		{ "Field_Object_All.DisplayName", "All" },
		{ "Field_Object_All.Name", "Field_Object_All" },
		{ "Field_Object_All.ToolTip", "Apply the field to all the objects particles" },
		{ "Field_Object_Character.Comment", "/**\n*\n*/" },
		{ "Field_Object_Character.DisplayName", "Character" },
		{ "Field_Object_Character.Name", "Field_Object_Character" },
		{ "Field_Object_Character.ToolTip", "Apply the field to all the character particles" },
		{ "Field_Object_Cloth.Comment", "/**\n*\n*/" },
		{ "Field_Object_Cloth.DisplayName", "Cloth" },
		{ "Field_Object_Cloth.Name", "Field_Object_Cloth" },
		{ "Field_Object_Cloth.ToolTip", "Apply the field to all the cloth particles" },
		{ "Field_Object_Destruction.Comment", "/**\n*\n*/" },
		{ "Field_Object_Destruction.DisplayName", "Destruction" },
		{ "Field_Object_Destruction.Name", "Field_Object_Destruction" },
		{ "Field_Object_Destruction.ToolTip", "Apply the field to all the destruction particles" },
		{ "Field_Object_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Object_Max.Hidden", "" },
		{ "Field_Object_Max.Name", "Field_Object_Max" },
		{ "Field_Object_Max.ToolTip", "//256th entry" },
		{ "Field_Object_Rigid.Comment", "/**\n*\n*/" },
		{ "Field_Object_Rigid.DisplayName", "Rigid" },
		{ "Field_Object_Rigid.Name", "Field_Object_Rigid" },
		{ "Field_Object_Rigid.ToolTip", "Apply the field to all the rigid particles" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldObjectType",
		"EFieldObjectType",
		Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldObjectType()
	{
		if (!Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldObjectType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldPositionType;
	static UEnum* EFieldPositionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPositionType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldPositionType"));
		}
		return Z_Registration_Info_UEnum_EFieldPositionType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldPositionType>()
	{
		return EFieldPositionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldPositionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enumerators[] = {
		{ "Field_Position_CenterOfMass", (int64)Field_Position_CenterOfMass },
		{ "Field_Position_PivotPoint", (int64)Field_Position_PivotPoint },
		{ "Field_Position_Max", (int64)Field_Position_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Position_CenterOfMass.Comment", "/**\n*\n*/" },
		{ "Field_Position_CenterOfMass.DisplayName", "CenterOfMass" },
		{ "Field_Position_CenterOfMass.Name", "Field_Position_CenterOfMass" },
		{ "Field_Position_CenterOfMass.ToolTip", "Apply the field to the particles center of mass position" },
		{ "Field_Position_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Position_Max.Hidden", "" },
		{ "Field_Position_Max.Name", "Field_Position_Max" },
		{ "Field_Position_Max.ToolTip", "//256th entry" },
		{ "Field_Position_PivotPoint.Comment", "/**\n*\n*/" },
		{ "Field_Position_PivotPoint.DisplayName", "PivotPoint" },
		{ "Field_Position_PivotPoint.Name", "Field_Position_PivotPoint" },
		{ "Field_Position_PivotPoint.ToolTip", "Apply the field to the particles pivot point position" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldPositionType",
		"EFieldPositionType",
		Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldPositionType()
	{
		if (!Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldPositionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldPositionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldFalloffType;
	static UEnum* EFieldFalloffType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldFalloffType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldFalloffType"));
		}
		return Z_Registration_Info_UEnum_EFieldFalloffType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldFalloffType>()
	{
		return EFieldFalloffType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enumerators[] = {
		{ "Field_FallOff_None", (int64)Field_FallOff_None },
		{ "Field_Falloff_Linear", (int64)Field_Falloff_Linear },
		{ "Field_Falloff_Inverse", (int64)Field_Falloff_Inverse },
		{ "Field_Falloff_Squared", (int64)Field_Falloff_Squared },
		{ "Field_Falloff_Logarithmic", (int64)Field_Falloff_Logarithmic },
		{ "Field_Falloff_Max", (int64)Field_Falloff_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_Falloff_Inverse.Comment", "/**\n*\n*/" },
		{ "Field_Falloff_Inverse.DisplayName", "Inverse" },
		{ "Field_Falloff_Inverse.Name", "Field_Falloff_Inverse" },
		{ "Field_Falloff_Inverse.ToolTip", "The falloff function will be proportional to 1.0/x" },
		{ "Field_Falloff_Linear.Comment", "/**\n*\n*/" },
		{ "Field_Falloff_Linear.DisplayName", "Linear" },
		{ "Field_Falloff_Linear.Name", "Field_Falloff_Linear" },
		{ "Field_Falloff_Linear.ToolTip", "The falloff function will be proportional to x" },
		{ "Field_Falloff_Logarithmic.Comment", "/**\n*\n*/" },
		{ "Field_Falloff_Logarithmic.DisplayName", "Logarithmic" },
		{ "Field_Falloff_Logarithmic.Name", "Field_Falloff_Logarithmic" },
		{ "Field_Falloff_Logarithmic.ToolTip", "The falloff function will be proportional to log(x)" },
		{ "Field_Falloff_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_Falloff_Max.Hidden", "" },
		{ "Field_Falloff_Max.Name", "Field_Falloff_Max" },
		{ "Field_Falloff_Max.ToolTip", "//256th entry" },
		{ "Field_FallOff_None.Comment", "/**\n*\n*/" },
		{ "Field_FallOff_None.DisplayName", "None" },
		{ "Field_FallOff_None.Name", "Field_FallOff_None" },
		{ "Field_FallOff_None.ToolTip", "No falloff function is used" },
		{ "Field_Falloff_Squared.Comment", "/**\n*\n*/" },
		{ "Field_Falloff_Squared.DisplayName", "Squared" },
		{ "Field_Falloff_Squared.Name", "Field_Falloff_Squared" },
		{ "Field_Falloff_Squared.ToolTip", "The falloff function will be proportional to x*x" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldFalloffType",
		"EFieldFalloffType",
		Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldFalloffType()
	{
		if (!Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldFalloffType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldFalloffType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldPhysicsType;
	static UEnum* EFieldPhysicsType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldPhysicsType"));
		}
		return Z_Registration_Info_UEnum_EFieldPhysicsType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldPhysicsType>()
	{
		return EFieldPhysicsType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enumerators[] = {
		{ "Field_None", (int64)Field_None },
		{ "Field_DynamicState", (int64)Field_DynamicState },
		{ "Field_LinearForce", (int64)Field_LinearForce },
		{ "Field_ExternalClusterStrain", (int64)Field_ExternalClusterStrain },
		{ "Field_Kill", (int64)Field_Kill },
		{ "Field_LinearVelocity", (int64)Field_LinearVelocity },
		{ "Field_AngularVelociy", (int64)Field_AngularVelociy },
		{ "Field_AngularTorque", (int64)Field_AngularTorque },
		{ "Field_InternalClusterStrain", (int64)Field_InternalClusterStrain },
		{ "Field_DisableThreshold", (int64)Field_DisableThreshold },
		{ "Field_SleepingThreshold", (int64)Field_SleepingThreshold },
		{ "Field_PositionStatic", (int64)Field_PositionStatic },
		{ "Field_PositionAnimated", (int64)Field_PositionAnimated },
		{ "Field_PositionTarget", (int64)Field_PositionTarget },
		{ "Field_DynamicConstraint", (int64)Field_DynamicConstraint },
		{ "Field_CollisionGroup", (int64)Field_CollisionGroup },
		{ "Field_ActivateDisabled", (int64)Field_ActivateDisabled },
		{ "Field_InitialLinearVelocity", (int64)Field_InitialLinearVelocity },
		{ "Field_InitialAngularVelocity", (int64)Field_InitialAngularVelocity },
		{ "Field_LinearImpulse", (int64)Field_LinearImpulse },
		{ "Field_PhysicsType_Max", (int64)Field_PhysicsType_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_ActivateDisabled.Comment", "/**\n*\n*/" },
		{ "Field_ActivateDisabled.DisplayName", "Activate Disabled" },
		{ "Field_ActivateDisabled.Name", "Field_ActivateDisabled" },
		{ "Field_ActivateDisabled.ToolTip", "Activate all the disabled particles for which the field value will be 0" },
		{ "Field_AngularTorque.Comment", "/**\n*\n*/" },
		{ "Field_AngularTorque.DisplayName", "Angular Torque" },
		{ "Field_AngularTorque.Name", "Field_AngularTorque" },
		{ "Field_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
		{ "Field_AngularVelociy.Comment", "/**\n*\n*/" },
		{ "Field_AngularVelociy.DisplayName", "Angular Velocity" },
		{ "Field_AngularVelociy.Name", "Field_AngularVelociy" },
		{ "Field_AngularVelociy.ToolTip", "Add a vector field to the particles angular velocity." },
		{ "Field_CollisionGroup.Comment", "/**\n*\n*/" },
		{ "Field_CollisionGroup.DisplayName", "Collision Group" },
		{ "Field_CollisionGroup.Name", "Field_CollisionGroup" },
		{ "Field_CollisionGroup.ToolTip", "Set the particles collision group." },
		{ "Field_DisableThreshold.Comment", "/**\n*\n*/" },
		{ "Field_DisableThreshold.DisplayName", "Disabled Threshold" },
		{ "Field_DisableThreshold.Name", "Field_DisableThreshold" },
		{ "Field_DisableThreshold.ToolTip", "Disable the particles if their linear and angular velocity are less than the threshold." },
		{ "Field_DynamicConstraint.Comment", "/**\n*\n*/" },
		{ "Field_DynamicConstraint.DisplayName", "Dynamic Constraint" },
		{ "Field_DynamicConstraint.Hidden", "" },
		{ "Field_DynamicConstraint.Name", "Field_DynamicConstraint" },
		{ "Field_DynamicConstraint.ToolTip", "Add the particles to a spring constraint holding them together" },
		{ "Field_DynamicState.Comment", "/**\n*\n*/" },
		{ "Field_DynamicState.DisplayName", "Dynamic State" },
		{ "Field_DynamicState.Name", "Field_DynamicState" },
		{ "Field_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
		{ "Field_ExternalClusterStrain.Comment", "/**\n*\n*/" },
		{ "Field_ExternalClusterStrain.DisplayName", "External Strain" },
		{ "Field_ExternalClusterStrain.Name", "Field_ExternalClusterStrain" },
		{ "Field_ExternalClusterStrain.ToolTip", "Apply an external strain over the particles. If this strain is over the internal one, the cluster will break." },
		{ "Field_InitialAngularVelocity.Comment", "/**\n*\n*/" },
		{ "Field_InitialAngularVelocity.DisplayName", "Initial Angular Velocity" },
		{ "Field_InitialAngularVelocity.Hidden", "" },
		{ "Field_InitialAngularVelocity.Name", "Field_InitialAngularVelocity" },
		{ "Field_InitialAngularVelocity.ToolTip", "Set the geometry collection initial angular velocity" },
		{ "Field_InitialLinearVelocity.Comment", "/**\n*\n*/" },
		{ "Field_InitialLinearVelocity.DisplayName", "Initial Linear Velocity" },
		{ "Field_InitialLinearVelocity.Hidden", "" },
		{ "Field_InitialLinearVelocity.Name", "Field_InitialLinearVelocity" },
		{ "Field_InitialLinearVelocity.ToolTip", "Set the geometry collection initial linear velocity" },
		{ "Field_InternalClusterStrain.Comment", "/**\n*\n*/" },
		{ "Field_InternalClusterStrain.DisplayName", "Internal Strain" },
		{ "Field_InternalClusterStrain.Name", "Field_InternalClusterStrain" },
		{ "Field_InternalClusterStrain.ToolTip", "Add a strain field to the particles internal one." },
		{ "Field_Kill.Comment", "/**\n*\n*/" },
		{ "Field_Kill.DisplayName", "Kill Particle" },
		{ "Field_Kill.Name", "Field_Kill" },
		{ "Field_Kill.ToolTip", "Disable the particles for which the field will be higher than 0." },
		{ "Field_LinearForce.Comment", "/**\n*\n*/" },
		{ "Field_LinearForce.DisplayName", "Linear Force" },
		{ "Field_LinearForce.Name", "Field_LinearForce" },
		{ "Field_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
		{ "Field_LinearImpulse.Comment", "/**\n*\n*/" },
		{ "Field_LinearImpulse.DisplayName", "Linear Impulse" },
		{ "Field_LinearImpulse.Hidden", "" },
		{ "Field_LinearImpulse.Name", "Field_LinearImpulse" },
		{ "Field_LinearImpulse.ToolTip", "Add a vector field affecting the particles linear impulse." },
		{ "Field_LinearVelocity.Comment", "/**\n*\n*/" },
		{ "Field_LinearVelocity.DisplayName", "Linear Velocity" },
		{ "Field_LinearVelocity.Name", "Field_LinearVelocity" },
		{ "Field_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
		{ "Field_None.Comment", "/**\n*\n*/" },
		{ "Field_None.Hidden", "" },
		{ "Field_None.Name", "Field_None" },
		{ "Field_PhysicsType_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_PhysicsType_Max.Hidden", "" },
		{ "Field_PhysicsType_Max.Name", "Field_PhysicsType_Max" },
		{ "Field_PhysicsType_Max.ToolTip", "//256th entry" },
		{ "Field_PositionAnimated.Comment", "/**\n*\n*/" },
		{ "Field_PositionAnimated.DisplayName", "Position Animated" },
		{ "Field_PositionAnimated.Hidden", "" },
		{ "Field_PositionAnimated.Name", "Field_PositionAnimated" },
		{ "Field_PositionAnimated.ToolTip", "Add a position constraint to the particles to follow its kinematic position" },
		{ "Field_PositionStatic.Comment", "/**\n*\n*/" },
		{ "Field_PositionStatic.DisplayName", "Position Static" },
		{ "Field_PositionStatic.Hidden", "" },
		{ "Field_PositionStatic.Name", "Field_PositionStatic" },
		{ "Field_PositionStatic.ToolTip", "Add a position constraint to the particles to remain static" },
		{ "Field_PositionTarget.Comment", "/**\n*\n*/" },
		{ "Field_PositionTarget.DisplayName", "Position Target" },
		{ "Field_PositionTarget.Hidden", "" },
		{ "Field_PositionTarget.Name", "Field_PositionTarget" },
		{ "Field_PositionTarget.ToolTip", "Add a position constraint to the particles to follow a target position" },
		{ "Field_SleepingThreshold.Comment", "/**\n*\n*/" },
		{ "Field_SleepingThreshold.DisplayName", "Sleeping Threshold" },
		{ "Field_SleepingThreshold.Name", "Field_SleepingThreshold" },
		{ "Field_SleepingThreshold.ToolTip", "Set particles in sleeping mode if their linear and angular velocity are less than the threshold." },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldPhysicsType",
		"EFieldPhysicsType",
		Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsType()
	{
		if (!Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldPhysicsType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldPhysicsType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldVectorType;
	static UEnum* EFieldVectorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldVectorType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldVectorType"));
		}
		return Z_Registration_Info_UEnum_EFieldVectorType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldVectorType>()
	{
		return EFieldVectorType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldVectorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enumerators[] = {
		{ "Vector_LinearForce", (int64)Vector_LinearForce },
		{ "Vector_LinearVelocity", (int64)Vector_LinearVelocity },
		{ "Vector_AngularVelocity", (int64)Vector_AngularVelocity },
		{ "Vector_AngularTorque", (int64)Vector_AngularTorque },
		{ "Vector_PositionTarget", (int64)Vector_PositionTarget },
		{ "Vector_InitialLinearVelocity", (int64)Vector_InitialLinearVelocity },
		{ "Vector_InitialAngularVelocity", (int64)Vector_InitialAngularVelocity },
		{ "Vector_LinearImpulse", (int64)Vector_LinearImpulse },
		{ "Vector_TargetMax", (int64)Vector_TargetMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// TODO : Refactor these 3 enums to be in sync with the GetFieldTargetTypes\n" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
		{ "ToolTip", "TODO : Refactor these 3 enums to be in sync with the GetFieldTargetTypes" },
		{ "Vector_AngularTorque.DisplayName", "Angular Torque" },
		{ "Vector_AngularTorque.Name", "Vector_AngularTorque" },
		{ "Vector_AngularTorque.ToolTip", "Add a vector field to the particles angular torque." },
		{ "Vector_AngularVelocity.DisplayName", "Angular Velocity" },
		{ "Vector_AngularVelocity.Name", "Vector_AngularVelocity" },
		{ "Vector_AngularVelocity.ToolTip", "Add a vector field to the particles angular velocity." },
		{ "Vector_InitialAngularVelocity.DisplayName", "Initial Angular Velocity" },
		{ "Vector_InitialAngularVelocity.Hidden", "" },
		{ "Vector_InitialAngularVelocity.Name", "Vector_InitialAngularVelocity" },
		{ "Vector_InitialAngularVelocity.ToolTip", "Set the geometry collection initial angular velocity" },
		{ "Vector_InitialLinearVelocity.DisplayName", "Initial Linear Velocity" },
		{ "Vector_InitialLinearVelocity.Hidden", "" },
		{ "Vector_InitialLinearVelocity.Name", "Vector_InitialLinearVelocity" },
		{ "Vector_InitialLinearVelocity.ToolTip", "Set the geometry collection initial linear velocity" },
		{ "Vector_LinearForce.DisplayName", "Linear Force" },
		{ "Vector_LinearForce.Name", "Vector_LinearForce" },
		{ "Vector_LinearForce.ToolTip", "Add a vector field to the particles linear force." },
		{ "Vector_LinearImpulse.DisplayName", "Linear Impulse" },
		{ "Vector_LinearImpulse.Hidden", "" },
		{ "Vector_LinearImpulse.Name", "Vector_LinearImpulse" },
		{ "Vector_LinearImpulse.ToolTip", "Add a vector field affecting the particles linear impulse." },
		{ "Vector_LinearVelocity.DisplayName", "Linear Velocity" },
		{ "Vector_LinearVelocity.Name", "Vector_LinearVelocity" },
		{ "Vector_LinearVelocity.ToolTip", "Add a vector field to the particles linear velocity." },
		{ "Vector_PositionTarget.DisplayName", "Position Target" },
		{ "Vector_PositionTarget.Hidden", "" },
		{ "Vector_PositionTarget.Name", "Vector_PositionTarget" },
		{ "Vector_PositionTarget.ToolTip", "Add a position constraint to the particles to follow a target position" },
		{ "Vector_TargetMax.Comment", "//~~~\n//256th entry\n" },
		{ "Vector_TargetMax.Hidden", "" },
		{ "Vector_TargetMax.Name", "Vector_TargetMax" },
		{ "Vector_TargetMax.ToolTip", "256th entry" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldVectorType",
		"EFieldVectorType",
		Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldVectorType()
	{
		if (!Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldVectorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldVectorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldScalarType;
	static UEnum* EFieldScalarType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldScalarType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldScalarType"));
		}
		return Z_Registration_Info_UEnum_EFieldScalarType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldScalarType>()
	{
		return EFieldScalarType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldScalarType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enumerators[] = {
		{ "Scalar_ExternalClusterStrain", (int64)Scalar_ExternalClusterStrain },
		{ "Scalar_Kill", (int64)Scalar_Kill },
		{ "Scalar_DisableThreshold", (int64)Scalar_DisableThreshold },
		{ "Scalar_SleepingThreshold", (int64)Scalar_SleepingThreshold },
		{ "Scalar_InternalClusterStrain", (int64)Scalar_InternalClusterStrain },
		{ "Scalar_DynamicConstraint", (int64)Scalar_DynamicConstraint },
		{ "Scalar_TargetMax", (int64)Scalar_TargetMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
		{ "Scalar_DisableThreshold.DisplayName", "Disabled Threshold" },
		{ "Scalar_DisableThreshold.Name", "Scalar_DisableThreshold" },
		{ "Scalar_DisableThreshold.ToolTip", "Disable the particles if their linear and angular velocity are less than the threshold." },
		{ "Scalar_DynamicConstraint.DisplayName", "Dynamic Constraint" },
		{ "Scalar_DynamicConstraint.Hidden", "" },
		{ "Scalar_DynamicConstraint.Name", "Scalar_DynamicConstraint" },
		{ "Scalar_DynamicConstraint.ToolTip", "Add the particles to a spring constraint holding them together" },
		{ "Scalar_ExternalClusterStrain.DisplayName", "External Strain" },
		{ "Scalar_ExternalClusterStrain.Name", "Scalar_ExternalClusterStrain" },
		{ "Scalar_ExternalClusterStrain.ToolTip", "Apply an external strain over the particles. If this strain is over the internal one, the cluster will break." },
		{ "Scalar_InternalClusterStrain.DisplayName", "Internal Strain" },
		{ "Scalar_InternalClusterStrain.Name", "Scalar_InternalClusterStrain" },
		{ "Scalar_InternalClusterStrain.ToolTip", "Add a strain field to the particles internal one." },
		{ "Scalar_Kill.DisplayName", "Kill Particle" },
		{ "Scalar_Kill.Name", "Scalar_Kill" },
		{ "Scalar_Kill.ToolTip", "Disable the particles for which the field will be higher than 0." },
		{ "Scalar_SleepingThreshold.DisplayName", "Sleeping Threshold" },
		{ "Scalar_SleepingThreshold.Name", "Scalar_SleepingThreshold" },
		{ "Scalar_SleepingThreshold.ToolTip", "Set particles in sleeping mode if their linear and angular velocity are less than the threshold." },
		{ "Scalar_TargetMax.Comment", "//~~~\n//256th entry\n" },
		{ "Scalar_TargetMax.Hidden", "" },
		{ "Scalar_TargetMax.Name", "Scalar_TargetMax" },
		{ "Scalar_TargetMax.ToolTip", "256th entry" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldScalarType",
		"EFieldScalarType",
		Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldScalarType()
	{
		if (!Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldScalarType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldScalarType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldIntegerType;
	static UEnum* EFieldIntegerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldIntegerType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldIntegerType"));
		}
		return Z_Registration_Info_UEnum_EFieldIntegerType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldIntegerType>()
	{
		return EFieldIntegerType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enumerators[] = {
		{ "Integer_DynamicState", (int64)Integer_DynamicState },
		{ "Integer_ActivateDisabled", (int64)Integer_ActivateDisabled },
		{ "Integer_CollisionGroup", (int64)Integer_CollisionGroup },
		{ "Integer_PositionAnimated", (int64)Integer_PositionAnimated },
		{ "Integer_PositionStatic", (int64)Integer_PositionStatic },
		{ "Integer_TargetMax", (int64)Integer_TargetMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Integer_ActivateDisabled.DisplayName", "Activate Disabled" },
		{ "Integer_ActivateDisabled.Name", "Integer_ActivateDisabled" },
		{ "Integer_ActivateDisabled.ToolTip", "Activate all the disabled particles for which the field value will be 0" },
		{ "Integer_CollisionGroup.DisplayName", "Collision Group" },
		{ "Integer_CollisionGroup.Name", "Integer_CollisionGroup" },
		{ "Integer_CollisionGroup.ToolTip", "Set the particles collision group." },
		{ "Integer_DynamicState.DisplayName", "Dynamic State" },
		{ "Integer_DynamicState.Name", "Integer_DynamicState" },
		{ "Integer_DynamicState.ToolTip", "Set the dynamic state of a particle (static, dynamic, kinematic...)" },
		{ "Integer_PositionAnimated.DisplayName", "Position Animated" },
		{ "Integer_PositionAnimated.Hidden", "" },
		{ "Integer_PositionAnimated.Name", "Integer_PositionAnimated" },
		{ "Integer_PositionAnimated.ToolTip", "Add a position constraint to the particles to follow its kinematic position" },
		{ "Integer_PositionStatic.DisplayName", "Position Static" },
		{ "Integer_PositionStatic.Hidden", "" },
		{ "Integer_PositionStatic.Name", "Integer_PositionStatic" },
		{ "Integer_PositionStatic.ToolTip", "Add a position constraint to the particles to remain static" },
		{ "Integer_TargetMax.Comment", "//~~~\n//256th entry\n" },
		{ "Integer_TargetMax.Hidden", "" },
		{ "Integer_TargetMax.Name", "Integer_TargetMax" },
		{ "Integer_TargetMax.ToolTip", "256th entry" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldIntegerType",
		"EFieldIntegerType",
		Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldIntegerType()
	{
		if (!Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldIntegerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldIntegerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldOutputType;
	static UEnum* EFieldOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldOutputType, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldOutputType"));
		}
		return Z_Registration_Info_UEnum_EFieldOutputType.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldOutputType>()
	{
		return EFieldOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enumerators[] = {
		{ "Field_Output_Vector", (int64)Field_Output_Vector },
		{ "Field_Output_Scalar", (int64)Field_Output_Scalar },
		{ "Field_Output_Integer", (int64)Field_Output_Integer },
		{ "Field_Output_Max", (int64)Field_Output_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines the type of the output*/" },
		{ "Field_Output_Integer.Comment", "/* Integer field type */" },
		{ "Field_Output_Integer.DisplayName", "Integer Field" },
		{ "Field_Output_Integer.Name", "Field_Output_Integer" },
		{ "Field_Output_Integer.ToolTip", "Integer field type" },
		{ "Field_Output_Max.Hidden", "" },
		{ "Field_Output_Max.Name", "Field_Output_Max" },
		{ "Field_Output_Scalar.Comment", "/* Scalar Field Type */" },
		{ "Field_Output_Scalar.DisplayName", "Scalar Field" },
		{ "Field_Output_Scalar.Name", "Field_Output_Scalar" },
		{ "Field_Output_Scalar.ToolTip", "Scalar Field Type" },
		{ "Field_Output_Vector.Comment", "/* Vector Field Type */" },
		{ "Field_Output_Vector.DisplayName", "Vector Field" },
		{ "Field_Output_Vector.Name", "Field_Output_Vector" },
		{ "Field_Output_Vector.ToolTip", "Vector Field Type" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
		{ "ToolTip", "Defines the type of the output" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldOutputType",
		"EFieldOutputType",
		Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldOutputType()
	{
		if (!Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldOutputType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields;
	static UEnum* EFieldPhysicsDefaultFields_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EFieldPhysicsDefaultFields"));
		}
		return Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EFieldPhysicsDefaultFields>()
	{
		return EFieldPhysicsDefaultFields_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enumerators[] = {
		{ "Field_RadialIntMask", (int64)Field_RadialIntMask },
		{ "Field_RadialFalloff", (int64)Field_RadialFalloff },
		{ "Field_UniformVector", (int64)Field_UniformVector },
		{ "Field_RadialVector", (int64)Field_RadialVector },
		{ "Field_RadialVectorFalloff", (int64)Field_RadialVectorFalloff },
		{ "Field_EFieldPhysicsDefaultFields_Max", (int64)Field_EFieldPhysicsDefaultFields_Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "Field_EFieldPhysicsDefaultFields_Max.Comment", "/**\n*\n*///~~~\n//256th entry\n" },
		{ "Field_EFieldPhysicsDefaultFields_Max.Hidden", "" },
		{ "Field_EFieldPhysicsDefaultFields_Max.Name", "Field_EFieldPhysicsDefaultFields_Max" },
		{ "Field_EFieldPhysicsDefaultFields_Max.ToolTip", "//256th entry" },
		{ "Field_RadialFalloff.Comment", "/**\n*\n*/" },
		{ "Field_RadialFalloff.DisplayName", "RadialFalloff" },
		{ "Field_RadialFalloff.Name", "Field_RadialFalloff" },
		{ "Field_RadialIntMask.Comment", "/**\n*\n*/" },
		{ "Field_RadialIntMask.DisplayName", "RadialIntMask" },
		{ "Field_RadialIntMask.Name", "Field_RadialIntMask" },
		{ "Field_RadialVector.Comment", "/**\n*\n*/" },
		{ "Field_RadialVector.DisplayName", "RadialVector" },
		{ "Field_RadialVector.Name", "Field_RadialVector" },
		{ "Field_RadialVectorFalloff.Comment", "/**\n*\n*/" },
		{ "Field_RadialVectorFalloff.DisplayName", "RadialVectorFalloff" },
		{ "Field_RadialVectorFalloff.Name", "Field_RadialVectorFalloff" },
		{ "Field_UniformVector.Comment", "/**\n*\n*/" },
		{ "Field_UniformVector.DisplayName", "UniformVector" },
		{ "Field_UniformVector.Name", "Field_UniformVector" },
		{ "ModuleRelativePath", "Public/Field/FieldSystemTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EFieldPhysicsDefaultFields",
		"EFieldPhysicsDefaultFields",
		Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields()
	{
		if (!Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton, Z_Construct_UEnum_Chaos_EFieldPhysicsDefaultFields_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h_Statics::EnumInfo[] = {
		{ ESetMaskConditionType_StaticEnum, TEXT("ESetMaskConditionType"), &Z_Registration_Info_UEnum_ESetMaskConditionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 757210290U) },
		{ EWaveFunctionType_StaticEnum, TEXT("EWaveFunctionType"), &Z_Registration_Info_UEnum_EWaveFunctionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2359505445U) },
		{ EFieldOperationType_StaticEnum, TEXT("EFieldOperationType"), &Z_Registration_Info_UEnum_EFieldOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3722507891U) },
		{ EFieldCullingOperationType_StaticEnum, TEXT("EFieldCullingOperationType"), &Z_Registration_Info_UEnum_EFieldCullingOperationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 680658174U) },
		{ EFieldResolutionType_StaticEnum, TEXT("EFieldResolutionType"), &Z_Registration_Info_UEnum_EFieldResolutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3676178227U) },
		{ EFieldFilterType_StaticEnum, TEXT("EFieldFilterType"), &Z_Registration_Info_UEnum_EFieldFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3814112388U) },
		{ EFieldObjectType_StaticEnum, TEXT("EFieldObjectType"), &Z_Registration_Info_UEnum_EFieldObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1146931772U) },
		{ EFieldPositionType_StaticEnum, TEXT("EFieldPositionType"), &Z_Registration_Info_UEnum_EFieldPositionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3188633104U) },
		{ EFieldFalloffType_StaticEnum, TEXT("EFieldFalloffType"), &Z_Registration_Info_UEnum_EFieldFalloffType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3385667513U) },
		{ EFieldPhysicsType_StaticEnum, TEXT("EFieldPhysicsType"), &Z_Registration_Info_UEnum_EFieldPhysicsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1508310483U) },
		{ EFieldVectorType_StaticEnum, TEXT("EFieldVectorType"), &Z_Registration_Info_UEnum_EFieldVectorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2863513637U) },
		{ EFieldScalarType_StaticEnum, TEXT("EFieldScalarType"), &Z_Registration_Info_UEnum_EFieldScalarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 54299443U) },
		{ EFieldIntegerType_StaticEnum, TEXT("EFieldIntegerType"), &Z_Registration_Info_UEnum_EFieldIntegerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3115369961U) },
		{ EFieldOutputType_StaticEnum, TEXT("EFieldOutputType"), &Z_Registration_Info_UEnum_EFieldOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 238921879U) },
		{ EFieldPhysicsDefaultFields_StaticEnum, TEXT("EFieldPhysicsDefaultFields"), &Z_Registration_Info_UEnum_EFieldPhysicsDefaultFields, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4161582072U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h_4171448776(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_Field_FieldSystemTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
