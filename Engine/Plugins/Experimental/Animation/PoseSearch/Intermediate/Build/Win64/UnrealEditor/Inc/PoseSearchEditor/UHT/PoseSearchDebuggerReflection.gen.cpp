// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PoseSearchDebuggerReflection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchDebuggerReflection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection();
	POSESEARCHEDITOR_API UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister();
	POSESEARCHEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions();
	UPackage* Z_Construct_UPackage__Script_PoseSearchEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions;
class UScriptStruct* FPoseSearchDebuggerFeatureDrawOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions, (UObject*)Z_Construct_UPackage__Script_PoseSearchEditor(), TEXT("PoseSearchDebuggerFeatureDrawOptions"));
	}
	return Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.OuterSingleton;
}
template<> POSESEARCHEDITOR_API UScriptStruct* StaticStruct<FPoseSearchDebuggerFeatureDrawOptions>()
{
	return FPoseSearchDebuggerFeatureDrawOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisable_MetaData[];
#endif
		static void NewProp_bDisable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBoneNames_MetaData[];
#endif
		static void NewProp_bDrawBoneNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSampleLabels_MetaData[];
#endif
		static void NewProp_bDrawSampleLabels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSampleLabels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Used by the reflection UObject to encompass draw options for the query and database selections\n */" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
		{ "ToolTip", "Used by the reflection UObject to encompass draw options for the query and database selections" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseSearchDebuggerFeatureDrawOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable_SetBit(void* Obj)
	{
		((FPoseSearchDebuggerFeatureDrawOptions*)Obj)->bDisable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable = { "bDisable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDebuggerFeatureDrawOptions), &Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "EditCondition", "!bDisable" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames_SetBit(void* Obj)
	{
		((FPoseSearchDebuggerFeatureDrawOptions*)Obj)->bDrawBoneNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames = { "bDrawBoneNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDebuggerFeatureDrawOptions), &Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "EditCondition", "!bDisable" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels_SetBit(void* Obj)
	{
		((FPoseSearchDebuggerFeatureDrawOptions*)Obj)->bDrawSampleLabels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels = { "bDrawSampleLabels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseSearchDebuggerFeatureDrawOptions), &Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDisable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewProp_bDrawSampleLabels,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
		nullptr,
		&NewStructOps,
		"PoseSearchDebuggerFeatureDrawOptions",
		sizeof(FPoseSearchDebuggerFeatureDrawOptions),
		alignof(FPoseSearchDebuggerFeatureDrawOptions),
		Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.InnerSingleton, Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions.InnerSingleton;
	}
	void UPoseSearchDebuggerReflection::StaticRegisterNativesUPoseSearchDebuggerReflection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchDebuggerReflection);
	UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection_NoRegister()
	{
		return UPoseSearchDebuggerReflection::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDatabaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentDatabaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedPoseJumpTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedPoseJumpTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPlayerAssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPlayerAssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPlayerTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AssetPlayerTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LastDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimLinearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimLinearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimAngularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimAngularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryDrawOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QueryDrawOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPoseDrawOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedPoseDrawOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawActiveSkeleton_MetaData[];
#endif
		static void NewProp_bDrawActiveSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawActiveSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSelectedSkeleton_MetaData[];
#endif
		static void NewProp_bDrawSelectedSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSelectedSkeleton;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_QueryPoseVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QueryPoseVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QueryPoseVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActivePoseVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivePoseVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePoseVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectedPoseVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedPoseVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedPoseVector;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CostVector_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CostVector_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CostVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearchEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Reflection UObject being observed in the details view panel of the debugger\n */" },
		{ "IncludePath", "PoseSearchDebuggerReflection.h" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
		{ "ToolTip", "Reflection UObject being observed in the details view panel of the debugger" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CurrentDatabaseName_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "DisplayName", "Current Database" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CurrentDatabaseName = { "CurrentDatabaseName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, CurrentDatabaseName), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CurrentDatabaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CurrentDatabaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseJumpTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "Comment", "/** Time since last PoseSearch jump */" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
		{ "ToolTip", "Time since last PoseSearch jump" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseJumpTime = { "ElapsedPoseJumpTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, ElapsedPoseJumpTime), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseJumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseJumpTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerAssetName_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerAssetName = { "AssetPlayerAssetName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AssetPlayerAssetName), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerAssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerAssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime = { "AssetPlayerTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AssetPlayerTime), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime = { "LastDeltaTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, LastDeltaTime), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity = { "SimLinearVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SimLinearVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity = { "SimAngularVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SimAngularVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity = { "AnimLinearVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AnimLinearVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData[] = {
		{ "Category", "Motion Matching State" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity = { "AnimAngularVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, AnimAngularVelocity), METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryDrawOptions_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "DisplayName", "Query" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryDrawOptions = { "QueryDrawOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, QueryDrawOptions), Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryDrawOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryDrawOptions_MetaData)) }; // 3387436557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseDrawOptions_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "DisplayName", "Selected Pose" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseDrawOptions = { "SelectedPoseDrawOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SelectedPoseDrawOptions), Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseDrawOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseDrawOptions_MetaData)) }; // 3387436557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton_SetBit(void* Obj)
	{
		((UPoseSearchDebuggerReflection*)Obj)->bDrawActiveSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton = { "bDrawActiveSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchDebuggerReflection), &Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton_MetaData[] = {
		{ "Category", "Draw Options" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	void Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton_SetBit(void* Obj)
	{
		((UPoseSearchDebuggerReflection*)Obj)->bDrawSelectedSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton = { "bDrawSelectedSkeleton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseSearchDebuggerReflection), &Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector_Inner = { "QueryPoseVector", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector_MetaData[] = {
		{ "Category", "Pose Vectors" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector = { "QueryPoseVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, QueryPoseVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector_Inner = { "ActivePoseVector", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector_MetaData[] = {
		{ "Category", "Pose Vectors" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector = { "ActivePoseVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, ActivePoseVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector_Inner = { "SelectedPoseVector", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector_MetaData[] = {
		{ "Category", "Pose Vectors" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector = { "SelectedPoseVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, SelectedPoseVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector_Inner = { "CostVector", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector_MetaData[] = {
		{ "Category", "Pose Vectors" },
		{ "ModuleRelativePath", "Private/PoseSearchDebuggerReflection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector = { "CostVector", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseSearchDebuggerReflection, CostVector), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CurrentDatabaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ElapsedPoseJumpTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerAssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AssetPlayerTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_LastDeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SimAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimLinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_AnimAngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryDrawOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseDrawOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawActiveSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_bDrawSelectedSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_QueryPoseVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_ActivePoseVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_SelectedPoseVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::NewProp_CostVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchDebuggerReflection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::ClassParams = {
		&UPoseSearchDebuggerReflection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchDebuggerReflection()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton, Z_Construct_UClass_UPoseSearchDebuggerReflection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchDebuggerReflection.OuterSingleton;
	}
	template<> POSESEARCHEDITOR_API UClass* StaticClass<UPoseSearchDebuggerReflection>()
	{
		return UPoseSearchDebuggerReflection::StaticClass();
	}
	UPoseSearchDebuggerReflection::UPoseSearchDebuggerReflection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchDebuggerReflection);
	UPoseSearchDebuggerReflection::~UPoseSearchDebuggerReflection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ScriptStructInfo[] = {
		{ FPoseSearchDebuggerFeatureDrawOptions::StaticStruct, Z_Construct_UScriptStruct_FPoseSearchDebuggerFeatureDrawOptions_Statics::NewStructOps, TEXT("PoseSearchDebuggerFeatureDrawOptions"), &Z_Registration_Info_UScriptStruct_PoseSearchDebuggerFeatureDrawOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseSearchDebuggerFeatureDrawOptions), 3387436557U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchDebuggerReflection, UPoseSearchDebuggerReflection::StaticClass, TEXT("UPoseSearchDebuggerReflection"), &Z_Registration_Info_UClass_UPoseSearchDebuggerReflection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchDebuggerReflection), 207765980U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_1649129617(TEXT("/Script/PoseSearchEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Editor_Private_PoseSearchDebuggerReflection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
