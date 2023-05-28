// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposurePostProcessPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePostProcessPass() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessBlendable_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposurePostProcessPass::execSetOutputRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputRenderTarget(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposurePostProcessPass::execGetOutputRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetOutputRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposurePostProcessPass::execGetSetupMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSetupMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposurePostProcessPass::execSetSetupMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSetupMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	void UComposurePostProcessPass::StaticRegisterNativesUComposurePostProcessPass()
	{
		UClass* Class = UComposurePostProcessPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOutputRenderTarget", &UComposurePostProcessPass::execGetOutputRenderTarget },
			{ "GetSetupMaterial", &UComposurePostProcessPass::execGetSetupMaterial },
			{ "SetOutputRenderTarget", &UComposurePostProcessPass::execSetOutputRenderTarget },
			{ "SetSetupMaterial", &UComposurePostProcessPass::execSetSetupMaterial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics
	{
		struct ComposurePostProcessPass_eventGetOutputRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPass_eventGetOutputRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** \n\x09 * Gets current output render target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Gets current output render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessPass, nullptr, "GetOutputRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::ComposurePostProcessPass_eventGetOutputRenderTarget_Parms), Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics
	{
		struct ComposurePostProcessPass_eventGetSetupMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPass_eventGetSetupMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** Gets current setup material. */" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Gets current setup material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessPass, nullptr, "GetSetupMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::ComposurePostProcessPass_eventGetSetupMaterial_Parms), Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics
	{
		struct ComposurePostProcessPass_eventSetOutputRenderTarget_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPass_eventSetOutputRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Outputs" },
		{ "Comment", "/** \n\x09 * Sets current output render target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Sets current output render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessPass, nullptr, "SetOutputRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::ComposurePostProcessPass_eventSetOutputRenderTarget_Parms), Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics
	{
		struct ComposurePostProcessPass_eventSetSetupMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePostProcessPass_eventSetSetupMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** \n\x09 * Sets a custom setup post process material. The material location must be set at BeforeTranslucency.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Sets a custom setup post process material. The material location must be set at BeforeTranslucency." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePostProcessPass, nullptr, "SetSetupMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::ComposurePostProcessPass_eventSetSetupMaterial_Parms), Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePostProcessPass);
	UClass* Z_Construct_UClass_UComposurePostProcessPass_NoRegister()
	{
		return UComposurePostProcessPass::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePostProcessPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendableInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendableInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SetupMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SetupMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TonemapperReplacement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TonemapperReplacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePostProcessPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposurePostProcessPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposurePostProcessPass_GetOutputRenderTarget, "GetOutputRenderTarget" }, // 1292521111
		{ &Z_Construct_UFunction_UComposurePostProcessPass_GetSetupMaterial, "GetSetupMaterial" }, // 311148223
		{ &Z_Construct_UFunction_UComposurePostProcessPass_SetOutputRenderTarget, "SetOutputRenderTarget" }, // 3800413395
		{ &Z_Construct_UFunction_UComposurePostProcessPass_SetSetupMaterial, "SetSetupMaterial" }, // 1303978506
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * In engine post process based pass.\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ComposurePostProcessPass.h" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "In engine post process based pass." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "Comment", "// Underlying scene capture.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Underlying scene capture." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x0024080400082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessPass, SceneCapture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SceneCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_BlendableInterface_MetaData[] = {
		{ "Comment", "// Blendable interface to intercept the OverrideBlendableSettings.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Blendable interface to intercept the OverrideBlendableSettings." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_BlendableInterface = { "BlendableInterface", nullptr, (EPropertyFlags)0x0024080400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessPass, BlendableInterface), Z_Construct_UClass_UComposurePostProcessBlendable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_BlendableInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_BlendableInterface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SetupMaterial_MetaData[] = {
		{ "Comment", "// Setup post process material.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Setup post process material." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SetupMaterial = { "SetupMaterial", nullptr, (EPropertyFlags)0x0024080400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessPass, SetupMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SetupMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SetupMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_TonemapperReplacement_MetaData[] = {
		{ "Comment", "// Internal material that replace the tonemapper to output linear color space.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePostProcessPass.h" },
		{ "ToolTip", "Internal material that replace the tonemapper to output linear color space." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_TonemapperReplacement = { "TonemapperReplacement", nullptr, (EPropertyFlags)0x0024080400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessPass, TonemapperReplacement), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_TonemapperReplacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_TonemapperReplacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposurePostProcessPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_BlendableInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_SetupMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessPass_Statics::NewProp_TonemapperReplacement,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePostProcessPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePostProcessPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePostProcessPass_Statics::ClassParams = {
		&UComposurePostProcessPass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposurePostProcessPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePostProcessPass()
	{
		if (!Z_Registration_Info_UClass_UComposurePostProcessPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePostProcessPass.OuterSingleton, Z_Construct_UClass_UComposurePostProcessPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePostProcessPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePostProcessPass>()
	{
		return UComposurePostProcessPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePostProcessPass);
	UComposurePostProcessPass::~UComposurePostProcessPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePostProcessPass, UComposurePostProcessPass::StaticClass, TEXT("UComposurePostProcessPass"), &Z_Registration_Info_UClass_UComposurePostProcessPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePostProcessPass), 3028093242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_3837995477(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePostProcessPass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
