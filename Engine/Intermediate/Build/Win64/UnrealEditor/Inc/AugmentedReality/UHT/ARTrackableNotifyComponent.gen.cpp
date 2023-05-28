// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARTrackableNotifyComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTrackableNotifyComponent() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARFaceGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPlaneGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackableNotifyComponent();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedObject_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedPoint_NoRegister();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackableDelegate_Parms
		{
			UARTrackedGeometry* TrackedGeometry;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackableDelegate_Parms, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::NewProp_TrackedGeometry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackableDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackableDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackableDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableDelegate, UARTrackedGeometry* TrackedGeometry)
{
	struct _Script_AugmentedReality_eventTrackableDelegate_Parms
	{
		UARTrackedGeometry* TrackedGeometry;
	};
	_Script_AugmentedReality_eventTrackableDelegate_Parms Parms;
	Parms.TrackedGeometry=TrackedGeometry;
	TrackableDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackablePlaneDelegate_Parms
		{
			UARPlaneGeometry* TrackedPlane;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::NewProp_TrackedPlane = { "TrackedPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackablePlaneDelegate_Parms, TrackedPlane), Z_Construct_UClass_UARPlaneGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::NewProp_TrackedPlane,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackablePlaneDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackablePlaneDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackablePlaneDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePlaneDelegate, UARPlaneGeometry* TrackedPlane)
{
	struct _Script_AugmentedReality_eventTrackablePlaneDelegate_Parms
	{
		UARPlaneGeometry* TrackedPlane;
	};
	_Script_AugmentedReality_eventTrackablePlaneDelegate_Parms Parms;
	Parms.TrackedPlane=TrackedPlane;
	TrackablePlaneDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackablePointDelegate_Parms
		{
			UARTrackedPoint* TrackedPoint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::NewProp_TrackedPoint = { "TrackedPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackablePointDelegate_Parms, TrackedPoint), Z_Construct_UClass_UARTrackedPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::NewProp_TrackedPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackablePointDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackablePointDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackablePointDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackablePointDelegate, UARTrackedPoint* TrackedPoint)
{
	struct _Script_AugmentedReality_eventTrackablePointDelegate_Parms
	{
		UARTrackedPoint* TrackedPoint;
	};
	_Script_AugmentedReality_eventTrackablePointDelegate_Parms Parms;
	Parms.TrackedPoint=TrackedPoint;
	TrackablePointDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackableImageDelegate_Parms
		{
			UARTrackedImage* TrackedImage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::NewProp_TrackedImage = { "TrackedImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackableImageDelegate_Parms, TrackedImage), Z_Construct_UClass_UARTrackedImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::NewProp_TrackedImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackableImageDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackableImageDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackableImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableImageDelegate, UARTrackedImage* TrackedImage)
{
	struct _Script_AugmentedReality_eventTrackableImageDelegate_Parms
	{
		UARTrackedImage* TrackedImage;
	};
	_Script_AugmentedReality_eventTrackableImageDelegate_Parms Parms;
	Parms.TrackedImage=TrackedImage;
	TrackableImageDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackableFaceDelegate_Parms
		{
			UARFaceGeometry* TrackedFace;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedFace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::NewProp_TrackedFace = { "TrackedFace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackableFaceDelegate_Parms, TrackedFace), Z_Construct_UClass_UARFaceGeometry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::NewProp_TrackedFace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackableFaceDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackableFaceDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackableFaceDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableFaceDelegate, UARFaceGeometry* TrackedFace)
{
	struct _Script_AugmentedReality_eventTrackableFaceDelegate_Parms
	{
		UARFaceGeometry* TrackedFace;
	};
	_Script_AugmentedReality_eventTrackableFaceDelegate_Parms Parms;
	Parms.TrackedFace=TrackedFace;
	TrackableFaceDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackableEnvProbeDelegate_Parms
		{
			UAREnvironmentCaptureProbe* TrackedEnvProbe;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedEnvProbe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::NewProp_TrackedEnvProbe = { "TrackedEnvProbe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackableEnvProbeDelegate_Parms, TrackedEnvProbe), Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::NewProp_TrackedEnvProbe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackableEnvProbeDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackableEnvProbeDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackableEnvProbeDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableEnvProbeDelegate, UAREnvironmentCaptureProbe* TrackedEnvProbe)
{
	struct _Script_AugmentedReality_eventTrackableEnvProbeDelegate_Parms
	{
		UAREnvironmentCaptureProbe* TrackedEnvProbe;
	};
	_Script_AugmentedReality_eventTrackableEnvProbeDelegate_Parms Parms;
	Parms.TrackedEnvProbe=TrackedEnvProbe;
	TrackableEnvProbeDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics
	{
		struct _Script_AugmentedReality_eventTrackableObjectDelegate_Parms
		{
			UARTrackedObject* TrackedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::NewProp_TrackedObject = { "TrackedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AugmentedReality_eventTrackableObjectDelegate_Parms, TrackedObject), Z_Construct_UClass_UARTrackedObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::NewProp_TrackedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AugmentedReality, nullptr, "TrackableObjectDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::_Script_AugmentedReality_eventTrackableObjectDelegate_Parms), Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FTrackableObjectDelegate_DelegateWrapper(const FMulticastScriptDelegate& TrackableObjectDelegate, UARTrackedObject* TrackedObject)
{
	struct _Script_AugmentedReality_eventTrackableObjectDelegate_Parms
	{
		UARTrackedObject* TrackedObject;
	};
	_Script_AugmentedReality_eventTrackableObjectDelegate_Parms Parms;
	Parms.TrackedObject=TrackedObject;
	TrackableObjectDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UARTrackableNotifyComponent::StaticRegisterNativesUARTrackableNotifyComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTrackableNotifyComponent);
	UClass* Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister()
	{
		return UARTrackableNotifyComponent::StaticClass();
	}
	struct Z_Construct_UClass_UARTrackableNotifyComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedPlane_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedPlane_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedPlane_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedPoint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedPoint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedPoint_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedImage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedImage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedImage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedFace_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedFace_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedFace_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedEnvProbe_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedEnvProbe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedEnvProbe_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedEnvProbe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedEnvProbe_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedEnvProbe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAddTrackedObject_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddTrackedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateTrackedObject_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateTrackedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedObject_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTrackableNotifyComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/** Component used to listen to ar trackable object changes */" },
		{ "IncludePath", "ARTrackableNotifyComponent.h" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Component used to listen to ar trackable object changes" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedGeometry_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new trackable ar item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new trackable ar item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedGeometry = { "OnAddTrackedGeometry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedGeometry), Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedGeometry_MetaData)) }; // 2523431664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedGeometry_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any trackable ar item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any trackable ar item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedGeometry = { "OnUpdateTrackedGeometry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedGeometry), Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedGeometry_MetaData)) }; // 2523431664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedGeometry_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any trackable ar item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any trackable ar item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedGeometry = { "OnRemoveTrackedGeometry", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedGeometry), Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedGeometry_MetaData)) }; // 2523431664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPlane_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar plane item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar plane item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPlane = { "OnAddTrackedPlane", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedPlane), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPlane_MetaData)) }; // 1346667322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPlane_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar plane item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar plane item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPlane = { "OnUpdateTrackedPlane", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedPlane), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPlane_MetaData)) }; // 1346667322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPlane_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar plane item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar plane item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPlane = { "OnRemoveTrackedPlane", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedPlane), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPlane_MetaData)) }; // 1346667322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPoint_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar Point item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar Point item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPoint = { "OnAddTrackedPoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedPoint), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPoint_MetaData)) }; // 3356121614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPoint_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Point item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Point item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPoint = { "OnUpdateTrackedPoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedPoint), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPoint_MetaData)) }; // 3356121614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPoint_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Point item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Point item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPoint = { "OnRemoveTrackedPoint", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedPoint), Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPoint_MetaData)) }; // 3356121614
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedImage_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar Image item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar Image item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedImage = { "OnAddTrackedImage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedImage), Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedImage_MetaData)) }; // 4242998621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedImage_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Image item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Image item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedImage = { "OnUpdateTrackedImage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedImage), Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedImage_MetaData)) }; // 4242998621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedImage_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Image item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Image item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedImage = { "OnRemoveTrackedImage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedImage), Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedImage_MetaData)) }; // 4242998621
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedFace_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar Face item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar Face item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedFace = { "OnAddTrackedFace", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedFace), Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedFace_MetaData)) }; // 2557081338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedFace_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Face item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Face item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedFace = { "OnUpdateTrackedFace", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedFace), Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedFace_MetaData)) }; // 2557081338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedFace_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar Face item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar Face item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedFace = { "OnRemoveTrackedFace", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedFace), Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedFace_MetaData)) }; // 2557081338
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedEnvProbe_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar environment capture probe item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar environment capture probe item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedEnvProbe = { "OnAddTrackedEnvProbe", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedEnvProbe), Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedEnvProbe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedEnvProbe_MetaData)) }; // 2797145672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedEnvProbe_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar environment capture probe item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar environment capture probe item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedEnvProbe = { "OnUpdateTrackedEnvProbe", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedEnvProbe), Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedEnvProbe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedEnvProbe_MetaData)) }; // 2797145672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedEnvProbe_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar environment capture probe item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar environment capture probe item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedEnvProbe = { "OnRemoveTrackedEnvProbe", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedEnvProbe), Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedEnvProbe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedEnvProbe_MetaData)) }; // 2797145672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedObject_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any new ar detected object item is added */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any new ar detected object item is added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedObject = { "OnAddTrackedObject", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnAddTrackedObject), Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedObject_MetaData)) }; // 2590614085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedObject_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar detected object item is updated */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar detected object item is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedObject = { "OnUpdateTrackedObject", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnUpdateTrackedObject), Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedObject_MetaData)) }; // 2590614085
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedObject_MetaData[] = {
		{ "Category", "Event" },
		{ "Comment", "/** Event that happens when any ar detected object item is removed from the scene */" },
		{ "ModuleRelativePath", "Public/ARTrackableNotifyComponent.h" },
		{ "ToolTip", "Event that happens when any ar detected object item is removed from the scene" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedObject = { "OnRemoveTrackedObject", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARTrackableNotifyComponent, OnRemoveTrackedObject), Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedObject_MetaData)) }; // 2590614085
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARTrackableNotifyComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedEnvProbe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedEnvProbe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedEnvProbe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnAddTrackedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnUpdateTrackedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARTrackableNotifyComponent_Statics::NewProp_OnRemoveTrackedObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTrackableNotifyComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTrackableNotifyComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTrackableNotifyComponent_Statics::ClassParams = {
		&UARTrackableNotifyComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARTrackableNotifyComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTrackableNotifyComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTrackableNotifyComponent()
	{
		if (!Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton, Z_Construct_UClass_UARTrackableNotifyComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTrackableNotifyComponent>()
	{
		return UARTrackableNotifyComponent::StaticClass();
	}
	UARTrackableNotifyComponent::UARTrackableNotifyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTrackableNotifyComponent);
	UARTrackableNotifyComponent::~UARTrackableNotifyComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARTrackableNotifyComponent, UARTrackableNotifyComponent::StaticClass, TEXT("UARTrackableNotifyComponent"), &Z_Registration_Info_UClass_UARTrackableNotifyComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTrackableNotifyComponent), 3732540231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_904281464(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
