// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureSpatialAnchorsEventComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureSpatialAnchorsEventComponent() {}
// Cross Module References
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureSpatialAnchorsEventComponent();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_NoRegister();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus();
	AZURESPATIALANCHORS_API UEnum* Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback();
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature();
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature();
	AZURESPATIALANCHORS_API UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_AzureSpatialAnchors();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics
	{
		struct AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms
		{
			int32 WatcherIdentifier;
			EAzureSpatialAnchorsLocateAnchorStatus Status;
			UAzureCloudSpatialAnchor* CloudSpatialAnchor;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WatcherIdentifier;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudSpatialAnchor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_WatcherIdentifier = { "WatcherIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms, WatcherIdentifier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms, Status), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsLocateAnchorStatus, METADATA_PARAMS(nullptr, 0) }; // 3868347709
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_CloudSpatialAnchor = { "CloudSpatialAnchor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms, CloudSpatialAnchor), Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_WatcherIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_Status_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_Status,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::NewProp_CloudSpatialAnchor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegates that will be cast by the ASA platform implementations. */" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
		{ "ToolTip", "Delegates that will be cast by the ASA platform implementations." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsEventComponent, nullptr, "ASAAnchorLocatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAzureSpatialAnchorsEventComponent::FASAAnchorLocatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASAAnchorLocatedDelegate, int32 WatcherIdentifier, EAzureSpatialAnchorsLocateAnchorStatus Status, UAzureCloudSpatialAnchor* CloudSpatialAnchor)
{
	struct AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms
	{
		int32 WatcherIdentifier;
		EAzureSpatialAnchorsLocateAnchorStatus Status;
		UAzureCloudSpatialAnchor* CloudSpatialAnchor;
	};
	AzureSpatialAnchorsEventComponent_eventASAAnchorLocatedDelegate_Parms Parms;
	Parms.WatcherIdentifier=WatcherIdentifier;
	Parms.Status=Status;
	Parms.CloudSpatialAnchor=CloudSpatialAnchor;
	ASAAnchorLocatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics
	{
		struct AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms
		{
			int32 WatcherIdentifier;
			bool WasCanceled;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WatcherIdentifier;
		static void NewProp_WasCanceled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCanceled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WatcherIdentifier = { "WatcherIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms, WatcherIdentifier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WasCanceled_SetBit(void* Obj)
	{
		((AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms*)Obj)->WasCanceled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WasCanceled = { "WasCanceled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms), &Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WasCanceled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WatcherIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::NewProp_WasCanceled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsEventComponent, nullptr, "ASALocateAnchorsCompletedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAzureSpatialAnchorsEventComponent::FASALocateAnchorsCompletedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASALocateAnchorsCompletedDelegate, int32 WatcherIdentifier, bool WasCanceled)
{
	struct AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms
	{
		int32 WatcherIdentifier;
		bool WasCanceled;
	};
	AzureSpatialAnchorsEventComponent_eventASALocateAnchorsCompletedDelegate_Parms Parms;
	Parms.WatcherIdentifier=WatcherIdentifier;
	Parms.WasCanceled=WasCanceled ? true : false;
	ASALocateAnchorsCompletedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics
	{
		struct AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms
		{
			float ReadyForCreateProgress;
			float RecommendedForCreateProgress;
			int32 SessionCreateHash;
			int32 SessionLocateHash;
			EAzureSpatialAnchorsSessionUserFeedback Feedback;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReadyForCreateProgress;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RecommendedForCreateProgress;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SessionCreateHash;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SessionLocateHash;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Feedback_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Feedback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_ReadyForCreateProgress = { "ReadyForCreateProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms, ReadyForCreateProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_RecommendedForCreateProgress = { "RecommendedForCreateProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms, RecommendedForCreateProgress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_SessionCreateHash = { "SessionCreateHash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms, SessionCreateHash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_SessionLocateHash = { "SessionLocateHash", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms, SessionLocateHash), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_Feedback_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_Feedback = { "Feedback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms, Feedback), Z_Construct_UEnum_AzureSpatialAnchors_EAzureSpatialAnchorsSessionUserFeedback, METADATA_PARAMS(nullptr, 0) }; // 3406225022
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_ReadyForCreateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_RecommendedForCreateProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_SessionCreateHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_SessionLocateHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_Feedback_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::NewProp_Feedback,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureSpatialAnchorsEventComponent, nullptr, "ASASessionUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UAzureSpatialAnchorsEventComponent::FASASessionUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ASASessionUpdatedDelegate, float ReadyForCreateProgress, float RecommendedForCreateProgress, int32 SessionCreateHash, int32 SessionLocateHash, EAzureSpatialAnchorsSessionUserFeedback Feedback)
{
	struct AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms
	{
		float ReadyForCreateProgress;
		float RecommendedForCreateProgress;
		int32 SessionCreateHash;
		int32 SessionLocateHash;
		EAzureSpatialAnchorsSessionUserFeedback Feedback;
	};
	AzureSpatialAnchorsEventComponent_eventASASessionUpdatedDelegate_Parms Parms;
	Parms.ReadyForCreateProgress=ReadyForCreateProgress;
	Parms.RecommendedForCreateProgress=RecommendedForCreateProgress;
	Parms.SessionCreateHash=SessionCreateHash;
	Parms.SessionLocateHash=SessionLocateHash;
	Parms.Feedback=Feedback;
	ASASessionUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UAzureSpatialAnchorsEventComponent::StaticRegisterNativesUAzureSpatialAnchorsEventComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureSpatialAnchorsEventComponent);
	UClass* Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_NoRegister()
	{
		return UAzureSpatialAnchorsEventComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASAAnchorLocatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ASAAnchorLocatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASALocateAnchorsCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ASALocateAnchorsCompleteDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ASASessionUpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ASASessionUpdatedDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature, "ASAAnchorLocatedDelegate__DelegateSignature" }, // 3102161249
		{ &Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature, "ASALocateAnchorsCompletedDelegate__DelegateSignature" }, // 3943518392
		{ &Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature, "ASASessionUpdatedDelegate__DelegateSignature" }, // 1156894948
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "AzureSpatialAnchorsEventComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASAAnchorLocatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASAAnchorLocatedDelegate = { "ASAAnchorLocatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureSpatialAnchorsEventComponent, ASAAnchorLocatedDelegate), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASAAnchorLocatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASAAnchorLocatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASAAnchorLocatedDelegate_MetaData)) }; // 3102161249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASALocateAnchorsCompleteDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASALocateAnchorsCompleteDelegate = { "ASALocateAnchorsCompleteDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureSpatialAnchorsEventComponent, ASALocateAnchorsCompleteDelegate), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASALocateAnchorsCompletedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASALocateAnchorsCompleteDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASALocateAnchorsCompleteDelegate_MetaData)) }; // 3943518392
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASASessionUpdatedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AzureSpatialAnchorsEventComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASASessionUpdatedDelegate = { "ASASessionUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureSpatialAnchorsEventComponent, ASASessionUpdatedDelegate), Z_Construct_UDelegateFunction_UAzureSpatialAnchorsEventComponent_ASASessionUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASASessionUpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASASessionUpdatedDelegate_MetaData)) }; // 1156894948
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASAAnchorLocatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASALocateAnchorsCompleteDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::NewProp_ASASessionUpdatedDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureSpatialAnchorsEventComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::ClassParams = {
		&UAzureSpatialAnchorsEventComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureSpatialAnchorsEventComponent()
	{
		if (!Z_Registration_Info_UClass_UAzureSpatialAnchorsEventComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureSpatialAnchorsEventComponent.OuterSingleton, Z_Construct_UClass_UAzureSpatialAnchorsEventComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzureSpatialAnchorsEventComponent.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UClass* StaticClass<UAzureSpatialAnchorsEventComponent>()
	{
		return UAzureSpatialAnchorsEventComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureSpatialAnchorsEventComponent);
	UAzureSpatialAnchorsEventComponent::~UAzureSpatialAnchorsEventComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzureSpatialAnchorsEventComponent, UAzureSpatialAnchorsEventComponent::StaticClass, TEXT("UAzureSpatialAnchorsEventComponent"), &Z_Registration_Info_UClass_UAzureSpatialAnchorsEventComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureSpatialAnchorsEventComponent), 2985200081U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_1959852787(TEXT("/Script/AzureSpatialAnchors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureSpatialAnchorsEventComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
