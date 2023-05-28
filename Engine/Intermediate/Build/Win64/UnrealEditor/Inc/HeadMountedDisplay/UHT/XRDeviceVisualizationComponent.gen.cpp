// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRDeviceVisualizationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRDeviceVisualizationComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRDeviceVisualizationComponent();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	DEFINE_FUNCTION(UXRDeviceVisualizationComponent::execSetIsRenderingActive)
	{
		P_GET_UBOOL(Z_Param_bRenderingIsActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsRenderingActive(Z_Param_bRenderingIsActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRDeviceVisualizationComponent::execSetCustomDisplayMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_NewDisplayMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomDisplayMesh(Z_Param_NewDisplayMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRDeviceVisualizationComponent::execSetDisplayModelSource)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewDisplayModelSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayModelSource(Z_Param_NewDisplayModelSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRDeviceVisualizationComponent::execSetIsVisualizationActive)
	{
		P_GET_UBOOL(Z_Param_bNewVisualizationState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsVisualizationActive(Z_Param_bNewVisualizationState);
		P_NATIVE_END;
	}
	void UXRDeviceVisualizationComponent::StaticRegisterNativesUXRDeviceVisualizationComponent()
	{
		UClass* Class = UXRDeviceVisualizationComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCustomDisplayMesh", &UXRDeviceVisualizationComponent::execSetCustomDisplayMesh },
			{ "SetDisplayModelSource", &UXRDeviceVisualizationComponent::execSetDisplayModelSource },
			{ "SetIsRenderingActive", &UXRDeviceVisualizationComponent::execSetIsRenderingActive },
			{ "SetIsVisualizationActive", &UXRDeviceVisualizationComponent::execSetIsVisualizationActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics
	{
		struct XRDeviceVisualizationComponent_eventSetCustomDisplayMesh_Parms
		{
			UStaticMesh* NewDisplayMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDisplayMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh = { "NewDisplayMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRDeviceVisualizationComponent_eventSetCustomDisplayMesh_Parms, NewDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::NewProp_NewDisplayMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRDeviceVisualizationComponent, nullptr, "SetCustomDisplayMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::XRDeviceVisualizationComponent_eventSetCustomDisplayMesh_Parms), Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics
	{
		struct XRDeviceVisualizationComponent_eventSetDisplayModelSource_Parms
		{
			FName NewDisplayModelSource;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewDisplayModelSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewDisplayModelSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource = { "NewDisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRDeviceVisualizationComponent_eventSetDisplayModelSource_Parms, NewDisplayModelSource), METADATA_PARAMS(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::NewProp_NewDisplayModelSource,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRDeviceVisualizationComponent, nullptr, "SetDisplayModelSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::XRDeviceVisualizationComponent_eventSetDisplayModelSource_Parms), Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics
	{
		struct XRDeviceVisualizationComponent_eventSetIsRenderingActive_Parms
		{
			bool bRenderingIsActive;
		};
		static void NewProp_bRenderingIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderingIsActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::NewProp_bRenderingIsActive_SetBit(void* Obj)
	{
		((XRDeviceVisualizationComponent_eventSetIsRenderingActive_Parms*)Obj)->bRenderingIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::NewProp_bRenderingIsActive = { "bRenderingIsActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRDeviceVisualizationComponent_eventSetIsRenderingActive_Parms), &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::NewProp_bRenderingIsActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::NewProp_bRenderingIsActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "MotionController" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRDeviceVisualizationComponent, nullptr, "SetIsRenderingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::XRDeviceVisualizationComponent_eventSetIsRenderingActive_Parms), Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics
	{
		struct XRDeviceVisualizationComponent_eventSetIsVisualizationActive_Parms
		{
			bool bNewVisualizationState;
		};
		static void NewProp_bNewVisualizationState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisualizationState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::NewProp_bNewVisualizationState_SetBit(void* Obj)
	{
		((XRDeviceVisualizationComponent_eventSetIsVisualizationActive_Parms*)Obj)->bNewVisualizationState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::NewProp_bNewVisualizationState = { "bNewVisualizationState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRDeviceVisualizationComponent_eventSetIsVisualizationActive_Parms), &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::NewProp_bNewVisualizationState_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::NewProp_bNewVisualizationState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRDeviceVisualizationComponent, nullptr, "SetIsVisualizationActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::XRDeviceVisualizationComponent_eventSetIsVisualizationActive_Parms), Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRDeviceVisualizationComponent);
	UClass* Z_Construct_UClass_UXRDeviceVisualizationComponent_NoRegister()
	{
		return UXRDeviceVisualizationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisualizationActive_MetaData[];
#endif
		static void NewProp_bIsVisualizationActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisualizationActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayModelSource_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisplayModelSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomDisplayMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomDisplayMesh;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayMeshMaterialOverrides_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayMeshMaterialOverrides_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DisplayMeshMaterialOverrides;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetCustomDisplayMesh, "SetCustomDisplayMesh" }, // 424428512
		{ &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetDisplayModelSource, "SetDisplayModelSource" }, // 949064551
		{ &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsRenderingActive, "SetIsRenderingActive" }, // 1241990457
		{ &Z_Construct_UFunction_UXRDeviceVisualizationComponent_SetIsVisualizationActive, "SetIsVisualizationActive" }, // 2337555881
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "MotionController" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "XRDeviceVisualizationComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_MetaData[] = {
		{ "BlueprintSetter", "SetIsVisualizationActive" },
		{ "Category", "Visualization" },
		{ "Comment", "/** Whether the visualization offered by this component is being used. */" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
		{ "ToolTip", "Whether the visualization offered by this component is being used." },
	};
#endif
	void Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_SetBit(void* Obj)
	{
		((UXRDeviceVisualizationComponent*)Obj)->bIsVisualizationActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive = { "bIsVisualizationActive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UXRDeviceVisualizationComponent), &Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayModelSource_MetaData[] = {
		{ "BlueprintSetter", "SetDisplayModelSource" },
		{ "Category", "Visualization" },
		{ "Comment", "/** Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own. */" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
		{ "ToolTip", "Determines the source of the desired model. By default, the active XR system(s) will be queried and (if available) will provide a model for the associated device. NOTE: this may fail if there's no default model; use 'Custom' to specify your own." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayModelSource = { "DisplayModelSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRDeviceVisualizationComponent, DisplayModelSource), METADATA_PARAMS(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayModelSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayModelSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_CustomDisplayMesh_MetaData[] = {
		{ "BlueprintSetter", "SetCustomDisplayMesh" },
		{ "Category", "Visualization" },
		{ "Comment", "/** A mesh override that'll be displayed attached to this MotionController. */" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
		{ "ToolTip", "A mesh override that'll be displayed attached to this MotionController." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_CustomDisplayMesh = { "CustomDisplayMesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRDeviceVisualizationComponent, CustomDisplayMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_CustomDisplayMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_CustomDisplayMesh_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData[] = {
		{ "Category", "Visualization" },
		{ "Comment", "/** Material overrides for the specified display mesh. */" },
		{ "ModuleRelativePath", "Public/XRDeviceVisualizationComponent.h" },
		{ "ToolTip", "Material overrides for the specified display mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides = { "DisplayMeshMaterialOverrides", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRDeviceVisualizationComponent, DisplayMeshMaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_bIsVisualizationActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayModelSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_CustomDisplayMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::NewProp_DisplayMeshMaterialOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRDeviceVisualizationComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::ClassParams = {
		&UXRDeviceVisualizationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRDeviceVisualizationComponent()
	{
		if (!Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton, Z_Construct_UClass_UXRDeviceVisualizationComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRDeviceVisualizationComponent.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UXRDeviceVisualizationComponent>()
	{
		return UXRDeviceVisualizationComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRDeviceVisualizationComponent);
	UXRDeviceVisualizationComponent::~UXRDeviceVisualizationComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRDeviceVisualizationComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRDeviceVisualizationComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRDeviceVisualizationComponent, UXRDeviceVisualizationComponent::StaticClass, TEXT("UXRDeviceVisualizationComponent"), &Z_Registration_Info_UClass_UXRDeviceVisualizationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRDeviceVisualizationComponent), 3064224122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRDeviceVisualizationComponent_h_2268934309(TEXT("/Script/HeadMountedDisplay"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRDeviceVisualizationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRDeviceVisualizationComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
