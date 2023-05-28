// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleVisionBlueprintProxy.h"
#include "AppleVisionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleVisionBlueprintProxy() {}
// Cross Module References
	APPLEVISION_API UClass* Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy();
	APPLEVISION_API UClass* Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_NoRegister();
	APPLEVISION_API UFunction* Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FFaceDetectionResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AppleVision();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics
	{
		struct _Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms
		{
			FFaceDetectionResult FaceDetectionResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceDetectionResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceDetectionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::NewProp_FaceDetectionResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::NewProp_FaceDetectionResult = { "FaceDetectionResult", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms, FaceDetectionResult), Z_Construct_UScriptStruct_FFaceDetectionResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::NewProp_FaceDetectionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::NewProp_FaceDetectionResult_MetaData)) }; // 849567343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::NewProp_FaceDetectionResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AppleVision, nullptr, "AppleVisionDetectFacesDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::_Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms), Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAppleVisionDetectFacesDelegate_DelegateWrapper(const FMulticastScriptDelegate& AppleVisionDetectFacesDelegate, FFaceDetectionResult const& FaceDetectionResult)
{
	struct _Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms
	{
		FFaceDetectionResult FaceDetectionResult;
	};
	_Script_AppleVision_eventAppleVisionDetectFacesDelegate_Parms Parms;
	Parms.FaceDetectionResult=FaceDetectionResult;
	AppleVisionDetectFacesDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAppleVisionDetectFacesAsyncTaskBlueprintProxy::execCreateProxyObjectForDetectFaces)
	{
		P_GET_OBJECT(UTexture,Z_Param_SourceImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAppleVisionDetectFacesAsyncTaskBlueprintProxy**)Z_Param__Result=UAppleVisionDetectFacesAsyncTaskBlueprintProxy::CreateProxyObjectForDetectFaces(Z_Param_SourceImage);
		P_NATIVE_END;
	}
	void UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticRegisterNativesUAppleVisionDetectFacesAsyncTaskBlueprintProxy()
	{
		UClass* Class = UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForDetectFaces", &UAppleVisionDetectFacesAsyncTaskBlueprintProxy::execCreateProxyObjectForDetectFaces },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics
	{
		struct AppleVisionDetectFacesAsyncTaskBlueprintProxy_eventCreateProxyObjectForDetectFaces_Parms
		{
			UTexture* SourceImage;
			UAppleVisionDetectFacesAsyncTaskBlueprintProxy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceImage;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::NewProp_SourceImage = { "SourceImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleVisionDetectFacesAsyncTaskBlueprintProxy_eventCreateProxyObjectForDetectFaces_Parms, SourceImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AppleVisionDetectFacesAsyncTaskBlueprintProxy_eventCreateProxyObjectForDetectFaces_Parms, ReturnValue), Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::NewProp_SourceImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Apple Vision" },
		{ "Comment", "/**\n\x09 * Detects faces within an image\n\x09 *\n\x09 * @param SourceImage the image to detect faces in\n\x09 */" },
		{ "DisplayName", "Detect Faces" },
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
		{ "ToolTip", "Detects faces within an image\n\n@param SourceImage the image to detect faces in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy, nullptr, "CreateProxyObjectForDetectFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::AppleVisionDetectFacesAsyncTaskBlueprintProxy_eventCreateProxyObjectForDetectFaces_Parms), Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleVisionDetectFacesAsyncTaskBlueprintProxy);
	UClass* Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_NoRegister()
	{
		return UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceDetectionResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceDetectionResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_CreateProxyObjectForDetectFaces, "CreateProxyObjectForDetectFaces" }, // 3320159956
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AppleVisionBlueprintProxy.h" },
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, OnSuccess), Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess_MetaData)) }; // 1035429255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, OnFailure), Z_Construct_UDelegateFunction_AppleVision_AppleVisionDetectFacesDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure_MetaData)) }; // 1035429255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_FaceDetectionResult_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "ModuleRelativePath", "Public/AppleVisionBlueprintProxy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_FaceDetectionResult = { "FaceDetectionResult", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleVisionDetectFacesAsyncTaskBlueprintProxy, FaceDetectionResult), Z_Construct_UScriptStruct_FFaceDetectionResult, METADATA_PARAMS(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_FaceDetectionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_FaceDetectionResult_MetaData)) }; // 849567343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_OnFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::NewProp_FaceDetectionResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleVisionDetectFacesAsyncTaskBlueprintProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::ClassParams = {
		&UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy()
	{
		if (!Z_Registration_Info_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy.OuterSingleton, Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy.OuterSingleton;
	}
	template<> APPLEVISION_API UClass* StaticClass<UAppleVisionDetectFacesAsyncTaskBlueprintProxy>()
	{
		return UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleVisionDetectFacesAsyncTaskBlueprintProxy);
	UAppleVisionDetectFacesAsyncTaskBlueprintProxy::~UAppleVisionDetectFacesAsyncTaskBlueprintProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy, UAppleVisionDetectFacesAsyncTaskBlueprintProxy::StaticClass, TEXT("UAppleVisionDetectFacesAsyncTaskBlueprintProxy"), &Z_Registration_Info_UClass_UAppleVisionDetectFacesAsyncTaskBlueprintProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleVisionDetectFacesAsyncTaskBlueprintProxy), 2879355307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_1988955507(TEXT("/Script/AppleVision"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionBlueprintProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
