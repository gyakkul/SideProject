// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/BoneControllerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoneControllerTypes() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FWarpingVectorValue();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpingEvaluationMode;
	static UEnum* EWarpingEvaluationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EWarpingEvaluationMode"));
		}
		return Z_Registration_Info_UEnum_EWarpingEvaluationMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EWarpingEvaluationMode>()
	{
		return EWarpingEvaluationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enumerators[] = {
		{ "EWarpingEvaluationMode::Manual", (int64)EWarpingEvaluationMode::Manual },
		{ "EWarpingEvaluationMode::Graph", (int64)EWarpingEvaluationMode::Graph },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Specifies the evaluation mode of an animation warping node\n" },
		{ "Graph.Comment", "// Animation warping evaluation parameters are graph-driven. This means some\n// properties of the node are automatically computed using the accumulated \n// root motion delta contribution of the animation graph leading into it.\n" },
		{ "Graph.Name", "EWarpingEvaluationMode::Graph" },
		{ "Graph.ToolTip", "Animation warping evaluation parameters are graph-driven. This means some\nproperties of the node are automatically computed using the accumulated\nroot motion delta contribution of the animation graph leading into it." },
		{ "Manual.Comment", "// Animation warping evaluation parameters are driven by user settings.\n" },
		{ "Manual.Name", "EWarpingEvaluationMode::Manual" },
		{ "Manual.ToolTip", "Animation warping evaluation parameters are driven by user settings." },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "Specifies the evaluation mode of an animation warping node" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EWarpingEvaluationMode",
		"EWarpingEvaluationMode",
		Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode()
	{
		if (!Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWarpingEvaluationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWarpingVectorMode;
	static UEnum* EWarpingVectorMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EWarpingVectorMode"));
		}
		return Z_Registration_Info_UEnum_EWarpingVectorMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EWarpingVectorMode>()
	{
		return EWarpingVectorMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enumerators[] = {
		{ "EWarpingVectorMode::ComponentSpaceVector", (int64)EWarpingVectorMode::ComponentSpaceVector },
		{ "EWarpingVectorMode::ActorSpaceVector", (int64)EWarpingVectorMode::ActorSpaceVector },
		{ "EWarpingVectorMode::WorldSpaceVector", (int64)EWarpingVectorMode::WorldSpaceVector },
		{ "EWarpingVectorMode::IKFootRootLocalSpaceVector", (int64)EWarpingVectorMode::IKFootRootLocalSpaceVector },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enum_MetaDataParams[] = {
		{ "ActorSpaceVector.Comment", "// Actor-space input vector\n" },
		{ "ActorSpaceVector.Name", "EWarpingVectorMode::ActorSpaceVector" },
		{ "ActorSpaceVector.ToolTip", "Actor-space input vector" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// The supported spaces of a corresponding input vector value\n" },
		{ "ComponentSpaceVector.Comment", "// Component-space input vector\n" },
		{ "ComponentSpaceVector.Name", "EWarpingVectorMode::ComponentSpaceVector" },
		{ "ComponentSpaceVector.ToolTip", "Component-space input vector" },
		{ "IKFootRootLocalSpaceVector.Comment", "// IK Foot Root relative local-space input vector\n" },
		{ "IKFootRootLocalSpaceVector.Name", "EWarpingVectorMode::IKFootRootLocalSpaceVector" },
		{ "IKFootRootLocalSpaceVector.ToolTip", "IK Foot Root relative local-space input vector" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "The supported spaces of a corresponding input vector value" },
		{ "WorldSpaceVector.Comment", "// World-space input vector\n" },
		{ "WorldSpaceVector.Name", "EWarpingVectorMode::WorldSpaceVector" },
		{ "WorldSpaceVector.ToolTip", "World-space input vector" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EWarpingVectorMode",
		"EWarpingVectorMode",
		Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode()
	{
		if (!Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWarpingVectorMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WarpingVectorValue;
class UScriptStruct* FWarpingVectorValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWarpingVectorValue, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("WarpingVectorValue"));
	}
	return Z_Registration_Info_UScriptStruct_WarpingVectorValue.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FWarpingVectorValue>()
{
	return FWarpingVectorValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWarpingVectorValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Vector values which may be specified in a configured space\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "ToolTip", "Vector values which may be specified in a configured space" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWarpingVectorValue>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Space of the corresponding Vector value\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Space of the corresponding Vector value" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWarpingVectorValue, Mode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingVectorMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_MetaData)) }; // 661167414
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Specifies a vector relative to the space defined by Mode\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/BoneControllerTypes.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Specifies a vector relative to the space defined by Mode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWarpingVectorValue, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"WarpingVectorValue",
		sizeof(FWarpingVectorValue),
		alignof(FWarpingVectorValue),
		Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWarpingVectorValue()
	{
		if (!Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton, Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WarpingVectorValue.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::EnumInfo[] = {
		{ EWarpingEvaluationMode_StaticEnum, TEXT("EWarpingEvaluationMode"), &Z_Registration_Info_UEnum_EWarpingEvaluationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2839837007U) },
		{ EWarpingVectorMode_StaticEnum, TEXT("EWarpingVectorMode"), &Z_Registration_Info_UEnum_EWarpingVectorMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 661167414U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::ScriptStructInfo[] = {
		{ FWarpingVectorValue::StaticStruct, Z_Construct_UScriptStruct_FWarpingVectorValue_Statics::NewStructOps, TEXT("WarpingVectorValue"), &Z_Registration_Info_UScriptStruct_WarpingVectorValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWarpingVectorValue), 100054685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_1818264395(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_BoneControllerTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
