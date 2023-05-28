// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreAugmentedImage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreAugmentedImage() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedImage();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreAugmentedImage::execGetImageName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetImageName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedImage::execGetImageIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetImageIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedImage::execGetExtent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetExtent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedImage::execGetCenter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCenter();
		P_NATIVE_END;
	}
	void UGoogleARCoreAugmentedImage::StaticRegisterNativesUGoogleARCoreAugmentedImage()
	{
		UClass* Class = UGoogleARCoreAugmentedImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCenter", &UGoogleARCoreAugmentedImage::execGetCenter },
			{ "GetExtent", &UGoogleARCoreAugmentedImage::execGetExtent },
			{ "GetImageIndex", &UGoogleARCoreAugmentedImage::execGetImageIndex },
			{ "GetImageName", &UGoogleARCoreAugmentedImage::execGetImageName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics
	{
		struct GoogleARCoreAugmentedImage_eventGetCenter_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImage_eventGetCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Keywords", "googlear arcore augmentedimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedImage, nullptr, "GetCenter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::GoogleARCoreAugmentedImage_eventGetCenter_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics
	{
		struct GoogleARCoreAugmentedImage_eventGetExtent_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImage_eventGetExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Keywords", "googlear arcore augmentedimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedImage, nullptr, "GetExtent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::GoogleARCoreAugmentedImage_eventGetExtent_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics
	{
		struct GoogleARCoreAugmentedImage_eventGetImageIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImage_eventGetImageIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Keywords", "googlear arcore augmentedimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedImage, nullptr, "GetImageIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::GoogleARCoreAugmentedImage_eventGetImageIndex_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics
	{
		struct GoogleARCoreAugmentedImage_eventGetImageName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImage_eventGetImageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|AugmentedImage" },
		{ "Keywords", "googlear arcore augmentedimage" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedImage, nullptr, "GetImageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::GoogleARCoreAugmentedImage_eventGetImageName_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreAugmentedImage);
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage_NoRegister()
	{
		return UGoogleARCoreAugmentedImage::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARTrackedImage,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetCenter, "GetCenter" }, // 3033786413
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetExtent, "GetExtent" }, // 2898726346
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageIndex, "GetImageIndex" }, // 558851950
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedImage_GetImageName, "GetImageName" }, // 1865770832
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An object representing an augmented image currently in the scene.\n */" },
		{ "IncludePath", "GoogleARCoreAugmentedImage.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
		{ "ToolTip", "An object representing an augmented image currently in the scene." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex = { "ImageIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreAugmentedImage, ImageIndex), METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData[] = {
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreAugmentedImage, ImageName), METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::NewProp_ImageName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreAugmentedImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::ClassParams = {
		&UGoogleARCoreAugmentedImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImage()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton, Z_Construct_UClass_UGoogleARCoreAugmentedImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreAugmentedImage>()
	{
		return UGoogleARCoreAugmentedImage::StaticClass();
	}
	UGoogleARCoreAugmentedImage::UGoogleARCoreAugmentedImage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreAugmentedImage);
	UGoogleARCoreAugmentedImage::~UGoogleARCoreAugmentedImage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreAugmentedImage, UGoogleARCoreAugmentedImage::StaticClass, TEXT("UGoogleARCoreAugmentedImage"), &Z_Registration_Info_UClass_UGoogleARCoreAugmentedImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreAugmentedImage), 3618020314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_170581143(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
