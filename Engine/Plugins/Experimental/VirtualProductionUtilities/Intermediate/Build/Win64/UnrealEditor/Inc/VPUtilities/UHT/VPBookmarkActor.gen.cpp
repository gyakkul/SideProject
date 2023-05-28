// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmarkActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmarkActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkProvider_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPBookmarkActor();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPBookmarkActor_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPViewportTickableActorBase();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVPBookmarkActor::execOnActorDroppedFromTransform_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDroppedFromTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execOnActorSelectedForTransform_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorSelectedForTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execOnActorDroppedFromCarry_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDroppedFromCarry_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execGenerateBookmarkName_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateBookmarkName_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execHideBookmarkSplineMeshIndicator_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBookmarkSplineMeshIndicator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execUpdateBookmarkSplineMeshIndicator_Implementation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBookmarkSplineMeshIndicator_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execOnBookmarkChanged_Implementation)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBookmarkChanged_Implementation(Z_Param_Bookmark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execOnBookmarkActivation_Implementation)
	{
		P_GET_OBJECT(UVPBookmark,Z_Param_Bookmark);
		P_GET_UBOOL(Z_Param_bActivate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBookmarkActivation_Implementation(Z_Param_Bookmark,Z_Param_bActivate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPBookmarkActor::execUpdateBookmarkColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBookmarkColor(Z_Param_Color);
		P_NATIVE_END;
	}
	void AVPBookmarkActor::StaticRegisterNativesAVPBookmarkActor()
	{
		UClass* Class = AVPBookmarkActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateBookmarkName_Implementation", &AVPBookmarkActor::execGenerateBookmarkName_Implementation },
			{ "HideBookmarkSplineMeshIndicator_Implementation", &AVPBookmarkActor::execHideBookmarkSplineMeshIndicator_Implementation },
			{ "OnActorDroppedFromCarry_Implementation", &AVPBookmarkActor::execOnActorDroppedFromCarry_Implementation },
			{ "OnActorDroppedFromTransform_Implementation", &AVPBookmarkActor::execOnActorDroppedFromTransform_Implementation },
			{ "OnActorSelectedForTransform_Implementation", &AVPBookmarkActor::execOnActorSelectedForTransform_Implementation },
			{ "OnBookmarkActivation_Implementation", &AVPBookmarkActor::execOnBookmarkActivation_Implementation },
			{ "OnBookmarkChanged_Implementation", &AVPBookmarkActor::execOnBookmarkChanged_Implementation },
			{ "UpdateBookmarkColor", &AVPBookmarkActor::execUpdateBookmarkColor },
			{ "UpdateBookmarkSplineMeshIndicator_Implementation", &AVPBookmarkActor::execUpdateBookmarkSplineMeshIndicator_Implementation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "GenerateBookmarkName_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "HideBookmarkSplineMeshIndicator_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interaction" },
		{ "Comment", "//VPInteraction Interface Events\n" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "VPInteraction Interface Events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "OnActorDroppedFromCarry_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "OnActorDroppedFromTransform_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "OnActorSelectedForTransform_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics
	{
		struct VPBookmarkActor_eventOnBookmarkActivation_Implementation_Parms
		{
			UVPBookmark* Bookmark;
			bool bActivate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static void NewProp_bActivate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkActor_eventOnBookmarkActivation_Implementation_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_bActivate_SetBit(void* Obj)
	{
		((VPBookmarkActor_eventOnBookmarkActivation_Implementation_Parms*)Obj)->bActivate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_bActivate = { "bActivate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPBookmarkActor_eventOnBookmarkActivation_Implementation_Parms), &Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_bActivate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::NewProp_bActivate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "Comment", "//VPBookmark Interface events\n" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "VPBookmark Interface events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "OnBookmarkActivation_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::VPBookmarkActor_eventOnBookmarkActivation_Implementation_Parms), Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics
	{
		struct VPBookmarkActor_eventOnBookmarkChanged_Implementation_Parms
		{
			UVPBookmark* Bookmark;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkActor_eventOnBookmarkChanged_Implementation_Parms, Bookmark), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::NewProp_Bookmark,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "OnBookmarkChanged_Implementation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::VPBookmarkActor_eventOnBookmarkChanged_Implementation_Parms), Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics
	{
		struct VPBookmarkActor_eventUpdateBookmarkColor_Parms
		{
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkActor_eventUpdateBookmarkColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Default" },
		{ "Comment", "/**Update the mesh color and BookmarkColor variable. Intended for use with multiuser initialization*/" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Update the mesh color and BookmarkColor variable. Intended for use with multiuser initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "UpdateBookmarkColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::VPBookmarkActor_eventUpdateBookmarkColor_Parms), Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPBookmarkActor, nullptr, "UpdateBookmarkSplineMeshIndicator_Implementation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPBookmarkActor);
	UClass* Z_Construct_UClass_AVPBookmarkActor_NoRegister()
	{
		return AVPBookmarkActor::StaticClass();
	}
	struct Z_Construct_UClass_AVPBookmarkActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookmarkMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameTextRenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NameTextRenderComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BookmarkColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookmarkObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsHome_MetaData[];
#endif
		static void NewProp_IsHome_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHome;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SnapshotTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookmarkMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BookmarkStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BookmarkStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LabelMaterialInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPBookmarkActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVPViewportTickableActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPBookmarkActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPBookmarkActor_GenerateBookmarkName_Implementation, "GenerateBookmarkName_Implementation" }, // 3030729793
		{ &Z_Construct_UFunction_AVPBookmarkActor_HideBookmarkSplineMeshIndicator_Implementation, "HideBookmarkSplineMeshIndicator_Implementation" }, // 33142968
		{ &Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromCarry_Implementation, "OnActorDroppedFromCarry_Implementation" }, // 3570056823
		{ &Z_Construct_UFunction_AVPBookmarkActor_OnActorDroppedFromTransform_Implementation, "OnActorDroppedFromTransform_Implementation" }, // 2546380514
		{ &Z_Construct_UFunction_AVPBookmarkActor_OnActorSelectedForTransform_Implementation, "OnActorSelectedForTransform_Implementation" }, // 829248477
		{ &Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkActivation_Implementation, "OnBookmarkActivation_Implementation" }, // 2120826244
		{ &Z_Construct_UFunction_AVPBookmarkActor_OnBookmarkChanged_Implementation, "OnBookmarkChanged_Implementation" }, // 1378530921
		{ &Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkColor, "UpdateBookmarkColor" }, // 2508530514
		{ &Z_Construct_UFunction_AVPBookmarkActor_UpdateBookmarkSplineMeshIndicator_Implementation, "UpdateBookmarkSplineMeshIndicator_Implementation" }, // 400170388
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Lighting HLOD Mobile Navigation RayTracing TextureStreaming" },
		{ "IncludePath", "VPBookmarkActor.h" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Mesh Representation in the world */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Mesh Representation in the world" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMeshComponent = { "BookmarkMeshComponent", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, BookmarkMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_NameTextRenderComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Textrender to display bookmark name */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Textrender to display bookmark name" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_NameTextRenderComponent = { "NameTextRenderComponent", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, NameTextRenderComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_NameTextRenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_NameTextRenderComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMeshComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** Splinemesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Splinemesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMeshComponent = { "SplineMeshComponent", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/**CineCamera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "CineCamera" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001400000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, CameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkColor_MetaData[] = {
		{ "Category", "Bookmark" },
		{ "Comment", "/** Color of Bookmark in MU Session */" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Color of Bookmark in MU Session" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkColor = { "BookmarkColor", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, BookmarkColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkObject_MetaData[] = {
		{ "Category", "Bookmark" },
		{ "Comment", "/** Reference to Editor Bookmark UObject*/" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Reference to Editor Bookmark UObject" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkObject = { "BookmarkObject", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, BookmarkObject), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome_MetaData[] = {
		{ "Category", "Bookmark" },
		{ "Comment", "/** Bool to determine if this bookmark should be designated the home location */" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "MultiLine", "true" },
		{ "ToolTip", "Bool to determine if this bookmark should be designated the home location" },
	};
#endif
	void Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome_SetBit(void* Obj)
	{
		((AVPBookmarkActor*)Obj)->IsHome = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome = { "IsHome", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVPBookmarkActor), &Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SnapshotTexture_MetaData[] = {
		{ "Category", "Snapshot" },
		{ "Comment", "/** Texture reference to store render of viewpoint  */" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Texture reference to store render of viewpoint" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SnapshotTexture = { "SnapshotTexture", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, SnapshotTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SnapshotTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SnapshotTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_DynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_DynamicMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMaterial_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMaterial = { "BookmarkMaterial", nullptr, (EPropertyFlags)0x0014000000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, BookmarkMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkStaticMesh_MetaData[] = {
		{ "Comment", "//Actor's rotation\n" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Actor's rotation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkStaticMesh = { "BookmarkStaticMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, BookmarkStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_TextMaterial_MetaData[] = {
		{ "Comment", "//Mesh to use main static mesh component\n" },
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
		{ "ToolTip", "Mesh to use main static mesh component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_TextMaterial = { "TextMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, TextMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_TextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_TextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineStaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineStaticMesh = { "SplineStaticMesh", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, SplineStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterial = { "SplineMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, SplineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterialInstance = { "SplineMaterialInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, SplineMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_LabelMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmarkActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_LabelMaterialInstance = { "LabelMaterialInstance", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPBookmarkActor, LabelMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_LabelMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_LabelMaterialInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVPBookmarkActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_NameTextRenderComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_IsHome,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SnapshotTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_DynamicMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_BookmarkStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_TextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_SplineMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPBookmarkActor_Statics::NewProp_LabelMaterialInstance,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVPBookmarkActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVPInteraction_NoRegister, (int32)VTABLE_OFFSET(AVPBookmarkActor, IVPInteraction), false },  // 1912602432
			{ Z_Construct_UClass_UVPBookmarkProvider_NoRegister, (int32)VTABLE_OFFSET(AVPBookmarkActor, IVPBookmarkProvider), false },  // 1004424634
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPBookmarkActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPBookmarkActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPBookmarkActor_Statics::ClassParams = {
		&AVPBookmarkActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVPBookmarkActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009020A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVPBookmarkActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPBookmarkActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPBookmarkActor()
	{
		if (!Z_Registration_Info_UClass_AVPBookmarkActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPBookmarkActor.OuterSingleton, Z_Construct_UClass_AVPBookmarkActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPBookmarkActor.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<AVPBookmarkActor>()
	{
		return AVPBookmarkActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPBookmarkActor);
	AVPBookmarkActor::~AVPBookmarkActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPBookmarkActor, AVPBookmarkActor::StaticClass, TEXT("AVPBookmarkActor"), &Z_Registration_Info_UClass_AVPBookmarkActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPBookmarkActor), 4229052094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_3434339595(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPBookmarkActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
