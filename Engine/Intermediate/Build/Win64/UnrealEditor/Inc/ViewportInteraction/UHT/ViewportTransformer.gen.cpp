// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportTransformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportTransformer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UViewportTransformer::execOnStopDragging)
	{
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopDragging(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportTransformer::execOnStartDragging)
	{
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartDragging(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportTransformer::execShouldCenterTransformGizmoPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldCenterTransformGizmoPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportTransformer::execCanAlignToActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAlignToActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportTransformer::execShutdown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shutdown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportTransformer::execInit)
	{
		P_GET_OBJECT(UViewportWorldInteraction,Z_Param_InitViewportWorldInteraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init(Z_Param_InitViewportWorldInteraction);
		P_NATIVE_END;
	}
	void UViewportTransformer::StaticRegisterNativesUViewportTransformer()
	{
		UClass* Class = UViewportTransformer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanAlignToActors", &UViewportTransformer::execCanAlignToActors },
			{ "Init", &UViewportTransformer::execInit },
			{ "OnStartDragging", &UViewportTransformer::execOnStartDragging },
			{ "OnStopDragging", &UViewportTransformer::execOnStopDragging },
			{ "ShouldCenterTransformGizmoPivot", &UViewportTransformer::execShouldCenterTransformGizmoPivot },
			{ "Shutdown", &UViewportTransformer::execShutdown },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics
	{
		struct ViewportTransformer_eventCanAlignToActors_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportTransformer_eventCanAlignToActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportTransformer_eventCanAlignToActors_Parms), &Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return If this transformer can be used to align its transformable to actors in the scene */" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "@return If this transformer can be used to align its transformable to actors in the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "CanAlignToActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::ViewportTransformer_eventCanAlignToActors_Parms), Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_CanAlignToActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_CanAlignToActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_Init_Statics
	{
		struct ViewportTransformer_eventInit_Parms
		{
			UViewportWorldInteraction* InitViewportWorldInteraction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InitViewportWorldInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_Init_Statics::NewProp_InitViewportWorldInteraction = { "InitViewportWorldInteraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportTransformer_eventInit_Parms, InitViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_Init_Statics::NewProp_InitViewportWorldInteraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "Init", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportTransformer_Init_Statics::ViewportTransformer_eventInit_Parms), Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Init_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics
	{
		struct ViewportTransformer_eventOnStartDragging_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportTransformer_eventOnStartDragging_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When starting to drag */" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "When starting to drag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "OnStartDragging", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::ViewportTransformer_eventOnStartDragging_Parms), Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_OnStartDragging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_OnStartDragging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics
	{
		struct ViewportTransformer_eventOnStopDragging_Parms
		{
			UViewportInteractor* Interactor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportTransformer_eventOnStopDragging_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When ending drag */" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "When ending drag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "OnStopDragging", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::ViewportTransformer_eventOnStopDragging_Parms), Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_OnStopDragging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_OnStopDragging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics
	{
		struct ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms), &Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return True if the transform gizmo should be aligned to the center of the bounds of all selected objects with more than one is selected.  Otherwise it will be at the pivot of the last transformable, similar to legacl editor actor selection */" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "@return True if the transform gizmo should be aligned to the center of the bounds of all selected objects with more than one is selected.  Otherwise it will be at the pivot of the last transformable, similar to legacl editor actor selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "ShouldCenterTransformGizmoPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::ViewportTransformer_eventShouldCenterTransformGizmoPivot_Parms), Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportTransformer, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportTransformer_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportTransformer_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportTransformer);
	UClass* Z_Construct_UClass_UViewportTransformer_NoRegister()
	{
		return UViewportTransformer::StaticClass();
	}
	struct Z_Construct_UClass_UViewportTransformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportWorldInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportWorldInteraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportTransformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportTransformer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportTransformer_CanAlignToActors, "CanAlignToActors" }, // 562679454
		{ &Z_Construct_UFunction_UViewportTransformer_Init, "Init" }, // 77053934
		{ &Z_Construct_UFunction_UViewportTransformer_OnStartDragging, "OnStartDragging" }, // 3822827512
		{ &Z_Construct_UFunction_UViewportTransformer_OnStopDragging, "OnStopDragging" }, // 3694447890
		{ &Z_Construct_UFunction_UViewportTransformer_ShouldCenterTransformGizmoPivot, "ShouldCenterTransformGizmoPivot" }, // 3040753020
		{ &Z_Construct_UFunction_UViewportTransformer_Shutdown, "Shutdown" }, // 1906144619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewportTransformer.h" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData[] = {
		{ "Comment", "/** The viewport world interaction object we're registered with */" },
		{ "ModuleRelativePath", "Public/ViewportTransformer.h" },
		{ "ToolTip", "The viewport world interaction object we're registered with" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction = { "ViewportWorldInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportTransformer, ViewportWorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportTransformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportTransformer_Statics::NewProp_ViewportWorldInteraction,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportTransformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportTransformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportTransformer_Statics::ClassParams = {
		&UViewportTransformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportTransformer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportTransformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportTransformer()
	{
		if (!Z_Registration_Info_UClass_UViewportTransformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportTransformer.OuterSingleton, Z_Construct_UClass_UViewportTransformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportTransformer.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportTransformer>()
	{
		return UViewportTransformer::StaticClass();
	}
	UViewportTransformer::UViewportTransformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportTransformer);
	UViewportTransformer::~UViewportTransformer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportTransformer, UViewportTransformer::StaticClass, TEXT("UViewportTransformer"), &Z_Registration_Info_UClass_UViewportTransformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportTransformer), 2591848580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_4166746368(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportTransformer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
