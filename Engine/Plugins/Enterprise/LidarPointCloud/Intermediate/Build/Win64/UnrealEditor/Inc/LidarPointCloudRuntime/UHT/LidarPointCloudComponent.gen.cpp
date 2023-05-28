// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloudComponent.h"
#include "LidarPointCloudShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloud_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudComponent();
	LIDARPOINTCLOUDRUNTIME_API UClass* Z_Construct_UClass_ULidarPointCloudComponent_NoRegister();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudPoint();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation;
	static UEnum* ELidarPointCloudSpriteOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudSpriteOrientation"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudSpriteOrientation>()
	{
		return ELidarPointCloudSpriteOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enumerators[] = {
		{ "ELidarPointCloudSpriteOrientation::PreferFacingCamera", (int64)ELidarPointCloudSpriteOrientation::PreferFacingCamera },
		{ "ELidarPointCloudSpriteOrientation::PreferFacingNormal", (int64)ELidarPointCloudSpriteOrientation::PreferFacingNormal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "PreferFacingCamera.Comment", "/** The sprites will face camera, even if Normals are available. */" },
		{ "PreferFacingCamera.Name", "ELidarPointCloudSpriteOrientation::PreferFacingCamera" },
		{ "PreferFacingCamera.ToolTip", "The sprites will face camera, even if Normals are available." },
		{ "PreferFacingNormal.Comment", "/** The sprites will attempt to face Normals, if available, or fall back to facing camera otherwise. */" },
		{ "PreferFacingNormal.Name", "ELidarPointCloudSpriteOrientation::PreferFacingNormal" },
		{ "PreferFacingNormal.ToolTip", "The sprites will attempt to face Normals, if available, or fall back to facing camera otherwise." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudSpriteOrientation",
		"ELidarPointCloudSpriteOrientation",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation.InnerSingleton;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execApplyRenderingParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyRenderingParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetPointShape)
	{
		P_GET_ENUM(ELidarPointCloudSpriteShape,Z_Param_NewPointShape);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointShape(ELidarPointCloudSpriteShape(Z_Param_NewPointShape));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execGetPointShape)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ELidarPointCloudSpriteShape*)Z_Param__Result=P_THIS->GetPointShape();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetPointCloud)
	{
		P_GET_OBJECT(ULidarPointCloud,Z_Param_InPointCloud);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointCloud(Z_Param_InPointCloud);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execRemovePointsByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execRemoveFirstPointByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveFirstPointByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execRemovePointsInBox)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsInBox(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execRemovePointsInSphere)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePointsInSphere(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execApplyColorToPointsByRay)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsByRay(Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execApplyColorToFirstPointByRay)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToFirstPointByRay(Z_Param_NewColor,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execApplyColorToPointsInBox)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsInBox(Z_Param_NewColor,Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execApplyColorToPointsInSphere)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyColorToPointsInSphere(Z_Param_NewColor,Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetVisibilityOfPointsByRay)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsByRay(Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetVisibilityOfFirstPointByRay)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfFirstPointByRay(Z_Param_bNewVisibility,Z_Param_Origin,Z_Param_Direction,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetVisibilityOfPointsInBox)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsInBox(Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Extent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execSetVisibilityOfPointsInSphere)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibilityOfPointsInSphere(Z_Param_bNewVisibility,Z_Param_Center,Z_Param_Radius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execLineTraceMulti)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_GET_TARRAY_REF(FLidarPointCloudPoint,Z_Param_Out_OutHits);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineTraceMulti(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace,Z_Param_Out_OutHits);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execLineTraceSingle)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_STRUCT_REF(FLidarPointCloudPoint,Z_Param_Out_PointHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LineTraceSingle(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_Out_PointHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execGetPointsInBoxAsCopies)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLidarPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointsInBoxAsCopies(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execGetPointsInSphereAsCopies)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_GET_UBOOL(Z_Param_bReturnWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLidarPointCloudPoint>*)Z_Param__Result=P_THIS->GetPointsInSphereAsCopies(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly,Z_Param_bReturnWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execHasPointsByRay)
	{
		P_GET_STRUCT(FVector,Z_Param_Origin);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsByRay(Z_Param_Origin,Z_Param_Direction,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execHasPointsInBox)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_STRUCT(FVector,Z_Param_Extent);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsInBox(Z_Param_Center,Z_Param_Extent,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execHasPointsInSphere)
	{
		P_GET_STRUCT(FVector,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bVisibleOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasPointsInSphere(Z_Param_Center,Z_Param_Radius,Z_Param_bVisibleOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULidarPointCloudComponent::execGetPointCloud)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULidarPointCloud**)Z_Param__Result=P_THIS->GetPointCloud();
		P_NATIVE_END;
	}
	void ULidarPointCloudComponent::StaticRegisterNativesULidarPointCloudComponent()
	{
		UClass* Class = ULidarPointCloudComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyColorToFirstPointByRay", &ULidarPointCloudComponent::execApplyColorToFirstPointByRay },
			{ "ApplyColorToPointsByRay", &ULidarPointCloudComponent::execApplyColorToPointsByRay },
			{ "ApplyColorToPointsInBox", &ULidarPointCloudComponent::execApplyColorToPointsInBox },
			{ "ApplyColorToPointsInSphere", &ULidarPointCloudComponent::execApplyColorToPointsInSphere },
			{ "ApplyRenderingParameters", &ULidarPointCloudComponent::execApplyRenderingParameters },
			{ "GetPointCloud", &ULidarPointCloudComponent::execGetPointCloud },
			{ "GetPointShape", &ULidarPointCloudComponent::execGetPointShape },
			{ "GetPointsInBoxAsCopies", &ULidarPointCloudComponent::execGetPointsInBoxAsCopies },
			{ "GetPointsInSphereAsCopies", &ULidarPointCloudComponent::execGetPointsInSphereAsCopies },
			{ "HasPointsByRay", &ULidarPointCloudComponent::execHasPointsByRay },
			{ "HasPointsInBox", &ULidarPointCloudComponent::execHasPointsInBox },
			{ "HasPointsInSphere", &ULidarPointCloudComponent::execHasPointsInSphere },
			{ "LineTraceMulti", &ULidarPointCloudComponent::execLineTraceMulti },
			{ "LineTraceSingle", &ULidarPointCloudComponent::execLineTraceSingle },
			{ "RemoveFirstPointByRay", &ULidarPointCloudComponent::execRemoveFirstPointByRay },
			{ "RemovePointsByRay", &ULidarPointCloudComponent::execRemovePointsByRay },
			{ "RemovePointsInBox", &ULidarPointCloudComponent::execRemovePointsInBox },
			{ "RemovePointsInSphere", &ULidarPointCloudComponent::execRemovePointsInSphere },
			{ "SetPointCloud", &ULidarPointCloudComponent::execSetPointCloud },
			{ "SetPointShape", &ULidarPointCloudComponent::execSetPointShape },
			{ "SetVisibilityOfFirstPointByRay", &ULidarPointCloudComponent::execSetVisibilityOfFirstPointByRay },
			{ "SetVisibilityOfPointsByRay", &ULidarPointCloudComponent::execSetVisibilityOfPointsByRay },
			{ "SetVisibilityOfPointsInBox", &ULidarPointCloudComponent::execSetVisibilityOfPointsInBox },
			{ "SetVisibilityOfPointsInSphere", &ULidarPointCloudComponent::execSetVisibilityOfPointsInSphere },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics
	{
		struct LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms
		{
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Applies the given color to the first point hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "ApplyColorToFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::LidarPointCloudComponent_eventApplyColorToFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics
	{
		struct LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms
		{
			FColor NewColor;
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Applies the given color to all points hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "ApplyColorToPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::LidarPointCloudComponent_eventApplyColorToPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics
	{
		struct LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms
		{
			FColor NewColor;
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the box */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Applies the given color to all points within the box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "ApplyColorToPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::LidarPointCloudComponent_eventApplyColorToPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics
	{
		struct LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms
		{
			FColor NewColor;
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_NewColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Applies the given color to all points within the sphere */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Applies the given color to all points within the sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "ApplyColorToPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::LidarPointCloudComponent_eventApplyColorToPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud|Rendering" },
		{ "Comment", "/** Applies specified rendering parameters (Brightness, Saturation, etc) to the selected material */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Applies specified rendering parameters (Brightness, Saturation, etc) to the selected material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "ApplyRenderingParameters", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics
	{
		struct LidarPointCloudComponent_eventGetPointCloud_Parms
		{
			ULidarPointCloud* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointCloud_Parms, ReturnValue), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "GetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::LidarPointCloudComponent_eventGetPointCloud_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics
	{
		struct LidarPointCloudComponent_eventGetPointShape_Parms
		{
			ELidarPointCloudSpriteShape ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointShape_Parms, ReturnValue), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape, METADATA_PARAMS(nullptr, 0) }; // 1560882439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "Comment", "/** Returns the current Point Shape */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Returns the current Point Shape" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "GetPointShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::LidarPointCloudComponent_eventGetPointShape_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics
	{
		struct LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Populates the array with copies of points within the given box.\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Populates the array with copies of points within the given box.\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "GetPointsInBoxAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::LidarPointCloudComponent_eventGetPointsInBoxAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics
	{
		struct LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Populates the array with copies of points within the given sphere.\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Populates the array with copies of points within the given sphere.\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "GetPointsInSphereAsCopies", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::LidarPointCloudComponent_eventGetPointsInSphereAsCopies_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics
	{
		struct LidarPointCloudComponent_eventHasPointsByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsByRay_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Returns true if there are any points hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "HasPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::LidarPointCloudComponent_eventHasPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics
	{
		struct LidarPointCloudComponent_eventHasPointsInBox_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsInBox_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Returns true if there are any points within the given box." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "HasPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::LidarPointCloudComponent_eventHasPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics
	{
		struct LidarPointCloudComponent_eventHasPointsInSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventHasPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventHasPointsInSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventHasPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Returns true if there are any points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Returns true if there are any points within the given sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "HasPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::LidarPointCloudComponent_eventHasPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics
	{
		struct LidarPointCloudComponent_eventLineTraceMulti_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			bool bReturnWorldSpace;
			TArray<FLidarPointCloudPoint> OutHits;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static void NewProp_bReturnWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHits_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutHits;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceMulti_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceMulti_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceMulti_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventLineTraceMulti_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bReturnWorldSpace_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventLineTraceMulti_Parms*)Obj)->bReturnWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bReturnWorldSpace = { "bReturnWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bReturnWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_OutHits_Inner = { "OutHits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_OutHits = { "OutHits", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceMulti_Parms, OutHits), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventLineTraceMulti_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventLineTraceMulti_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_bReturnWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_OutHits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_OutHits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/**\n\x09 * Performs a raycast test against the point cloud.\n\x09 * Populates OutHits array with the results.\n\x09 * If ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\n\x09 * Returns true it anything has been hit.\n\x09 */" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Performs a raycast test against the point cloud.\nPopulates OutHits array with the results.\nIf ReturnWorldSpace is selected, the points' locations will be converted into absolute value, otherwise they will be relative to the center of the cloud.\nReturns true it anything has been hit." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "LineTraceMulti", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::LidarPointCloudComponent_eventLineTraceMulti_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics
	{
		struct LidarPointCloudComponent_eventLineTraceSingle_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
			FLidarPointCloudPoint PointHit;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointHit;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceSingle_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceSingle_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceSingle_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventLineTraceSingle_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_PointHit = { "PointHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventLineTraceSingle_Parms, PointHit), Z_Construct_UScriptStruct_FLidarPointCloudPoint, METADATA_PARAMS(nullptr, 0) }; // 3309861466
	void Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventLineTraceSingle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventLineTraceSingle_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_bVisibleOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_PointHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Performs a raycast test against the point cloud. Returns the pointer if hit or nullptr otherwise. */" },
		{ "Keywords", "raycast" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Performs a raycast test against the point cloud. Returns the pointer if hit or nullptr otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "LineTraceSingle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::LidarPointCloudComponent_eventLineTraceSingle_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics
	{
		struct LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes the first point hit by the given ray */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Removes the first point hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "RemoveFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::LidarPointCloudComponent_eventRemoveFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics
	{
		struct LidarPointCloudComponent_eventRemovePointsByRay_Parms
		{
			FVector Origin;
			FVector Direction;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventRemovePointsByRay_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventRemovePointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points hit by the given ray  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Removes all points hit by the given ray" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "RemovePointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::LidarPointCloudComponent_eventRemovePointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics
	{
		struct LidarPointCloudComponent_eventRemovePointsInBox_Parms
		{
			FVector Center;
			FVector Extent;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventRemovePointsInBox_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventRemovePointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_Extent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given box  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Removes all points within the given box" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "RemovePointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::LidarPointCloudComponent_eventRemovePointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics
	{
		struct LidarPointCloudComponent_eventRemovePointsInSphere_Parms
		{
			FVector Center;
			float Radius;
			bool bVisibleOnly;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bVisibleOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventRemovePointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventRemovePointsInSphere_Parms*)Obj)->bVisibleOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_bVisibleOnly = { "bVisibleOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventRemovePointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_bVisibleOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::NewProp_bVisibleOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Removes all points within the given sphere  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Removes all points within the given sphere" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "RemovePointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::LidarPointCloudComponent_eventRemovePointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics
	{
		struct LidarPointCloudComponent_eventSetPointCloud_Parms
		{
			ULidarPointCloud* InPointCloud;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPointCloud;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::NewProp_InPointCloud = { "InPointCloud", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetPointCloud_Parms, InPointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::NewProp_InPointCloud,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetPointCloud", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::LidarPointCloudComponent_eventSetPointCloud_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics
	{
		struct LidarPointCloudComponent_eventSetPointShape_Parms
		{
			ELidarPointCloudSpriteShape NewPointShape;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewPointShape_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewPointShape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::NewProp_NewPointShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::NewProp_NewPointShape = { "NewPointShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetPointShape_Parms, NewPointShape), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape, METADATA_PARAMS(nullptr, 0) }; // 1560882439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::NewProp_NewPointShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::NewProp_NewPointShape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|LidarPointCloud" },
		{ "Comment", "/** Sets new Point Shape */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Sets new Point Shape" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetPointShape", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::LidarPointCloudComponent_eventSetPointShape_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics
	{
		struct LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms
		{
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of the first point hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Sets visibility of the first point hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetVisibilityOfFirstPointByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::LidarPointCloudComponent_eventSetVisibilityOfFirstPointByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics
	{
		struct LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms
		{
			bool bNewVisibility;
			FVector Origin;
			FVector Direction;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points hit by the given ray. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Sets visibility of points hit by the given ray." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetVisibilityOfPointsByRay", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::LidarPointCloudComponent_eventSetVisibilityOfPointsByRay_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics
	{
		struct LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms
		{
			bool bNewVisibility;
			FVector Center;
			FVector Extent;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_Extent = { "Extent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms, Extent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::NewProp_Extent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given box. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Sets visibility of points within the given box." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetVisibilityOfPointsInBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::LidarPointCloudComponent_eventSetVisibilityOfPointsInBox_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics
	{
		struct LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms
		{
			bool bNewVisibility;
			FVector Center;
			float Radius;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms), &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_bNewVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::NewProp_Radius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lidar Point Cloud" },
		{ "Comment", "/** Sets visibility of points within the given sphere. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Sets visibility of points within the given sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULidarPointCloudComponent, nullptr, "SetVisibilityOfPointsInSphere", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::LidarPointCloudComponent_eventSetVisibilityOfPointsInSphere_Parms), Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULidarPointCloudComponent);
	UClass* Z_Construct_UClass_ULidarPointCloudComponent_NoRegister()
	{
		return ULidarPointCloudComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULidarPointCloudComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointCloud;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GapFillingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GapFillingStrength;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PointShape_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointShape_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PointShape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PointOrientation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PointOrientation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassificationColors_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ClassificationColors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassificationColors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ClassificationColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevationColorBottom_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElevationColorBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevationColorTop_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElevationColorTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSizeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointSizeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Saturation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Saturation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contrast_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contrast;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gamma_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gamma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorTint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntensityInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IntensityInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFrustumCulling_MetaData[];
#endif
		static void NewProp_bUseFrustumCulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFrustumCulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNodeBounds_MetaData[];
#endif
		static void NewProp_bDrawNodeBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNodeBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterialMasked_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseMaterialMasked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULidarPointCloudComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULidarPointCloudComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToFirstPointByRay, "ApplyColorToFirstPointByRay" }, // 665215577
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsByRay, "ApplyColorToPointsByRay" }, // 1800614025
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInBox, "ApplyColorToPointsInBox" }, // 1861550045
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyColorToPointsInSphere, "ApplyColorToPointsInSphere" }, // 2798756372
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_ApplyRenderingParameters, "ApplyRenderingParameters" }, // 1735255770
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointCloud, "GetPointCloud" }, // 124620192
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointShape, "GetPointShape" }, // 2359189488
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInBoxAsCopies, "GetPointsInBoxAsCopies" }, // 209475279
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_GetPointsInSphereAsCopies, "GetPointsInSphereAsCopies" }, // 3475506196
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsByRay, "HasPointsByRay" }, // 2703461633
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInBox, "HasPointsInBox" }, // 373384839
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_HasPointsInSphere, "HasPointsInSphere" }, // 834831600
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceMulti, "LineTraceMulti" }, // 3532491458
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_LineTraceSingle, "LineTraceSingle" }, // 3777580605
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_RemoveFirstPointByRay, "RemoveFirstPointByRay" }, // 97846556
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsByRay, "RemovePointsByRay" }, // 1301700878
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInBox, "RemovePointsInBox" }, // 245006525
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_RemovePointsInSphere, "RemovePointsInSphere" }, // 2518802572
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetPointCloud, "SetPointCloud" }, // 4244040816
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetPointShape, "SetPointShape" }, // 1347082020
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfFirstPointByRay, "SetVisibilityOfFirstPointByRay" }, // 2736908497
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsByRay, "SetVisibilityOfPointsByRay" }, // 4214023647
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInBox, "SetVisibilityOfPointsInBox" }, // 912763461
		{ &Z_Construct_UFunction_ULidarPointCloudComponent_SetVisibilityOfPointsInSphere, "SetVisibilityOfPointsInSphere" }, // 1646209940
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to render specified point cloud section */" },
		{ "HideCategories", "Object LOD Physics Activation Materials Cooking Input HLOD Mobile Mobility Trigger" },
		{ "IncludePath", "LidarPointCloudComponent.h" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Component that allows you to render specified point cloud section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointCloud_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Lidar Point Cloud" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointCloud = { "PointCloud", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, PointCloud), Z_Construct_UClass_ULidarPointCloud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointCloud_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_CustomMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Material" },
		{ "Comment", "/**\n\x09 * Allows using custom-built material for the point cloud.\n\x09 * Set to None to use the default one instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Allows using custom-built material for the point cloud.\nSet to None to use the default one instead." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_CustomMaterial = { "CustomMaterial", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, CustomMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_CustomMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_CustomMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSize_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Use to tweak the size of the points.\n\x09 * Set to 0 to switch to 1 pixel points.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Use to tweak the size of the points.\nSet to 0 to switch to 1 pixel points." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSize = { "PointSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, PointSize), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Determines how the points will be scaled  */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Determines how the points will be scaled" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod = { "ScalingMethod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ScalingMethod), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod_MetaData)) }; // 2703718775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_GapFillingStrength_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * If set to > 0, it attempts to close gaps between points.\n\x09 * Setting this too high may cause visual artifacts.\n\x09 * This setting may interfere with AO\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "If set to > 0, it attempts to close gaps between points.\nSetting this too high may cause visual artifacts.\nThis setting may interfere with AO" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_GapFillingStrength = { "GapFillingStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, GapFillingStrength), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_GapFillingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_GapFillingStrength_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Specifies which source to use for point colors. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Specifies which source to use for point colors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource = { "ColorSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ColorSource), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource_MetaData)) }; // 2366848877
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintSetter", "SetPointShape" },
		{ "Category", "Appearance" },
		{ "Comment", "/** Affects the shape of points. */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use GetPointShape() / SetPointShape() instead." },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Affects the shape of points." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape = { "PointShape", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, PointShape), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape_MetaData)) }; // 1560882439
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Affects the orientation of points. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Affects the orientation of points." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation = { "PointOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, PointOrientation), Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteOrientation, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation_MetaData)) }; // 1060219662
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_ValueProp = { "ClassificationColors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_Key_KeyProp = { "ClassificationColors_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/**\n\x09 * Used with the Classification source.\n\x09 * Maps the given classification ID to a color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Used with the Classification source.\nMaps the given classification ID to a color." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors = { "ClassificationColors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ClassificationColors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorBottom_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Specifies the bottom color of the elevation-based gradient. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Specifies the bottom color of the elevation-based gradient." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorBottom = { "ElevationColorBottom", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ElevationColorBottom), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorTop_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Specifies the top color of the elevation-based gradient. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Specifies the top color of the elevation-based gradient." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorTop = { "ElevationColorTop", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ElevationColorTop), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSizeBias_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "0.15" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * Larger values will help mask LOD transition areas, but too large values will lead to loss of detail.\n\x09 * Values in range 0.035 - 0.05 seem to produce best overall results.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Larger values will help mask LOD transition areas, but too large values will lead to loss of detail.\nValues in range 0.035 - 0.05 seem to produce best overall results." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSizeBias = { "PointSizeBias", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, PointSizeBias), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSizeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSizeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Saturation_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ColorGradingMode", "saturation" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Saturation = { "Saturation", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Saturation), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Saturation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Saturation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Contrast_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ColorGradingMode", "contrast" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Contrast = { "Contrast", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Contrast), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Contrast_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Contrast_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gamma_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ColorGradingMode", "gamma" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gamma = { "Gamma", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Gamma), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gamma_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ColorGradingMode", "gain" },
		{ "Comment", "/** Affects the emissive strength of the color. Useful to create Bloom and light bleed effects. */" },
		{ "Delta", "0.01" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ShiftMouseMovePixelPerDelta", "10" },
		{ "ToolTip", "Affects the emissive strength of the color. Useful to create Bloom and light bleed effects." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Gain), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ColorGradingMode", "offset" },
		{ "Comment", "/** Applied additively, 0 being neutral. */" },
		{ "Delta", "0.001" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ShiftMouseMovePixelPerDelta", "20" },
		{ "SupportDynamicSliderMaxValue", "true" },
		{ "SupportDynamicSliderMinValue", "true" },
		{ "ToolTip", "Applied additively, 0 being neutral." },
		{ "UIMax", "1.0" },
		{ "UIMin", "-1.0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Offset), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorTint_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "Comment", "/** Specifies the tint to apply to the points. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Specifies the tint to apply to the points." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorTint = { "ColorTint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, ColorTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorTint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_IntensityInfluence_MetaData[] = {
		{ "Category", "Color Adjustment" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specifies the influence of Intensity data, if available, on the overall color. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Specifies the influence of Intensity data, if available, on the overall color." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_IntensityInfluence = { "IntensityInfluence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, IntensityInfluence), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_IntensityInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_IntensityInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * If enabled, points outside of the visible frustum will not be rendered.\n\x09 * While most project should leave this enabled, disabling it may help\n\x09 * with the data streaming lag when shooting cinematics.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "If enabled, points outside of the visible frustum will not be rendered.\nWhile most project should leave this enabled, disabling it may help\nwith the data streaming lag when shooting cinematics." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling_SetBit(void* Obj)
	{
		((ULidarPointCloudComponent*)Obj)->bUseFrustumCulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling = { "bUseFrustumCulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudComponent), &Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MinDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Minimum Depth from which the nodes should be rendered.\n\x09 * 0 to disable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Minimum Depth from which the nodes should be rendered.\n0 to disable." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MinDepth = { "MinDepth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, MinDepth), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MinDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MinDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MaxDepth_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * Maximum Depth to which the nodes should be rendered.\n\x09 * -1 to disable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Maximum Depth to which the nodes should be rendered.\n-1 to disable." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MaxDepth = { "MaxDepth", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, MaxDepth), METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MaxDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MaxDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Enabling this will cause the visible nodes to render their bounds. */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
		{ "ToolTip", "Enabling this will cause the visible nodes to render their bounds." },
	};
#endif
	void Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds_SetBit(void* Obj)
	{
		((ULidarPointCloudComponent*)Obj)->bDrawNodeBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds = { "bDrawNodeBounds", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULidarPointCloudComponent), &Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterialMasked_MetaData[] = {
		{ "ModuleRelativePath", "Public/LidarPointCloudComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterialMasked = { "BaseMaterialMasked", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULidarPointCloudComponent, BaseMaterialMasked), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterialMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterialMasked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULidarPointCloudComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_CustomMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ScalingMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_GapFillingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ClassificationColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ElevationColorTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_PointSizeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Saturation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Contrast,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_ColorTint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_IntensityInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bUseFrustumCulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MinDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_MaxDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_bDrawNodeBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULidarPointCloudComponent_Statics::NewProp_BaseMaterialMasked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULidarPointCloudComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULidarPointCloudComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULidarPointCloudComponent_Statics::ClassParams = {
		&ULidarPointCloudComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULidarPointCloudComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULidarPointCloudComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULidarPointCloudComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULidarPointCloudComponent()
	{
		if (!Z_Registration_Info_UClass_ULidarPointCloudComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULidarPointCloudComponent.OuterSingleton, Z_Construct_UClass_ULidarPointCloudComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULidarPointCloudComponent.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UClass* StaticClass<ULidarPointCloudComponent>()
	{
		return ULidarPointCloudComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULidarPointCloudComponent);
	ULidarPointCloudComponent::~ULidarPointCloudComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::EnumInfo[] = {
		{ ELidarPointCloudSpriteOrientation_StaticEnum, TEXT("ELidarPointCloudSpriteOrientation"), &Z_Registration_Info_UEnum_ELidarPointCloudSpriteOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1060219662U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULidarPointCloudComponent, ULidarPointCloudComponent::StaticClass, TEXT("ULidarPointCloudComponent"), &Z_Registration_Info_UClass_ULidarPointCloudComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULidarPointCloudComponent), 2821479226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_3815225420(TEXT("/Script/LidarPointCloudRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
