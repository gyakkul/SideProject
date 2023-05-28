// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposurePostProcessingPassProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePostProcessingPassProxy() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposurePostProcessPassPolicy::execSetupPostProcess)
	{
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_SceneCapture);
		P_GET_OBJECT_REF(UMaterialInterface,Z_Param_Out_TonemapperOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPostProcess_Implementation(Z_Param_SceneCapture,Z_Param_Out_TonemapperOverride);
		P_NATIVE_END;
	}
	struct ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms
	{
		USceneCaptureComponent2D* SceneCapture;
		UMaterialInterface* TonemapperOverride;
	};
	static FName NAME_UComposurePostProcessPassPolicy_SetupPostProcess = FName(TEXT("SetupPostProcess"));
	void UComposurePostProcessPassPolicy::SetupPostProcess(USceneCaptureComponent2D* SceneCapture, UMaterialInterface*& TonemapperOverride)
	{
		ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms Parms;
		Parms.SceneCapture=SceneCapture;
		Parms.TonemapperOverride=TonemapperOverride;
		ProcessEvent(FindFunctionChecked(NAME_UComposurePostProcessPassPolicy_SetupPostProcess),&Parms);
		TonemapperOverride=Parms.TonemapperOverride;
	}
	void UComposurePostProcessPassPolicy::StaticRegisterNativesUComposurePostProcessPassPolicy()
	{
		UClass* Class = UComposurePostProcessPassPolicy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetupPostProcess", &UComposurePostProcessPassPolicy::execSetupPostProcess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneCapture;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TonemapperOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_SceneCapture_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_TonemapperOverride = { "TonemapperOverride", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms, TonemapperOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_SceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::NewProp_TonemapperOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessingPassProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessPassPolicy, nullptr, "SetupPostProcess", nullptr, nullptr, sizeof(ComposurePostProcessPassPolicy_eventSetupPostProcess_Parms), Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePostProcessPassPolicy);
	UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister()
	{
		return UComposurePostProcessPassPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposurePostProcessPassPolicy_SetupPostProcess, "SetupPostProcess" }, // 3458145600
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for setting up post passes. Used in conjuntion with UComposurePostProcessingPassProxy.\n */" },
		{ "IncludePath", "ComposurePostProcessingPassProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessingPassProxy.h" },
		{ "ToolTip", "Abstract base class for setting up post passes. Used in conjuntion with UComposurePostProcessingPassProxy." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePostProcessPassPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::ClassParams = {
		&UComposurePostProcessPassPolicy::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy()
	{
		if (!Z_Registration_Info_UClass_UComposurePostProcessPassPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePostProcessPassPolicy.OuterSingleton, Z_Construct_UClass_UComposurePostProcessPassPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePostProcessPassPolicy.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePostProcessPassPolicy>()
	{
		return UComposurePostProcessPassPolicy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePostProcessPassPolicy);
	UComposurePostProcessPassPolicy::~UComposurePostProcessPassPolicy() {}
	DEFINE_FUNCTION(UComposurePostProcessingPassProxy::execExecute)
	{
		P_GET_OBJECT(UTexture,Z_Param_PrePassInput);
		P_GET_OBJECT(UComposurePostProcessPassPolicy,Z_Param_PostProcessPass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute(Z_Param_PrePassInput,Z_Param_PostProcessPass);
		P_NATIVE_END;
	}
	void UComposurePostProcessingPassProxy::StaticRegisterNativesUComposurePostProcessingPassProxy()
	{
		UClass* Class = UComposurePostProcessingPassProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UComposurePostProcessingPassProxy::execExecute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics
	{
		struct ComposurePostProcessingPassProxy_eventExecute_Parms
		{
			UTexture* PrePassInput;
			UComposurePostProcessPassPolicy* PostProcessPass;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrePassInput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessPass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::NewProp_PrePassInput = { "PrePassInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessingPassProxy_eventExecute_Parms, PrePassInput), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::NewProp_PostProcessPass = { "PostProcessPass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessingPassProxy_eventExecute_Parms, PostProcessPass), Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::NewProp_PrePassInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::NewProp_PostProcessPass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessingPassProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessingPassProxy, nullptr, "Execute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::ComposurePostProcessingPassProxy_eventExecute_Parms), Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePostProcessingPassProxy);
	UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister()
	{
		return UComposurePostProcessingPassProxy::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetupMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SetupMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComposurePostProcessPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposurePostProcessingPassProxy_Execute, "Execute" }, // 166311833
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Composure" },
		{ "Comment", "/**\n * Generic component class which takes a UComposurePostProcessPassPolicy and \n * executes it, enqueuing a post-process pass for the render frame.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Transform Trigger PhysicsVolume" },
		{ "IncludePath", "ComposurePostProcessingPassProxy.h" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessingPassProxy.h" },
		{ "ToolTip", "Generic component class which takes a UComposurePostProcessPassPolicy and\nexecutes it, enqueuing a post-process pass for the render frame." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::NewProp_SetupMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ComposurePostProcessingPassProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::NewProp_SetupMID = { "SetupMID", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessingPassProxy, SetupMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::NewProp_SetupMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::NewProp_SetupMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::NewProp_SetupMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePostProcessingPassProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::ClassParams = {
		&UComposurePostProcessingPassProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy()
	{
		if (!Z_Registration_Info_UClass_UComposurePostProcessingPassProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePostProcessingPassProxy.OuterSingleton, Z_Construct_UClass_UComposurePostProcessingPassProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePostProcessingPassProxy.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePostProcessingPassProxy>()
	{
		return UComposurePostProcessingPassProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePostProcessingPassProxy);
	UComposurePostProcessingPassProxy::~UComposurePostProcessingPassProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePostProcessPassPolicy, UComposurePostProcessPassPolicy::StaticClass, TEXT("UComposurePostProcessPassPolicy"), &Z_Registration_Info_UClass_UComposurePostProcessPassPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePostProcessPassPolicy), 1194626479U) },
		{ Z_Construct_UClass_UComposurePostProcessingPassProxy, UComposurePostProcessingPassProxy::StaticClass, TEXT("UComposurePostProcessingPassProxy"), &Z_Registration_Info_UClass_UComposurePostProcessingPassProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePostProcessingPassProxy), 1784117733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_3408297065(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessingPassProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
