// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewportWorldInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewportWorldInteraction() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorWorldExtension();
	UPackage* Z_Construct_UPackage__Script_ViewportInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_ABaseTransformGizmo_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UMouseCursorInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractionAssetContainer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractor_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportTransformer_NoRegister();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VIEWPORTINTERACTION_API UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EViewportWorldInteractionType;
	static UEnum* EViewportWorldInteractionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldInteractionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EViewportWorldInteractionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType, (UObject*)Z_Construct_UPackage__Script_ViewportInteraction(), TEXT("EViewportWorldInteractionType"));
		}
		return Z_Registration_Info_UEnum_EViewportWorldInteractionType.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UEnum* StaticEnum<EViewportWorldInteractionType>()
	{
		return EViewportWorldInteractionType_StaticEnum();
	}
	struct Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enumerators[] = {
		{ "EViewportWorldInteractionType::VR", (int64)EViewportWorldInteractionType::VR },
		{ "EViewportWorldInteractionType::Legacy", (int64)EViewportWorldInteractionType::Legacy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enum_MetaDataParams[] = {
		{ "Legacy.Name", "EViewportWorldInteractionType::Legacy" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "VR.Name", "EViewportWorldInteractionType::VR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ViewportInteraction,
		nullptr,
		"EViewportWorldInteractionType",
		"EViewportWorldInteractionType",
		Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType()
	{
		if (!Z_Registration_Info_UEnum_EViewportWorldInteractionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EViewportWorldInteractionType.InnerSingleton, Z_Construct_UEnum_ViewportInteraction_EViewportWorldInteractionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EViewportWorldInteractionType.InnerSingleton;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetInteractors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UViewportInteractor*>*)Z_Param__Result=P_THIS->GetInteractors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetTransformGizmoActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ABaseTransformGizmo**)Z_Param__Result=P_THIS->GetTransformGizmoActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execSetWorldToMetersScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWorldToMetersScale);
		P_GET_UBOOL(Z_Param_bCompensateRoomWorldScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWorldToMetersScale(Z_Param_NewWorldToMetersScale,Z_Param_bCompensateRoomWorldScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetWorldScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execSetRoomTransformForNextFrame)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewRoomTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRoomTransformForNextFrame(Z_Param_Out_NewRoomTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execSetHeadTransform)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewHeadTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeadTransform(Z_Param_Out_NewHeadTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetRoomSpaceHeadTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomSpaceHeadTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execGetRoomTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRoomTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execAddActorToExcludeFromHitTests)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToExcludeFromHitTests);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddActorToExcludeFromHitTests(Z_Param_ActorToExcludeFromHitTests);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execRemoveInteractor)
	{
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInteractor(Z_Param_Interactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewportWorldInteraction::execAddInteractor)
	{
		P_GET_OBJECT(UViewportInteractor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteractor(Z_Param_Interactor);
		P_NATIVE_END;
	}
	void UViewportWorldInteraction::StaticRegisterNativesUViewportWorldInteraction()
	{
		UClass* Class = UViewportWorldInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorToExcludeFromHitTests", &UViewportWorldInteraction::execAddActorToExcludeFromHitTests },
			{ "AddInteractor", &UViewportWorldInteraction::execAddInteractor },
			{ "GetHeadTransform", &UViewportWorldInteraction::execGetHeadTransform },
			{ "GetInteractors", &UViewportWorldInteraction::execGetInteractors },
			{ "GetRoomSpaceHeadTransform", &UViewportWorldInteraction::execGetRoomSpaceHeadTransform },
			{ "GetRoomTransform", &UViewportWorldInteraction::execGetRoomTransform },
			{ "GetTransformGizmoActor", &UViewportWorldInteraction::execGetTransformGizmoActor },
			{ "GetWorldScaleFactor", &UViewportWorldInteraction::execGetWorldScaleFactor },
			{ "RemoveInteractor", &UViewportWorldInteraction::execRemoveInteractor },
			{ "SetHeadTransform", &UViewportWorldInteraction::execSetHeadTransform },
			{ "SetRoomTransformForNextFrame", &UViewportWorldInteraction::execSetRoomTransformForNextFrame },
			{ "SetWorldToMetersScale", &UViewportWorldInteraction::execSetWorldToMetersScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics
	{
		struct ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms
		{
			AActor* ActorToExcludeFromHitTests;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToExcludeFromHitTests;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::NewProp_ActorToExcludeFromHitTests = { "ActorToExcludeFromHitTests", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms, ActorToExcludeFromHitTests), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::NewProp_ActorToExcludeFromHitTests,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/**\n\x09 * Adds an actor to the list of actors to never allow an interactor to hit in the scene.  No selection.  No hover.\n\x09 * There's no need to remove actors from this list.  They'll expire from it automatically when destroyed.\n\x09 *\n\x09 * @param\x09""ActorToExcludeFromHitTests\x09The actor that should be forever excluded from hit tests\n\x09 */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Adds an actor to the list of actors to never allow an interactor to hit in the scene.  No selection.  No hover.\nThere's no need to remove actors from this list.  They'll expire from it automatically when destroyed.\n\n@param       ActorToExcludeFromHitTests      The actor that should be forever excluded from hit tests" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "AddActorToExcludeFromHitTests", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::ViewportWorldInteraction_eventAddActorToExcludeFromHitTests_Parms), Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics
	{
		struct ViewportWorldInteraction_eventAddInteractor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventAddInteractor_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Adds interactor to the worldinteraction */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Adds interactor to the worldinteraction" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "AddInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::ViewportWorldInteraction_eventAddInteractor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets the transform of the viewport / user's HMD in world space */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform of the viewport / user's HMD in world space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetHeadTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::ViewportWorldInteraction_eventGetHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics
	{
		struct ViewportWorldInteraction_eventGetInteractors_Parms
		{
			TArray<UViewportInteractor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetInteractors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets all the interactors */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets all the interactors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetInteractors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::ViewportWorldInteraction_eventGetInteractors_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets the transform of the viewport / user's HMD in room space */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform of the viewport / user's HMD in room space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetRoomSpaceHeadTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::ViewportWorldInteraction_eventGetRoomSpaceHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics
	{
		struct ViewportWorldInteraction_eventGetRoomTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetRoomTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets the world space transform of the calibrated VR room origin.  When using a seated VR device, this will feel like the\n\x09""camera's world transform (before any HMD positional or rotation adjustments are applied.) */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the world space transform of the calibrated VR room origin.  When using a seated VR device, this will feel like the\n      camera's world transform (before any HMD positional or rotation adjustments are applied.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetRoomTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::ViewportWorldInteraction_eventGetRoomTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics
	{
		struct ViewportWorldInteraction_eventGetTransformGizmoActor_Parms
		{
			ABaseTransformGizmo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetTransformGizmoActor_Parms, ReturnValue), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets the transform gizmo actor, or returns null if we currently don't have one */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the transform gizmo actor, or returns null if we currently don't have one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetTransformGizmoActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::ViewportWorldInteraction_eventGetTransformGizmoActor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics
	{
		struct ViewportWorldInteraction_eventGetWorldScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventGetWorldScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Gets the world scale factor, which can be multiplied by a scale vector to convert to room space */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Gets the world scale factor, which can be multiplied by a scale vector to convert to room space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "GetWorldScaleFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::ViewportWorldInteraction_eventGetWorldScaleFactor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics
	{
		struct ViewportWorldInteraction_eventRemoveInteractor_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventRemoveInteractor_Parms, Interactor), Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Removes interactor from the worldinteraction and removes the interactor from its paired interactor if any */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Removes interactor from the worldinteraction and removes the interactor from its paired interactor if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "RemoveInteractor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::ViewportWorldInteraction_eventRemoveInteractor_Parms), Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics
	{
		struct ViewportWorldInteraction_eventSetHeadTransform_Parms
		{
			FTransform NewHeadTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewHeadTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewHeadTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform = { "NewHeadTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventSetHeadTransform_Parms, NewHeadTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::NewProp_NewHeadTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Sets a new transform for the room so that the HMD is aligned to the new transform.\n\x09\x09The Head is kept level to the ground and only rotated on the yaw */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Sets a new transform for the room so that the HMD is aligned to the new transform.\n              The Head is kept level to the ground and only rotated on the yaw" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "SetHeadTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::ViewportWorldInteraction_eventSetHeadTransform_Parms), Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics
	{
		struct ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms
		{
			FTransform NewRoomTransform;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRoomTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRoomTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform = { "NewRoomTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms, NewRoomTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::NewProp_NewRoomTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "SetRoomTransformForNextFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::ViewportWorldInteraction_eventSetRoomTransformForNextFrame_Parms), Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics
	{
		struct ViewportWorldInteraction_eventSetWorldToMetersScale_Parms
		{
			float NewWorldToMetersScale;
			bool bCompensateRoomWorldScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWorldToMetersScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWorldToMetersScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompensateRoomWorldScale_MetaData[];
#endif
		static void NewProp_bCompensateRoomWorldScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompensateRoomWorldScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_NewWorldToMetersScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_NewWorldToMetersScale = { "NewWorldToMetersScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ViewportWorldInteraction_eventSetWorldToMetersScale_Parms, NewWorldToMetersScale), METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_NewWorldToMetersScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_NewWorldToMetersScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale_SetBit(void* Obj)
	{
		((ViewportWorldInteraction_eventSetWorldToMetersScale_Parms*)Obj)->bCompensateRoomWorldScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale = { "bCompensateRoomWorldScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ViewportWorldInteraction_eventSetWorldToMetersScale_Parms), &Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_NewWorldToMetersScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::NewProp_bCompensateRoomWorldScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "ViewportWorldInteraction" },
		{ "Comment", "/** Sets GNewWorldToMetersScale */" },
		{ "CPP_Default_bCompensateRoomWorldScale", "false" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Sets GNewWorldToMetersScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewportWorldInteraction, nullptr, "SetWorldToMetersScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::ViewportWorldInteraction_eventSetWorldToMetersScale_Parms), Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewportWorldInteraction);
	UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister()
	{
		return UViewportWorldInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UViewportWorldInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Interactors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportTransformer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportTransformer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformGizmoActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformGizmoActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapGridActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapGridActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapGridMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapGridMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapGridMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapGridMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMouseCursorInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMouseCursorInteractor;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ActorsToExcludeFromHitTest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToExcludeFromHitTest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToExcludeFromHitTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewportWorldInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorWorldExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewportInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewportWorldInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewportWorldInteraction_AddActorToExcludeFromHitTests, "AddActorToExcludeFromHitTests" }, // 3374107758
		{ &Z_Construct_UFunction_UViewportWorldInteraction_AddInteractor, "AddInteractor" }, // 2721628977
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetHeadTransform, "GetHeadTransform" }, // 452653136
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetInteractors, "GetInteractors" }, // 3191777253
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetRoomSpaceHeadTransform, "GetRoomSpaceHeadTransform" }, // 4181704106
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetRoomTransform, "GetRoomTransform" }, // 2906667756
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetTransformGizmoActor, "GetTransformGizmoActor" }, // 2395638233
		{ &Z_Construct_UFunction_UViewportWorldInteraction_GetWorldScaleFactor, "GetWorldScaleFactor" }, // 3297514017
		{ &Z_Construct_UFunction_UViewportWorldInteraction_RemoveInteractor, "RemoveInteractor" }, // 2721632526
		{ &Z_Construct_UFunction_UViewportWorldInteraction_SetHeadTransform, "SetHeadTransform" }, // 1251072643
		{ &Z_Construct_UFunction_UViewportWorldInteraction_SetRoomTransformForNextFrame, "SetRoomTransformForNextFrame" }, // 1498392877
		{ &Z_Construct_UFunction_UViewportWorldInteraction_SetWorldToMetersScale, "SetWorldToMetersScale" }, // 1386998729
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ViewportWorldInteraction.h" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_Inner = { "Interactors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UViewportInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData[] = {
		{ "Comment", "/** All the interactors registered to modify the world */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "All the interactors registered to modify the world" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors = { "Interactors", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, Interactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData[] = {
		{ "Comment", "/** The active system being used to transform objects */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The active system being used to transform objects" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer = { "ViewportTransformer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, ViewportTransformer), Z_Construct_UClass_UViewportTransformer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData[] = {
		{ "Comment", "/** Transform gizmo actor, for manipulating selected actor(s) */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Transform gizmo actor, for manipulating selected actor(s)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor = { "TransformGizmoActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, TransformGizmoActor), Z_Construct_UClass_ABaseTransformGizmo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData[] = {
		{ "Comment", "/** Actor for the snap grid */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "Actor for the snap grid" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor = { "SnapGridActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData[] = {
		{ "Comment", "/** The plane mesh we use to draw a snap grid under selected objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The plane mesh we use to draw a snap grid under selected objects" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent = { "SnapGridMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData[] = {
		{ "Comment", "/** MID for the snap grid, so we can update snap values on the fly */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "MID for the snap grid, so we can update snap values on the fly" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID = { "SnapGridMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, SnapGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData[] = {
		{ "Comment", "/** The default mouse cursor interactor, activated on demand */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "The default mouse cursor interactor, activated on demand" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor = { "DefaultMouseCursorInteractor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, DefaultMouseCursorInteractor), Z_Construct_UClass_UMouseCursorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_Inner = { "ActorsToExcludeFromHitTest", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData[] = {
		{ "Comment", "/** List of actors which should never be hit by an interactor, such as the 'avatar mesh actor' in VR */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "ToolTip", "List of actors which should never be hit by an interactor, such as the 'avatar mesh actor' in VR" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest = { "ActorsToExcludeFromHitTest", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, ActorsToExcludeFromHitTest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData[] = {
		{ "Comment", "/** Container of assets */" },
		{ "ModuleRelativePath", "Public/ViewportWorldInteraction.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Container of assets" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UViewportWorldInteraction, AssetContainer), Z_Construct_UClass_UViewportInteractionAssetContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_Interactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ViewportTransformer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_TransformGizmoActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_SnapGridMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_DefaultMouseCursorInteractor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_ActorsToExcludeFromHitTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewportWorldInteraction_Statics::NewProp_AssetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewportWorldInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewportWorldInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewportWorldInteraction_Statics::ClassParams = {
		&UViewportWorldInteraction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewportWorldInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewportWorldInteraction()
	{
		if (!Z_Registration_Info_UClass_UViewportWorldInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewportWorldInteraction.OuterSingleton, Z_Construct_UClass_UViewportWorldInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewportWorldInteraction.OuterSingleton;
	}
	template<> VIEWPORTINTERACTION_API UClass* StaticClass<UViewportWorldInteraction>()
	{
		return UViewportWorldInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewportWorldInteraction);
	UViewportWorldInteraction::~UViewportWorldInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::EnumInfo[] = {
		{ EViewportWorldInteractionType_StaticEnum, TEXT("EViewportWorldInteractionType"), &Z_Registration_Info_UEnum_EViewportWorldInteractionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4075362242U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewportWorldInteraction, UViewportWorldInteraction::StaticClass, TEXT("UViewportWorldInteraction"), &Z_Registration_Info_UClass_UViewportWorldInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewportWorldInteraction), 2663077618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_829677148(TEXT("/Script/ViewportInteraction"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ViewportInteraction_Public_ViewportWorldInteraction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
