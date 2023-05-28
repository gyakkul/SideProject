// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SceneCaptureComponentCube.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponentCube() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTargetCube_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USceneCaptureComponentCube::execCaptureScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureScene();
		P_NATIVE_END;
	}
	void USceneCaptureComponentCube::StaticRegisterNativesUSceneCaptureComponentCube()
	{
		UClass* Class = USceneCaptureComponentCube::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureScene", &USceneCaptureComponentCube::execCaptureScene },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponentCube, nullptr, "CaptureScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCaptureComponentCube);
	UClass* Z_Construct_UClass_USceneCaptureComponentCube_NoRegister()
	{
		return USceneCaptureComponentCube::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponentCube_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureRotation_MetaData[];
#endif
		static void NewProp_bCaptureRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponentCube_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneCaptureComponentCube_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponentCube_CaptureScene, "CaptureScene" }, // 187051964
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponentCube.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a 6 planes and feed it to a render target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Temporary render target that can be used by the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Temporary render target that can be used by the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponentCube, TextureTarget), Z_Construct_UClass_UTextureRenderTargetCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system.  */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponentCube.h" },
		{ "ToolTip", "Preserve the rotation of the actor when updating the capture. The default behavior is to capture the cube aligned to the world axis system." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit(void* Obj)
	{
		((USceneCaptureComponentCube*)Obj)->bCaptureRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation = { "bCaptureRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneCaptureComponentCube), &Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponentCube_Statics::NewProp_bCaptureRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponentCube_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponentCube>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams = {
		&USceneCaptureComponentCube::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponentCube_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponentCube()
	{
		if (!Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton, Z_Construct_UClass_USceneCaptureComponentCube_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneCaptureComponentCube.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USceneCaptureComponentCube>()
	{
		return USceneCaptureComponentCube::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponentCube);
	USceneCaptureComponentCube::~USceneCaptureComponentCube() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneCaptureComponentCube, USceneCaptureComponentCube::StaticClass, TEXT("USceneCaptureComponentCube"), &Z_Registration_Info_UClass_USceneCaptureComponentCube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCaptureComponentCube), 1929865112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_3114393805(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponentCube_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
