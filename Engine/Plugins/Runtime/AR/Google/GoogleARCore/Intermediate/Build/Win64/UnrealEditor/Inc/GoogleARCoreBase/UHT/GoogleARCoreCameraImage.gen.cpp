// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreCameraImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreCameraImage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraImage();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreCameraImage::execGetPlaneCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPlaneCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreCameraImage::execGetHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreCameraImage::execGetWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreCameraImage::execRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Release();
		P_NATIVE_END;
	}
	void UGoogleARCoreCameraImage::StaticRegisterNativesUGoogleARCoreCameraImage()
	{
		UClass* Class = UGoogleARCoreCameraImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHeight", &UGoogleARCoreCameraImage::execGetHeight },
			{ "GetPlaneCount", &UGoogleARCoreCameraImage::execGetPlaneCount },
			{ "GetWidth", &UGoogleARCoreCameraImage::execGetWidth },
			{ "Release", &UGoogleARCoreCameraImage::execRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics
	{
		struct GoogleARCoreCameraImage_eventGetHeight_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraImage_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraImage" },
		{ "Comment", "/**\n\x09 * Get the height of the image in pixels.\n\x09 *\n\x09 * @return The height.\n\x09 */" },
		{ "Keywords", "googlear arcore cameraimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraImage.h" },
		{ "ToolTip", "Get the height of the image in pixels.\n\n@return The height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraImage, nullptr, "GetHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::GoogleARCoreCameraImage_eventGetHeight_Parms), Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics
	{
		struct GoogleARCoreCameraImage_eventGetPlaneCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraImage_eventGetPlaneCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraImage" },
		{ "Comment", "/**\n\x09 * Get the number of data planes in the image.\n\x09 *\n\x09 * @return The plane count.\n\x09 */" },
		{ "Keywords", "googlear arcore cameraimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraImage.h" },
		{ "ToolTip", "Get the number of data planes in the image.\n\n@return The plane count." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraImage, nullptr, "GetPlaneCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::GoogleARCoreCameraImage_eventGetPlaneCount_Parms), Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics
	{
		struct GoogleARCoreCameraImage_eventGetWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraImage_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraImage" },
		{ "Comment", "/**\n\x09 * Get the width of the image in pixels.\n\x09 *\n\x09 * @return The width.\n\x09 */" },
		{ "Keywords", "googlear arcore cameraimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraImage.h" },
		{ "ToolTip", "Get the width of the image in pixels.\n\n@return The width." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraImage, nullptr, "GetWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::GoogleARCoreCameraImage_eventGetWidth_Parms), Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraImage" },
		{ "Comment", "/**\n\x09 * Explicitly release the ARCore resources owned by this object.\n\x09 */" },
		{ "Keywords", "googlear arcore cameraimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraImage.h" },
		{ "ToolTip", "Explicitly release the ARCore resources owned by this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraImage, nullptr, "Release", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraImage_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraImage_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreCameraImage);
	UClass* Z_Construct_UClass_UGoogleARCoreCameraImage_NoRegister()
	{
		return UGoogleARCoreCameraImage::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreCameraImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreCameraImage_GetHeight, "GetHeight" }, // 2696767706
		{ &Z_Construct_UFunction_UGoogleARCoreCameraImage_GetPlaneCount, "GetPlaneCount" }, // 359944483
		{ &Z_Construct_UFunction_UGoogleARCoreCameraImage_GetWidth, "GetWidth" }, // 2733701291
		{ &Z_Construct_UFunction_UGoogleARCoreCameraImage_Release, "Release" }, // 77329691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An object that represents an acquired CPU-accessible camera image.\n */" },
		{ "IncludePath", "GoogleARCoreCameraImage.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraImage.h" },
		{ "ToolTip", "An object that represents an acquired CPU-accessible camera image." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreCameraImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::ClassParams = {
		&UGoogleARCoreCameraImage::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreCameraImage()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreCameraImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreCameraImage.OuterSingleton, Z_Construct_UClass_UGoogleARCoreCameraImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreCameraImage.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreCameraImage>()
	{
		return UGoogleARCoreCameraImage::StaticClass();
	}
	UGoogleARCoreCameraImage::UGoogleARCoreCameraImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreCameraImage);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraImage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreCameraImage, UGoogleARCoreCameraImage::StaticClass, TEXT("UGoogleARCoreCameraImage"), &Z_Registration_Info_UClass_UGoogleARCoreCameraImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreCameraImage), 4231155733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraImage_h_4184815296(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraImage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
