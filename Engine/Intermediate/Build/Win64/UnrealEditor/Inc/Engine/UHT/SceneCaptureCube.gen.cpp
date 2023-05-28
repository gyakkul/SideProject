// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SceneCaptureCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ASceneCaptureCube::execOnInterpToggle)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInterpToggle(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void ASceneCaptureCube::StaticRegisterNativesASceneCaptureCube()
	{
		UClass* Class = ASceneCaptureCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", &ASceneCaptureCube::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics
	{
		struct SceneCaptureCube_eventOnInterpToggle_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SceneCaptureCube_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneCaptureCube_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCaptureCube, nullptr, "OnInterpToggle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::SceneCaptureCube_eventOnInterpToggle_Parms), Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneCaptureCube);
	UClass* Z_Construct_UClass_ASceneCaptureCube_NoRegister()
	{
		return ASceneCaptureCube::StaticClass();
	}
	struct Z_Construct_UClass_ASceneCaptureCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponentCube_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponentCube;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneCaptureCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASceneCaptureCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCaptureCube_OnInterpToggle, "OnInterpToggle" }, // 2127684791
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCaptureCube.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "Comment", "/** Scene capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCaptureCube.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube = { "CaptureComponentCube", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASceneCaptureCube, CaptureComponentCube), Z_Construct_UClass_USceneCaptureComponentCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCaptureCube_Statics::NewProp_CaptureComponentCube,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneCaptureCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCaptureCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams = {
		&ASceneCaptureCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCaptureCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneCaptureCube()
	{
		if (!Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton, Z_Construct_UClass_ASceneCaptureCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASceneCaptureCube.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASceneCaptureCube>()
	{
		return ASceneCaptureCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCaptureCube);
	ASceneCaptureCube::~ASceneCaptureCube() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASceneCaptureCube, ASceneCaptureCube::StaticClass, TEXT("ASceneCaptureCube"), &Z_Registration_Info_UClass_ASceneCaptureCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneCaptureCube), 1338177701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_1637160943(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCaptureCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
