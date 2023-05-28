// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MrcGarbageMatteCaptureComponent.h"
#include "MrcCalibrationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMrcGarbageMatteCaptureComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMrcGarbageMatteActor();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationData_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcFocalDriver_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcGarbageMatteCaptureComponent();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execSpawnNewGarbageMatteActor)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TrackingOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMrcGarbageMatteActor**)Z_Param__Result=P_THIS->SpawnNewGarbageMatteActor_Implementation(Z_Param_TrackingOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execSetFocalDriver)
	{
		P_GET_TINTERFACE(IMrcFocalDriver,Z_Param_InFocalDriver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFocalDriver(Z_Param_InFocalDriver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execGetGarbageMatteData)
	{
		P_GET_TARRAY_REF(FMrcGarbageMatteSaveData,Z_Param_Out_GarbageMatteDataOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGarbageMatteData(Z_Param_Out_GarbageMatteDataOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execSetGarbageMatteActor)
	{
		P_GET_OBJECT(AMrcGarbageMatteActor,Z_Param_NewActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGarbageMatteActor(Z_Param_NewActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execApplyCalibrationData)
	{
		P_GET_OBJECT(UMrcCalibrationData,Z_Param_ConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCalibrationData_Implementation(Z_Param_ConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMrcGarbageMatteCaptureComponent::execSetTrackingOrigin)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_TrackingOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingOrigin(Z_Param_TrackingOrigin);
		P_NATIVE_END;
	}
	struct MrcGarbageMatteCaptureComponent_eventApplyCalibrationData_Parms
	{
		const UMrcCalibrationData* ConfigData;
	};
	struct MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms
	{
		USceneComponent* TrackingOrigin;
		AMrcGarbageMatteActor* ReturnValue;

		/** Constructor, initializes return property only **/
		MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData = FName(TEXT("ApplyCalibrationData"));
	void UMrcGarbageMatteCaptureComponent::ApplyCalibrationData(const UMrcCalibrationData* ConfigData)
	{
		MrcGarbageMatteCaptureComponent_eventApplyCalibrationData_Parms Parms;
		Parms.ConfigData=ConfigData;
		ProcessEvent(FindFunctionChecked(NAME_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData),&Parms);
	}
	static FName NAME_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor = FName(TEXT("SpawnNewGarbageMatteActor"));
	AMrcGarbageMatteActor* UMrcGarbageMatteCaptureComponent::SpawnNewGarbageMatteActor(USceneComponent* TrackingOrigin)
	{
		MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms Parms;
		Parms.TrackingOrigin=TrackingOrigin;
		ProcessEvent(FindFunctionChecked(NAME_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor),&Parms);
		return Parms.ReturnValue;
	}
	void UMrcGarbageMatteCaptureComponent::StaticRegisterNativesUMrcGarbageMatteCaptureComponent()
	{
		UClass* Class = UMrcGarbageMatteCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCalibrationData", &UMrcGarbageMatteCaptureComponent::execApplyCalibrationData },
			{ "GetGarbageMatteData", &UMrcGarbageMatteCaptureComponent::execGetGarbageMatteData },
			{ "SetFocalDriver", &UMrcGarbageMatteCaptureComponent::execSetFocalDriver },
			{ "SetGarbageMatteActor", &UMrcGarbageMatteCaptureComponent::execSetGarbageMatteActor },
			{ "SetTrackingOrigin", &UMrcGarbageMatteCaptureComponent::execSetTrackingOrigin },
			{ "SpawnNewGarbageMatteActor", &UMrcGarbageMatteCaptureComponent::execSpawnNewGarbageMatteActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventApplyCalibrationData_Parms, ConfigData), Z_Construct_UClass_UMrcCalibrationData_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "ApplyCalibrationData", nullptr, nullptr, sizeof(MrcGarbageMatteCaptureComponent_eventApplyCalibrationData_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics
	{
		struct MrcGarbageMatteCaptureComponent_eventGetGarbageMatteData_Parms
		{
			TArray<FMrcGarbageMatteSaveData> GarbageMatteDataOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteDataOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GarbageMatteDataOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut_Inner = { "GarbageMatteDataOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(nullptr, 0) }; // 178379560
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut = { "GarbageMatteDataOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventGetGarbageMatteData_Parms, GarbageMatteDataOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 178379560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "GetGarbageMatteData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::MrcGarbageMatteCaptureComponent_eventGetGarbageMatteData_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics
	{
		struct MrcGarbageMatteCaptureComponent_eventSetFocalDriver_Parms
		{
			TScriptInterface<IMrcFocalDriver> InFocalDriver;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InFocalDriver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::NewProp_InFocalDriver = { "InFocalDriver", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventSetFocalDriver_Parms, InFocalDriver), Z_Construct_UClass_UMrcFocalDriver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::NewProp_InFocalDriver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "SetFocalDriver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::MrcGarbageMatteCaptureComponent_eventSetFocalDriver_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics
	{
		struct MrcGarbageMatteCaptureComponent_eventSetGarbageMatteActor_Parms
		{
			AMrcGarbageMatteActor* NewActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::NewProp_NewActor = { "NewActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventSetGarbageMatteActor_Parms, NewActor), Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::NewProp_NewActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "SetGarbageMatteActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::MrcGarbageMatteCaptureComponent_eventSetGarbageMatteActor_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics
	{
		struct MrcGarbageMatteCaptureComponent_eventSetTrackingOrigin_Parms
		{
			USceneComponent* TrackingOrigin;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::NewProp_TrackingOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::NewProp_TrackingOrigin = { "TrackingOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventSetTrackingOrigin_Parms, TrackingOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::NewProp_TrackingOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::NewProp_TrackingOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::NewProp_TrackingOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "SetTrackingOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::MrcGarbageMatteCaptureComponent_eventSetTrackingOrigin_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackingOrigin;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_TrackingOrigin_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_TrackingOrigin = { "TrackingOrigin", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms, TrackingOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_TrackingOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_TrackingOrigin_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms, ReturnValue), Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_TrackingOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, nullptr, "SpawnNewGarbageMatteActor", nullptr, nullptr, sizeof(MrcGarbageMatteCaptureComponent_eventSpawnNewGarbageMatteActor_Parms), Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMrcGarbageMatteCaptureComponent);
	UClass* Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_NoRegister()
	{
		return UMrcGarbageMatteCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GarbageMatteActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteActor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpawnedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOriginPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackingOriginPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalDriver_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_FocalDriver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_ApplyCalibrationData, "ApplyCalibrationData" }, // 2301374276
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_GetGarbageMatteData, "GetGarbageMatteData" }, // 3005694580
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetFocalDriver, "SetFocalDriver" }, // 3628614392
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetGarbageMatteActor, "SetGarbageMatteActor" }, // 3481825130
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SetTrackingOrigin, "SetTrackingOrigin" }, // 2751701327
		{ &Z_Construct_UFunction_UMrcGarbageMatteCaptureComponent_SpawnNewGarbageMatteActor, "SpawnNewGarbageMatteActor" }, // 1044016399
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "MrcGarbageMatteCaptureComponent.h" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActorClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActorClass = { "GarbageMatteActorClass", nullptr, (EPropertyFlags)0x0044000000006000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcGarbageMatteCaptureComponent, GarbageMatteActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActor = { "GarbageMatteActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcGarbageMatteCaptureComponent, GarbageMatteActor), Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors_Inner = { "SpawnedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors = { "SpawnedActors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcGarbageMatteCaptureComponent, SpawnedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_TrackingOriginPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_TrackingOriginPtr = { "TrackingOriginPtr", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcGarbageMatteCaptureComponent, TrackingOriginPtr), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_TrackingOriginPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_TrackingOriginPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_FocalDriver_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_FocalDriver = { "FocalDriver", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMrcGarbageMatteCaptureComponent, FocalDriver), Z_Construct_UClass_UMrcFocalDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_FocalDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_FocalDriver_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_GarbageMatteActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_SpawnedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_TrackingOriginPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::NewProp_FocalDriver,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMrcGarbageMatteCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::ClassParams = {
		&UMrcGarbageMatteCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMrcGarbageMatteCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UMrcGarbageMatteCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMrcGarbageMatteCaptureComponent.OuterSingleton, Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMrcGarbageMatteCaptureComponent.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMrcGarbageMatteCaptureComponent>()
	{
		return UMrcGarbageMatteCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMrcGarbageMatteCaptureComponent);
	UMrcGarbageMatteCaptureComponent::~UMrcGarbageMatteCaptureComponent() {}
	DEFINE_FUNCTION(AMrcGarbageMatteActor::execGetGarbageMatteData)
	{
		P_GET_TARRAY_REF(FMrcGarbageMatteSaveData,Z_Param_Out_GarbageMatteDataOut);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGarbageMatteData(Z_Param_Out_GarbageMatteDataOut);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMrcGarbageMatteActor::execCreateGarbageMatte)
	{
		P_GET_STRUCT_REF(FMrcGarbageMatteSaveData,Z_Param_Out_GarbageMatteData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->CreateGarbageMatte_Implementation(Z_Param_Out_GarbageMatteData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMrcGarbageMatteActor::execAddNewGabageMatte)
	{
		P_GET_STRUCT_REF(FMrcGarbageMatteSaveData,Z_Param_Out_GarbageMatteData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPrimitiveComponent**)Z_Param__Result=P_THIS->AddNewGabageMatte(Z_Param_Out_GarbageMatteData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMrcGarbageMatteActor::execApplyCalibrationData)
	{
		P_GET_TARRAY_REF(FMrcGarbageMatteSaveData,Z_Param_Out_GarbageMatteData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCalibrationData(Z_Param_Out_GarbageMatteData);
		P_NATIVE_END;
	}
	struct MrcGarbageMatteActor_eventCreateGarbageMatte_Parms
	{
		FMrcGarbageMatteSaveData GarbageMatteData;
		UPrimitiveComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		MrcGarbageMatteActor_eventCreateGarbageMatte_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_AMrcGarbageMatteActor_CreateGarbageMatte = FName(TEXT("CreateGarbageMatte"));
	UPrimitiveComponent* AMrcGarbageMatteActor::CreateGarbageMatte(FMrcGarbageMatteSaveData const& GarbageMatteData)
	{
		MrcGarbageMatteActor_eventCreateGarbageMatte_Parms Parms;
		Parms.GarbageMatteData=GarbageMatteData;
		ProcessEvent(FindFunctionChecked(NAME_AMrcGarbageMatteActor_CreateGarbageMatte),&Parms);
		return Parms.ReturnValue;
	}
	void AMrcGarbageMatteActor::StaticRegisterNativesAMrcGarbageMatteActor()
	{
		UClass* Class = AMrcGarbageMatteActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewGabageMatte", &AMrcGarbageMatteActor::execAddNewGabageMatte },
			{ "ApplyCalibrationData", &AMrcGarbageMatteActor::execApplyCalibrationData },
			{ "CreateGarbageMatte", &AMrcGarbageMatteActor::execCreateGarbageMatte },
			{ "GetGarbageMatteData", &AMrcGarbageMatteActor::execGetGarbageMatteData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics
	{
		struct MrcGarbageMatteActor_eventAddNewGabageMatte_Parms
		{
			FMrcGarbageMatteSaveData GarbageMatteData;
			UPrimitiveComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_GarbageMatteData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_GarbageMatteData = { "GarbageMatteData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventAddNewGabageMatte_Parms, GarbageMatteData), Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_GarbageMatteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_GarbageMatteData_MetaData)) }; // 178379560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventAddNewGabageMatte_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_GarbageMatteData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMrcGarbageMatteActor, nullptr, "AddNewGabageMatte", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::MrcGarbageMatteActor_eventAddNewGabageMatte_Parms), Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics
	{
		struct MrcGarbageMatteActor_eventApplyCalibrationData_Parms
		{
			TArray<FMrcGarbageMatteSaveData> GarbageMatteData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GarbageMatteData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData_Inner = { "GarbageMatteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(nullptr, 0) }; // 178379560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData = { "GarbageMatteData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventApplyCalibrationData_Parms, GarbageMatteData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData_MetaData)) }; // 178379560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::NewProp_GarbageMatteData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMrcGarbageMatteActor, nullptr, "ApplyCalibrationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::MrcGarbageMatteActor_eventApplyCalibrationData_Parms), Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_GarbageMatteData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_GarbageMatteData = { "GarbageMatteData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventCreateGarbageMatte_Parms, GarbageMatteData), Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_GarbageMatteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_GarbageMatteData_MetaData)) }; // 178379560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventCreateGarbageMatte_Parms, ReturnValue), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_GarbageMatteData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMrcGarbageMatteActor, nullptr, "CreateGarbageMatte", nullptr, nullptr, sizeof(MrcGarbageMatteActor_eventCreateGarbageMatte_Parms), Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics
	{
		struct MrcGarbageMatteActor_eventGetGarbageMatteData_Parms
		{
			TArray<FMrcGarbageMatteSaveData> GarbageMatteDataOut;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GarbageMatteDataOut_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GarbageMatteDataOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut_Inner = { "GarbageMatteDataOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMrcGarbageMatteSaveData, METADATA_PARAMS(nullptr, 0) }; // 178379560
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut = { "GarbageMatteDataOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MrcGarbageMatteActor_eventGetGarbageMatteData_Parms, GarbageMatteDataOut), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 178379560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::NewProp_GarbageMatteDataOut,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMrcGarbageMatteActor, nullptr, "GetGarbageMatteData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::MrcGarbageMatteActor_eventGetGarbageMatteData_Parms), Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMrcGarbageMatteActor);
	UClass* Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister()
	{
		return AMrcGarbageMatteActor::StaticClass();
	}
	struct Z_Construct_UClass_AMrcGarbageMatteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMattes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMattes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GarbageMattes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMrcGarbageMatteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMrcGarbageMatteActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMrcGarbageMatteActor_AddNewGabageMatte, "AddNewGabageMatte" }, // 1975296773
		{ &Z_Construct_UFunction_AMrcGarbageMatteActor_ApplyCalibrationData, "ApplyCalibrationData" }, // 398248845
		{ &Z_Construct_UFunction_AMrcGarbageMatteActor_CreateGarbageMatte, "CreateGarbageMatte" }, // 2053412145
		{ &Z_Construct_UFunction_AMrcGarbageMatteActor_GetGarbageMatteData, "GetGarbageMatteData" }, // 2570513608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcGarbageMatteActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MrcGarbageMatteCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMesh = { "GarbageMatteMesh", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMrcGarbageMatteActor, GarbageMatteMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMaterial = { "GarbageMatteMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMrcGarbageMatteActor, GarbageMatteMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes_Inner = { "GarbageMattes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MrcGarbageMatteCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes = { "GarbageMattes", nullptr, (EPropertyFlags)0x004400800000201c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMrcGarbageMatteActor, GarbageMattes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMrcGarbageMatteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMatteMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMrcGarbageMatteActor_Statics::NewProp_GarbageMattes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMrcGarbageMatteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMrcGarbageMatteActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMrcGarbageMatteActor_Statics::ClassParams = {
		&AMrcGarbageMatteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMrcGarbageMatteActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMrcGarbageMatteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMrcGarbageMatteActor()
	{
		if (!Z_Registration_Info_UClass_AMrcGarbageMatteActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMrcGarbageMatteActor.OuterSingleton, Z_Construct_UClass_AMrcGarbageMatteActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMrcGarbageMatteActor.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<AMrcGarbageMatteActor>()
	{
		return AMrcGarbageMatteActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMrcGarbageMatteActor);
	AMrcGarbageMatteActor::~AMrcGarbageMatteActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMrcGarbageMatteCaptureComponent, UMrcGarbageMatteCaptureComponent::StaticClass, TEXT("UMrcGarbageMatteCaptureComponent"), &Z_Registration_Info_UClass_UMrcGarbageMatteCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMrcGarbageMatteCaptureComponent), 2885109906U) },
		{ Z_Construct_UClass_AMrcGarbageMatteActor, AMrcGarbageMatteActor::StaticClass, TEXT("AMrcGarbageMatteActor"), &Z_Registration_Info_UClass_AMrcGarbageMatteActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMrcGarbageMatteActor), 2565943821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_4183780797(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcGarbageMatteCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
