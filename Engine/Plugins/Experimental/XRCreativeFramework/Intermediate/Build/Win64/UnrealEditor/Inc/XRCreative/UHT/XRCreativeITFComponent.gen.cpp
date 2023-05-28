// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeITFComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeITFComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolsContext_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFComponent();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFComponent_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeITFRenderComponent_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativePointerComponent_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSelectionInteraction_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRCreativeITFComponent::execSetCurrentCoordinateSystem)
	{
		P_GET_ENUM(EToolContextCoordinateSystem,Z_Param_CoordSystem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentCoordinateSystem(EToolContextCoordinateSystem(Z_Param_CoordSystem));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execGetCurrentCoordinateSystem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EToolContextCoordinateSystem*)Z_Param__Result=P_THIS->GetCurrentCoordinateSystem();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execHaveActiveTool)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveActiveTool();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execGetSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTypedElementSelectionSet**)Z_Param__Result=P_THIS->GetSelectionSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execLeftMouseReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftMouseReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execLeftMousePressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LeftMousePressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execRedo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Redo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execUndo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Undo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execCanRedo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRedo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXRCreativeITFComponent::execCanUndo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUndo();
		P_NATIVE_END;
	}
	void UXRCreativeITFComponent::StaticRegisterNativesUXRCreativeITFComponent()
	{
		UClass* Class = UXRCreativeITFComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanRedo", &UXRCreativeITFComponent::execCanRedo },
			{ "CanUndo", &UXRCreativeITFComponent::execCanUndo },
			{ "GetCurrentCoordinateSystem", &UXRCreativeITFComponent::execGetCurrentCoordinateSystem },
			{ "GetSelectionSet", &UXRCreativeITFComponent::execGetSelectionSet },
			{ "HaveActiveTool", &UXRCreativeITFComponent::execHaveActiveTool },
			{ "LeftMousePressed", &UXRCreativeITFComponent::execLeftMousePressed },
			{ "LeftMouseReleased", &UXRCreativeITFComponent::execLeftMouseReleased },
			{ "Redo", &UXRCreativeITFComponent::execRedo },
			{ "SetCurrentCoordinateSystem", &UXRCreativeITFComponent::execSetCurrentCoordinateSystem },
			{ "Undo", &UXRCreativeITFComponent::execUndo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics
	{
		struct XRCreativeITFComponent_eventCanRedo_Parms
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
	void Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRCreativeITFComponent_eventCanRedo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeITFComponent_eventCanRedo_Parms), &Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "CanRedo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::XRCreativeITFComponent_eventCanRedo_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics
	{
		struct XRCreativeITFComponent_eventCanUndo_Parms
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
	void Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRCreativeITFComponent_eventCanUndo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeITFComponent_eventCanUndo_Parms), &Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "CanUndo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::XRCreativeITFComponent_eventCanUndo_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics
	{
		struct XRCreativeITFComponent_eventGetCurrentCoordinateSystem_Parms
		{
			EToolContextCoordinateSystem ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeITFComponent_eventGetCurrentCoordinateSystem_Parms, ReturnValue), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(nullptr, 0) }; // 1958283934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "GetCurrentCoordinateSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::XRCreativeITFComponent_eventGetCurrentCoordinateSystem_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics
	{
		struct XRCreativeITFComponent_eventGetSelectionSet_Parms
		{
			UTypedElementSelectionSet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeITFComponent_eventGetSelectionSet_Parms, ReturnValue), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "GetSelectionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::XRCreativeITFComponent_eventGetSelectionSet_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics
	{
		struct XRCreativeITFComponent_eventHaveActiveTool_Parms
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
	void Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XRCreativeITFComponent_eventHaveActiveTool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(XRCreativeITFComponent_eventHaveActiveTool_Parms), &Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "HaveActiveTool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::XRCreativeITFComponent_eventHaveActiveTool_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "LeftMousePressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "LeftMouseReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "Redo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_Redo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_Redo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics
	{
		struct XRCreativeITFComponent_eventSetCurrentCoordinateSystem_Parms
		{
			EToolContextCoordinateSystem CoordSystem;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CoordSystem_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CoordSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::NewProp_CoordSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::NewProp_CoordSystem = { "CoordSystem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeITFComponent_eventSetCurrentCoordinateSystem_Parms, CoordSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(nullptr, 0) }; // 1958283934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::NewProp_CoordSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::NewProp_CoordSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "SetCurrentCoordinateSystem", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::XRCreativeITFComponent_eventSetCurrentCoordinateSystem_Parms), Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative|Tools" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeITFComponent, nullptr, "Undo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeITFComponent_Undo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeITFComponent_Undo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeITFComponent);
	UClass* Z_Construct_UClass_UXRCreativeITFComponent_NoRegister()
	{
		return UXRCreativeITFComponent::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeITFComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullTRSGizmoActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FullTRSGizmoActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolsContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PDIRenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PDIRenderComponent;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentCoordinateSystem_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCoordinateSystem_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentCoordinateSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeITFComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeITFComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_CanRedo, "CanRedo" }, // 262461610
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_CanUndo, "CanUndo" }, // 1524724192
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_GetCurrentCoordinateSystem, "GetCurrentCoordinateSystem" }, // 1836788554
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_GetSelectionSet, "GetSelectionSet" }, // 1302547578
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_HaveActiveTool, "HaveActiveTool" }, // 609531187
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_LeftMousePressed, "LeftMousePressed" }, // 3903176855
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_LeftMouseReleased, "LeftMouseReleased" }, // 4281697793
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_Redo, "Redo" }, // 3697522700
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_SetCurrentCoordinateSystem, "SetCurrentCoordinateSystem" }, // 1806302644
		{ &Z_Construct_UFunction_UXRCreativeITFComponent_Undo, "Undo" }, // 2993120804
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeITFComponent.h" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_FullTRSGizmoActorClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_FullTRSGizmoActorClass = { "FullTRSGizmoActorClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, FullTRSGizmoActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_FullTRSGizmoActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_FullTRSGizmoActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PointerComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PointerComponent = { "PointerComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, PointerComponent), Z_Construct_UClass_UXRCreativePointerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PointerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PointerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_ToolsContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_ToolsContext = { "ToolsContext", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, ToolsContext), Z_Construct_UClass_UInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_ToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_ToolsContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionSet = { "SelectionSet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, SelectionSet), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionInteraction = { "SelectionInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, SelectionInteraction), Z_Construct_UClass_UXRCreativeSelectionInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_TransformInteraction_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_TransformInteraction = { "TransformInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, TransformInteraction), Z_Construct_UClass_UXRCreativeTransformInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_TransformInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_TransformInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PDIRenderComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PDIRenderComponent = { "PDIRenderComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, PDIRenderComponent), Z_Construct_UClass_UXRCreativeITFRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PDIRenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PDIRenderComponent_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/XRCreativeITFComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem = { "CurrentCoordinateSystem", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeITFComponent, CurrentCoordinateSystem), Z_Construct_UEnum_InteractiveToolsFramework_EToolContextCoordinateSystem, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem_MetaData)) }; // 1958283934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeITFComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_FullTRSGizmoActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PointerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_ToolsContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_SelectionInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_TransformInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_PDIRenderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeITFComponent_Statics::NewProp_CurrentCoordinateSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeITFComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeITFComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeITFComponent_Statics::ClassParams = {
		&UXRCreativeITFComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRCreativeITFComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeITFComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeITFComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeITFComponent()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeITFComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeITFComponent.OuterSingleton, Z_Construct_UClass_UXRCreativeITFComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeITFComponent.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeITFComponent>()
	{
		return UXRCreativeITFComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeITFComponent);
	UXRCreativeITFComponent::~UXRCreativeITFComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeITFComponent, UXRCreativeITFComponent::StaticClass, TEXT("UXRCreativeITFComponent"), &Z_Registration_Info_UClass_UXRCreativeITFComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeITFComponent), 352585166U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_2577911251(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeITFComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
