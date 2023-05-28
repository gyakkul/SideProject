// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigDefines() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformGetterType();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformSpaceMode;
	static UEnum* ETransformSpaceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformSpaceMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ETransformSpaceMode"));
		}
		return Z_Registration_Info_UEnum_ETransformSpaceMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ETransformSpaceMode>()
	{
		return ETransformSpaceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enumerators[] = {
		{ "ETransformSpaceMode::LocalSpace", (int64)ETransformSpaceMode::LocalSpace },
		{ "ETransformSpaceMode::GlobalSpace", (int64)ETransformSpaceMode::GlobalSpace },
		{ "ETransformSpaceMode::BaseSpace", (int64)ETransformSpaceMode::BaseSpace },
		{ "ETransformSpaceMode::BaseJoint", (int64)ETransformSpaceMode::BaseJoint },
		{ "ETransformSpaceMode::Max", (int64)ETransformSpaceMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enum_MetaDataParams[] = {
		{ "BaseJoint.Comment", "/** Apply in base bone */" },
		{ "BaseJoint.Name", "ETransformSpaceMode::BaseJoint" },
		{ "BaseJoint.ToolTip", "Apply in base bone" },
		{ "BaseSpace.Comment", "/** Apply in Base space */" },
		{ "BaseSpace.Name", "ETransformSpaceMode::BaseSpace" },
		{ "BaseSpace.ToolTip", "Apply in Base space" },
		{ "Comment", "//#define DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT() \\\n//\x09""DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()\n" },
		{ "GlobalSpace.Comment", "/** Apply in rig space*/" },
		{ "GlobalSpace.Name", "ETransformSpaceMode::GlobalSpace" },
		{ "GlobalSpace.ToolTip", "Apply in rig space" },
		{ "LocalSpace.Comment", "/** Apply in parent space */" },
		{ "LocalSpace.Name", "ETransformSpaceMode::LocalSpace" },
		{ "LocalSpace.ToolTip", "Apply in parent space" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETransformSpaceMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
		{ "ToolTip", "#define DECLARE_SCOPE_HIERARCHICAL_COUNTER_RIGUNIT() \\\n       DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ETransformSpaceMode",
		"ETransformSpaceMode",
		Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ETransformSpaceMode()
	{
		if (!Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton, Z_Construct_UEnum_ControlRig_ETransformSpaceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformSpaceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETransformGetterType;
	static UEnum* ETransformGetterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ETransformGetterType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ETransformGetterType"));
		}
		return Z_Registration_Info_UEnum_ETransformGetterType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ETransformGetterType>()
	{
		return ETransformGetterType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enumerators[] = {
		{ "ETransformGetterType::Initial", (int64)ETransformGetterType::Initial },
		{ "ETransformGetterType::Current", (int64)ETransformGetterType::Current },
		{ "ETransformGetterType::Max", (int64)ETransformGetterType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enum_MetaDataParams[] = {
		{ "Current.Name", "ETransformGetterType::Current" },
		{ "Initial.Name", "ETransformGetterType::Initial" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ETransformGetterType::Max" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ETransformGetterType",
		"ETransformGetterType",
		Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ETransformGetterType()
	{
		if (!Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton, Z_Construct_UEnum_ControlRig_ETransformGetterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETransformGetterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigExecutionType;
	static UEnum* ERigExecutionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigExecutionType, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ERigExecutionType"));
		}
		return Z_Registration_Info_UEnum_ERigExecutionType.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<ERigExecutionType>()
	{
		return ERigExecutionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enumerators[] = {
		{ "ERigExecutionType::Runtime", (int64)ERigExecutionType::Runtime },
		{ "ERigExecutionType::Editing", (int64)ERigExecutionType::Editing },
		{ "ERigExecutionType::Max", (int64)ERigExecutionType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// thought of mixing this with execution on\n// the problem is execution on is transient state, and \n// this execution type is something to be set per rig\n" },
		{ "Editing.Name", "ERigExecutionType::Editing" },
		{ "Max.Comment", "// editing time\n" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ERigExecutionType::Max" },
		{ "Max.ToolTip", "editing time" },
		{ "ModuleRelativePath", "Public/ControlRigDefines.h" },
		{ "Runtime.Name", "ERigExecutionType::Runtime" },
		{ "ToolTip", "thought of mixing this with execution on\nthe problem is execution on is transient state, and\nthis execution type is something to be set per rig" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"ERigExecutionType",
		"ERigExecutionType",
		Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType()
	{
		if (!Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton, Z_Construct_UEnum_ControlRig_ERigExecutionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigExecutionType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics::EnumInfo[] = {
		{ ETransformSpaceMode_StaticEnum, TEXT("ETransformSpaceMode"), &Z_Registration_Info_UEnum_ETransformSpaceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1500292170U) },
		{ ETransformGetterType_StaticEnum, TEXT("ETransformGetterType"), &Z_Registration_Info_UEnum_ETransformGetterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 66505038U) },
		{ ERigExecutionType_StaticEnum, TEXT("ERigExecutionType"), &Z_Registration_Info_UEnum_ERigExecutionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1781156182U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_609467444(TEXT("/Script/ControlRig"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigDefines_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
