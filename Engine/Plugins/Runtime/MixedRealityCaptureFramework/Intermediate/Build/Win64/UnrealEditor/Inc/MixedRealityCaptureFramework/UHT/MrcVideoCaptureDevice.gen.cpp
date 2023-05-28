// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MrcVideoCaptureDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMrcVideoCaptureDevice() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex;
class UScriptStruct* FMrcVideoCaptureFeedIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, (UObject*)Z_Construct_UPackage__Script_MixedRealityCaptureFramework(), TEXT("MrcVideoCaptureFeedIndex"));
	}
	return Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.OuterSingleton;
}
template<> MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* StaticStruct<FMrcVideoCaptureFeedIndex>()
{
	return FMrcVideoCaptureFeedIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FormatIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* FMrcVideoCaptureFeedIndex\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
		{ "ToolTip", "FMrcVideoCaptureFeedIndex" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMrcVideoCaptureFeedIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_DeviceURL_MetaData[] = {
		{ "Category", "MixedRealityCapture|CaptureDevice" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_DeviceURL = { "DeviceURL", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcVideoCaptureFeedIndex, DeviceURL), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_DeviceURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_DeviceURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_StreamIndex_MetaData[] = {
		{ "Category", "MixedRealityCapture|CaptureDevice" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_StreamIndex = { "StreamIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcVideoCaptureFeedIndex, StreamIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_StreamIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_StreamIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_FormatIndex_MetaData[] = {
		{ "Category", "MixedRealityCapture|CaptureDevice" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_FormatIndex = { "FormatIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMrcVideoCaptureFeedIndex, FormatIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_FormatIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_FormatIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_DeviceURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_StreamIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewProp_FormatIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
		nullptr,
		&NewStructOps,
		"MrcVideoCaptureFeedIndex",
		sizeof(FMrcVideoCaptureFeedIndex),
		alignof(FMrcVideoCaptureFeedIndex),
		Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.InnerSingleton, Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics
	{
		struct _Script_MixedRealityCaptureFramework_eventMRCaptureFeedDelegate_Parms
		{
			FMrcVideoCaptureFeedIndex FeedRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeedRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::NewProp_FeedRef = { "FeedRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MixedRealityCaptureFramework_eventMRCaptureFeedDelegate_Parms, FeedRef), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData)) }; // 628712410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::NewProp_FeedRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework, nullptr, "MRCaptureFeedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::_Script_MixedRealityCaptureFramework_eventMRCaptureFeedDelegate_Parms), Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMRCaptureFeedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MRCaptureFeedDelegate, FMrcVideoCaptureFeedIndex const& FeedRef)
{
	struct _Script_MixedRealityCaptureFramework_eventMRCaptureFeedDelegate_Parms
	{
		FMrcVideoCaptureFeedIndex FeedRef;
	};
	_Script_MixedRealityCaptureFramework_eventMRCaptureFeedDelegate_Parms Parms;
	Parms.FeedRef=FeedRef;
	MRCaptureFeedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncTask_OpenMrcVidCaptureFeedBase::execOnVideoFeedOpenFailure)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoFeedOpenFailure(Z_Param_DeviceUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncTask_OpenMrcVidCaptureFeedBase::execOnVideoFeedOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoFeedOpened(Z_Param_DeviceUrl);
		P_NATIVE_END;
	}
	void UAsyncTask_OpenMrcVidCaptureFeedBase::StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureFeedBase()
	{
		UClass* Class = UAsyncTask_OpenMrcVidCaptureFeedBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnVideoFeedOpened", &UAsyncTask_OpenMrcVidCaptureFeedBase::execOnVideoFeedOpened },
			{ "OnVideoFeedOpenFailure", &UAsyncTask_OpenMrcVidCaptureFeedBase::execOnVideoFeedOpenFailure },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics
	{
		struct AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpened_Parms
		{
			FString DeviceUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpened_Parms, DeviceUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::NewProp_DeviceUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase, nullptr, "OnVideoFeedOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpened_Parms), Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics
	{
		struct AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpenFailure_Parms
		{
			FString DeviceUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpenFailure_Parms, DeviceUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::NewProp_DeviceUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase, nullptr, "OnVideoFeedOpenFailure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::AsyncTask_OpenMrcVidCaptureFeedBase_eventOnVideoFeedOpenFailure_Parms), Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTask_OpenMrcVidCaptureFeedBase);
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_NoRegister()
	{
		return UAsyncTask_OpenMrcVidCaptureFeedBase::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpened, "OnVideoFeedOpened" }, // 3036264922
		{ &Z_Construct_UFunction_UAsyncTask_OpenMrcVidCaptureFeedBase_OnVideoFeedOpenFailure, "OnVideoFeedOpenFailure" }, // 955771656
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MrcVideoCaptureDevice.h" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_OpenMrcVidCaptureFeedBase, OnSuccess), Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnSuccess_MetaData)) }; // 2682069928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnFail_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_OpenMrcVidCaptureFeedBase, OnFail), Z_Construct_UDelegateFunction_MixedRealityCaptureFramework_MRCaptureFeedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnFail_MetaData)) }; // 2682069928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncTask_OpenMrcVidCaptureFeedBase, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_MediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_OnFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTask_OpenMrcVidCaptureFeedBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::ClassParams = {
		&UAsyncTask_OpenMrcVidCaptureFeedBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase()
	{
		if (!Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase.OuterSingleton, Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UAsyncTask_OpenMrcVidCaptureFeedBase>()
	{
		return UAsyncTask_OpenMrcVidCaptureFeedBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTask_OpenMrcVidCaptureFeedBase);
	UAsyncTask_OpenMrcVidCaptureFeedBase::~UAsyncTask_OpenMrcVidCaptureFeedBase() {}
	void UAsyncTask_OpenMrcVidCaptureDevice::StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureDevice()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTask_OpenMrcVidCaptureDevice);
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_NoRegister()
	{
		return UAsyncTask_OpenMrcVidCaptureDevice::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UAsyncTask_OpenMrcVidCaptureDevice\n *****************************************************************************/" },
		{ "IncludePath", "MrcVideoCaptureDevice.h" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
		{ "ToolTip", "UAsyncTask_OpenMrcVidCaptureDevice" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTask_OpenMrcVidCaptureDevice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::ClassParams = {
		&UAsyncTask_OpenMrcVidCaptureDevice::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice()
	{
		if (!Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureDevice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureDevice.OuterSingleton, Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureDevice.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UAsyncTask_OpenMrcVidCaptureDevice>()
	{
		return UAsyncTask_OpenMrcVidCaptureDevice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTask_OpenMrcVidCaptureDevice);
	UAsyncTask_OpenMrcVidCaptureDevice::~UAsyncTask_OpenMrcVidCaptureDevice() {}
	void UAsyncTask_OpenMrcVidCaptureFeed::StaticRegisterNativesUAsyncTask_OpenMrcVidCaptureFeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncTask_OpenMrcVidCaptureFeed);
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_NoRegister()
	{
		return UAsyncTask_OpenMrcVidCaptureFeed::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UAsyncTask_OpenMrcVidCaptureFeed\n *****************************************************************************/" },
		{ "IncludePath", "MrcVideoCaptureDevice.h" },
		{ "ModuleRelativePath", "Public/MrcVideoCaptureDevice.h" },
		{ "ToolTip", "UAsyncTask_OpenMrcVidCaptureFeed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncTask_OpenMrcVidCaptureFeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::ClassParams = {
		&UAsyncTask_OpenMrcVidCaptureFeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed()
	{
		if (!Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeed.OuterSingleton, Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeed.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UAsyncTask_OpenMrcVidCaptureFeed>()
	{
		return UAsyncTask_OpenMrcVidCaptureFeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncTask_OpenMrcVidCaptureFeed);
	UAsyncTask_OpenMrcVidCaptureFeed::~UAsyncTask_OpenMrcVidCaptureFeed() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ScriptStructInfo[] = {
		{ FMrcVideoCaptureFeedIndex::StaticStruct, Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex_Statics::NewStructOps, TEXT("MrcVideoCaptureFeedIndex"), &Z_Registration_Info_UScriptStruct_MrcVideoCaptureFeedIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMrcVideoCaptureFeedIndex), 628712410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase, UAsyncTask_OpenMrcVidCaptureFeedBase::StaticClass, TEXT("UAsyncTask_OpenMrcVidCaptureFeedBase"), &Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeedBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTask_OpenMrcVidCaptureFeedBase), 1990722427U) },
		{ Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureDevice, UAsyncTask_OpenMrcVidCaptureDevice::StaticClass, TEXT("UAsyncTask_OpenMrcVidCaptureDevice"), &Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTask_OpenMrcVidCaptureDevice), 230404905U) },
		{ Z_Construct_UClass_UAsyncTask_OpenMrcVidCaptureFeed, UAsyncTask_OpenMrcVidCaptureFeed::StaticClass, TEXT("UAsyncTask_OpenMrcVidCaptureFeed"), &Z_Registration_Info_UClass_UAsyncTask_OpenMrcVidCaptureFeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncTask_OpenMrcVidCaptureFeed), 1495825282U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_3022789735(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MrcVideoCaptureDevice_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
