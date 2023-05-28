// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorAvatarActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorAvatarActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorAvatarActor();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorAvatarActor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
// End Cross Module References
	void AVREditorAvatarActor::StaticRegisterNativesAVREditorAvatarActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVREditorAvatarActor);
	UClass* Z_Construct_UClass_AVREditorAvatarActor_NoRegister()
	{
		return AVREditorAvatarActor::StaticClass();
	}
	struct Z_Construct_UClass_AVREditorAvatarActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HeadMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMovementGridMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldMovementGridMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMovementGridMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldMovementGridMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMovementGridOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldMovementGridOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDrawingWorldMovementPostProcess_MetaData[];
#endif
		static void NewProp_bIsDrawingWorldMovementPostProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDrawingWorldMovementPostProcess;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldMovementPostProcessMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldMovementPostProcessMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleProgressMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScaleProgressMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentScaleProgressMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentScaleProgressMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserScaleIndicatorText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserScaleIndicatorText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedUserScaleMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FixedUserScaleMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentFixedUserScaleMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentFixedUserScaleMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUserScaleMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentUserScaleMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentCurrentUserScaleMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentCurrentUserScaleMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VRMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVREditorAvatarActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Avatar Actor\n */" },
		{ "IncludePath", "VREditorAvatarActor.h" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Avatar Actor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_HeadMeshComponent_MetaData[] = {
		{ "Comment", "/** Our avatar's head mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Our avatar's head mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_HeadMeshComponent = { "HeadMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, HeadMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_HeadMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_HeadMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMeshComponent_MetaData[] = {
		{ "Comment", "/** The grid that appears while the user is dragging the world around */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "The grid that appears while the user is dragging the world around" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMeshComponent = { "WorldMovementGridMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMID_MetaData[] = {
		{ "Comment", "/** Grid mesh component dynamic material instance to set the opacity */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Grid mesh component dynamic material instance to set the opacity" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMID = { "WorldMovementGridMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridOpacity_MetaData[] = {
		{ "Comment", "/** Opacity of the movement grid and post process */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Opacity of the movement grid and post process" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridOpacity = { "WorldMovementGridOpacity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementGridOpacity), METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess_MetaData[] = {
		{ "Comment", "/** True if we're currently drawing our world movement post process */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "True if we're currently drawing our world movement post process" },
	};
#endif
	void Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess_SetBit(void* Obj)
	{
		((AVREditorAvatarActor*)Obj)->bIsDrawingWorldMovementPostProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess = { "bIsDrawingWorldMovementPostProcess", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVREditorAvatarActor), &Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementPostProcessMaterial_MetaData[] = {
		{ "Comment", "/** Post process material for \"greying out\" the world while in world movement mode */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Post process material for \"greying out\" the world while in world movement mode" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementPostProcessMaterial = { "WorldMovementPostProcessMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, WorldMovementPostProcessMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementPostProcessMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementPostProcessMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_ScaleProgressMeshComponent_MetaData[] = {
		{ "Comment", "/** Background progressbar scaling mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Background progressbar scaling mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_ScaleProgressMeshComponent = { "ScaleProgressMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, ScaleProgressMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_ScaleProgressMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_ScaleProgressMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentScaleProgressMeshComponent_MetaData[] = {
		{ "Comment", "/** Current scale progressbar mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Current scale progressbar mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentScaleProgressMeshComponent = { "CurrentScaleProgressMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, CurrentScaleProgressMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentScaleProgressMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentScaleProgressMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_UserScaleIndicatorText_MetaData[] = {
		{ "Comment", "/** Current scale text */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Current scale text" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_UserScaleIndicatorText = { "UserScaleIndicatorText", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, UserScaleIndicatorText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_UserScaleIndicatorText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_UserScaleIndicatorText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_FixedUserScaleMID_MetaData[] = {
		{ "Comment", "/** Base dynamic material for the user scale fixed progressbar */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Base dynamic material for the user scale fixed progressbar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_FixedUserScaleMID = { "FixedUserScaleMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, FixedUserScaleMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_FixedUserScaleMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_FixedUserScaleMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentFixedUserScaleMID_MetaData[] = {
		{ "Comment", "/** Translucent dynamic material for the user scale fixed progressbar */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Translucent dynamic material for the user scale fixed progressbar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentFixedUserScaleMID = { "TranslucentFixedUserScaleMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, TranslucentFixedUserScaleMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentFixedUserScaleMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentFixedUserScaleMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentUserScaleMID_MetaData[] = {
		{ "Comment", "/** Base dynamic material for the current user scale progressbar */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Base dynamic material for the current user scale progressbar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentUserScaleMID = { "CurrentUserScaleMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, CurrentUserScaleMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentUserScaleMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentUserScaleMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentCurrentUserScaleMID_MetaData[] = {
		{ "Comment", "/** Translucent dynamic material for the current user scale progressbar */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Translucent dynamic material for the current user scale progressbar" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentCurrentUserScaleMID = { "TranslucentCurrentUserScaleMID", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, TranslucentCurrentUserScaleMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentCurrentUserScaleMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentCurrentUserScaleMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_PostProcessComponent_MetaData[] = {
		{ "Comment", "/** Post process for drawing VR-specific post effects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Post process for drawing VR-specific post effects" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_PostProcessComponent = { "PostProcessComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, PostProcessComponent), Z_Construct_UClass_UPostProcessComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_PostProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_PostProcessComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_VRMode_MetaData[] = {
		{ "Comment", "/** Owning object */" },
		{ "ModuleRelativePath", "VREditorAvatarActor.h" },
		{ "ToolTip", "Owning object" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_VRMode = { "VRMode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVREditorAvatarActor, VRMode), Z_Construct_UClass_UVREditorMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_VRMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_VRMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVREditorAvatarActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_HeadMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementGridOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_bIsDrawingWorldMovementPostProcess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_WorldMovementPostProcessMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_ScaleProgressMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentScaleProgressMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_UserScaleIndicatorText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_FixedUserScaleMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentFixedUserScaleMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_CurrentUserScaleMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_TranslucentCurrentUserScaleMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_PostProcessComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVREditorAvatarActor_Statics::NewProp_VRMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVREditorAvatarActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVREditorAvatarActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVREditorAvatarActor_Statics::ClassParams = {
		&AVREditorAvatarActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVREditorAvatarActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVREditorAvatarActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVREditorAvatarActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVREditorAvatarActor()
	{
		if (!Z_Registration_Info_UClass_AVREditorAvatarActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVREditorAvatarActor.OuterSingleton, Z_Construct_UClass_AVREditorAvatarActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVREditorAvatarActor.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AVREditorAvatarActor>()
	{
		return AVREditorAvatarActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVREditorAvatarActor);
	AVREditorAvatarActor::~AVREditorAvatarActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorAvatarActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorAvatarActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVREditorAvatarActor, AVREditorAvatarActor::StaticClass, TEXT("AVREditorAvatarActor"), &Z_Registration_Info_UClass_AVREditorAvatarActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVREditorAvatarActor), 2898621827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorAvatarActor_h_499529973(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorAvatarActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorAvatarActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
