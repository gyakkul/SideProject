// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingCaptureBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "CameraCalibrationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingCaptureBase() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionHandlerPicker();
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingCaptureBase();
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingCaptureBase_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(ACompositingCaptureBase::execUpdateDistortion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDistortion();
		P_NATIVE_END;
	}
	void ACompositingCaptureBase::StaticRegisterNativesACompositingCaptureBase()
	{
		UClass* Class = ACompositingCaptureBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateDistortion", &ACompositingCaptureBase::execUpdateDistortion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied*/" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Update the state of the Lens Distortion Data Handler, and updates or removes the Distortion MID from the SceneCaptureComponent's post process materials, depending on whether distortion should be applied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingCaptureBase, nullptr, "UpdateDistortion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACompositingCaptureBase);
	UClass* Z_Construct_UClass_ACompositingCaptureBase_NoRegister()
	{
		return ACompositingCaptureBase::StaticClass();
	}
	struct Z_Construct_UClass_ACompositingCaptureBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent2D_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCaptureComponent2D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyDistortion_MetaData[];
#endif
		static void NewProp_bApplyDistortion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyDistortion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensComponentPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensComponentPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFocalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDistortionMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastDistortionMID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionSource;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompositingCaptureBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACompositingElement,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompositingCaptureBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositingCaptureBase_UpdateDistortion, "UpdateDistortion" }, // 1432306353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for CG Compositing Elements\n */" },
		{ "IncludePath", "CompositingCaptureBase.h" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Base class for CG Compositing Elements" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_SceneCaptureComponent2D_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Component used to generate the scene capture for this CG Layer */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Component used to generate the scene capture for this CG Layer" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_SceneCaptureComponent2D = { "SceneCaptureComponent2D", nullptr, (EPropertyFlags)0x00140000000b001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, SceneCaptureComponent2D), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_SceneCaptureComponent2D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_SceneCaptureComponent2D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Whether to apply distortion as a post-process effect on this CG Layer */" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Whether to apply distortion as a post-process effect on this CG Layer" },
	};
#endif
	void Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion_SetBit(void* Obj)
	{
		((ACompositingCaptureBase*)Obj)->bApplyDistortion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion = { "bApplyDistortion", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACompositingCaptureBase), &Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LensComponentPicker_MetaData[] = {
		{ "AllowAnyActor", "" },
		{ "AllowedClasses", "/Script/CameraCalibrationCore.LensComponent" },
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** A component reference (customized) that allows the user to specify a component that this controller should control */" },
		{ "DisplayName", "Lens Component" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "A component reference (customized) that allows the user to specify a component that this controller should control" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LensComponentPicker = { "LensComponentPicker", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, LensComponentPicker), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LensComponentPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LensComponentPicker_MetaData)) }; // 1758507179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OverscanFactor_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort */" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Value used to augment the FOV of the scene capture to produce a CG image with enough data to distort" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, OverscanFactor), METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OverscanFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OverscanFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OriginalFocalLength_MetaData[] = {
		{ "Category", "Composure|LensDistortion" },
		{ "Comment", "/** Focal length of the target camera before any overscan has been applied */" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Focal length of the target camera before any overscan has been applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OriginalFocalLength = { "OriginalFocalLength", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, OriginalFocalLength), METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OriginalFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OriginalFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LastDistortionMID_MetaData[] = {
		{ "Comment", "/** Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes */" },
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
		{ "ToolTip", "Cached distortion MID produced by the Lens Distortion Handler, used to clean up the post-process materials in the case that the the MID changes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LastDistortionMID = { "LastDistortionMID", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, LastDistortionMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LastDistortionMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LastDistortionMID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_DistortionSource_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingCaptureBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_DistortionSource = { "DistortionSource", nullptr, (EPropertyFlags)0x0020088820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingCaptureBase, DistortionSource_DEPRECATED), Z_Construct_UScriptStruct_FDistortionHandlerPicker, METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_DistortionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_DistortionSource_MetaData)) }; // 2769871690
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositingCaptureBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_SceneCaptureComponent2D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_bApplyDistortion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LensComponentPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OverscanFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_OriginalFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_LastDistortionMID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingCaptureBase_Statics::NewProp_DistortionSource,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompositingCaptureBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositingCaptureBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositingCaptureBase_Statics::ClassParams = {
		&ACompositingCaptureBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACompositingCaptureBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompositingCaptureBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingCaptureBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompositingCaptureBase()
	{
		if (!Z_Registration_Info_UClass_ACompositingCaptureBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositingCaptureBase.OuterSingleton, Z_Construct_UClass_ACompositingCaptureBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACompositingCaptureBase.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<ACompositingCaptureBase>()
	{
		return ACompositingCaptureBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositingCaptureBase);
	ACompositingCaptureBase::~ACompositingCaptureBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACompositingCaptureBase, ACompositingCaptureBase::StaticClass, TEXT("ACompositingCaptureBase"), &Z_Registration_Info_UClass_ACompositingCaptureBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositingCaptureBase), 1979757981U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_1785787613(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingCaptureBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
