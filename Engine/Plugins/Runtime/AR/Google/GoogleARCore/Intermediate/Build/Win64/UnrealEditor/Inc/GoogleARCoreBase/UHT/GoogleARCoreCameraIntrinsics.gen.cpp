// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreCameraIntrinsics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreCameraIntrinsics() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreCameraIntrinsics::execGetImageDimensions)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWidth);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetImageDimensions(Z_Param_Out_OutWidth,Z_Param_Out_OutHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreCameraIntrinsics::execGetPrincipalPoint)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutCX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutCY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPrincipalPoint(Z_Param_Out_OutCX,Z_Param_Out_OutCY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreCameraIntrinsics::execGetFocalLength)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFocalLength(Z_Param_Out_OutFX,Z_Param_Out_OutFY);
		P_NATIVE_END;
	}
	void UGoogleARCoreCameraIntrinsics::StaticRegisterNativesUGoogleARCoreCameraIntrinsics()
	{
		UClass* Class = UGoogleARCoreCameraIntrinsics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFocalLength", &UGoogleARCoreCameraIntrinsics::execGetFocalLength },
			{ "GetImageDimensions", &UGoogleARCoreCameraIntrinsics::execGetImageDimensions },
			{ "GetPrincipalPoint", &UGoogleARCoreCameraIntrinsics::execGetPrincipalPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics
	{
		struct GoogleARCoreCameraIntrinsics_eventGetFocalLength_Parms
		{
			float OutFX;
			float OutFY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutFY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::NewProp_OutFX = { "OutFX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetFocalLength_Parms, OutFX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::NewProp_OutFY = { "OutFY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetFocalLength_Parms, OutFY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::NewProp_OutFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::NewProp_OutFY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraIntrinsics" },
		{ "Comment", "/**\n\x09 * Get the focal length in pixels.\n\x09 *\n\x09 * @param OutFX  The focal length on the X axis.\n\x09 * @param OutFY  The focal length on the Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraIntrinsics.h" },
		{ "ToolTip", "Get the focal length in pixels.\n\n@param OutFX  The focal length on the X axis.\n@param OutFY  The focal length on the Y axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraIntrinsics, nullptr, "GetFocalLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::GoogleARCoreCameraIntrinsics_eventGetFocalLength_Parms), Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics
	{
		struct GoogleARCoreCameraIntrinsics_eventGetImageDimensions_Parms
		{
			int32 OutWidth;
			int32 OutHeight;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutWidth;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetImageDimensions_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetImageDimensions_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::NewProp_OutWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::NewProp_OutHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraIntrinsics" },
		{ "Comment", "/**\n\x09 * Get the image's width and height in pixels.\n\x09 *\n\x09 * @param OutWidth   The width.\n\x09 * @param OutHeight  The height.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraIntrinsics.h" },
		{ "ToolTip", "Get the image's width and height in pixels.\n\n@param OutWidth   The width.\n@param OutHeight  The height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraIntrinsics, nullptr, "GetImageDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::GoogleARCoreCameraIntrinsics_eventGetImageDimensions_Parms), Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics
	{
		struct GoogleARCoreCameraIntrinsics_eventGetPrincipalPoint_Parms
		{
			float OutCX;
			float OutCY;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutCY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::NewProp_OutCX = { "OutCX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetPrincipalPoint_Parms, OutCX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::NewProp_OutCY = { "OutCY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreCameraIntrinsics_eventGetPrincipalPoint_Parms, OutCY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::NewProp_OutCX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::NewProp_OutCY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GoogleARCore|CameraIntrinsics" },
		{ "Comment", "/**\n\x09 * Get the principal point in pixels.\n\x09 *\n\x09 * @param OutCX  The principle point on the X axis.\n\x09 * @param OutCY  The principle point the Y axis.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraIntrinsics.h" },
		{ "ToolTip", "Get the principal point in pixels.\n\n@param OutCX  The principle point on the X axis.\n@param OutCY  The principle point the Y axis." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreCameraIntrinsics, nullptr, "GetPrincipalPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::GoogleARCoreCameraIntrinsics_eventGetPrincipalPoint_Parms), Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreCameraIntrinsics);
	UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_NoRegister()
	{
		return UGoogleARCoreCameraIntrinsics::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetFocalLength, "GetFocalLength" }, // 2804471019
		{ &Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetImageDimensions, "GetImageDimensions" }, // 1146458100
		{ &Z_Construct_UFunction_UGoogleARCoreCameraIntrinsics_GetPrincipalPoint, "GetPrincipalPoint" }, // 3339756673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An object wrapping the ArCameraIntrinsics data from the ARCore SDK.\n */" },
		{ "IncludePath", "GoogleARCoreCameraIntrinsics.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreCameraIntrinsics.h" },
		{ "ToolTip", "An object wrapping the ArCameraIntrinsics data from the ARCore SDK." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreCameraIntrinsics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::ClassParams = {
		&UGoogleARCoreCameraIntrinsics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreCameraIntrinsics()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreCameraIntrinsics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreCameraIntrinsics.OuterSingleton, Z_Construct_UClass_UGoogleARCoreCameraIntrinsics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreCameraIntrinsics.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreCameraIntrinsics>()
	{
		return UGoogleARCoreCameraIntrinsics::StaticClass();
	}
	UGoogleARCoreCameraIntrinsics::UGoogleARCoreCameraIntrinsics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreCameraIntrinsics);
	UGoogleARCoreCameraIntrinsics::~UGoogleARCoreCameraIntrinsics() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreCameraIntrinsics, UGoogleARCoreCameraIntrinsics::StaticClass, TEXT("UGoogleARCoreCameraIntrinsics"), &Z_Registration_Info_UClass_UGoogleARCoreCameraIntrinsics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreCameraIntrinsics), 3508817103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_1375168185(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreCameraIntrinsics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
