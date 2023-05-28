// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPCameraBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPCameraBlueprintLibrary() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplinePointType();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPCameraBlueprintLibrary();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPCameraBlueprintLibrary_NoRegister();
	VPUTILITIES_API UEnum* Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode();
	VPUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FVPCameraRigSpawnParams();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode;
	static UEnum* EVPCameraRigSpawnLinearApproximationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("EVPCameraRigSpawnLinearApproximationMode"));
		}
		return Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.OuterSingleton;
	}
	template<> VPUTILITIES_API UEnum* StaticEnum<EVPCameraRigSpawnLinearApproximationMode>()
	{
		return EVPCameraRigSpawnLinearApproximationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enumerators[] = {
		{ "EVPCameraRigSpawnLinearApproximationMode::None", (int64)EVPCameraRigSpawnLinearApproximationMode::None },
		{ "EVPCameraRigSpawnLinearApproximationMode::Density", (int64)EVPCameraRigSpawnLinearApproximationMode::Density },
		{ "EVPCameraRigSpawnLinearApproximationMode::IntegrationStep", (int64)EVPCameraRigSpawnLinearApproximationMode::IntegrationStep },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Density.Comment", "// We won't do linear approximation, instead using the Spline as constructed initially.\n" },
		{ "Density.Name", "EVPCameraRigSpawnLinearApproximationMode::Density" },
		{ "Density.ToolTip", "We won't do linear approximation, instead using the Spline as constructed initially." },
		{ "IntegrationStep.Comment", "// LinearApproximationParam will be used as a density value \n" },
		{ "IntegrationStep.Name", "EVPCameraRigSpawnLinearApproximationMode::IntegrationStep" },
		{ "IntegrationStep.ToolTip", "LinearApproximationParam will be used as a density value" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "None.Display", "No Approximation" },
		{ "None.Name", "EVPCameraRigSpawnLinearApproximationMode::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		"EVPCameraRigSpawnLinearApproximationMode",
		"EVPCameraRigSpawnLinearApproximationMode",
		Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode()
	{
		if (!Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.InnerSingleton, Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams;
class UScriptStruct* FVPCameraRigSpawnParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams, (UObject*)Z_Construct_UPackage__Script_VPUtilities(), TEXT("VPCameraRigSpawnParams"));
	}
	return Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.OuterSingleton;
}
template<> VPUTILITIES_API UScriptStruct* StaticStruct<FVPCameraRigSpawnParams>()
{
	return FVPCameraRigSpawnParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpace_MetaData[];
#endif
		static void NewProp_bUseWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFirstPointAsSpawnLocation_MetaData[];
#endif
		static void NewProp_bUseFirstPointAsSpawnLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFirstPointAsSpawnLocation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearApproximationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearApproximationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearApproximationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearApproximationParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearApproximationParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Parameters used to custom the CameraRig that's created. */" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "ToolTip", "Parameters used to custom the CameraRig that's created." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPCameraRigSpawnParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace_MetaData[] = {
		{ "Category", "Camera Rig" },
		{ "Comment", "/** Use world space (as opposed to local space) for points. */" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "ToolTip", "Use world space (as opposed to local space) for points." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace_SetBit(void* Obj)
	{
		((FVPCameraRigSpawnParams*)Obj)->bUseWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace = { "bUseWorldSpace", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPCameraRigSpawnParams), &Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation_MetaData[] = {
		{ "Category", "Camera Rig" },
		{ "Comment", "/**\n\x09 * Use the first vector of input as the spawn transform.\n\x09 * Causes RigTransform to be completely ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "ToolTip", "Use the first vector of input as the spawn transform.\nCauses RigTransform to be completely ignored." },
	};
#endif
	void Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation_SetBit(void* Obj)
	{
		((FVPCameraRigSpawnParams*)Obj)->bUseFirstPointAsSpawnLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation = { "bUseFirstPointAsSpawnLocation", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPCameraRigSpawnParams), &Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode_MetaData[] = {
		{ "Category", "Camera Rig" },
		{ "Comment", "/**\n\x09 * Causes a linear approximation of the spline points to be generated instead\n\x09 * of relying purely on the passed in points / curves.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "ToolTip", "Causes a linear approximation of the spline points to be generated instead\nof relying purely on the passed in points / curves." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode = { "LinearApproximationMode", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPCameraRigSpawnParams, LinearApproximationMode), Z_Construct_UEnum_VPUtilities_EVPCameraRigSpawnLinearApproximationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode_MetaData)) }; // 2445332390
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationParam_MetaData[] = {
		{ "Category", "Camera Rig" },
		{ "Comment", "/**\n\x09 * This is only used if LinearApproximationMode is not None.\n\x09 * When mode is Density:\n\x09 * See FSplinePositionLinearApproximation::Build.\n\x09 *\n\x09 * When mode is IntegrationStep:\n\x09 * Integration step (in CM) between approximation points. Decreasing this value will\n\x09 * increase the number of spline points and will therefore increase the accuracy\n\x09 * (at the cost of increased complexity).\n\x09 */" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
		{ "ToolTip", "This is only used if LinearApproximationMode is not None.\nWhen mode is Density:\nSee FSplinePositionLinearApproximation::Build.\n\nWhen mode is IntegrationStep:\nIntegration step (in CM) between approximation points. Decreasing this value will\nincrease the number of spline points and will therefore increase the accuracy\n(at the cost of increased complexity)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationParam = { "LinearApproximationParam", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPCameraRigSpawnParams, LinearApproximationParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationParam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_bUseFirstPointAsSpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewProp_LinearApproximationParam,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
		nullptr,
		&NewStructOps,
		"VPCameraRigSpawnParams",
		sizeof(FVPCameraRigSpawnParams),
		alignof(FVPCameraRigSpawnParams),
		Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPCameraRigSpawnParams()
	{
		if (!Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.InnerSingleton, Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams.InnerSingleton;
	}
	DEFINE_FUNCTION(UVPCameraBlueprintLibrary::execSpawnCameraRigFromSelectedActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RigTransform);
		P_GET_STRUCT_REF(FVPCameraRigSpawnParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraRig_Rail**)Z_Param__Result=UVPCameraBlueprintLibrary::SpawnCameraRigFromSelectedActors(Z_Param_WorldContextObject,Z_Param_Out_RigTransform,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPCameraBlueprintLibrary::execSpawnCameraRigFromPoints)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RigTransform);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_STRUCT_REF(FVPCameraRigSpawnParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraRig_Rail**)Z_Param__Result=UVPCameraBlueprintLibrary::SpawnCameraRigFromPoints(Z_Param_WorldContextObject,Z_Param_Out_RigTransform,Z_Param_Out_Points,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPCameraBlueprintLibrary::execSpawnCameraRigFromActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_RigTransform);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_STRUCT_REF(FVPCameraRigSpawnParams,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraRig_Rail**)Z_Param__Result=UVPCameraBlueprintLibrary::SpawnCameraRigFromActors(Z_Param_WorldContextObject,Z_Param_Out_RigTransform,Z_Param_Out_Actors,Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPCameraBlueprintLibrary::execSpawnDollyTrackFromPointsSmooth)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Points);
		P_GET_PROPERTY(FByteProperty,Z_Param_InterpType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraRig_Rail**)Z_Param__Result=UVPCameraBlueprintLibrary::SpawnDollyTrackFromPointsSmooth(Z_Param_WorldContextObject,Z_Param_Out_Points,ESplinePointType::Type(Z_Param_InterpType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPCameraBlueprintLibrary::execSpawnDollyTrackFromPoints)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Points);
		P_GET_PROPERTY(FByteProperty,Z_Param_InterpType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraRig_Rail**)Z_Param__Result=UVPCameraBlueprintLibrary::SpawnDollyTrackFromPoints(Z_Param_WorldContextObject,Z_Param_Out_Points,ESplinePointType::Type(Z_Param_InterpType));
		P_NATIVE_END;
	}
	void UVPCameraBlueprintLibrary::StaticRegisterNativesUVPCameraBlueprintLibrary()
	{
		UClass* Class = UVPCameraBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnCameraRigFromActors", &UVPCameraBlueprintLibrary::execSpawnCameraRigFromActors },
			{ "SpawnCameraRigFromPoints", &UVPCameraBlueprintLibrary::execSpawnCameraRigFromPoints },
			{ "SpawnCameraRigFromSelectedActors", &UVPCameraBlueprintLibrary::execSpawnCameraRigFromSelectedActors },
			{ "SpawnDollyTrackFromPoints", &UVPCameraBlueprintLibrary::execSpawnDollyTrackFromPoints },
			{ "SpawnDollyTrackFromPointsSmooth", &UVPCameraBlueprintLibrary::execSpawnDollyTrackFromPointsSmooth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics
	{
		struct VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms
		{
			UObject* WorldContextObject;
			FTransform RigTransform;
			TArray<AActor*> Actors;
			FVPCameraRigSpawnParams Params;
			ACameraRig_Rail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_RigTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_RigTransform = { "RigTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms, RigTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_RigTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_RigTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms, Params), Z_Construct_UScriptStruct_FVPCameraRigSpawnParams, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Params_MetaData)) }; // 1945703747
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms, ReturnValue), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_RigTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraBlueprintLibrary, nullptr, "SpawnCameraRigFromActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::VPCameraBlueprintLibrary_eventSpawnCameraRigFromActors_Parms), Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics
	{
		struct VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms
		{
			UObject* WorldContextObject;
			FTransform RigTransform;
			TArray<FVector> Points;
			FVPCameraRigSpawnParams Params;
			ACameraRig_Rail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_RigTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_RigTransform = { "RigTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms, RigTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_RigTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_RigTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms, Params), Z_Construct_UScriptStruct_FVPCameraRigSpawnParams, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Params_MetaData)) }; // 1945703747
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms, ReturnValue), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_RigTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraBlueprintLibrary, nullptr, "SpawnCameraRigFromPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::VPCameraBlueprintLibrary_eventSpawnCameraRigFromPoints_Parms), Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics
	{
		struct VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms
		{
			UObject* WorldContextObject;
			FTransform RigTransform;
			FVPCameraRigSpawnParams Params;
			ACameraRig_Rail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_RigTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_RigTransform = { "RigTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms, RigTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_RigTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_RigTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms, Params), Z_Construct_UScriptStruct_FVPCameraRigSpawnParams, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_Params_MetaData)) }; // 1945703747
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms, ReturnValue), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_RigTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraBlueprintLibrary, nullptr, "SpawnCameraRigFromSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::VPCameraBlueprintLibrary_eventSpawnCameraRigFromSelectedActors_Parms), Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics
	{
		struct VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms
		{
			UObject* WorldContextObject;
			TArray<FTransform> Points;
			TEnumAsByte<ESplinePointType::Type> InterpType;
			ACameraRig_Rail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_InterpType = { "InterpType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms, InterpType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) }; // 1353148516
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms, ReturnValue), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_InterpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "CPP_Default_InterpType", "Linear" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraBlueprintLibrary, nullptr, "SpawnDollyTrackFromPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPoints_Parms), Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics
	{
		struct VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms
		{
			UObject* WorldContextObject;
			TArray<FTransform> Points;
			TEnumAsByte<ESplinePointType::Type> InterpType;
			ACameraRig_Rail* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_InterpType = { "InterpType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms, InterpType), Z_Construct_UEnum_Engine_ESplinePointType, METADATA_PARAMS(nullptr, 0) }; // 1353148516
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms, ReturnValue), Z_Construct_UClass_ACameraRig_Rail_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_InterpType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "CPP_Default_InterpType", "Linear" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraBlueprintLibrary, nullptr, "SpawnDollyTrackFromPointsSmooth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::VPCameraBlueprintLibrary_eventSpawnDollyTrackFromPointsSmooth_Parms), Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPCameraBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPCameraBlueprintLibrary_NoRegister()
	{
		return UVPCameraBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromActors, "SpawnCameraRigFromActors" }, // 2547720136
		{ &Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromPoints, "SpawnCameraRigFromPoints" }, // 2007256346
		{ &Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnCameraRigFromSelectedActors, "SpawnCameraRigFromSelectedActors" }, // 4155110683
		{ &Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPoints, "SpawnDollyTrackFromPoints" }, // 1199934854
		{ &Z_Construct_UFunction_UVPCameraBlueprintLibrary_SpawnDollyTrackFromPointsSmooth, "SpawnDollyTrackFromPointsSmooth" }, // 3404882210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPCameraBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VPCameraBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPCameraBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::ClassParams = {
		&UVPCameraBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPCameraBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPCameraBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPCameraBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPCameraBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPCameraBlueprintLibrary.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPCameraBlueprintLibrary>()
	{
		return UVPCameraBlueprintLibrary::StaticClass();
	}
	UVPCameraBlueprintLibrary::UVPCameraBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPCameraBlueprintLibrary);
	UVPCameraBlueprintLibrary::~UVPCameraBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::EnumInfo[] = {
		{ EVPCameraRigSpawnLinearApproximationMode_StaticEnum, TEXT("EVPCameraRigSpawnLinearApproximationMode"), &Z_Registration_Info_UEnum_EVPCameraRigSpawnLinearApproximationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2445332390U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ScriptStructInfo[] = {
		{ FVPCameraRigSpawnParams::StaticStruct, Z_Construct_UScriptStruct_FVPCameraRigSpawnParams_Statics::NewStructOps, TEXT("VPCameraRigSpawnParams"), &Z_Registration_Info_UScriptStruct_VPCameraRigSpawnParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPCameraRigSpawnParams), 1945703747U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPCameraBlueprintLibrary, UVPCameraBlueprintLibrary::StaticClass, TEXT("UVPCameraBlueprintLibrary"), &Z_Registration_Info_UClass_UVPCameraBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPCameraBlueprintLibrary), 3795509502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_3083269997(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPCameraBlueprintLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
