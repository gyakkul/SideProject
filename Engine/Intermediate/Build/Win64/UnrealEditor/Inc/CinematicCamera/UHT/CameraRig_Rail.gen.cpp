// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraRig_Rail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraRig_Rail() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References
	DEFINE_FUNCTION(ACameraRig_Rail::execGetRailSplineComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USplineComponent**)Z_Param__Result=P_THIS->GetRailSplineComponent();
		P_NATIVE_END;
	}
	void ACameraRig_Rail::StaticRegisterNativesACameraRig_Rail()
	{
		UClass* Class = ACameraRig_Rail::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRailSplineComponent", &ACameraRig_Rail::execGetRailSplineComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics
	{
		struct CameraRig_Rail_eventGetRailSplineComponent_Parms
		{
			USplineComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraRig_Rail_eventGetRailSplineComponent_Parms, ReturnValue), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Returns the spline component that defines the rail path */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Returns the spline component that defines the rail path" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACameraRig_Rail, nullptr, "GetRailSplineComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::CameraRig_Rail_eventGetRailSplineComponent_Parms), Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraRig_Rail);
	UClass* Z_Construct_UClass_ACameraRig_Rail_NoRegister()
	{
		return ACameraRig_Rail::StaticClass();
	}
	struct Z_Construct_UClass_ACameraRig_Rail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPositionOnRail_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentPositionOnRail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockOrientationToRail_MetaData[];
#endif
		static void NewProp_bLockOrientationToRail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOrientationToRail;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRailVisualization_MetaData[];
#endif
		static void NewProp_bShowRailVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRailVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewMeshScale;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RailSplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RailSplineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RailCameraMount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RailCameraMount;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Rail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh_Rail;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewRailMeshSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRailMeshSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewRailMeshSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewRailStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewRailStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_Mount_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh_Mount;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraRig_Rail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACameraRig_Rail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACameraRig_Rail_GetRailSplineComponent, "GetRailSplineComponent" }, // 784579606
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * \n */" },
		{ "IncludePath", "CameraRig_Rail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Defines current position of the mount point along the rail, in terms of normalized distance from the beginning of the rail." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail = { "CurrentPositionOnRail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, CurrentPositionOnRail), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines whether the orientation of the mount should be in the direction of the rail. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines whether the orientation of the mount should be in the direction of the rail." },
	};
#endif
	void Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit(void* Obj)
	{
		((ACameraRig_Rail*)Obj)->bLockOrientationToRail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail = { "bLockOrientationToRail", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACameraRig_Rail), &Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines whether or not to show the rail mesh preview. */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines whether or not to show the rail mesh preview." },
	};
#endif
	void Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_SetBit(void* Obj)
	{
		((ACameraRig_Rail*)Obj)->bShowRailVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization = { "bShowRailVisualization", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACameraRig_Rail), &Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale_MetaData[] = {
		{ "Category", "Rail Controls" },
		{ "Comment", "/** Determines the scale of the rail mesh preview */" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Determines the scale of the rail mesh preview" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale = { "PreviewMeshScale", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewMeshScale), METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Root component to give the whole actor a transform. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Root component to give the whole actor a transform." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent = { "TransformComponent", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, TransformComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Spline component to define the rail path. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Spline component to define the rail path." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent = { "RailSplineComponent", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, RailSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData[] = {
		{ "Category", "Rail Components" },
		{ "Comment", "/** Component to define the attach point for cameras. Moves along the rail. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Component to define the attach point for cameras. Moves along the rail." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount = { "RailCameraMount", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, RailCameraMount), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData[] = {
		{ "Comment", "/** Preview meshes for visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
		{ "ToolTip", "Preview meshes for visualization" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail = { "PreviewMesh_Rail", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Rail), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0004000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments = { "PreviewRailMeshSegments", nullptr, (EPropertyFlags)0x0024088800002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailMeshSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh = { "PreviewRailStaticMesh", nullptr, (EPropertyFlags)0x0024080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewRailStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraRig_Rail.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount = { "PreviewMesh_Mount", nullptr, (EPropertyFlags)0x0024080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraRig_Rail, PreviewMesh_Mount), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_CurrentPositionOnRail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bLockOrientationToRail,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_bShowRailVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMeshScale,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_TransformComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailSplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_RailCameraMount,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Rail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailMeshSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewRailStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraRig_Rail_Statics::NewProp_PreviewMesh_Mount,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraRig_Rail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraRig_Rail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams = {
		&ACameraRig_Rail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraRig_Rail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraRig_Rail()
	{
		if (!Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton, Z_Construct_UClass_ACameraRig_Rail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraRig_Rail.OuterSingleton;
	}
	template<> CINEMATICCAMERA_API UClass* StaticClass<ACameraRig_Rail>()
	{
		return ACameraRig_Rail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraRig_Rail);
	ACameraRig_Rail::~ACameraRig_Rail() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraRig_Rail, ACameraRig_Rail::StaticClass, TEXT("ACameraRig_Rail"), &Z_Registration_Info_UClass_ACameraRig_Rail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraRig_Rail), 3993878454U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_1173851226(TEXT("/Script/CinematicCamera"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CameraRig_Rail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
