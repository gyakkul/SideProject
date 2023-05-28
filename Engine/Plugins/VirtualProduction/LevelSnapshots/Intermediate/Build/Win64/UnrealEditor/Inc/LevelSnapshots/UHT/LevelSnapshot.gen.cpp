// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/LevelSnapshot.h"
#include "Data/SnapshotDataCache.h"
#include "Data/WorldSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshot() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot();
	LEVELSNAPSHOTS_API UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister();
	LEVELSNAPSHOTS_API UEnum* Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FSnapshotDataCache();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECachedDiffResult;
	static UEnum* ECachedDiffResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECachedDiffResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECachedDiffResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ECachedDiffResult"));
		}
		return Z_Registration_Info_UEnum_ECachedDiffResult.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ECachedDiffResult>()
	{
		return ECachedDiffResult_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enumerators[] = {
		{ "ECachedDiffResult::NotInitialized", (int64)ECachedDiffResult::NotInitialized },
		{ "ECachedDiffResult::HadChanges", (int64)ECachedDiffResult::HadChanges },
		{ "ECachedDiffResult::HadNoChanges", (int64)ECachedDiffResult::HadNoChanges },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enum_MetaDataParams[] = {
		{ "HadChanges.Comment", "/** Actor was analysed and had changes */" },
		{ "HadChanges.Name", "ECachedDiffResult::HadChanges" },
		{ "HadChanges.ToolTip", "Actor was analysed and had changes" },
		{ "HadNoChanges.Comment", "/** Actor was analysed and had no changes */" },
		{ "HadNoChanges.Name", "ECachedDiffResult::HadNoChanges" },
		{ "HadNoChanges.ToolTip", "Actor was analysed and had no changes" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "NotInitialized.Comment", "/** The actor was not yet analysed */" },
		{ "NotInitialized.Name", "ECachedDiffResult::NotInitialized" },
		{ "NotInitialized.ToolTip", "The actor was not yet analysed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		"ECachedDiffResult",
		"ECachedDiffResult",
		Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult()
	{
		if (!Z_Registration_Info_UEnum_ECachedDiffResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECachedDiffResult.InnerSingleton, Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECachedDiffResult.InnerSingleton;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execGetSnapshotDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSnapshotDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execGetSnapshotName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetSnapshotName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execGetCaptureTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDateTime*)Z_Param__Result=P_THIS->GetCaptureTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execGetMapPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSoftObjectPath*)Z_Param__Result=P_THIS->GetMapPath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execSetSnapshotDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InSnapshotDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotDescription(Z_Param_InSnapshotDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelSnapshot::execSetSnapshotName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSnapshotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotName(Z_Param_Out_InSnapshotName);
		P_NATIVE_END;
	}
	void ULevelSnapshot::StaticRegisterNativesULevelSnapshot()
	{
		UClass* Class = ULevelSnapshot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCaptureTime", &ULevelSnapshot::execGetCaptureTime },
			{ "GetMapPath", &ULevelSnapshot::execGetMapPath },
			{ "GetSnapshotDescription", &ULevelSnapshot::execGetSnapshotDescription },
			{ "GetSnapshotName", &ULevelSnapshot::execGetSnapshotName },
			{ "SetSnapshotDescription", &ULevelSnapshot::execSetSnapshotDescription },
			{ "SetSnapshotName", &ULevelSnapshot::execSetSnapshotName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics
	{
		struct LevelSnapshot_eventGetCaptureTime_Parms
		{
			FDateTime ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventGetCaptureTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "GetCaptureTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::LevelSnapshot_eventGetCaptureTime_Parms), Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct LevelSnapshot_eventGetMapPath_Parms
		{
			FSoftObjectPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventGetMapPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "GetMapPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::LevelSnapshot_eventGetMapPath_Parms), Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_GetMapPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_GetMapPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics
	{
		struct LevelSnapshot_eventGetSnapshotDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventGetSnapshotDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "GetSnapshotDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::LevelSnapshot_eventGetSnapshotDescription_Parms), Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics
	{
		struct LevelSnapshot_eventGetSnapshotName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventGetSnapshotName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "GetSnapshotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::LevelSnapshot_eventGetSnapshotName_Parms), Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics
	{
		struct LevelSnapshot_eventSetSnapshotDescription_Parms
		{
			FString InSnapshotDescription;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSnapshotDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSnapshotDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::NewProp_InSnapshotDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::NewProp_InSnapshotDescription = { "InSnapshotDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventSetSnapshotDescription_Parms, InSnapshotDescription), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::NewProp_InSnapshotDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::NewProp_InSnapshotDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::NewProp_InSnapshotDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "SetSnapshotDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::LevelSnapshot_eventSetSnapshotDescription_Parms), Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics
	{
		struct LevelSnapshot_eventSetSnapshotName_Parms
		{
			FName InSnapshotName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSnapshotName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::NewProp_InSnapshotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::NewProp_InSnapshotName = { "InSnapshotName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshot_eventSetSnapshotName_Parms, InSnapshotName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::NewProp_InSnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::NewProp_InSnapshotName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::NewProp_InSnapshotName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "Comment", "/* Sets the name of this snapshot. */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Sets the name of this snapshot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshot, nullptr, "SetSnapshotName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::LevelSnapshot_eventSetSnapshotName_Parms), Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshot);
	UClass* Z_Construct_UClass_ULevelSnapshot_NoRegister()
	{
		return ULevelSnapshot::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransientWorldPackage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransientWorldPackage;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootSnapshotWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootSnapshotWorld;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotSublevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotSublevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SnapshotSublevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SerializedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDiffCacheEnabled_MetaData[];
#endif
		static void NewProp_bIsDiffCacheEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDiffCacheEnabled;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedDiffedActors_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedDiffedActors_ValueProp;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedDiffedActors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDiffedActors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedDiffedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MapPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SnapshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SnapshotDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSnapshot_GetCaptureTime, "GetCaptureTime" }, // 1160820361
		{ &Z_Construct_UFunction_ULevelSnapshot_GetMapPath, "GetMapPath" }, // 2209333806
		{ &Z_Construct_UFunction_ULevelSnapshot_GetSnapshotDescription, "GetSnapshotDescription" }, // 181212559
		{ &Z_Construct_UFunction_ULevelSnapshot_GetSnapshotName, "GetSnapshotName" }, // 1618815352
		{ &Z_Construct_UFunction_ULevelSnapshot_SetSnapshotDescription, "SetSnapshotDescription" }, // 145445304
		{ &Z_Construct_UFunction_ULevelSnapshot_SetSnapshotName, "SetSnapshotName" }, // 3679071282
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Holds the state of a world at a given time. This asset can be used to rollback certain properties in a UWorld. */" },
		{ "IncludePath", "Data/LevelSnapshot.h" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Holds the state of a world at a given time. This asset can be used to rollback certain properties in a UWorld." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_TransientWorldPackage_MetaData[] = {
		{ "Comment", "/** Transient package that contains the world. Exists so calls to MarkPackageDirty, called e.g. by AActor::Modify, do not mark the snapshot dirty. */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Transient package that contains the world. Exists so calls to MarkPackageDirty, called e.g. by AActor::Modify, do not mark the snapshot dirty." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_TransientWorldPackage = { "TransientWorldPackage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, TransientWorldPackage), Z_Construct_UClass_UPackage, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_TransientWorldPackage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_TransientWorldPackage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_RootSnapshotWorld_MetaData[] = {
		{ "Comment", "/** The root world, equivalent to the persistent world, we will be adding temporary actors to */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "The root world, equivalent to the persistent world, we will be adding temporary actors to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_RootSnapshotWorld = { "RootSnapshotWorld", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, RootSnapshotWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_RootSnapshotWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_RootSnapshotWorld_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels_Inner = { "SnapshotSublevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels_MetaData[] = {
		{ "Comment", "/** Sublevels of RootSnapshotWorld */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Sublevels of RootSnapshotWorld" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels = { "SnapshotSublevels", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, SnapshotSublevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SerializedData_MetaData[] = {
		{ "Comment", "/** The saved snapshot data */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "The saved snapshot data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, SerializedData), Z_Construct_UScriptStruct_FWorldSnapshotData, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SerializedData_MetaData)) }; // 803610831
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_Cache_MetaData[] = {
		{ "Comment", "/** Holds all loaded objects*/" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Holds all loaded objects" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_Cache = { "Cache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, Cache), Z_Construct_UScriptStruct_FSnapshotDataCache, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_Cache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_Cache_MetaData)) }; // 943129325
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled_MetaData[] = {
		{ "Comment", "/**\n\x09 * Only used in non-editor builds (should be wrapped in !WITH_EDITORONLY_DATA but UHT does not allow it).\n\x09 * Indicates that user code is aware that ClearCachedDiffFlag must be called manually.\n\x09 *\n\x09 * In editor builds, the transaction system calls\n\x09 * ClearCachedDiffFlag but in non-editor builds the transaction system does not exist.\n\x09 * \n\x09 * Enables the use of CachedDiffedActors. \n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Only used in non-editor builds (should be wrapped in !WITH_EDITORONLY_DATA but UHT does not allow it).\nIndicates that user code is aware that ClearCachedDiffFlag must be called manually.\n\nIn editor builds, the transaction system calls\nClearCachedDiffFlag but in non-editor builds the transaction system does not exist.\n\nEnables the use of CachedDiffedActors." },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled_SetBit(void* Obj)
	{
		((ULevelSnapshot*)Obj)->bIsDiffCacheEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled = { "bIsDiffCacheEnabled", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshot), &Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_ValueProp = { "CachedDiffedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_LevelSnapshots_ECachedDiffResult, METADATA_PARAMS(nullptr, 0) }; // 1614940576
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_Key_KeyProp = { "CachedDiffedActors_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_MetaData[] = {
		{ "Comment", "/** Caches whether an actor was diffed already */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Caches whether an actor was diffed already" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors = { "CachedDiffedActors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, CachedDiffedActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_MetaData)) }; // 1614940576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_MapPath_MetaData[] = {
		{ "BlueprintGetter", "GetMapPath" },
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** Path of the map that the snapshot was taken in */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "Path of the map that the snapshot was taken in" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_MapPath = { "MapPath", nullptr, (EPropertyFlags)0x0040010000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, MapPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_MapPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_MapPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CaptureTime_MetaData[] = {
		{ "BlueprintGetter", "GetCaptureTime" },
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** UTC Time that the snapshot was taken */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "UTC Time that the snapshot was taken" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CaptureTime = { "CaptureTime", nullptr, (EPropertyFlags)0x0040010000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, CaptureTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CaptureTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CaptureTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotName_MetaData[] = {
		{ "BlueprintGetter", "GetSnapshotName" },
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** User defined name for the snapshot, can differ from the actual asset name. */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "User defined name for the snapshot, can differ from the actual asset name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotName = { "SnapshotName", nullptr, (EPropertyFlags)0x0040010000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, SnapshotName), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotDescription_MetaData[] = {
		{ "BlueprintGetter", "GetSnapshotDescription" },
		{ "Category", "Level Snapshots" },
		{ "Comment", "/** User defined description of the snapshot */" },
		{ "ModuleRelativePath", "Public/Data/LevelSnapshot.h" },
		{ "ToolTip", "User defined description of the snapshot" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotDescription = { "SnapshotDescription", nullptr, (EPropertyFlags)0x0040010000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshot, SnapshotDescription), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshot_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_TransientWorldPackage,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_RootSnapshotWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotSublevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SerializedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_Cache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_bIsDiffCacheEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CachedDiffedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_MapPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_CaptureTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshot_Statics::NewProp_SnapshotDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshot_Statics::ClassParams = {
		&ULevelSnapshot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSnapshot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshot()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshot.OuterSingleton, Z_Construct_UClass_ULevelSnapshot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshot.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UClass* StaticClass<ULevelSnapshot>()
	{
		return ULevelSnapshot::StaticClass();
	}
	ULevelSnapshot::ULevelSnapshot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshot);
	ULevelSnapshot::~ULevelSnapshot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::EnumInfo[] = {
		{ ECachedDiffResult_StaticEnum, TEXT("ECachedDiffResult"), &Z_Registration_Info_UEnum_ECachedDiffResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1614940576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshot, ULevelSnapshot::StaticClass, TEXT("ULevelSnapshot"), &Z_Registration_Info_UClass_ULevelSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshot), 1513839005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_3182425587(TEXT("/Script/LevelSnapshots"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_LevelSnapshot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
