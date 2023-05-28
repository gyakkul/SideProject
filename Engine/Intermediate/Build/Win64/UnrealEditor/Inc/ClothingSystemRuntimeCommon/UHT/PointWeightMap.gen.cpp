// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PointWeightMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointWeightMap() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeightMapTargetCommon;
	static UEnum* EWeightMapTargetCommon_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EWeightMapTargetCommon"));
		}
		return Z_Registration_Info_UEnum_EWeightMapTargetCommon.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EWeightMapTargetCommon>()
	{
		return EWeightMapTargetCommon_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enumerators[] = {
		{ "EWeightMapTargetCommon::None", (int64)EWeightMapTargetCommon::None },
		{ "EWeightMapTargetCommon::MaxDistance", (int64)EWeightMapTargetCommon::MaxDistance },
		{ "EWeightMapTargetCommon::BackstopDistance", (int64)EWeightMapTargetCommon::BackstopDistance },
		{ "EWeightMapTargetCommon::BackstopRadius", (int64)EWeightMapTargetCommon::BackstopRadius },
		{ "EWeightMapTargetCommon::AnimDriveStiffness", (int64)EWeightMapTargetCommon::AnimDriveStiffness },
		{ "EWeightMapTargetCommon::AnimDriveDamping_DEPRECATED", (int64)EWeightMapTargetCommon::AnimDriveDamping_DEPRECATED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enum_MetaDataParams[] = {
		{ "AnimDriveDamping_DEPRECATED.Comment", "// Strength of anim drive per-particle (spring driving particle back to skinned location\n" },
		{ "AnimDriveDamping_DEPRECATED.Hidden", "" },
		{ "AnimDriveDamping_DEPRECATED.Name", "EWeightMapTargetCommon::AnimDriveDamping_DEPRECATED" },
		{ "AnimDriveDamping_DEPRECATED.ToolTip", "Strength of anim drive per-particle (spring driving particle back to skinned location" },
		{ "AnimDriveStiffness.Comment", "// Radius of movement to allow for backstop movement\n" },
		{ "AnimDriveStiffness.Name", "EWeightMapTargetCommon::AnimDriveStiffness" },
		{ "AnimDriveStiffness.ToolTip", "Radius of movement to allow for backstop movement" },
		{ "BackstopDistance.Comment", "// The distance that each vertex can move away from its reference (skinned) position\n" },
		{ "BackstopDistance.Name", "EWeightMapTargetCommon::BackstopDistance" },
		{ "BackstopDistance.ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
		{ "BackstopRadius.Comment", "// Distance along the plane of the surface that the particles can travel (separation constraint)\n" },
		{ "BackstopRadius.Name", "EWeightMapTargetCommon::BackstopRadius" },
		{ "BackstopRadius.ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
		{ "Comment", "/** The possible targets for a physical mesh point weight map. */" },
		{ "MaxDistance.Comment", "// None, should always be zero\n" },
		{ "MaxDistance.Name", "EWeightMapTargetCommon::MaxDistance" },
		{ "MaxDistance.ToolTip", "None, should always be zero" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "None.Name", "EWeightMapTargetCommon::None" },
		{ "ToolTip", "The possible targets for a physical mesh point weight map." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		"EWeightMapTargetCommon",
		"EWeightMapTargetCommon",
		Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon()
	{
		if (!Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWeightMapTargetCommon.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PointWeightMap;
class UScriptStruct* FPointWeightMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PointWeightMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PointWeightMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointWeightMap, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("PointWeightMap"));
	}
	return Z_Registration_Info_UScriptStruct_PointWeightMap.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FPointWeightMap>()
{
	return FPointWeightMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPointWeightMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * A mask is simply some storage for a physical mesh parameter painted onto clothing.\n * Used in the editor for users to paint onto and then target to a parameter, which\n * is then later applied to a phys mesh\n */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "A mask is simply some storage for a physical mesh parameter painted onto clothing.\nUsed in the editor for users to paint onto and then target to a parameter, which\nis then later applied to a phys mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointWeightMap>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "/** The actual values stored in the mask */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "The actual values stored in the mask" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointWeightMap, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the mask, mainly for users to differentiate */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "Name of the mask, mainly for users to differentiate" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointWeightMap, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Comment", "/** The currently targeted parameter for the mask, @seealso EWeightMapTargetCommon */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "The currently targeted parameter for the mask, @seealso EWeightMapTargetCommon" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPointWeightMap, CurrentTarget), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether this mask is enabled and able to effect final mesh values */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "Whether this mask is enabled and able to effect final mesh values" },
	};
#endif
	void Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPointWeightMap*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPointWeightMap), &Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"PointWeightMap",
		sizeof(FPointWeightMap),
		alignof(FPointWeightMap),
		Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap()
	{
		if (!Z_Registration_Info_UScriptStruct_PointWeightMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PointWeightMap.InnerSingleton, Z_Construct_UScriptStruct_FPointWeightMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PointWeightMap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::EnumInfo[] = {
		{ EWeightMapTargetCommon_StaticEnum, TEXT("EWeightMapTargetCommon"), &Z_Registration_Info_UEnum_EWeightMapTargetCommon, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 802952671U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::ScriptStructInfo[] = {
		{ FPointWeightMap::StaticStruct, Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewStructOps, TEXT("PointWeightMap"), &Z_Registration_Info_UScriptStruct_PointWeightMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPointWeightMap), 3433712234U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_2740953302(TEXT("/Script/ClothingSystemRuntimeCommon"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_PointWeightMap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
