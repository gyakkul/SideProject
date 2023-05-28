// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARUtilitiesFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARUtilitiesFunctionLibrary() {}
// Cross Module References
	ARUTILITIES_API UClass* Z_Construct_UClass_UARUtilitiesFunctionLibrary();
	ARUTILITIES_API UClass* Z_Construct_UClass_UARUtilitiesFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ARUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UARUtilitiesFunctionLibrary::execUpdateWorldToMeterScale)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldToMeterScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARUtilitiesFunctionLibrary::UpdateWorldToMeterScale(Z_Param_MaterialInstance,Z_Param_WorldToMeterScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARUtilitiesFunctionLibrary::execUpdateSceneDepthTexture)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance);
		P_GET_OBJECT(UTexture,Z_Param_SceneDepthTexture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthToMeterScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARUtilitiesFunctionLibrary::UpdateSceneDepthTexture(Z_Param_MaterialInstance,Z_Param_SceneDepthTexture,Z_Param_DepthToMeterScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UARUtilitiesFunctionLibrary::execUpdateCameraTextureParam)
	{
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_MaterialInstance);
		P_GET_OBJECT(UTexture,Z_Param_CameraTexture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ColorScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UARUtilitiesFunctionLibrary::UpdateCameraTextureParam(Z_Param_MaterialInstance,Z_Param_CameraTexture,Z_Param_ColorScale);
		P_NATIVE_END;
	}
	void UARUtilitiesFunctionLibrary::StaticRegisterNativesUARUtilitiesFunctionLibrary()
	{
		UClass* Class = UARUtilitiesFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCameraTextureParam", &UARUtilitiesFunctionLibrary::execUpdateCameraTextureParam },
			{ "UpdateSceneDepthTexture", &UARUtilitiesFunctionLibrary::execUpdateSceneDepthTexture },
			{ "UpdateWorldToMeterScale", &UARUtilitiesFunctionLibrary::execUpdateWorldToMeterScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics
	{
		struct ARUtilitiesFunctionLibrary_eventUpdateCameraTextureParam_Parms
		{
			UMaterialInstanceDynamic* MaterialInstance;
			UTexture* CameraTexture;
			float ColorScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraTexture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateCameraTextureParam_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_CameraTexture = { "CameraTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateCameraTextureParam_Parms, CameraTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateCameraTextureParam_Parms, ColorScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_CameraTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::NewProp_ColorScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Utilities" },
		{ "Comment", "/**\n\x09 * Update material texture parameter using pre-defined names:\n\x09 * For regular texture: CameraTexture\n\x09 * For external texture: ExternalCameraTexture\n\x09 */" },
		{ "CPP_Default_ColorScale", "1.000000" },
		{ "ModuleRelativePath", "Public/ARUtilitiesFunctionLibrary.h" },
		{ "ToolTip", "Update material texture parameter using pre-defined names:\nFor regular texture: CameraTexture\nFor external texture: ExternalCameraTexture" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARUtilitiesFunctionLibrary, nullptr, "UpdateCameraTextureParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::ARUtilitiesFunctionLibrary_eventUpdateCameraTextureParam_Parms), Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics
	{
		struct ARUtilitiesFunctionLibrary_eventUpdateSceneDepthTexture_Parms
		{
			UMaterialInstanceDynamic* MaterialInstance;
			UTexture* SceneDepthTexture;
			float DepthToMeterScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneDepthTexture;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthToMeterScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateSceneDepthTexture_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_SceneDepthTexture = { "SceneDepthTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateSceneDepthTexture_Parms, SceneDepthTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_DepthToMeterScale = { "DepthToMeterScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateSceneDepthTexture_Parms, DepthToMeterScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_SceneDepthTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::NewProp_DepthToMeterScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Utilities" },
		{ "Comment", "/**\n\x09 * Update material texture parameter using pre-defined names:\n\x09 * Scene depth texture: SceneDepthTexture\n\x09 * Depth to meter scale: DepthToMeterScale\n\x09 */" },
		{ "CPP_Default_DepthToMeterScale", "1.000000" },
		{ "ModuleRelativePath", "Public/ARUtilitiesFunctionLibrary.h" },
		{ "ToolTip", "Update material texture parameter using pre-defined names:\nScene depth texture: SceneDepthTexture\nDepth to meter scale: DepthToMeterScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARUtilitiesFunctionLibrary, nullptr, "UpdateSceneDepthTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::ARUtilitiesFunctionLibrary_eventUpdateSceneDepthTexture_Parms), Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics
	{
		struct ARUtilitiesFunctionLibrary_eventUpdateWorldToMeterScale_Parms
		{
			UMaterialInstanceDynamic* MaterialInstance;
			float WorldToMeterScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldToMeterScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateWorldToMeterScale_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::NewProp_WorldToMeterScale = { "WorldToMeterScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARUtilitiesFunctionLibrary_eventUpdateWorldToMeterScale_Parms, WorldToMeterScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::NewProp_WorldToMeterScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Utilities" },
		{ "Comment", "/**\n\x09 * Update material texture parameter using pre-defined names:\n\x09 * World to meter scale: WorldToMeterScale\n\x09 */" },
		{ "CPP_Default_WorldToMeterScale", "100.000000" },
		{ "ModuleRelativePath", "Public/ARUtilitiesFunctionLibrary.h" },
		{ "ToolTip", "Update material texture parameter using pre-defined names:\nWorld to meter scale: WorldToMeterScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARUtilitiesFunctionLibrary, nullptr, "UpdateWorldToMeterScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::ARUtilitiesFunctionLibrary_eventUpdateWorldToMeterScale_Parms), Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARUtilitiesFunctionLibrary);
	UClass* Z_Construct_UClass_UARUtilitiesFunctionLibrary_NoRegister()
	{
		return UARUtilitiesFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ARUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateCameraTextureParam, "UpdateCameraTextureParam" }, // 1789280423
		{ &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateSceneDepthTexture, "UpdateSceneDepthTexture" }, // 2659366903
		{ &Z_Construct_UFunction_UARUtilitiesFunctionLibrary_UpdateWorldToMeterScale, "UpdateWorldToMeterScale" }, // 1488927189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARUtilitiesFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ARUtilitiesFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARUtilitiesFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::ClassParams = {
		&UARUtilitiesFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARUtilitiesFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton, Z_Construct_UClass_UARUtilitiesFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary.OuterSingleton;
	}
	template<> ARUTILITIES_API UClass* StaticClass<UARUtilitiesFunctionLibrary>()
	{
		return UARUtilitiesFunctionLibrary::StaticClass();
	}
	UARUtilitiesFunctionLibrary::UARUtilitiesFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARUtilitiesFunctionLibrary);
	UARUtilitiesFunctionLibrary::~UARUtilitiesFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARUtilitiesFunctionLibrary, UARUtilitiesFunctionLibrary::StaticClass, TEXT("UARUtilitiesFunctionLibrary"), &Z_Registration_Info_UClass_UARUtilitiesFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARUtilitiesFunctionLibrary), 3971952676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h_2465351706(TEXT("/Script/ARUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARUtilitiesFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
