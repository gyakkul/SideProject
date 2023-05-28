// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponentController.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "LiveLinkRole.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponentController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature();
	LIVELINKCOMPONENTS_API UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics
	{
		struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "LiveLinkTickDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLiveLinkTickDelegate_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickDelegate, float DeltaTime)
{
	struct _Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms
	{
		float DeltaTime;
	};
	_Script_LiveLinkComponents_eventLiveLinkTickDelegate_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	LiveLinkTickDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLinkComponents, nullptr, "OnControllerMapUpdatedDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnControllerMapUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnControllerMapUpdatedDelegate)
{
	OnControllerMapUpdatedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ULiveLinkComponentController::execSetSubjectRepresentation)
	{
		P_GET_STRUCT(FLiveLinkSubjectRepresentation,Z_Param_InSubjectRepresentation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubjectRepresentation(Z_Param_InSubjectRepresentation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkComponentController::execGetSubjectRepresentation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLiveLinkSubjectRepresentation*)Z_Param__Result=P_THIS->GetSubjectRepresentation();
		P_NATIVE_END;
	}
	void ULiveLinkComponentController::StaticRegisterNativesULiveLinkComponentController()
	{
		UClass* Class = ULiveLinkComponentController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSubjectRepresentation", &ULiveLinkComponentController::execGetSubjectRepresentation },
			{ "SetSubjectRepresentation", &ULiveLinkComponentController::execSetSubjectRepresentation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics
	{
		struct LiveLinkComponentController_eventGetSubjectRepresentation_Parms
		{
			FLiveLinkSubjectRepresentation ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponentController_eventGetSubjectRepresentation_Parms, ReturnValue), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(nullptr, 0) }; // 4150041114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/** Return Representation of Subject that is used in the controller */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Return Representation of Subject that is used in the controller" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "GetSubjectRepresentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::LiveLinkComponentController_eventGetSubjectRepresentation_Parms), Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics
	{
		struct LiveLinkComponentController_eventSetSubjectRepresentation_Parms
		{
			FLiveLinkSubjectRepresentation InSubjectRepresentation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSubjectRepresentation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::NewProp_InSubjectRepresentation = { "InSubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponentController_eventSetSubjectRepresentation_Parms, InSubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(nullptr, 0) }; // 4150041114
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::NewProp_InSubjectRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set Representation of Subject that is used in the controller and update the controller map */" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "Set Representation of Subject that is used in the controller and update the controller map" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponentController, nullptr, "SetSubjectRepresentation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::LiveLinkComponentController_eventSetSubjectRepresentation_Parms), Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkComponentController);
	UClass* Z_Construct_UClass_ULiveLinkComponentController_NoRegister()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponentController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectRepresentation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectRepresentation;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_ValueProp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControllerMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControllerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControllerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ControllerMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInEditor_MetaData[];
#endif
		static void NewProp_bUpdateInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnControllerMapUpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnControllerMapUpdatedDelegate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData[];
#endif
		static void NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableEvaluateLiveLinkWhenSpawnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateLiveLink_MetaData[];
#endif
		static void NewProp_bEvaluateLiveLink_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateLiveLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateInPreviewEditor_MetaData[];
#endif
		static void NewProp_bUpdateInPreviewEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateInPreviewEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponentController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkComponentController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkComponentController_GetSubjectRepresentation, "GetSubjectRepresentation" }, // 1159384647
		{ &Z_Construct_UFunction_ULiveLinkComponentController_SetSubjectRepresentation, "SetSubjectRepresentation" }, // 1062137128
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "DisplayName", "LiveLink Controller" },
		{ "IncludePath", "LiveLinkComponentController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData[] = {
		{ "BlueprintGetter", "GetSubjectRepresentation" },
		{ "BlueprintSetter", "SetSubjectRepresentation" },
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation = { "SubjectRepresentation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, SubjectRepresentation), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation_MetaData)) }; // 4150041114
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0016000822080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, Controller_DEPRECATED), Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp = { "ControllerMap", nullptr, (EPropertyFlags)0x0006000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULiveLinkControllerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp = { "ControllerMap_Key", nullptr, (EPropertyFlags)0x0006000000080009, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Instanced controllers used to control the desired role */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Instanced controllers used to control the desired role" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap = { "ControllerMap", nullptr, (EPropertyFlags)0x001400820200001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, ControllerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bUpdateInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor = { "bUpdateInEditor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLinkComponents_LiveLinkTickDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated_MetaData)) }; // 2241465526
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time the controller map is updated\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "This Event is triggered any time the controller map is updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate = { "OnControllerMapUpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, OnControllerMapUpdatedDelegate), Z_Construct_UDelegateFunction_LiveLinkComponents_OnControllerMapUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate_MetaData)) }; // 2347939914
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponentController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl_MetaData)) }; // 1758507179
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If true, will not evaluate LiveLink if the attached actor is a spawnable in Sequencer" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bDisableEvaluateLiveLinkWhenSpawnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable = { "bDisableEvaluateLiveLinkWhenSpawnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If false, will not evaluate live link, effectively pausing.\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If false, will not evaluate live link, effectively pausing." },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bEvaluateLiveLink = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink = { "bEvaluateLiveLink", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// If true, will tick when the world is a preview (i.e Blueprint editors)\n" },
		{ "EditCondition", "bUpdateInEditor" },
		{ "ModuleRelativePath", "Public/LiveLinkComponentController.h" },
		{ "ToolTip", "If true, will tick when the world is a preview (i.e Blueprint editors)" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_SetBit(void* Obj)
	{
		((ULiveLinkComponentController*)Obj)->bUpdateInPreviewEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor = { "bUpdateInPreviewEditor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkComponentController), &Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_SubjectRepresentation,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_Controller,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ControllerMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnLiveLinkUpdated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_OnControllerMapUpdatedDelegate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_ComponentToControl,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bDisableEvaluateLiveLinkWhenSpawnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bEvaluateLiveLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponentController_Statics::NewProp_bUpdateInPreviewEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponentController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponentController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams = {
		&ULiveLinkComponentController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponentController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponentController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton, Z_Construct_UClass_ULiveLinkComponentController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkComponentController.OuterSingleton;
	}
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkComponentController>()
	{
		return ULiveLinkComponentController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponentController);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkComponentController)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkComponentController, ULiveLinkComponentController::StaticClass, TEXT("ULiveLinkComponentController"), &Z_Registration_Info_UClass_ULiveLinkComponentController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkComponentController), 4048819845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_1130003654(TEXT("/Script/LiveLinkComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkComponentController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
