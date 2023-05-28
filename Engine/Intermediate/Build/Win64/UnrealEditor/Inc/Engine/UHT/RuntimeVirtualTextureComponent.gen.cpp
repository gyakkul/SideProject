// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/RuntimeVirtualTextureComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeVirtualTextureComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTextureBuilder_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(URuntimeVirtualTextureComponent::execInvalidate)
	{
		P_GET_STRUCT_REF(FBoxSphereBounds,Z_Param_Out_WorldBounds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Invalidate(Z_Param_Out_WorldBounds);
		P_NATIVE_END;
	}
	void URuntimeVirtualTextureComponent::StaticRegisterNativesURuntimeVirtualTextureComponent()
	{
		UClass* Class = URuntimeVirtualTextureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Invalidate", &URuntimeVirtualTextureComponent::execInvalidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics
	{
		struct RuntimeVirtualTextureComponent_eventInvalidate_Parms
		{
			FBoxSphereBounds WorldBounds;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds = { "WorldBounds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RuntimeVirtualTextureComponent_eventInvalidate_Parms, WorldBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::NewProp_WorldBounds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * This function marks an area of the runtime virtual texture as dirty.\n\x09 * @param WorldBounds : The world space bounds of the pages to invalidate.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "This function marks an area of the runtime virtual texture as dirty.\n@param WorldBounds : The world space bounds of the pages to invalidate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeVirtualTextureComponent, nullptr, "Invalidate", nullptr, nullptr, sizeof(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::RuntimeVirtualTextureComponent_eventInvalidate_Parms), Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeVirtualTextureComponent);
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent_NoRegister()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundsAlignActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundsAlignActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetBoundsButton_MetaData[];
#endif
		static void NewProp_bSetBoundsButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetBoundsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapBoundsToLandscape_MetaData[];
#endif
		static void NewProp_bSnapBoundsToLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapBoundsToLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScalability_MetaData[];
#endif
		static void NewProp_bEnableScalability_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScalability;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityGroup_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ScalabilityGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePrimitives_MetaData[];
#endif
		static void NewProp_bHidePrimitives_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePrimitives;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamingTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamLowMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamLowMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildStreamingMipsButton_MetaData[];
#endif
		static void NewProp_bBuildStreamingMipsButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildStreamingMipsButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStreamingLowMipsInEditor_MetaData[];
#endif
		static void NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStreamingLowMipsInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildDebugStreamingMips_MetaData[];
#endif
		static void NewProp_bBuildDebugStreamingMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildDebugStreamingMips;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URuntimeVirtualTextureComponent_Invalidate, "Invalidate" }, // 565763761
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component used to place a URuntimeVirtualTexture in the world. */" },
		{ "HideCategories", "Activation Collision Cooking Mobility LOD Object Physics Rendering Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RuntimeVirtualTextureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Component used to place a URuntimeVirtualTexture in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Actor to align rotation to. If set this actor is always included in the bounds calculation. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Actor to align rotation to. If set this actor is always included in the bounds calculation." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor = { "BoundsAlignActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsAlignActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bSetBoundsButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton = { "bSetBoundsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData[] = {
		{ "Category", "TransformFromBounds" },
		{ "Comment", "/** If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions. */" },
		{ "DisplayName", "Snap To Landscape" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "If the Bounds Align Actor is a Landscape then this will snap the bounds so that virtual texture texels align with landscape vertex positions." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bSnapBoundsToLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape = { "bSnapBoundsToLandscape", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** The virtual texture object to use. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "The virtual texture object to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture = { "VirtualTexture", nullptr, (EPropertyFlags)0x0024480000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Set to true to enable scalability settings for the virtual texture. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Set to true to enable scalability settings for the virtual texture." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bEnableScalability = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability = { "bEnableScalability", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Group index of the scalability settings to use for the virtual texture. */" },
		{ "EditCondition", "bEnableScalability" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Group index of the scalability settings to use for the virtual texture." },
		{ "UIMax", "2" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup = { "ScalabilityGroup", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, ScalabilityGroup), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Hide primitives in the main pass. Hidden primitives will be those that draw to this virtual texture with 'Draw in Main Pass' set to 'From Virtual Texture'." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bHidePrimitives = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives = { "bHidePrimitives", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Texture object containing streamed low mips. This can reduce rendering update cost. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Texture object containing streamed low mips. This can reduce rendering update cost." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture = { "StreamingTexture", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamingTexture), Z_Construct_UClass_UVirtualTextureBuilder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Number of streaming low mips to build for the virtual texture. */" },
		{ "DisplayName", "Build Levels" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Number of streaming low mips to build for the virtual texture." },
		{ "UIMax", "12" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips = { "StreamLowMips", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, StreamLowMips), METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Placeholder for details customization button. */" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Placeholder for details customization button." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bBuildStreamingMipsButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton = { "bBuildStreamingMipsButton", nullptr, (EPropertyFlags)0x0020080000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** \n\x09 * How aggressively should any relevant lossy compression be applied. \n\x09 * For compressors that support EncodeSpeed (i.e. Oodle), this is only applied if enabled (see Project Settings -> Texture Encoding). \n\x09 * Note that this is in addition to any unavoidable loss due to the target format. Selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "How aggressively should any relevant lossy compression be applied.\nFor compressors that support EncodeSpeed (i.e. Oodle), this is only applied if enabled (see Project Settings -> Texture Encoding).\nNote that this is in addition to any unavoidable loss due to the target format. Selecting \"No Lossy Compression\" will not result in zero distortion for BCn formats." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeVirtualTextureComponent, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount_MetaData)) }; // 1372911062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Use streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips. */" },
		{ "DisplayName", "View in Editor" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Use streaming low mips when rendering in editor. Set true to view and debug the baked streaming low mips." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bUseStreamingLowMipsInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor = { "bUseStreamingLowMipsInEditor", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData[] = {
		{ "Category", "VirtualTextureBuild" },
		{ "Comment", "/** Build the streaming low mips using debug coloring. This can help show where streaming mips are being used. */" },
		{ "DisplayName", "Build Debug" },
		{ "ModuleRelativePath", "Classes/Components/RuntimeVirtualTextureComponent.h" },
		{ "ToolTip", "Build the streaming low mips using debug coloring. This can help show where streaming mips are being used." },
	};
#endif
	void Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_SetBit(void* Obj)
	{
		((URuntimeVirtualTextureComponent*)Obj)->bBuildDebugStreamingMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips = { "bBuildDebugStreamingMips", nullptr, (EPropertyFlags)0x00200c0000002015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URuntimeVirtualTextureComponent), &Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_SetBit, METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_BoundsAlignActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSetBoundsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bSnapBoundsToLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_VirtualTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bEnableScalability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_ScalabilityGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bHidePrimitives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamingTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_StreamLowMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildStreamingMipsButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_LossyCompressionAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bUseStreamingLowMipsInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::NewProp_bBuildDebugStreamingMips,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeVirtualTextureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams = {
		&URuntimeVirtualTextureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeVirtualTextureComponent()
	{
		if (!Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton, Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeVirtualTextureComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URuntimeVirtualTextureComponent>()
	{
		return URuntimeVirtualTextureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeVirtualTextureComponent);
	URuntimeVirtualTextureComponent::~URuntimeVirtualTextureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeVirtualTextureComponent, URuntimeVirtualTextureComponent::StaticClass, TEXT("URuntimeVirtualTextureComponent"), &Z_Registration_Info_UClass_URuntimeVirtualTextureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeVirtualTextureComponent), 3921666009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_3001378300(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
