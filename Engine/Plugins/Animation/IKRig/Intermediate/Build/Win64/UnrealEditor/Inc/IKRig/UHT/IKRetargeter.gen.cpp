// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retargeter/IKRetargeter.h"
#include "Retargeter/IKRetargetProfile.h"
#include "Retargeter/IKRetargetSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargeter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargeter_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetGlobalSettings();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings();
	IKRIG_API UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_URetargetRootSettings();
	IKRIG_API UClass* Z_Construct_UClass_URetargetRootSettings_NoRegister();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetRotationMode();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget();
	IKRIG_API UEnum* Z_Construct_UEnum_IKRig_ERetargetTranslationMode();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetGlobalSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRetargetProfile();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainFKSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainIKSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FTargetRootSettings();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RetargetChainMap;
class UScriptStruct* FRetargetChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRetargetChainMap, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("RetargetChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_RetargetChainMap.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FRetargetChainMap>()
{
	return FRetargetChainMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRetargetChainMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRetargetChainMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRetargetChainMap, SourceChain), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData[] = {
		{ "Category", "Offsets" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRetargetChainMap, TargetChain), METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_SourceChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewProp_TargetChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRetargetChainMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"RetargetChainMap",
		sizeof(FRetargetChainMap),
		alignof(FRetargetChainMap),
		Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRetargetChainMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRetargetChainMap()
	{
		if (!Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RetargetChainMap.InnerSingleton;
	}
	void URetargetChainSettings::StaticRegisterNativesURetargetChainSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetChainSettings);
	UClass* Z_Construct_UClass_URetargetChainSettings_NoRegister()
	{
		return URetargetChainSettings::StaticClass();
	}
	struct Z_Construct_UClass_URetargetChainSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChain_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CopyPoseUsingFK_MetaData[];
#endif
		static void NewProp_CopyPoseUsingFK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CopyPoseUsingFK;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveIKGoal_MetaData[];
#endif
		static void NewProp_DriveIKGoal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DriveIKGoal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendToSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSourceWeights_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSourceWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticLocalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticLocalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSpeedCurveToPlantIK_MetaData[];
#endif
		static void NewProp_UseSpeedCurveToPlantIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpeedCurveToPlantIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeedCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantCriticalDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantCriticalDamping;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetargetChainSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "// The chain on the Source IK Rig asset to copy animation FROM. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Source IK Rig asset to copy animation FROM." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain = { "SourceChain", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, SourceChain), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData[] = {
		{ "Category", "Chain Mapping" },
		{ "Comment", "// The chain on the Target IK Rig asset to copy animation TO. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The chain on the Target IK Rig asset to copy animation TO." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain = { "TargetChain", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, TargetChain), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The settings used to control the motion on this target chain. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The settings used to control the motion on this target chain." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, Settings), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings_MetaData)) }; // 1600617571
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData[] = {
		{ "Comment", "// Deprecated properties from before FTargetChainSettings / profile refactor  (July 2022)\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Deprecated properties from before FTargetChainSettings / profile refactor  (July 2022)" },
	};
#endif
	void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit(void* Obj)
	{
		((URetargetChainSettings*)Obj)->CopyPoseUsingFK_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK = { "CopyPoseUsingFK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, RotationMode_DEPRECATED), Z_Construct_UEnum_IKRig_ERetargetRotationMode, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_MetaData)) }; // 4027028449
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, RotationAlpha_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, TranslationMode_DEPRECATED), Z_Construct_UEnum_IKRig_ERetargetTranslationMode, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_MetaData)) }; // 2185613115
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha = { "TranslationAlpha", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, TranslationAlpha_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit(void* Obj)
	{
		((URetargetChainSettings*)Obj)->DriveIKGoal_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal = { "DriveIKGoal", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, BlendToSource_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights = { "BlendToSourceWeights", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, BlendToSourceWeights_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, StaticOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset = { "StaticLocalOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, StaticLocalOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset = { "StaticRotationOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, StaticRotationOffset_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, Extension_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_SetBit(void* Obj)
	{
		((URetargetChainSettings*)Obj)->UseSpeedCurveToPlantIK_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK = { "UseSpeedCurveToPlantIK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URetargetChainSettings), &Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName = { "SpeedCurveName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, SpeedCurveName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold = { "VelocityThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, VelocityThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness = { "UnplantStiffness", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, UnplantStiffness_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping = { "UnplantCriticalDamping", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetChainSettings, UnplantCriticalDamping_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SourceChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TargetChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Settings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_CopyPoseUsingFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_TranslationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_DriveIKGoal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_BlendToSourceWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticLocalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_StaticRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UseSpeedCurveToPlantIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_SpeedCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_VelocityThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetChainSettings_Statics::NewProp_UnplantCriticalDamping,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetargetChainSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetChainSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams = {
		&URetargetChainSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetChainSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetargetChainSettings()
	{
		if (!Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton, Z_Construct_UClass_URetargetChainSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetargetChainSettings.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<URetargetChainSettings>()
	{
		return URetargetChainSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetChainSettings);
	URetargetChainSettings::~URetargetChainSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetChainSettings)
	void URetargetRootSettings::StaticRegisterNativesURetargetRootSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetargetRootSettings);
	UClass* Z_Construct_UClass_URetargetRootSettings_NoRegister()
	{
		return URetargetRootSettings::StaticClass();
	}
	struct Z_Construct_UClass_URetargetRootSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetRootTranslation_MetaData[];
#endif
		static void NewProp_RetargetRootTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RetargetRootTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScaleHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalScaleHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalScaleVertical_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalScaleVertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendToSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendToSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticRotationOffset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetargetRootSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The settings used to control the motion of the target root bone. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The settings used to control the motion of the target root bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, Settings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings_MetaData)) }; // 1694733288
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_MetaData[] = {
		{ "Comment", "// Deprecated properties from before FTargetRootSettings / profile refactor \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Deprecated properties from before FTargetRootSettings / profile refactor" },
	};
#endif
	void Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_SetBit(void* Obj)
	{
		((URetargetRootSettings*)Obj)->RetargetRootTranslation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation = { "RetargetRootTranslation", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URetargetRootSettings), &Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal = { "GlobalScaleHorizontal", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, GlobalScaleHorizontal_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical = { "GlobalScaleVertical", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, GlobalScaleVertical_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource = { "BlendToSource", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, BlendToSource_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset = { "StaticOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, StaticOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset = { "StaticRotationOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URetargetRootSettings, StaticRotationOffset_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_Settings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_RetargetRootTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_GlobalScaleVertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_BlendToSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetargetRootSettings_Statics::NewProp_StaticRotationOffset,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetargetRootSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetargetRootSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetargetRootSettings_Statics::ClassParams = {
		&URetargetRootSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URetargetRootSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetargetRootSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetargetRootSettings()
	{
		if (!Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton, Z_Construct_UClass_URetargetRootSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetargetRootSettings.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<URetargetRootSettings>()
	{
		return URetargetRootSettings::StaticClass();
	}
	URetargetRootSettings::URetargetRootSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetargetRootSettings);
	URetargetRootSettings::~URetargetRootSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URetargetRootSettings)
	void UIKRetargetGlobalSettings::StaticRegisterNativesUIKRetargetGlobalSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetGlobalSettings);
	UClass* Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister()
	{
		return UIKRetargetGlobalSettings::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetGlobalSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Global retargeter settings. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Global retargeter settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetGlobalSettings, Settings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings_MetaData)) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetGlobalSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::ClassParams = {
		&UIKRetargetGlobalSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetGlobalSettings()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton, Z_Construct_UClass_UIKRetargetGlobalSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetGlobalSettings.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRetargetGlobalSettings>()
	{
		return UIKRetargetGlobalSettings::StaticClass();
	}
	UIKRetargetGlobalSettings::UIKRetargetGlobalSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetGlobalSettings);
	UIKRetargetGlobalSettings::~UIKRetargetGlobalSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_IKRetargetPose;
class UScriptStruct* FIKRetargetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FIKRetargetPose, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("IKRetargetPose"));
	}
	return Z_Registration_Info_UScriptStruct_IKRetargetPose.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FIKRetargetPose>()
{
	return FIKRetargetPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FIKRetargetPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTranslationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTranslationOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneRotationOffsets_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneRotationOffsets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRotationOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneRotationOffsets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIKRetargetPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "Comment", "// a translational delta in GLOBAL space, applied only to the retarget root bone\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "a translational delta in GLOBAL space, applied only to the retarget root bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset = { "RootTranslationOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRetargetPose, RootTranslationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp = { "BoneRotationOffsets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData[] = {
		{ "Category", "RetargetPose" },
		{ "Comment", "// these are LOCAL-space rotation deltas to be applied to a bone to modify it's retarget pose\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "these are LOCAL-space rotation deltas to be applied to a bone to modify it's retarget pose" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets = { "BoneRotationOffsets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FIKRetargetPose, BoneRotationOffsets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_RootTranslationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewProp_BoneRotationOffsets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIKRetargetPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		&NewStructOps,
		"IKRetargetPose",
		sizeof(FIKRetargetPose),
		alignof(FIKRetargetPose),
		Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIKRetargetPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIKRetargetPose()
	{
		if (!Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_IKRetargetPose.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERetargetSourceOrTarget;
	static UEnum* ERetargetSourceOrTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("ERetargetSourceOrTarget"));
		}
		return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.OuterSingleton;
	}
	template<> IKRIG_API UEnum* StaticEnum<ERetargetSourceOrTarget>()
	{
		return ERetargetSourceOrTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enumerators[] = {
		{ "ERetargetSourceOrTarget::Source", (int64)ERetargetSourceOrTarget::Source },
		{ "ERetargetSourceOrTarget::Target", (int64)ERetargetSourceOrTarget::Target },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// which skeleton are we referring to?\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "Source.Name", "ERetargetSourceOrTarget::Source" },
		{ "Target.Comment", "// the SOURCE skeleton (to copy FROM)\n" },
		{ "Target.Name", "ERetargetSourceOrTarget::Target" },
		{ "Target.ToolTip", "the SOURCE skeleton (to copy FROM)" },
		{ "ToolTip", "which skeleton are we referring to?" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IKRig,
		nullptr,
		"ERetargetSourceOrTarget",
		"ERetargetSourceOrTarget",
		Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget()
	{
		if (!Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton, Z_Construct_UEnum_IKRig_ERetargetSourceOrTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERetargetSourceOrTarget.InnerSingleton;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetChainSpeedPlantSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FTargetChainSpeedPlantSettings,Z_Param_Out_SpeedPlantSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetChainSpeedPlantSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_SpeedPlantSettings,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetChainIKSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FTargetChainIKSettings,Z_Param_Out_IKSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetChainIKSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_IKSettings,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetChainFKSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FTargetChainFKSettings,Z_Param_Out_FKSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetChainFKSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_FKSettings,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetChainSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FTargetChainSettings,Z_Param_Out_ChainSettings);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetChainSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_ChainSettings,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetRootSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FTargetRootSettings,Z_Param_Out_RootSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetRootSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_RootSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execSetGlobalSettingsInRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_STRUCT_REF(FRetargetGlobalSettings,Z_Param_Out_GlobalSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::SetGlobalSettingsInRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_Out_GlobalSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetGlobalSettingsFromRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRetargetGlobalSettings*)Z_Param__Result=UIKRetargeter::GetGlobalSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetGlobalSettingsFromRetargetAsset)
	{
		P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
		P_GET_STRUCT_REF(FRetargetGlobalSettings,Z_Param_Out_OutSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::GetGlobalSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_OptionalProfileName,Z_Param_Out_OutSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetRootSettingsFromRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetRootSettings*)Z_Param__Result=UIKRetargeter::GetRootSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetRootSettingsFromRetargetAsset)
	{
		P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
		P_GET_STRUCT_REF(FTargetRootSettings,Z_Param_Out_OutSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIKRetargeter::GetRootSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_OptionalProfileName,Z_Param_Out_OutSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetChainSettingsFromRetargetProfile)
	{
		P_GET_STRUCT_REF(FRetargetProfile,Z_Param_Out_RetargetProfile);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainSettingsFromRetargetProfile(Z_Param_Out_RetargetProfile,Z_Param_TargetChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetChainSettingsFromRetargetAsset)
	{
		P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalProfileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainSettingsFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_TargetChainName,Z_Param_OptionalProfileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRetargeter::execGetChainUsingGoalFromRetargetAsset)
	{
		P_GET_OBJECT(UIKRetargeter,Z_Param_RetargetAsset);
		P_GET_PROPERTY(FNameProperty,Z_Param_IKGoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetChainSettings*)Z_Param__Result=UIKRetargeter::GetChainUsingGoalFromRetargetAsset(Z_Param_RetargetAsset,Z_Param_IKGoalName);
		P_NATIVE_END;
	}
	void UIKRetargeter::StaticRegisterNativesUIKRetargeter()
	{
		UClass* Class = UIKRetargeter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChainSettingsFromRetargetAsset", &UIKRetargeter::execGetChainSettingsFromRetargetAsset },
			{ "GetChainSettingsFromRetargetProfile", &UIKRetargeter::execGetChainSettingsFromRetargetProfile },
			{ "GetChainUsingGoalFromRetargetAsset", &UIKRetargeter::execGetChainUsingGoalFromRetargetAsset },
			{ "GetGlobalSettingsFromRetargetAsset", &UIKRetargeter::execGetGlobalSettingsFromRetargetAsset },
			{ "GetGlobalSettingsFromRetargetProfile", &UIKRetargeter::execGetGlobalSettingsFromRetargetProfile },
			{ "GetRootSettingsFromRetargetAsset", &UIKRetargeter::execGetRootSettingsFromRetargetAsset },
			{ "GetRootSettingsFromRetargetProfile", &UIKRetargeter::execGetRootSettingsFromRetargetProfile },
			{ "SetChainFKSettingsInRetargetProfile", &UIKRetargeter::execSetChainFKSettingsInRetargetProfile },
			{ "SetChainIKSettingsInRetargetProfile", &UIKRetargeter::execSetChainIKSettingsInRetargetProfile },
			{ "SetChainSettingsInRetargetProfile", &UIKRetargeter::execSetChainSettingsInRetargetProfile },
			{ "SetChainSpeedPlantSettingsInRetargetProfile", &UIKRetargeter::execSetChainSpeedPlantSettingsInRetargetProfile },
			{ "SetGlobalSettingsInRetargetProfile", &UIKRetargeter::execSetGlobalSettingsInRetargetProfile },
			{ "SetRootSettingsInRetargetProfile", &UIKRetargeter::execSetRootSettingsInRetargetProfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics
	{
		struct IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms
		{
			const UIKRetargeter* RetargetAsset;
			FName TargetChainName;
			FName OptionalProfileName;
			FTargetChainSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(nullptr, 0) }; // 1600617571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the chain settings associated with a given target chain in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given target chain in an IK Retargeter Asset using the given profile name (optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainSettingsFromRetargetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetChainSettingsFromRetargetAsset_Parms), Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics
	{
		struct IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FName TargetChainName;
			FTargetChainSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(nullptr, 0) }; // 1600617571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_TargetChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the chain settings associated with a given target chain in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given target chain in the supplied Retarget Profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainSettingsFromRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetChainSettingsFromRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics
	{
		struct IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms
		{
			const UIKRetargeter* RetargetAsset;
			FName IKGoalName;
			FTargetChainSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKGoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKGoalName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName = { "IKGoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, IKGoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(nullptr, 0) }; // 1600617571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_IKGoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the chain settings associated with a given Goal in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the chain settings associated with a given Goal in an IK Retargeter Asset using the given profile name (optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetChainUsingGoalFromRetargetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::IKRetargeter_eventGetChainUsingGoalFromRetargetAsset_Parms), Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics
	{
		struct IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms
		{
			const UIKRetargeter* RetargetAsset;
			FName OptionalProfileName;
			FRetargetGlobalSettings OutSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms, OutSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(nullptr, 0) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::NewProp_OutSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the global settings in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the global settings in an IK Retargeter Asset using the given profile name (optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetGlobalSettingsFromRetargetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetAsset_Parms), Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics
	{
		struct IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FRetargetGlobalSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(nullptr, 0) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the global settings in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the global settings in the supplied Retarget Profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetGlobalSettingsFromRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetGlobalSettingsFromRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics
	{
		struct IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms
		{
			const UIKRetargeter* RetargetAsset;
			FName OptionalProfileName;
			FTargetRootSettings OutSettings;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalProfileName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, RetargetAsset), Z_Construct_UClass_UIKRetargeter_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName = { "OptionalProfileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, OptionalProfileName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms, OutSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(nullptr, 0) }; // 1694733288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OptionalProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::NewProp_OutSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetAsset" },
		{ "Comment", "// Returns the root settings in an IK Retargeter Asset using the given profile name (optional) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the root settings in an IK Retargeter Asset using the given profile name (optional)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetRootSettingsFromRetargetAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::IKRetargeter_eventGetRootSettingsFromRetargetAsset_Parms), Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics
	{
		struct IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetRootSettings ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(nullptr, 0) }; // 1694733288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Returns the root settings in the supplied Retarget Profile. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Returns the root settings in the supplied Retarget Profile." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "GetRootSettingsFromRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::IKRetargeter_eventGetRootSettingsFromRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetChainFKSettings FKSettings;
			FName TargetChainName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FKSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FKSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings = { "FKSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, FKSettings), Z_Construct_UScriptStruct_FTargetChainFKSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings_MetaData)) }; // 866681473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_FKSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain FK settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain FK settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainFKSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainFKSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetChainIKSettings IKSettings;
			FName TargetChainName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings = { "IKSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, IKSettings), Z_Construct_UScriptStruct_FTargetChainIKSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings_MetaData)) }; // 1516588858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_IKSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain IK settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain IK settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainIKSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainIKSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetChainSettings ChainSettings;
			FName TargetChainName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, ChainSettings), Z_Construct_UScriptStruct_FTargetChainSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings_MetaData)) }; // 1600617571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_ChainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetChainSpeedPlantSettings SpeedPlantSettings;
			FName TargetChainName;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedPlantSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedPlantSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetChainName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings = { "SpeedPlantSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, SpeedPlantSettings), Z_Construct_UScriptStruct_FTargetChainSpeedPlantSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings_MetaData)) }; // 503597721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName = { "TargetChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms, TargetChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_SpeedPlantSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::NewProp_TargetChainName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the chain Speed Plant settings in a retarget profile (will set bApplyChainSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the chain Speed Plant settings in a retarget profile (will set bApplyChainSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetChainSpeedPlantSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::IKRetargeter_eventSetChainSpeedPlantSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FRetargetGlobalSettings GlobalSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms, GlobalSettings), Z_Construct_UScriptStruct_FRetargetGlobalSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings_MetaData)) }; // 3791297177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::NewProp_GlobalSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the global settings in a retarget profile (will set bApplyGlobalSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the global settings in a retarget profile (will set bApplyGlobalSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetGlobalSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::IKRetargeter_eventSetGlobalSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics
	{
		struct IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms
		{
			FRetargetProfile RetargetProfile;
			FTargetRootSettings RootSettings;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RetargetProfile = { "RetargetProfile", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms, RetargetProfile), Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms, RootSettings), Z_Construct_UScriptStruct_FTargetRootSettings, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings_MetaData)) }; // 1694733288
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RetargetProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::NewProp_RootSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "RetargetProfile" },
		{ "Comment", "// Set the root settings in a retarget profile (will set bApplyRootSettings to true). \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Set the root settings in a retarget profile (will set bApplyRootSettings to true)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRetargeter, nullptr, "SetRootSettingsInRetargetProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::IKRetargeter_eventSetRootSettingsInRetargetProfile_Parms), Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargeter);
	UClass* Z_Construct_UClass_UIKRetargeter_NoRegister()
	{
		return UIKRetargeter::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargeter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIKRigAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceIKRigAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourcePreviewMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIKRigAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetIKRigAsset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetPreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetRoot_MetaData[];
#endif
		static void NewProp_bRetargetRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetFK_MetaData[];
#endif
		static void NewProp_bRetargetFK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetFK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetIK_MetaData[];
#endif
		static void NewProp_bRetargetIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetActorScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetMeshScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDraw_MetaData[];
#endif
		static void NewProp_bDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFinalGoals_MetaData[];
#endif
		static void NewProp_bDrawFinalGoals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFinalGoals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSourceLocations_MetaData[];
#endif
		static void NewProp_bDrawSourceLocations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSourceLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainDrawThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainDrawThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshesAskedToFixRootHeightFor_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshesAskedToFixRootHeightFor_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MeshesAskedToFixRootHeightFor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainMapping;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChainSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChainSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GlobalSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profiles_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Profiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Profiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentProfile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRetargetPoses_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceRetargetPoses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRetargetPoses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SourceRetargetPoses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRetargetPoses_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetRetargetPoses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRetargetPoses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetRetargetPoses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSourceRetargetPose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentSourceRetargetPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargetRetargetPose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentTargetRetargetPose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetPoses_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RetargetPoses_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetPoses_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RetargetPoses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetPose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRetargetPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargeter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKRetargeter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetAsset, "GetChainSettingsFromRetargetAsset" }, // 1863520408
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainSettingsFromRetargetProfile, "GetChainSettingsFromRetargetProfile" }, // 3631821912
		{ &Z_Construct_UFunction_UIKRetargeter_GetChainUsingGoalFromRetargetAsset, "GetChainUsingGoalFromRetargetAsset" }, // 1158805028
		{ &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetAsset, "GetGlobalSettingsFromRetargetAsset" }, // 500038607
		{ &Z_Construct_UFunction_UIKRetargeter_GetGlobalSettingsFromRetargetProfile, "GetGlobalSettingsFromRetargetProfile" }, // 519714092
		{ &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetAsset, "GetRootSettingsFromRetargetAsset" }, // 2853017001
		{ &Z_Construct_UFunction_UIKRetargeter_GetRootSettingsFromRetargetProfile, "GetRootSettingsFromRetargetProfile" }, // 2518789335
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainFKSettingsInRetargetProfile, "SetChainFKSettingsInRetargetProfile" }, // 425376200
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainIKSettingsInRetargetProfile, "SetChainIKSettingsInRetargetProfile" }, // 2525930686
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainSettingsInRetargetProfile, "SetChainSettingsInRetargetProfile" }, // 2716867325
		{ &Z_Construct_UFunction_UIKRetargeter_SetChainSpeedPlantSettingsInRetargetProfile, "SetChainSpeedPlantSettingsInRetargetProfile" }, // 3689081450
		{ &Z_Construct_UFunction_UIKRetargeter_SetGlobalSettingsInRetargetProfile, "SetGlobalSettingsInRetargetProfile" }, // 3934167168
		{ &Z_Construct_UFunction_UIKRetargeter_SetRootSettingsInRetargetProfile, "SetRootSettingsInRetargetProfile" }, // 3769989097
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Retargeter/IKRetargeter.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "// The rig to copy animation FROM.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation FROM." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset = { "SourceIKRigAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, SourceIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "// Optional. Override the Skeletal Mesh to copy animation from. Uses the preview mesh from the Source IK Rig asset by default. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Optional. Override the Skeletal Mesh to copy animation from. Uses the preview mesh from the Source IK Rig asset by default." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh = { "SourcePreviewMesh", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, SourcePreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// The rig to copy animation TO.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The rig to copy animation TO." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset = { "TargetIKRigAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetIKRigAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Optional. Override the Skeletal Mesh to preview the retarget on. Uses the preview mesh from the Target IK Rig asset by default. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Optional. Override the Skeletal Mesh to preview the retarget on. Uses the preview mesh from the Target IK Rig asset by default." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh = { "TargetPreviewMesh", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetPreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetRoot_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot = { "bRetargetRoot", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetFK_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK = { "bRetargetFK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bRetargetIK_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK = { "bRetargetIK", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset = { "TargetActorOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetActorOffset_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale = { "TargetActorScale", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetActorScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// The offset applied to the target mesh in the editor viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The offset applied to the target mesh in the editor viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset = { "TargetMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// Scale the target mesh in the viewport for easier visualization next to the source.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Scale the target mesh in the viewport for easier visualization next to the source." },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale = { "TargetMeshScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetMeshScale), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset_MetaData[] = {
		{ "Category", "PreviewSettings" },
		{ "Comment", "// The offset applied to the source mesh in the editor viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The offset applied to the source mesh in the editor viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset = { "SourceMeshOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, SourceMeshOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Toggle debug drawing for retargeting in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Toggle debug drawing for retargeting in the viewport." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw = { "bDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Draw final IK goal locations. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Draw final IK goal locations." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bDrawFinalGoals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals = { "bDrawFinalGoals", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// Draw goal locations from source skeleton. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Draw goal locations from source skeleton." },
	};
#endif
	void Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_SetBit(void* Obj)
	{
		((UIKRetargeter*)Obj)->bDrawSourceLocations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations = { "bDrawSourceLocations", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIKRetargeter), &Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// The visual size of the IK goals in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The visual size of the IK goals in the viewport." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize = { "ChainDrawSize", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, ChainDrawSize), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "// The thickness of lines on the IK goals in the viewport. \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The thickness of lines on the IK goals in the viewport." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness = { "ChainDrawThickness", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, ChainDrawThickness), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData[] = {
		{ "Comment", "// The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The visual size of the bones in the viewport (saved between sessions). This is set from the viewport Character>Bones menu" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize = { "BoneDrawSize", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, BoneDrawSize), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData[] = {
		{ "Comment", "/** The controller responsible for managing this asset's data (all editor mutation goes through this) */" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The controller responsible for managing this asset's data (all editor mutation goes through this)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, Controller), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor_ElementProp = { "MeshesAskedToFixRootHeightFor", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor_MetaData[] = {
		{ "Comment", "// only ask to fix the root height once, then warn thereafter (don't nag) \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "only ask to fix the root height once, then warn thereafter (don't nag)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor = { "MeshesAskedToFixRootHeightFor", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, MeshesAskedToFixRootHeightFor), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner = { "ChainMapping", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRetargetChainMap, METADATA_PARAMS(nullptr, 0) }; // 123043695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping = { "ChainMapping", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, ChainMapping_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_MetaData)) }; // 123043695
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner = { "ChainSettings", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URetargetChainSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData[] = {
		{ "Comment", "// Settings for how to map source chains to target chains.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "Settings for how to map source chains to target chains." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings = { "ChainSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, ChainSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings_MetaData[] = {
		{ "Comment", "// the retarget root settings \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "the retarget root settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings = { "RootSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, RootSettings), Z_Construct_UClass_URetargetRootSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings_MetaData[] = {
		{ "Comment", "// the retarget root settings \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "the retarget root settings" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings = { "GlobalSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, GlobalSettings), Z_Construct_UClass_UIKRetargetGlobalSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_ValueProp = { "Profiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRetargetProfile, METADATA_PARAMS(nullptr, 0) }; // 3274264727
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_Key_KeyProp = { "Profiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_MetaData[] = {
		{ "Comment", "// settings profiles stored in this asset \n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "settings profiles stored in this asset" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles = { "Profiles", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, Profiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_MetaData)) }; // 3274264727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile = { "CurrentProfile", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, CurrentProfile), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_ValueProp = { "SourceRetargetPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_Key_KeyProp = { "SourceRetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_MetaData[] = {
		{ "Comment", "// The set of retarget poses for the SOURCE skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses for the SOURCE skeleton." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses = { "SourceRetargetPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, SourceRetargetPoses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_MetaData)) }; // 3101249334
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_ValueProp = { "TargetRetargetPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_Key_KeyProp = { "TargetRetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_MetaData[] = {
		{ "Comment", "// The set of retarget poses for the TARGET skeleton.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The set of retarget poses for the TARGET skeleton." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses = { "TargetRetargetPoses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, TargetRetargetPoses), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_MetaData)) }; // 3101249334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose_MetaData[] = {
		{ "Comment", "// The current retarget pose to use for the SOURCE.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The current retarget pose to use for the SOURCE." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose = { "CurrentSourceRetargetPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, CurrentSourceRetargetPose), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose_MetaData[] = {
		{ "Comment", "// The current retarget pose to use for the TARGET.\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
		{ "ToolTip", "The current retarget pose to use for the TARGET." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose = { "CurrentTargetRetargetPose", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, CurrentTargetRetargetPose), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp = { "RetargetPoses", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FIKRetargetPose, METADATA_PARAMS(nullptr, 0) }; // 3101249334
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp = { "RetargetPoses_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses = { "RetargetPoses", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, RetargetPoses_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_MetaData)) }; // 3101249334
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData[] = {
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargeter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose = { "CurrentRetargetPose", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargeter, CurrentRetargetPose_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargeter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceIKRigAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourcePreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetIKRigAsset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetPreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetFK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bRetargetIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetActorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetMeshScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceMeshOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawFinalGoals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_bDrawSourceLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainDrawThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_BoneDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_MeshesAskedToFixRootHeightFor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_ChainSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RootSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_GlobalSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_Profiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_SourceRetargetPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_TargetRetargetPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentSourceRetargetPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentTargetRetargetPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_RetargetPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargeter_Statics::NewProp_CurrentRetargetPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargeter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargeter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargeter_Statics::ClassParams = {
		&UIKRetargeter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIKRetargeter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargeter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargeter()
	{
		if (!Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton, Z_Construct_UClass_UIKRetargeter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargeter.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRetargeter>()
	{
		return UIKRetargeter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargeter);
	UIKRetargeter::~UIKRetargeter() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UIKRetargeter)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo[] = {
		{ ERetargetSourceOrTarget_StaticEnum, TEXT("ERetargetSourceOrTarget"), &Z_Registration_Info_UEnum_ERetargetSourceOrTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3404744579U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo[] = {
		{ FRetargetChainMap::StaticStruct, Z_Construct_UScriptStruct_FRetargetChainMap_Statics::NewStructOps, TEXT("RetargetChainMap"), &Z_Registration_Info_UScriptStruct_RetargetChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRetargetChainMap), 123043695U) },
		{ FIKRetargetPose::StaticStruct, Z_Construct_UScriptStruct_FIKRetargetPose_Statics::NewStructOps, TEXT("IKRetargetPose"), &Z_Registration_Info_UScriptStruct_IKRetargetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FIKRetargetPose), 3101249334U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URetargetChainSettings, URetargetChainSettings::StaticClass, TEXT("URetargetChainSettings"), &Z_Registration_Info_UClass_URetargetChainSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetChainSettings), 1590125242U) },
		{ Z_Construct_UClass_URetargetRootSettings, URetargetRootSettings::StaticClass, TEXT("URetargetRootSettings"), &Z_Registration_Info_UClass_URetargetRootSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetargetRootSettings), 1842197936U) },
		{ Z_Construct_UClass_UIKRetargetGlobalSettings, UIKRetargetGlobalSettings::StaticClass, TEXT("UIKRetargetGlobalSettings"), &Z_Registration_Info_UClass_UIKRetargetGlobalSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetGlobalSettings), 3193225211U) },
		{ Z_Construct_UClass_UIKRetargeter, UIKRetargeter::StaticClass, TEXT("UIKRetargeter"), &Z_Registration_Info_UClass_UIKRetargeter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargeter), 3055357165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_4249806943(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargeter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
