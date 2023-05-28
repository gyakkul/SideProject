// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/IDisplayClusterProjectionBlueprintAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDisplayClusterProjectionBlueprintAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI();
	DISPLAYCLUSTERPROJECTION_API UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterProjection();
// End Cross Module References
	DEFINE_FUNCTION(IDisplayClusterProjectionBlueprintAPI::execCameraPolicySetCamera)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ViewportId);
		P_GET_OBJECT(UCameraComponent,Z_Param_NewCamera);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FOVMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CameraPolicySetCamera(Z_Param_ViewportId,Z_Param_NewCamera,Z_Param_FOVMultiplier);
		P_NATIVE_END;
	}
	void UDisplayClusterProjectionBlueprintAPI::StaticRegisterNativesUDisplayClusterProjectionBlueprintAPI()
	{
		UClass* Class = UDisplayClusterProjectionBlueprintAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraPolicySetCamera", &IDisplayClusterProjectionBlueprintAPI::execCameraPolicySetCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics
	{
		struct DisplayClusterProjectionBlueprintAPI_eventCameraPolicySetCamera_Parms
		{
			FString ViewportId;
			UCameraComponent* NewCamera;
			float FOVMultiplier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ViewportId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCamera;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_ViewportId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_ViewportId = { "ViewportId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterProjectionBlueprintAPI_eventCameraPolicySetCamera_Parms, ViewportId), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_ViewportId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_ViewportId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_NewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_NewCamera = { "NewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterProjectionBlueprintAPI_eventCameraPolicySetCamera_Parms, NewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_NewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_NewCamera_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_FOVMultiplier = { "FOVMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterProjectionBlueprintAPI_eventCameraPolicySetCamera_Parms, FOVMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_ViewportId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_NewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::NewProp_FOVMultiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplayProjection|Camera" },
		{ "Comment", "/** Sets active camera component for camera policy */" },
		{ "CPP_Default_FOVMultiplier", "1.000000" },
		{ "DisplayName", "Set camera" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterProjectionBlueprintAPI.h" },
		{ "ToolTip", "Sets active camera component for camera policy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI, nullptr, "CameraPolicySetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::DisplayClusterProjectionBlueprintAPI_eventCameraPolicySetCamera_Parms), Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterProjectionBlueprintAPI);
	UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_NoRegister()
	{
		return UDisplayClusterProjectionBlueprintAPI::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterProjection,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterProjectionBlueprintAPI_CameraPolicySetCamera, "CameraPolicySetCamera" }, // 3965794765
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Blueprints/IDisplayClusterProjectionBlueprintAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDisplayClusterProjectionBlueprintAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::ClassParams = {
		&UDisplayClusterProjectionBlueprintAPI::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintAPI.OuterSingleton, Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintAPI.OuterSingleton;
	}
	template<> DISPLAYCLUSTERPROJECTION_API UClass* StaticClass<UDisplayClusterProjectionBlueprintAPI>()
	{
		return UDisplayClusterProjectionBlueprintAPI::StaticClass();
	}
	UDisplayClusterProjectionBlueprintAPI::UDisplayClusterProjectionBlueprintAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterProjectionBlueprintAPI);
	UDisplayClusterProjectionBlueprintAPI::~UDisplayClusterProjectionBlueprintAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterProjectionBlueprintAPI, UDisplayClusterProjectionBlueprintAPI::StaticClass, TEXT("UDisplayClusterProjectionBlueprintAPI"), &Z_Registration_Info_UClass_UDisplayClusterProjectionBlueprintAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterProjectionBlueprintAPI), 3411674879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_952575783(TEXT("/Script/DisplayClusterProjection"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterProjection_Public_Blueprints_IDisplayClusterProjectionBlueprintAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
