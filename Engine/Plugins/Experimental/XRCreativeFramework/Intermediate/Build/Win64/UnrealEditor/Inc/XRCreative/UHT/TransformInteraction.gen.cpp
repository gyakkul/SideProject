// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ITF/TransformInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransformInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmo_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UTransformProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTransformInteraction();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRCreativeTransformInteraction::execForceUpdateGizmoState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceUpdateGizmoState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeTransformInteraction::execSetEnableNonUniformScaling)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableNonUniformScaling(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeTransformInteraction::execSetEnableScaling)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableScaling(Z_Param_bEnable);
		P_NATIVE_END;
	}
	void UXRCreativeTransformInteraction::StaticRegisterNativesUXRCreativeTransformInteraction()
	{
		UClass* Class = UXRCreativeTransformInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceUpdateGizmoState", &UXRCreativeTransformInteraction::execForceUpdateGizmoState },
			{ "SetEnableNonUniformScaling", &UXRCreativeTransformInteraction::execSetEnableNonUniformScaling },
			{ "SetEnableScaling", &UXRCreativeTransformInteraction::execSetEnableScaling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "Comment", "// Recreate Gizmo. Call when external state changes, like set of selected objects\n" },
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
		{ "ToolTip", "Recreate Gizmo. Call when external state changes, like set of selected objects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTransformInteraction, nullptr, "ForceUpdateGizmoState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics
	{
		struct XRCreativeTransformInteraction_eventSetEnableNonUniformScaling_Parms
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
	void Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((XRCreativeTransformInteraction_eventSetEnableNonUniformScaling_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeTransformInteraction_eventSetEnableNonUniformScaling_Parms), &Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTransformInteraction, nullptr, "SetEnableNonUniformScaling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::XRCreativeTransformInteraction_eventSetEnableNonUniformScaling_Parms), Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics
	{
		struct XRCreativeTransformInteraction_eventSetEnableScaling_Parms
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
	void Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((XRCreativeTransformInteraction_eventSetEnableScaling_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeTransformInteraction_eventSetEnableScaling_Parms), &Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeTransformInteraction, nullptr, "SetEnableScaling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::XRCreativeTransformInteraction_eventSetEnableScaling_Parms), Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeTransformInteraction);
	UClass* Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister()
	{
		return UXRCreativeTransformInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeTransformInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativeTransformInteraction_ForceUpdateGizmoState, "ForceUpdateGizmoState" }, // 1115825993
		{ &Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableNonUniformScaling, "SetEnableNonUniformScaling" }, // 2241526010
		{ &Z_Construct_UFunction_UXRCreativeTransformInteraction_SetEnableScaling, "SetEnableScaling" }, // 1840733691
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UXRCreativeTransformInteraction manages a 3D Translate/Rotate/Scale (TRS) Gizmo.\n *\n * Gizmo local/global frame is not controlled here, the Gizmo looks this information up itself\n * based on the EToolContextCoordinateSystem provided by the IToolsContextQueriesAPI implementation.\n * You can configure the Gizmo to ignore this, in UpdateGizmoTargets()\n *\n * Behavior of the TRS Gizmo (ie pivot position, etc) is controlled by a standard UTransformProxy.\n */" },
		{ "IncludePath", "ITF/TransformInteraction.h" },
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
		{ "ToolTip", "UXRCreativeTransformInteraction manages a 3D Translate/Rotate/Scale (TRS) Gizmo.\n\nGizmo local/global frame is not controlled here, the Gizmo looks this information up itself\nbased on the EToolContextCoordinateSystem provided by the IToolsContextQueriesAPI implementation.\nYou can configure the Gizmo to ignore this, in UpdateGizmoTargets()\n\nBehavior of the TRS Gizmo (ie pivot position, etc) is controlled by a standard UTransformProxy." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformProxy = { "TransformProxy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeTransformInteraction, TransformProxy), Z_Construct_UClass_UTransformProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformGizmo_MetaData[] = {
		{ "ModuleRelativePath", "Private/ITF/TransformInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformGizmo = { "TransformGizmo", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeTransformInteraction, TransformGizmo), Z_Construct_UClass_UCombinedTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformGizmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformGizmo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::NewProp_TransformGizmo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeTransformInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::ClassParams = {
		&UXRCreativeTransformInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeTransformInteraction()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeTransformInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeTransformInteraction.OuterSingleton, Z_Construct_UClass_UXRCreativeTransformInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeTransformInteraction.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeTransformInteraction>()
	{
		return UXRCreativeTransformInteraction::StaticClass();
	}
	UXRCreativeTransformInteraction::UXRCreativeTransformInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeTransformInteraction);
	UXRCreativeTransformInteraction::~UXRCreativeTransformInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeTransformInteraction, UXRCreativeTransformInteraction::StaticClass, TEXT("UXRCreativeTransformInteraction"), &Z_Registration_Info_UClass_UXRCreativeTransformInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeTransformInteraction), 3122803009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_417209711(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Private_ITF_TransformInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
