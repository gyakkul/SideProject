// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IOSReplayKitControl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIOSReplayKitControl() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	IOSREPLAYKIT_API UClass* Z_Construct_UClass_UIOSReplayKitControl();
	IOSREPLAYKIT_API UClass* Z_Construct_UClass_UIOSReplayKitControl_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IOSReplayKit();
// End Cross Module References
	DEFINE_FUNCTION(UIOSReplayKitControl::execStopCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIOSReplayKitControl::StopCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOSReplayKitControl::execStartCaptureToFile)
	{
		P_GET_UBOOL(Z_Param_bMicrophoneEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIOSReplayKitControl::StartCaptureToFile(Z_Param_bMicrophoneEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOSReplayKitControl::execStopRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UIOSReplayKitControl::StopRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIOSReplayKitControl::execStartRecording)
	{
		P_GET_UBOOL(Z_Param_bMicrophoneEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIOSReplayKitControl::StartRecording(Z_Param_bMicrophoneEnabled);
		P_NATIVE_END;
	}
	void UIOSReplayKitControl::StaticRegisterNativesUIOSReplayKitControl()
	{
		UClass* Class = UIOSReplayKitControl::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartCaptureToFile", &UIOSReplayKitControl::execStartCaptureToFile },
			{ "StartRecording", &UIOSReplayKitControl::execStartRecording },
			{ "StopCapture", &UIOSReplayKitControl::execStopCapture },
			{ "StopRecording", &UIOSReplayKitControl::execStopRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics
	{
		struct IOSReplayKitControl_eventStartCaptureToFile_Parms
		{
			bool bMicrophoneEnabled;
		};
		static void NewProp_bMicrophoneEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMicrophoneEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::NewProp_bMicrophoneEnabled_SetBit(void* Obj)
	{
		((IOSReplayKitControl_eventStartCaptureToFile_Parms*)Obj)->bMicrophoneEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::NewProp_bMicrophoneEnabled = { "bMicrophoneEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IOSReplayKitControl_eventStartCaptureToFile_Parms), &Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::NewProp_bMicrophoneEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::NewProp_bMicrophoneEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "IOSReplayKit" },
		{ "CPP_Default_bMicrophoneEnabled", "true" },
		{ "Keywords", "replaykit capture" },
		{ "ModuleRelativePath", "Public/IOSReplayKitControl.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOSReplayKitControl, nullptr, "StartCaptureToFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::IOSReplayKitControl_eventStartCaptureToFile_Parms), Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics
	{
		struct IOSReplayKitControl_eventStartRecording_Parms
		{
			bool bMicrophoneEnabled;
		};
		static void NewProp_bMicrophoneEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMicrophoneEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::NewProp_bMicrophoneEnabled_SetBit(void* Obj)
	{
		((IOSReplayKitControl_eventStartRecording_Parms*)Obj)->bMicrophoneEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::NewProp_bMicrophoneEnabled = { "bMicrophoneEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IOSReplayKitControl_eventStartRecording_Parms), &Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::NewProp_bMicrophoneEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::NewProp_bMicrophoneEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "IOSReplayKit" },
		{ "CPP_Default_bMicrophoneEnabled", "true" },
		{ "Keywords", "replaykit record" },
		{ "ModuleRelativePath", "Public/IOSReplayKitControl.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOSReplayKitControl, nullptr, "StartRecording", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::IOSReplayKitControl_eventStartRecording_Parms), Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOSReplayKitControl_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOSReplayKitControl_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "IOSReplayKit" },
		{ "Keywords", "replaykit capture" },
		{ "ModuleRelativePath", "Public/IOSReplayKitControl.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOSReplayKitControl, nullptr, "StopCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOSReplayKitControl_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOSReplayKitControl_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "IOSReplayKit" },
		{ "Keywords", "replaykit record" },
		{ "ModuleRelativePath", "Public/IOSReplayKitControl.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIOSReplayKitControl, nullptr, "StopRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIOSReplayKitControl_StopRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIOSReplayKitControl_StopRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIOSReplayKitControl);
	UClass* Z_Construct_UClass_UIOSReplayKitControl_NoRegister()
	{
		return UIOSReplayKitControl::StaticClass();
	}
	struct Z_Construct_UClass_UIOSReplayKitControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIOSReplayKitControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_IOSReplayKit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIOSReplayKitControl_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIOSReplayKitControl_StartCaptureToFile, "StartCaptureToFile" }, // 3798206683
		{ &Z_Construct_UFunction_UIOSReplayKitControl_StartRecording, "StartRecording" }, // 1458774592
		{ &Z_Construct_UFunction_UIOSReplayKitControl_StopCapture, "StopCapture" }, // 1181854572
		{ &Z_Construct_UFunction_UIOSReplayKitControl_StopRecording, "StopRecording" }, // 4227334181
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIOSReplayKitControl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IOSReplayKitControl.h" },
		{ "ModuleRelativePath", "Public/IOSReplayKitControl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIOSReplayKitControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIOSReplayKitControl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIOSReplayKitControl_Statics::ClassParams = {
		&UIOSReplayKitControl::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIOSReplayKitControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIOSReplayKitControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIOSReplayKitControl()
	{
		if (!Z_Registration_Info_UClass_UIOSReplayKitControl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIOSReplayKitControl.OuterSingleton, Z_Construct_UClass_UIOSReplayKitControl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIOSReplayKitControl.OuterSingleton;
	}
	template<> IOSREPLAYKIT_API UClass* StaticClass<UIOSReplayKitControl>()
	{
		return UIOSReplayKitControl::StaticClass();
	}
	UIOSReplayKitControl::UIOSReplayKitControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIOSReplayKitControl);
	UIOSReplayKitControl::~UIOSReplayKitControl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIOSReplayKitControl, UIOSReplayKitControl::StaticClass, TEXT("UIOSReplayKitControl"), &Z_Registration_Info_UClass_UIOSReplayKitControl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIOSReplayKitControl), 1701791601U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_2418789721(TEXT("/Script/IOSReplayKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_IOSReplayKit_Source_IOSReplayKit_Public_IOSReplayKitControl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
