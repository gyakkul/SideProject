// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigTestData.h"
#include "Rigs/RigHierarchyPose.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigTestData() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTestData();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigTestData_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataFrame();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataVariable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable;
class UScriptStruct* FControlRigTestDataVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigTestDataVariable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigTestDataVariable"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigTestDataVariable>()
{
	return FControlRigTestDataVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigTestDataVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataVariable, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataVariable, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "ControlRigTestDataVariable" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataVariable, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigTestDataVariable",
		sizeof(FControlRigTestDataVariable),
		alignof(FControlRigTestDataVariable),
		Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton, Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame;
class UScriptStruct* FControlRigTestDataFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigTestDataFrame, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("ControlRigTestDataFrame"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FControlRigTestDataFrame>()
{
	return FControlRigTestDataFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_AbsoluteTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigTestDataFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime = { "AbsoluteTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataFrame, AbsoluteTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataFrame, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigTestDataVariable, METADATA_PARAMS(nullptr, 0) }; // 687772214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataFrame, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_MetaData)) }; // 687772214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "ControlRigTestDataFrame" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlRigTestDataFrame, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_AbsoluteTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"ControlRigTestDataFrame",
		sizeof(FControlRigTestDataFrame),
		alignof(FControlRigTestDataFrame),
		Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigTestDataFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton, Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode;
	static UEnum* EControlRigTestDataPlaybackMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigTestDataPlaybackMode"));
		}
		return Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigTestDataPlaybackMode>()
	{
		return EControlRigTestDataPlaybackMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enumerators[] = {
		{ "EControlRigTestDataPlaybackMode::Live", (int64)EControlRigTestDataPlaybackMode::Live },
		{ "EControlRigTestDataPlaybackMode::ReplayInputs", (int64)EControlRigTestDataPlaybackMode::ReplayInputs },
		{ "EControlRigTestDataPlaybackMode::GroundTruth", (int64)EControlRigTestDataPlaybackMode::GroundTruth },
		{ "EControlRigTestDataPlaybackMode::Max", (int64)EControlRigTestDataPlaybackMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enum_MetaDataParams[] = {
		{ "GroundTruth.Name", "EControlRigTestDataPlaybackMode::GroundTruth" },
		{ "Live.Name", "EControlRigTestDataPlaybackMode::Live" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigTestDataPlaybackMode::Max" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
		{ "ReplayInputs.Name", "EControlRigTestDataPlaybackMode::ReplayInputs" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigTestDataPlaybackMode",
		"EControlRigTestDataPlaybackMode",
		Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode()
	{
		if (!Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UControlRigTestData::execIsRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execIsReplaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReplaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execGetPlaybackMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EControlRigTestDataPlaybackMode*)Z_Param__Result=P_THIS->GetPlaybackMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execReleaseReplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseReplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execSetupReplay)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_UBOOL(Z_Param_bGroundTruth);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupReplay(Z_Param_InControlRig,Z_Param_bGroundTruth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execRecord)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InControlRig);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InRecordingDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Record(Z_Param_InControlRig,Z_Param_InRecordingDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execGetFrameIndexForTime)
	{
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InSeconds);
		P_GET_UBOOL(Z_Param_bInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFrameIndexForTime(Z_Param_InSeconds,Z_Param_bInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execGetTimeRange)
	{
		P_GET_UBOOL(Z_Param_bInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetTimeRange(Z_Param_bInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigTestData::execCreateNewAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredPackagePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBlueprintPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRigTestData**)Z_Param__Result=UControlRigTestData::CreateNewAsset(Z_Param_InDesiredPackagePath,Z_Param_InBlueprintPathName);
		P_NATIVE_END;
	}
	void UControlRigTestData::StaticRegisterNativesUControlRigTestData()
	{
		UClass* Class = UControlRigTestData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewAsset", &UControlRigTestData::execCreateNewAsset },
			{ "GetFrameIndexForTime", &UControlRigTestData::execGetFrameIndexForTime },
			{ "GetPlaybackMode", &UControlRigTestData::execGetPlaybackMode },
			{ "GetTimeRange", &UControlRigTestData::execGetTimeRange },
			{ "IsRecording", &UControlRigTestData::execIsRecording },
			{ "IsReplaying", &UControlRigTestData::execIsReplaying },
			{ "Record", &UControlRigTestData::execRecord },
			{ "ReleaseReplay", &UControlRigTestData::execReleaseReplay },
			{ "SetupReplay", &UControlRigTestData::execSetupReplay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics
	{
		struct ControlRigTestData_eventCreateNewAsset_Parms
		{
			FString InDesiredPackagePath;
			FString InBlueprintPathName;
			UControlRigTestData* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredPackagePath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InBlueprintPathName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InDesiredPackagePath = { "InDesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, InDesiredPackagePath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InBlueprintPathName = { "InBlueprintPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, InBlueprintPathName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventCreateNewAsset_Parms, ReturnValue), Z_Construct_UClass_UControlRigTestData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InDesiredPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_InBlueprintPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "CreateNewAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::ControlRigTestData_eventCreateNewAsset_Parms), Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_CreateNewAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_CreateNewAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics
	{
		struct ControlRigTestData_eventGetFrameIndexForTime_Parms
		{
			double InSeconds;
			bool bInput;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InSeconds;
		static void NewProp_bInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_InSeconds = { "InSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventGetFrameIndexForTime_Parms, InSeconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput_SetBit(void* Obj)
	{
		((ControlRigTestData_eventGetFrameIndexForTime_Parms*)Obj)->bInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventGetFrameIndexForTime_Parms), &Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventGetFrameIndexForTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_InSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_bInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bInput", "false" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetFrameIndexForTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::ControlRigTestData_eventGetFrameIndexForTime_Parms), Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics
	{
		struct ControlRigTestData_eventGetPlaybackMode_Parms
		{
			EControlRigTestDataPlaybackMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventGetPlaybackMode_Parms, ReturnValue), Z_Construct_UEnum_ControlRig_EControlRigTestDataPlaybackMode, METADATA_PARAMS(nullptr, 0) }; // 1177094751
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetPlaybackMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::ControlRigTestData_eventGetPlaybackMode_Parms), Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics
	{
		struct ControlRigTestData_eventGetTimeRange_Parms
		{
			bool bInput;
			FVector2D ReturnValue;
		};
		static void NewProp_bInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput_SetBit(void* Obj)
	{
		((ControlRigTestData_eventGetTimeRange_Parms*)Obj)->bInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput = { "bInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventGetTimeRange_Parms), &Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventGetTimeRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_bInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bInput", "false" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "GetTimeRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::ControlRigTestData_eventGetTimeRange_Parms), Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_GetTimeRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_GetTimeRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics
	{
		struct ControlRigTestData_eventIsRecording_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigTestData_eventIsRecording_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventIsRecording_Parms), &Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "IsRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::ControlRigTestData_eventIsRecording_Parms), Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_IsRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_IsRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics
	{
		struct ControlRigTestData_eventIsReplaying_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigTestData_eventIsReplaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventIsReplaying_Parms), &Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "IsReplaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::ControlRigTestData_eventIsReplaying_Parms), Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_IsReplaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_IsReplaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_Record_Statics
	{
		struct ControlRigTestData_eventRecord_Parms
		{
			UControlRig* InControlRig;
			double InRecordingDuration;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InRecordingDuration;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventRecord_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InRecordingDuration = { "InRecordingDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventRecord_Parms, InRecordingDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigTestData_eventRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventRecord_Parms), &Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_InRecordingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_Record_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_Record_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_InRecordingDuration", "0.000000" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_Record_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "Record", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_Record_Statics::ControlRigTestData_eventRecord_Parms), Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_Record_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_Record_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_Record_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_Record()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_Record_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "ReleaseReplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_ReleaseReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_ReleaseReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics
	{
		struct ControlRigTestData_eventSetupReplay_Parms
		{
			UControlRig* InControlRig;
			bool bGroundTruth;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InControlRig;
		static void NewProp_bGroundTruth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroundTruth;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_InControlRig = { "InControlRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigTestData_eventSetupReplay_Parms, InControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth_SetBit(void* Obj)
	{
		((ControlRigTestData_eventSetupReplay_Parms*)Obj)->bGroundTruth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth = { "bGroundTruth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventSetupReplay_Parms), &Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRigTestData_eventSetupReplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRigTestData_eventSetupReplay_Parms), &Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_InControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_bGroundTruth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRigTestData" },
		{ "CPP_Default_bGroundTruth", "true" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigTestData, nullptr, "SetupReplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::ControlRigTestData_eventSetupReplay_Parms), Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigTestData_SetupReplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigTestData_SetupReplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigTestData);
	UClass* Z_Construct_UClass_UControlRigTestData_NoRegister()
	{
		return UControlRigTestData::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigTestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlRigObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Initial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputFrames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputFrames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputFrames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputFrames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputFrames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputFrames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FramesToSkip_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesToSkip_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FramesToSkip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Tolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigTestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigTestData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigTestData_CreateNewAsset, "CreateNewAsset" }, // 1344535422
		{ &Z_Construct_UFunction_UControlRigTestData_GetFrameIndexForTime, "GetFrameIndexForTime" }, // 4163021461
		{ &Z_Construct_UFunction_UControlRigTestData_GetPlaybackMode, "GetPlaybackMode" }, // 1736357516
		{ &Z_Construct_UFunction_UControlRigTestData_GetTimeRange, "GetTimeRange" }, // 134416723
		{ &Z_Construct_UFunction_UControlRigTestData_IsRecording, "IsRecording" }, // 3018271538
		{ &Z_Construct_UFunction_UControlRigTestData_IsReplaying, "IsReplaying" }, // 2632108463
		{ &Z_Construct_UFunction_UControlRigTestData_Record, "Record" }, // 2086421363
		{ &Z_Construct_UFunction_UControlRigTestData_ReleaseReplay, "ReleaseReplay" }, // 3170455618
		{ &Z_Construct_UFunction_UControlRigTestData_SetupReplay, "SetupReplay" }, // 1554004689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ControlRigTestData.h" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath = { "ControlRigObjectPath", nullptr, (EPropertyFlags)0x0010010000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, ControlRigObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, Initial), Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial_MetaData)) }; // 506992087
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_Inner = { "InputFrames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(nullptr, 0) }; // 506992087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames = { "InputFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, InputFrames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_MetaData)) }; // 506992087
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_Inner = { "OutputFrames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlRigTestDataFrame, METADATA_PARAMS(nullptr, 0) }; // 506992087
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames = { "OutputFrames", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, OutputFrames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_MetaData)) }; // 506992087
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_Inner = { "FramesToSkip", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip = { "FramesToSkip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, FramesToSkip), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "ControlRigTestData" },
		{ "ModuleRelativePath", "Public/ControlRigTestData.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigTestData, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigTestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_ControlRigObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Initial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_InputFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_OutputFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_FramesToSkip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigTestData_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigTestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigTestData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigTestData_Statics::ClassParams = {
		&UControlRigTestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigTestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigTestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigTestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigTestData()
	{
		if (!Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton, Z_Construct_UClass_UControlRigTestData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigTestData.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRigTestData>()
	{
		return UControlRigTestData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigTestData);
	UControlRigTestData::~UControlRigTestData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRigTestData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::EnumInfo[] = {
		{ EControlRigTestDataPlaybackMode_StaticEnum, TEXT("EControlRigTestDataPlaybackMode"), &Z_Registration_Info_UEnum_EControlRigTestDataPlaybackMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1177094751U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ScriptStructInfo[] = {
		{ FControlRigTestDataVariable::StaticStruct, Z_Construct_UScriptStruct_FControlRigTestDataVariable_Statics::NewStructOps, TEXT("ControlRigTestDataVariable"), &Z_Registration_Info_UScriptStruct_ControlRigTestDataVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigTestDataVariable), 687772214U) },
		{ FControlRigTestDataFrame::StaticStruct, Z_Construct_UScriptStruct_FControlRigTestDataFrame_Statics::NewStructOps, TEXT("ControlRigTestDataFrame"), &Z_Registration_Info_UScriptStruct_ControlRigTestDataFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigTestDataFrame), 506992087U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigTestData, UControlRigTestData::StaticClass, TEXT("UControlRigTestData"), &Z_Registration_Info_UClass_UControlRigTestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigTestData), 2007699206U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_1447799737(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigTestData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
