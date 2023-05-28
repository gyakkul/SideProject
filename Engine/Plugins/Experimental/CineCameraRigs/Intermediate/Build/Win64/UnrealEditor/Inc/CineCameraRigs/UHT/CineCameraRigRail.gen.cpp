// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CineCameraRigRail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraRigRail() {}
// Cross Module References
	CINECAMERARIGS_API UClass* Z_Construct_UClass_ACineCameraRigRail();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_ACineCameraRigRail_NoRegister();
	CINECAMERARIGS_API UClass* Z_Construct_UClass_UCineSplineComponent_NoRegister();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CineCameraRigs();
// End Cross Module References
	DEFINE_FUNCTION(ACineCameraRigRail::execGetVelocityAtPosition)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPosition);
		P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVelocityAtPosition(Z_Param_InPosition,Z_Param_delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACineCameraRigRail::execSetSplineMeshTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_InTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineMeshTexture(Z_Param_InTexture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACineCameraRigRail::execSetSplineMeshMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_InMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineMeshMaterial(Z_Param_InMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACineCameraRigRail::execGetCineSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCineSplineComponent**)Z_Param__Result=P_THIS->GetCineSplineComponent();
		P_NATIVE_END;
	}
	void ACineCameraRigRail::StaticRegisterNativesACineCameraRigRail()
	{
		UClass* Class = ACineCameraRigRail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineSplineComponent", &ACineCameraRigRail::execGetCineSplineComponent },
			{ "GetVelocityAtPosition", &ACineCameraRigRail::execGetVelocityAtPosition },
			{ "SetSplineMeshMaterial", &ACineCameraRigRail::execSetSplineMeshMaterial },
			{ "SetSplineMeshTexture", &ACineCameraRigRail::execSetSplineMeshTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics
	{
		struct CineCameraRigRail_eventGetCineSplineComponent_Parms
		{
			UCineSplineComponent* ReturnValue;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventGetCineSplineComponent_Parms, ReturnValue), Z_Construct_UClass_UCineSplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/* Returns CineSplineComponent*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Returns CineSplineComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraRigRail, nullptr, "GetCineSplineComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::CineCameraRigRail_eventGetCineSplineComponent_Parms), Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics
	{
		struct CineCameraRigRail_eventGetVelocityAtPosition_Parms
		{
			float InPosition;
			float delta;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_delta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_InPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_InPosition = { "InPosition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventGetVelocityAtPosition_Parms, InPosition), METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_InPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_InPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_delta_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventGetVelocityAtPosition_Parms, delta), METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_delta_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_delta_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventGetVelocityAtPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_InPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_delta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CineCameraRigRail" },
		{ "Comment", "/* Calculate internal velocity at the given position */" },
		{ "CPP_Default_delta", "0.001000" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Calculate internal velocity at the given position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraRigRail, nullptr, "GetVelocityAtPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::CineCameraRigRail_eventGetVelocityAtPosition_Parms), Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics
	{
		struct CineCameraRigRail_eventSetSplineMeshMaterial_Parms
		{
			UMaterialInterface* InMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::NewProp_InMaterial = { "InMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventSetSplineMeshMaterial_Parms, InMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::NewProp_InMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/* Set spline mesh material*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Set spline mesh material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraRigRail, nullptr, "SetSplineMeshMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::CineCameraRigRail_eventSetSplineMeshMaterial_Parms), Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics
	{
		struct CineCameraRigRail_eventSetSplineMeshTexture_Parms
		{
			UTexture2D* InTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::NewProp_InTexture = { "InTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CineCameraRigRail_eventSetSplineMeshTexture_Parms, InTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::NewProp_InTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/* Set texture used in the spline mesh material */" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Set texture used in the spline mesh material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACineCameraRigRail, nullptr, "SetSplineMeshTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::CineCameraRigRail_eventSetSplineMeshTexture_Parms), Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACineCameraRigRail);
	UClass* Z_Construct_UClass_ACineCameraRigRail_NoRegister()
	{
		return ACineCameraRigRail::StaticClass();
	}
	struct Z_Construct_UClass_ACineCameraRigRail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAbsolutePosition_MetaData[];
#endif
		static void NewProp_bUseAbsolutePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAbsolutePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsolutePositionOnRail_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsolutePositionOnRail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePointRotation_MetaData[];
#endif
		static void NewProp_bUsePointRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePointRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshMIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SplineMeshMIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachLocationX_MetaData[];
#endif
		static void NewProp_bAttachLocationX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachLocationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachLocationY_MetaData[];
#endif
		static void NewProp_bAttachLocationY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachLocationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachLocationZ_MetaData[];
#endif
		static void NewProp_bAttachLocationZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachLocationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachRotationX_MetaData[];
#endif
		static void NewProp_bAttachRotationX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachRotationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachRotationY_MetaData[];
#endif
		static void NewProp_bAttachRotationY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachRotationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttachRotationZ_MetaData[];
#endif
		static void NewProp_bAttachRotationZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttachRotationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritFocalLength_MetaData[];
#endif
		static void NewProp_bInheritFocalLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritAperture_MetaData[];
#endif
		static void NewProp_bInheritAperture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritFocusDistance_MetaData[];
#endif
		static void NewProp_bInheritFocusDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritFocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACineCameraRigRail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACameraRig_Rail,
		(UObject* (*)())Z_Construct_UPackage__Script_CineCameraRigs,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACineCameraRigRail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACineCameraRigRail_GetCineSplineComponent, "GetCineSplineComponent" }, // 874451054
		{ &Z_Construct_UFunction_ACineCameraRigRail_GetVelocityAtPosition, "GetVelocityAtPosition" }, // 3174760948
		{ &Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshMaterial, "SetSplineMeshMaterial" }, // 1412259565
		{ &Z_Construct_UFunction_ACineCameraRigRail_SetSplineMeshTexture, "SetSplineMeshTexture" }, // 3686467816
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VirtualProduction" },
		{ "IncludePath", "CineCameraRigRail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/* Use AbsolutePosition metadata to parameterize the spline*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Use AbsolutePosition metadata to parameterize the spline" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bUseAbsolutePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition = { "bUseAbsolutePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_AbsolutePositionOnRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/* Custom parameter to drive current position*/" },
		{ "EditCondition", "bUseAbsolutePosition" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Custom parameter to drive current position" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_AbsolutePositionOnRail = { "AbsolutePositionOnRail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraRigRail, AbsolutePositionOnRail), METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_AbsolutePositionOnRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_AbsolutePositionOnRail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/* Use PointRotation metadata for attachment orientation. If false, attachment orientation is based on the spline curvature*/" },
		{ "EditCondition", "bLockOrientationToRail" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Use PointRotation metadata for attachment orientation. If false, attachment orientation is based on the spline curvature" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bUsePointRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation = { "bUsePointRotation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetSplineMeshMaterial" },
		{ "Category", "SplineVisualization" },
		{ "Comment", "/* Material assigned to spline component mesh*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Material assigned to spline component mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMaterial = { "SplineMeshMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraRigRail, SplineMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs_Inner = { "SplineMeshMIDs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs_MetaData[] = {
		{ "Category", "SplineVisualization" },
		{ "Comment", "/* Material Instance Dynamic created for the spline mesh */" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Material Instance Dynamic created for the spline mesh" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs = { "SplineMeshMIDs", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraRigRail, SplineMeshMIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshTexture_MetaData[] = {
		{ "BlueprintSetter", "SetSplineMeshTexture" },
		{ "Category", "SplineVisualization" },
		{ "Comment", "/* Texture that can be set to SplineMeshMIDs */" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Texture that can be set to SplineMeshMIDs" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshTexture = { "SplineMeshTexture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACineCameraRigRail, SplineMeshTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX_MetaData[] = {
		{ "Category", "Attachment|Location" },
		{ "Comment", "/* Determines if camera mount inherits LocationX*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits LocationX" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachLocationX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX = { "bAttachLocationX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY_MetaData[] = {
		{ "Category", "Attachment|Location" },
		{ "Comment", "/* Determines if camera mount inherits LocationY*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits LocationY" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachLocationY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY = { "bAttachLocationY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ_MetaData[] = {
		{ "Category", "Attachment|Location" },
		{ "Comment", "/* Determines if camera mount inherits LocationZ*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits LocationZ" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachLocationZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ = { "bAttachLocationZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX_MetaData[] = {
		{ "Category", "Attachment|Rotation" },
		{ "Comment", "/* Determines if camera mount inherits RotationX*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits RotationX" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachRotationX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX = { "bAttachRotationX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY_MetaData[] = {
		{ "Category", "Attachment|Rotation" },
		{ "Comment", "/* Determines if camera mount inherits RotationY*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits RotationY" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachRotationY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY = { "bAttachRotationY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ_MetaData[] = {
		{ "Category", "Attachment|Rotation" },
		{ "Comment", "/* Determines if camera mount inherits RotationZ*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if camera mount inherits RotationZ" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bAttachRotationZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ = { "bAttachRotationZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength_MetaData[] = {
		{ "Category", "Attachment|Camera" },
		{ "Comment", "/* Determines if it can drive focal length on the attached actors*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if it can drive focal length on the attached actors" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bInheritFocalLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength = { "bInheritFocalLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture_MetaData[] = {
		{ "Category", "Attachment|Camera" },
		{ "Comment", "/* Determines if it can drive aperture on the attached actors*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if it can drive aperture on the attached actors" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bInheritAperture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture = { "bInheritAperture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance_MetaData[] = {
		{ "Category", "Attachment|Camera" },
		{ "Comment", "/* Determines if it can drive focus distance on the attached actors*/" },
		{ "ModuleRelativePath", "Public/CineCameraRigRail.h" },
		{ "ToolTip", "Determines if it can drive focus distance on the attached actors" },
	};
#endif
	void Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance_SetBit(void* Obj)
	{
		((ACineCameraRigRail*)Obj)->bInheritFocusDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance = { "bInheritFocusDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACineCameraRigRail), &Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACineCameraRigRail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUseAbsolutePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_AbsolutePositionOnRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bUsePointRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshMIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_SplineMeshTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachLocationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bAttachRotationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACineCameraRigRail_Statics::NewProp_bInheritFocusDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACineCameraRigRail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACineCameraRigRail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACineCameraRigRail_Statics::ClassParams = {
		&ACineCameraRigRail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACineCameraRigRail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACineCameraRigRail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACineCameraRigRail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACineCameraRigRail()
	{
		if (!Z_Registration_Info_UClass_ACineCameraRigRail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACineCameraRigRail.OuterSingleton, Z_Construct_UClass_ACineCameraRigRail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACineCameraRigRail.OuterSingleton;
	}
	template<> CINECAMERARIGS_API UClass* StaticClass<ACineCameraRigRail>()
	{
		return ACineCameraRigRail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACineCameraRigRail);
	ACineCameraRigRail::~ACineCameraRigRail() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACineCameraRigRail, ACineCameraRigRail::StaticClass, TEXT("ACineCameraRigRail"), &Z_Registration_Info_UClass_ACineCameraRigRail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACineCameraRigRail), 3094153078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_3351564941(TEXT("/Script/CineCameraRigs"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CineCameraRigs_Source_CineCameraRigs_Public_CineCameraRigRail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
