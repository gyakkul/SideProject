// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h"
#include "Math/Simulation/CRSimPointContainer.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SpringIK() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings;
class UScriptStruct* FRigUnit_SpringIK_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringIK_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringIK_DebugSettings>()
{
	return FRigUnit_SpringIK_DebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringIK_DebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_SpringIK_DebugSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringIK_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_DebugSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The color to use for debug drawing\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The color to use for debug drawing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_DebugSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_WorldOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewProp_WorldOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_SpringIK_DebugSettings",
		sizeof(FRigUnit_SpringIK_DebugSettings),
		alignof(FRigUnit_SpringIK_DebugSettings),
		Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData;
class UScriptStruct* FRigUnit_SpringIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringIK_WorkData>()
{
	return FRigUnit_SpringIK_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPoleVector;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Simulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringIK_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones_Inner = { "CachedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones = { "CachedBones", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_WorkData, CachedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedPoleVector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedPoleVector = { "CachedPoleVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_WorkData, CachedPoleVector), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedPoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedPoleVector_MetaData)) }; // 861402166
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_WorkData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Simulation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK_WorkData, Simulation), Z_Construct_UScriptStruct_FCRSimPointContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Simulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Simulation_MetaData)) }; // 3813261209
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_CachedPoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewProp_Simulation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_SpringIK_WorkData",
		sizeof(FRigUnit_SpringIK_WorkData),
		alignof(FRigUnit_SpringIK_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SpringIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SpringIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SpringIK;
class UScriptStruct* FRigUnit_SpringIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SpringIK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SpringIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SpringIK_Execute;
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("HierarchyStrength"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("EffectorStrength"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("EffectorRatio"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("RootStrength"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("RootRatio"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("Damping"), TEXT("float"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("PoleVector"), TEXT("FVector"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("bFlipPolePlane"), TEXT("bool"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("PoleVectorKind"), TEXT("EControlRigVectorKind"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("PoleVectorSpace"), TEXT("FName"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("bLiveSimulation"), TEXT("bool"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("Iterations"), TEXT("int32"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("bLimitLocalPosition"), TEXT("bool"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_SpringIK_DebugSettings"));
		Arguments_FRigUnit_SpringIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SpringIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SpringIK::Execute"), &FRigUnit_SpringIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.OuterSingleton, Arguments_FRigUnit_SpringIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SpringIK>()
{
	return FRigUnit_SpringIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchyStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HierarchyStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectorStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectorRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlipPolePlane_MetaData[];
#endif
		static void NewProp_bFlipPolePlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlipPolePlane;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoleVectorKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoleVectorKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoleVectorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLiveSimulation_MetaData[];
#endif
		static void NewProp_bLiveSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLiveSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Iterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitLocalPosition_MetaData[];
#endif
		static void NewProp_bLimitLocalPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitLocalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The Spring IK solver uses a verlet integrator to perform an IK solve.\n * It support custom constraints including distance, length etc.\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Spring IK" },
		{ "Keywords", "IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "The Spring IK solver uses a verlet integrator to perform an IK solve.\nIt support custom constraints including distance, length etc.\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SpringIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to solve\n\x09 */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The name of the first bone to solve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the second bone to solve\n\x09 */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The name of the second bone to solve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_HierarchyStrength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Sets the coefficient of the springs along the hierarchy. Values between 1 and 2048 are common.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Sets the coefficient of the springs along the hierarchy. Values between 1 and 2048 are common." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_HierarchyStrength = { "HierarchyStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, HierarchyStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_HierarchyStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_HierarchyStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorStrength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Sets the coefficient of the springs towards the effector. Values between 1 and 2048 are common.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Sets the coefficient of the springs towards the effector. Values between 1 and 2048 are common." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorStrength = { "EffectorStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, EffectorStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the equilibrium of the effector springs.\n\x09 * This value ranges from 0.0 (zero distance) to 1.0 (distance in initial pose)\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Defines the equilibrium of the effector springs.\nThis value ranges from 0.0 (zero distance) to 1.0 (distance in initial pose)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorRatio = { "EffectorRatio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, EffectorRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootStrength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Sets the coefficient of the springs towards the root. Values between 1 and 2048 are common.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Sets the coefficient of the springs towards the root. Values between 1 and 2048 are common." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootStrength = { "RootStrength", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, RootStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines the equilibrium of the root springs.\n\x09 * This value ranges from 0.0 (zero distance) to 1.0 (distance in initial pose)\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Defines the equilibrium of the root springs.\nThis value ranges from 0.0 (zero distance) to 1.0 (distance in initial pose)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootRatio = { "RootRatio", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, RootRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The higher the value to more quickly the simulation calms down. Values between 0.0001 and 0.75 are common.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The higher the value to more quickly the simulation calms down. Values between 0.0001 and 0.75 are common." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The polevector to use for the IK solver\n\x09 * This can be a location or direction.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The polevector to use for the IK solver\nThis can be a location or direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the pole plane will be flipped\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "If set to true the pole plane will be flipped" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane_SetBit(void* Obj)
	{
		((FRigUnit_SpringIK*)Obj)->bFlipPolePlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane = { "bFlipPolePlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringIK), &Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The kind of pole vector this is representing - can be a direction or a location\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The kind of pole vector this is representing - can be a direction or a location" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind = { "PoleVectorKind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, PoleVectorKind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind_MetaData)) }; // 2351274891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The space in which the pole vector is expressed\n\x09 */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The space in which the pole vector is expressed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorSpace = { "PoleVectorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, PoleVectorSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The minor axis being aligned - towards the pole vector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The minor axis being aligned - towards the pole vector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true simulation will continue for all intermediate bones over time.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "If set to true simulation will continue for all intermediate bones over time." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation_SetBit(void* Obj)
	{
		((FRigUnit_SpringIK*)Obj)->bLiveSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation = { "bLiveSimulation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringIK), &Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Iterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Drives how precise the solver operates. Values between 4 and 24 are common.\n\x09 * This is only used if the simulation is not live (bLiveSimulation setting).\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "Drives how precise the solver operates. Values between 4 and 24 are common.\nThis is only used if the simulation is not live (bLiveSimulation setting)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Iterations = { "Iterations", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, Iterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Iterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Iterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true bones are placed within the original distance of\n\x09 * the previous local transform. This can be used to avoid stretch.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "If set to true bones are placed within the original distance of\nthe previous local transform. This can be used to avoid stretch." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition_SetBit(void* Obj)
	{
		((FRigUnit_SpringIK*)Obj)->bLimitLocalPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition = { "bLimitLocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringIK), &Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SpringIK*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SpringIK), &Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The debug setting for the node */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
		{ "ToolTip", "The debug setting for the node" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_DebugSettings_MetaData)) }; // 3449790084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SpringIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_WorkData_MetaData)) }; // 2048138421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_HierarchyStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_EffectorRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_RootRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bFlipPolePlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PoleVectorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLiveSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_Iterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bLimitLocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SpringIK",
		sizeof(FRigUnit_SpringIK),
		alignof(FRigUnit_SpringIK),
		Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SpringIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SpringIK.InnerSingleton;
	}

void FRigUnit_SpringIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SpringIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		HierarchyStrength,
		EffectorStrength,
		EffectorRatio,
		RootStrength,
		RootRatio,
		Damping,
		PoleVector,
		bFlipPolePlane,
		PoleVectorKind,
		PoleVectorSpace,
		PrimaryAxis,
		SecondaryAxis,
		bLiveSimulation,
		Iterations,
		bLimitLocalPosition,
		bPropagateToChildren,
		DebugSettings,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SpringIK_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringIK_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_SpringIK_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringIK_DebugSettings), 3449790084U) },
		{ FRigUnit_SpringIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_SpringIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringIK_WorkData), 2048138421U) },
		{ FRigUnit_SpringIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SpringIK_Statics::NewStructOps, TEXT("RigUnit_SpringIK"), &Z_Registration_Info_UScriptStruct_RigUnit_SpringIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SpringIK), 2242707678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_2695351695(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SpringIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
