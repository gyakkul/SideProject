// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig.h"
#include "PropertyPathHelpers.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Rigs/RigHierarchyElements.h"
#include "Rigs/RigInfluenceMap.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRig() {}
// Cross Module References
	ANIMATIONCORE_API UClass* Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRigShapeLibrary_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_URigHierarchy_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UTransformableControlHandle_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigExecutionType();
	CONTROLRIG_API UFunction* Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigControlElementCustomization();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigHierarchySettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
	RIGVM_API UClass* Z_Construct_UClass_URigVMHost();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics
	{
		struct ControlRig_eventOnControlSelectedBP_Parms
		{
			UControlRig* Rig;
			FRigControlElement Control;
			bool bSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Rig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Control;
		static void NewProp_bSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Rig = { "Rig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventOnControlSelectedBP_Parms, Rig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventOnControlSelectedBP_Parms, Control), Z_Construct_UScriptStruct_FRigControlElement, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control_MetaData)) }; // 682711063
	void Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected_SetBit(void* Obj)
	{
		((ControlRig_eventOnControlSelectedBP_Parms*)Obj)->bSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected = { "bSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRig_eventOnControlSelectedBP_Parms), &Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Rig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::NewProp_bSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// To support Blueprints/scripting, we need a different delegate type (a 'Dynamic' delegate) which supports looser style UFunction binding (using names).\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "To support Blueprints/scripting, we need a different delegate type (a 'Dynamic' delegate) which supports looser style UFunction binding (using names)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "OnControlSelectedBP__DelegateSignature", "ControlRig", "OnControlSelected_BP", sizeof(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::ControlRig_eventOnControlSelectedBP_Parms), Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UControlRig::FOnControlSelectedBP_DelegateWrapper(const FMulticastScriptDelegate& OnControlSelectedBP, UControlRig* Rig, FRigControlElement const& Control, bool bSelected)
{
	struct ControlRig_eventOnControlSelectedBP_Parms
	{
		UControlRig* Rig;
		FRigControlElement Control;
		bool bSelected;
	};
	ControlRig_eventOnControlSelectedBP_Parms Parms;
	Parms.Rig=Rig;
	Parms.Control=Control;
	Parms.bSelected=bSelected ? true : false;
	OnControlSelectedBP.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UControlRig::execSetInteractionRigClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InInteractionRigClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRigClass(Z_Param_InInteractionRigClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetInteractionRigClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UControlRig> *)Z_Param__Result=P_THIS->GetInteractionRigClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSetInteractionRig)
	{
		P_GET_OBJECT(UControlRig,Z_Param_InInteractionRig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRig(Z_Param_InInteractionRig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetInteractionRig)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRig**)Z_Param__Result=P_THIS->GetInteractionRig();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execIsControlSelected)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControlSelected(Z_Param_Out_InControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execCurrentControlSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->CurrentControlSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execClearControlSelection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearControlSelection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execSelectControl)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InControlName);
		P_GET_UBOOL(Z_Param_bSelect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectControl(Z_Param_Out_InControlName,Z_Param_bSelect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execRequestConstruction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestConstruction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetHierarchy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URigHierarchy**)Z_Param__Result=P_THIS->GetHierarchy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execGetHostingActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetHostingActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execCreateTransformableControlHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ControlName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransformableControlHandle**)Z_Param__Result=P_THIS->CreateTransformableControlHandle(Z_Param_Outer,Z_Param_Out_ControlName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRig::execFindControlRigs)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_OBJECT(UClass,Z_Param_OptionalClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UControlRig*>*)Z_Param__Result=UControlRig::FindControlRigs(Z_Param_Outer,Z_Param_OptionalClass);
		P_NATIVE_END;
	}
	void UControlRig::StaticRegisterNativesUControlRig()
	{
		UClass* Class = UControlRig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearControlSelection", &UControlRig::execClearControlSelection },
			{ "CreateTransformableControlHandle", &UControlRig::execCreateTransformableControlHandle },
			{ "CurrentControlSelection", &UControlRig::execCurrentControlSelection },
			{ "FindControlRigs", &UControlRig::execFindControlRigs },
			{ "GetHierarchy", &UControlRig::execGetHierarchy },
			{ "GetHostingActor", &UControlRig::execGetHostingActor },
			{ "GetInteractionRig", &UControlRig::execGetInteractionRig },
			{ "GetInteractionRigClass", &UControlRig::execGetInteractionRigClass },
			{ "IsControlSelected", &UControlRig::execIsControlSelected },
			{ "RequestConstruction", &UControlRig::execRequestConstruction },
			{ "SelectControl", &UControlRig::execSelectControl },
			{ "SetInteractionRig", &UControlRig::execSetInteractionRig },
			{ "SetInteractionRigClass", &UControlRig::execSetInteractionRigClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics
	{
		struct ControlRig_eventClearControlSelection_Parms
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
	void Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventClearControlSelection_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRig_eventClearControlSelection_Parms), &Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "ClearControlSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::ControlRig_eventClearControlSelection_Parms), Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_ClearControlSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_ClearControlSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics
	{
		struct ControlRig_eventCreateTransformableControlHandle_Parms
		{
			UObject* Outer;
			FName ControlName;
			UTransformableControlHandle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventCreateTransformableControlHandle_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventCreateTransformableControlHandle_Parms, ControlName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventCreateTransformableControlHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableControlHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig | Constraints" },
		{ "Comment", "/** Creates a transformable control handle for the specified control to be used by the constraints system. Should use the UObject from \n\x09""ConstraintsScriptingLibrary::GetManager(UWorld* InWorld)*/" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Creates a transformable control handle for the specified control to be used by the constraints system. Should use the UObject from\n      ConstraintsScriptingLibrary::GetManager(UWorld* InWorld)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CreateTransformableControlHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::ControlRig_eventCreateTransformableControlHandle_Parms), Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics
	{
		struct ControlRig_eventCurrentControlSelection_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventCurrentControlSelection_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "CurrentControlSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::ControlRig_eventCurrentControlSelection_Parms), Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_CurrentControlSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_CurrentControlSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_FindControlRigs_Statics
	{
		struct ControlRig_eventFindControlRigs_Parms
		{
			UObject* Outer;
			TSubclassOf<UControlRig>  OptionalClass;
			TArray<UControlRig*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass = { "OptionalClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, OptionalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventFindControlRigs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_OptionalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlRig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "FindControlRigs", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::ControlRig_eventFindControlRigs_Parms), Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_FindControlRigs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_FindControlRigs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetHierarchy_Statics
	{
		struct ControlRig_eventGetHierarchy_Parms
		{
			URigHierarchy* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventGetHierarchy_Parms, ReturnValue), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetHierarchy", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::ControlRig_eventGetHierarchy_Parms), Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetHierarchy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetHierarchy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetHostingActor_Statics
	{
		struct ControlRig_eventGetHostingActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventGetHostingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Find the actor the rig is bound to, if any */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Find the actor the rig is bound to, if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetHostingActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::ControlRig_eventGetHostingActor_Parms), Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetHostingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetHostingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics
	{
		struct ControlRig_eventGetInteractionRig_Parms
		{
			UControlRig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventGetInteractionRig_Parms, ReturnValue), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::ControlRig_eventGetInteractionRig_Parms), Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics
	{
		struct ControlRig_eventGetInteractionRigClass_Parms
		{
			TSubclassOf<UControlRig>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventGetInteractionRigClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "GetInteractionRigClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::ControlRig_eventGetInteractionRigClass_Parms), Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_GetInteractionRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_GetInteractionRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_IsControlSelected_Statics
	{
		struct ControlRig_eventIsControlSelected_Parms
		{
			FName InControlName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventIsControlSelected_Parms, InControlName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName_MetaData)) };
	void Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlRig_eventIsControlSelected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRig_eventIsControlSelected_Parms), &Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "IsControlSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::ControlRig_eventIsControlSelected_Parms), Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_IsControlSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_IsControlSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_RequestConstruction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/** Requests to perform construction during the next execution */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Requests to perform construction during the next execution" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "RequestConstruction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_RequestConstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_RequestConstruction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SelectControl_Statics
	{
		struct ControlRig_eventSelectControl_Parms
		{
			FName InControlName;
			bool bSelect;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControlName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InControlName;
		static void NewProp_bSelect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName = { "InControlName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventSelectControl_Parms, InControlName), METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName_MetaData)) };
	void Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit(void* Obj)
	{
		((ControlRig_eventSelectControl_Parms*)Obj)->bSelect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect = { "bSelect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ControlRig_eventSelectControl_Parms), &Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_InControlName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SelectControl_Statics::NewProp_bSelect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "CPP_Default_bSelect", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SelectControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SelectControl_Statics::ControlRig_eventSelectControl_Parms), Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SelectControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SelectControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SelectControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics
	{
		struct ControlRig_eventSetInteractionRig_Parms
		{
			UControlRig* InInteractionRig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InInteractionRig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig = { "InInteractionRig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventSetInteractionRig_Parms, InInteractionRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::NewProp_InInteractionRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRig", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::ControlRig_eventSetInteractionRig_Parms), Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics
	{
		struct ControlRig_eventSetInteractionRigClass_Parms
		{
			TSubclassOf<UControlRig>  InInteractionRigClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InInteractionRigClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass = { "InInteractionRigClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRig_eventSetInteractionRigClass_Parms, InInteractionRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::NewProp_InInteractionRigClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRig, nullptr, "SetInteractionRigClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::ControlRig_eventSetInteractionRigClass_Parms), Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRig_SetInteractionRigClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRig_SetInteractionRigClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRig);
	UClass* Z_Construct_UClass_UControlRig_NoRegister()
	{
		return UControlRig::StaticClass();
	}
	struct Z_Construct_UClass_UControlRig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HierarchySettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HierarchySettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlCustomizations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlCustomizations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControlCustomizations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicHierarchy;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GizmoLibrary;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ShapeLibraries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeLibraries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeLibraries;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InputProperties;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputProperties_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputProperties;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSourceRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataSourceRegistry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Influences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Influences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractionRig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InteractionRigClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControlSelected_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControlSelected_BP;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bControlsVisible_MetaData[];
#endif
		static void NewProp_bControlsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bControlsVisible;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URigVMHost,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRig_ClearControlSelection, "ClearControlSelection" }, // 2625000559
		{ &Z_Construct_UFunction_UControlRig_CreateTransformableControlHandle, "CreateTransformableControlHandle" }, // 3561507157
		{ &Z_Construct_UFunction_UControlRig_CurrentControlSelection, "CurrentControlSelection" }, // 1207871395
		{ &Z_Construct_UFunction_UControlRig_FindControlRigs, "FindControlRigs" }, // 689593814
		{ &Z_Construct_UFunction_UControlRig_GetHierarchy, "GetHierarchy" }, // 454068341
		{ &Z_Construct_UFunction_UControlRig_GetHostingActor, "GetHostingActor" }, // 2799287898
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRig, "GetInteractionRig" }, // 4214634570
		{ &Z_Construct_UFunction_UControlRig_GetInteractionRigClass, "GetInteractionRigClass" }, // 2339821846
		{ &Z_Construct_UFunction_UControlRig_IsControlSelected, "IsControlSelected" }, // 1363182267
		{ &Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature, "OnControlSelectedBP__DelegateSignature" }, // 3644134893
		{ &Z_Construct_UFunction_UControlRig_RequestConstruction, "RequestConstruction" }, // 1308901780
		{ &Z_Construct_UFunction_UControlRig_SelectControl, "SelectControl" }, // 2570824415
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRig, "SetInteractionRig" }, // 2925770316
		{ &Z_Construct_UFunction_UControlRig_SetInteractionRigClass, "SetInteractionRigClass" }, // 3436028010
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Runs logic for mapping input data to transforms (the \"Rig\") */" },
		{ "IncludePath", "ControlRig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Runs logic for mapping input data to transforms (the \"Rig\")" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData[] = {
		{ "Comment", "// END UObject interface\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "END UObject interface" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, ExecutionType), Z_Construct_UEnum_ControlRig_ERigExecutionType, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_MetaData)) }; // 1781156182
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings = { "HierarchySettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, HierarchySettings), Z_Construct_UScriptStruct_FRigHierarchySettings, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings_MetaData)) }; // 460636539
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRigControlElementCustomization, METADATA_PARAMS(nullptr, 0) }; // 3630895427
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp = { "ControlCustomizations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations = { "ControlCustomizations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, ControlCustomizations), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_MetaData)) }; // 2461395651 3630895427
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy = { "DynamicHierarchy", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, DynamicHierarchy), Z_Construct_UClass_URigHierarchy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary = { "GizmoLibrary", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, GizmoLibrary_DEPRECATED), Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UControlRigShapeLibrary_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries = { "ShapeLibraries", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, ShapeLibraries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp = { "InputProperties", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 535586205
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp = { "InputProperties_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData[] = {
		{ "Comment", "// you either go Input or Output, currently if you put it in both place, Output will override\n" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "you either go Input or Output, currently if you put it in both place, Output will override" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties = { "InputProperties", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, InputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_MetaData)) }; // 535586205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp = { "OutputProperties", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FCachedPropertyPath, METADATA_PARAMS(nullptr, 0) }; // 535586205
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp = { "OutputProperties_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties = { "OutputProperties", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, OutputProperties_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_MetaData)) }; // 535586205
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData[] = {
		{ "Comment", "/** The registry to access data source */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "The registry to access data source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry = { "DataSourceRegistry", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, DataSourceRegistry), Z_Construct_UClass_UAnimationDataSourceRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_Influences = { "Influences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, Influences), Z_Construct_UScriptStruct_FRigInfluenceMapPerEvent, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_Influences_MetaData)) }; // 2658910230
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionRig" },
		{ "BlueprintSetter", "SetInteractionRig" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig = { "InteractionRig", nullptr, (EPropertyFlags)0x0044000000002004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, InteractionRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData[] = {
		{ "BlueprintGetter", "GetInteractionRigClass" },
		{ "BlueprintSetter", "SetInteractionRigClass" },
		{ "Category", "Interaction" },
		{ "DisplayName", "Interaction Rig" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass = { "InteractionRigClass", nullptr, (EPropertyFlags)0x0044000000002805, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, InteractionRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP_MetaData[] = {
		{ "Category", "ControlRig" },
		{ "DisplayName", "OnControlSelected" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP = { "OnControlSelected_BP", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRig, OnControlSelected_BP), Z_Construct_USparseDelegateFunction_UControlRig_OnControlSelectedBP__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP_MetaData)) }; // 3644134893
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_MetaData[] = {
		{ "Comment", "/** Whether controls are visible */" },
		{ "ModuleRelativePath", "Public/ControlRig.h" },
		{ "ToolTip", "Whether controls are visible" },
	};
#endif
	void Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_SetBit(void* Obj)
	{
		((UControlRig*)Obj)->bControlsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible = { "bControlsVisible", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UControlRig), &Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ExecutionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_HierarchySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ControlCustomizations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DynamicHierarchy,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_GizmoLibrary,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_ShapeLibraries,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InputProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OutputProperties,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_DataSourceRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_Influences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_InteractionRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_OnControlSelected_BP,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRig_Statics::NewProp_bControlsVisible,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UControlRig_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(UControlRig, INodeMappingProviderInterface), false },  // 3118747077
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRig_Statics::ClassParams = {
		&UControlRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRig_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRig()
	{
		if (!Z_Registration_Info_UClass_UControlRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRig.OuterSingleton, Z_Construct_UClass_UControlRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRig.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UControlRig>()
	{
		return UControlRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRig);
	UControlRig::~UControlRig() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UControlRig)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRig, UControlRig::StaticClass, TEXT("UControlRig"), &Z_Registration_Info_UClass_UControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRig), 932944610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_1676878337(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
