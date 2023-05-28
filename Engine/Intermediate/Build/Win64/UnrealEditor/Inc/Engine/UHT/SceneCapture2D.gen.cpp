// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SceneCapture2D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ASceneCapture2D::execOnInterpToggle)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInterpToggle(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void ASceneCapture2D::StaticRegisterNativesASceneCapture2D()
	{
		UClass* Class = ASceneCapture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInterpToggle", &ASceneCapture2D::execOnInterpToggle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics
	{
		struct SceneCapture2D_eventOnInterpToggle_Parms
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
	void Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((SceneCapture2D_eventOnInterpToggle_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SceneCapture2D_eventOnInterpToggle_Parms), &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASceneCapture2D, nullptr, "OnInterpToggle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::SceneCapture2D_eventOnInterpToggle_Parms), Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASceneCapture2D);
	UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister()
	{
		return ASceneCapture2D::StaticClass();
	}
	struct Z_Construct_UClass_ASceneCapture2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponent2D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneCapture2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASceneCapture2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASceneCapture2D_OnInterpToggle, "OnInterpToggle" }, // 1621474497
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Material Attachment Actor Collision Attachment Actor" },
		{ "IncludePath", "Engine/SceneCapture2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "Comment", "/** Scene capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SceneCapture2D.h" },
		{ "ToolTip", "Scene capture component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D = { "CaptureComponent2D", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASceneCapture2D, CaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASceneCapture2D_Statics::NewProp_CaptureComponent2D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneCapture2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneCapture2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams = {
		&ASceneCapture2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneCapture2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneCapture2D()
	{
		if (!Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton, Z_Construct_UClass_ASceneCapture2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASceneCapture2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASceneCapture2D>()
	{
		return ASceneCapture2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneCapture2D);
	ASceneCapture2D::~ASceneCapture2D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASceneCapture2D, ASceneCapture2D::StaticClass, TEXT("ASceneCapture2D"), &Z_Registration_Info_UClass_ASceneCapture2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASceneCapture2D), 1045884865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_3039990863(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SceneCapture2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
