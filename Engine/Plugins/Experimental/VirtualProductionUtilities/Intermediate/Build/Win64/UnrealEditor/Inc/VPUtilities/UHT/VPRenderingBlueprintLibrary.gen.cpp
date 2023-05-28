// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPRenderingBlueprintLibrary.h"
#include "../../Source/Runtime/Engine/Public/SceneViewExtensionContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPRenderingBlueprintLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPRenderingBlueprintLibrary();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPRenderingBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPRenderingBlueprintLibrary::execGenerateSceneViewExtensionIsActiveFunctorForViewportType)
	{
		P_GET_STRUCT_REF(FSceneViewExtensionIsActiveFunctor,Z_Param_Out_OutIsActiveFunction);
		P_GET_UBOOL(Z_Param_bPIE);
		P_GET_UBOOL(Z_Param_bSIE);
		P_GET_UBOOL(Z_Param_bEditorActive);
		P_GET_UBOOL(Z_Param_bGamePrimary);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPRenderingBlueprintLibrary::GenerateSceneViewExtensionIsActiveFunctorForViewportType(Z_Param_Out_OutIsActiveFunction,Z_Param_bPIE,Z_Param_bSIE,Z_Param_bEditorActive,Z_Param_bGamePrimary);
		P_NATIVE_END;
	}
	void UVPRenderingBlueprintLibrary::StaticRegisterNativesUVPRenderingBlueprintLibrary()
	{
		UClass* Class = UVPRenderingBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateSceneViewExtensionIsActiveFunctorForViewportType", &UVPRenderingBlueprintLibrary::execGenerateSceneViewExtensionIsActiveFunctorForViewportType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics
	{
		struct VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms
		{
			FSceneViewExtensionIsActiveFunctor OutIsActiveFunction;
			bool bPIE;
			bool bSIE;
			bool bEditorActive;
			bool bGamePrimary;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutIsActiveFunction;
		static void NewProp_bPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPIE;
		static void NewProp_bSIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSIE;
		static void NewProp_bEditorActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorActive;
		static void NewProp_bGamePrimary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamePrimary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_OutIsActiveFunction = { "OutIsActiveFunction", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms, OutIsActiveFunction), Z_Construct_UScriptStruct_FSceneViewExtensionIsActiveFunctor, METADATA_PARAMS(nullptr, 0) }; // 2087551378
	void Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bPIE_SetBit(void* Obj)
	{
		((VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms*)Obj)->bPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bPIE = { "bPIE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms), &Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bPIE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bSIE_SetBit(void* Obj)
	{
		((VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms*)Obj)->bSIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bSIE = { "bSIE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms), &Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bSIE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bEditorActive_SetBit(void* Obj)
	{
		((VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms*)Obj)->bEditorActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bEditorActive = { "bEditorActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms), &Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bEditorActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bGamePrimary_SetBit(void* Obj)
	{
		((VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms*)Obj)->bGamePrimary = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bGamePrimary = { "bGamePrimary", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms), &Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bGamePrimary_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_OutIsActiveFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bSIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bEditorActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::NewProp_bGamePrimary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production|Rendering" },
		{ "Comment", "/** \n\x09 * Returns a functor to activate a scene view extension when the FViewport in the SceneViewExtensionContext is selectively:\n\x09 * - PIE\n\x09 * - SIE\n\x09 * - Editor's active\n\x09 * - Game's primary\n\x09 * If it is none of the above, it emits no opinion about activating the Scene View Extension.\n\x09 */" },
		{ "CPP_Default_bEditorActive", "false" },
		{ "CPP_Default_bGamePrimary", "false" },
		{ "CPP_Default_bPIE", "false" },
		{ "CPP_Default_bSIE", "false" },
		{ "ModuleRelativePath", "Public/VPRenderingBlueprintLibrary.h" },
		{ "ToolTip", "Returns a functor to activate a scene view extension when the FViewport in the SceneViewExtensionContext is selectively:\n- PIE\n- SIE\n- Editor's active\n- Game's primary\nIf it is none of the above, it emits no opinion about activating the Scene View Extension." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPRenderingBlueprintLibrary, nullptr, "GenerateSceneViewExtensionIsActiveFunctorForViewportType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::VPRenderingBlueprintLibrary_eventGenerateSceneViewExtensionIsActiveFunctorForViewportType_Parms), Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPRenderingBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPRenderingBlueprintLibrary_NoRegister()
	{
		return UVPRenderingBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPRenderingBlueprintLibrary_GenerateSceneViewExtensionIsActiveFunctorForViewportType, "GenerateSceneViewExtensionIsActiveFunctorForViewportType" }, // 411781227
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint function library supporting Virtual Production rendering use cases.\n */" },
		{ "IncludePath", "VPRenderingBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VPRenderingBlueprintLibrary.h" },
		{ "ToolTip", "Blueprint function library supporting Virtual Production rendering use cases." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPRenderingBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::ClassParams = {
		&UVPRenderingBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPRenderingBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPRenderingBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPRenderingBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPRenderingBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPRenderingBlueprintLibrary.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPRenderingBlueprintLibrary>()
	{
		return UVPRenderingBlueprintLibrary::StaticClass();
	}
	UVPRenderingBlueprintLibrary::UVPRenderingBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPRenderingBlueprintLibrary);
	UVPRenderingBlueprintLibrary::~UVPRenderingBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRenderingBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRenderingBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPRenderingBlueprintLibrary, UVPRenderingBlueprintLibrary::StaticClass, TEXT("UVPRenderingBlueprintLibrary"), &Z_Registration_Info_UClass_UVPRenderingBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPRenderingBlueprintLibrary), 1414244655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRenderingBlueprintLibrary_h_794294153(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRenderingBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRenderingBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
