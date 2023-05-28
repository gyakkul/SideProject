// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaBundleActorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaBundleActorBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_AMediaBundleActorBase();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_AMediaBundleActorBase_NoRegister();
	MEDIAFRAMEWORKUTILITIES_API UClass* Z_Construct_UClass_UMediaBundle_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilities();
// End Cross Module References
	DEFINE_FUNCTION(AMediaBundleActorBase::execSetComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InPrimitive);
		P_GET_OBJECT(UMediaSoundComponent,Z_Param_InMediaSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponent(Z_Param_InPrimitive,Z_Param_InMediaSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMediaBundleActorBase::execRequestCloseMediaSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestCloseMediaSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMediaBundleActorBase::execRequestOpenMediaSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestOpenMediaSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMediaBundleActorBase::execGetMediaBundle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaBundle**)Z_Param__Result=P_THIS->GetMediaBundle();
		P_NATIVE_END;
	}
	void AMediaBundleActorBase::StaticRegisterNativesAMediaBundleActorBase()
	{
		UClass* Class = AMediaBundleActorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMediaBundle", &AMediaBundleActorBase::execGetMediaBundle },
			{ "RequestCloseMediaSource", &AMediaBundleActorBase::execRequestCloseMediaSource },
			{ "RequestOpenMediaSource", &AMediaBundleActorBase::execRequestOpenMediaSource },
			{ "SetComponent", &AMediaBundleActorBase::execSetComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics
	{
		struct MediaBundleActorBase_eventGetMediaBundle_Parms
		{
			UMediaBundle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundleActorBase_eventGetMediaBundle_Parms, ReturnValue), Z_Construct_UClass_UMediaBundle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Get the Media Bundle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Get the Media Bundle." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMediaBundleActorBase, nullptr, "GetMediaBundle", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::MediaBundleActorBase_eventGetMediaBundle_Parms), Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Close the Media Source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Close the Media Source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMediaBundleActorBase, nullptr, "RequestCloseMediaSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics
	{
		struct MediaBundleActorBase_eventRequestOpenMediaSource_Parms
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
	void Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaBundleActorBase_eventRequestOpenMediaSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaBundleActorBase_eventRequestOpenMediaSource_Parms), &Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Play the Media Source.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Play the Media Source." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMediaBundleActorBase, nullptr, "RequestOpenMediaSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::MediaBundleActorBase_eventRequestOpenMediaSource_Parms), Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics
	{
		struct MediaBundleActorBase_eventSetComponent_Parms
		{
			UPrimitiveComponent* InPrimitive;
			UMediaSoundComponent* InMediaSound;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMediaSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMediaSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InPrimitive_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InPrimitive = { "InPrimitive", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundleActorBase_eventSetComponent_Parms, InPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InPrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InMediaSound_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InMediaSound = { "InMediaSound", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaBundleActorBase_eventSetComponent_Parms, InMediaSound), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InMediaSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InMediaSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InPrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::NewProp_InMediaSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaBundle" },
		{ "Comment", "/**\n\x09 * Assign the primitive to render on. Will change the material for the Media material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Assign the primitive to render on. Will change the material for the Media material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMediaBundleActorBase, nullptr, "SetComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::MediaBundleActorBase_eventSetComponent_Parms), Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMediaBundleActorBase_SetComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMediaBundleActorBase_SetComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMediaBundleActorBase);
	UClass* Z_Construct_UClass_AMediaBundleActorBase_NoRegister()
	{
		return AMediaBundleActorBase::StaticClass();
	}
	struct Z_Construct_UClass_AMediaBundleActorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaBundle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaBundle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayWhileEditing_MetaData[];
#endif
		static void NewProp_bPlayWhileEditing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhileEditing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveCmp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimitiveCmp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSoundCmp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSoundCmp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveMaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveMaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMediaBundleActorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMediaBundleActorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMediaBundleActorBase_GetMediaBundle, "GetMediaBundle" }, // 242709403
		{ &Z_Construct_UFunction_AMediaBundleActorBase_RequestCloseMediaSource, "RequestCloseMediaSource" }, // 3285190259
		{ &Z_Construct_UFunction_AMediaBundleActorBase_RequestOpenMediaSource, "RequestOpenMediaSource" }, // 2136559301
		{ &Z_Construct_UFunction_AMediaBundleActorBase_SetComponent, "SetComponent" }, // 651101641
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A base actor that \n */" },
		{ "IncludePath", "MediaBundleActorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "A base actor that" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_GarbageMatteMask_MetaData[] = {
		{ "Category", "Compositing" },
		{ "Comment", "/** Texture containging 2D garbage matte mask */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Texture containging 2D garbage matte mask" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_GarbageMatteMask = { "GarbageMatteMask", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, GarbageMatteMask), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_GarbageMatteMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_GarbageMatteMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaBundle_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Associated MediaBundle */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Associated MediaBundle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaBundle = { "MediaBundle", nullptr, (EPropertyFlags)0x0024080002000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, MediaBundle), Z_Construct_UClass_UMediaBundle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaBundle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaBundle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Wheter to auto start the MediaPlayer */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Wheter to auto start the MediaPlayer" },
	};
#endif
	void Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((AMediaBundleActorBase*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMediaBundleActorBase), &Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Wheter to keep MediaPlayer playing when editing */" },
		{ "EditCondition", "bAutoPlay" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Wheter to keep MediaPlayer playing when editing" },
	};
#endif
	void Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_SetBit(void* Obj)
	{
		((AMediaBundleActorBase*)Obj)->bPlayWhileEditing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing = { "bPlayWhileEditing", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AMediaBundleActorBase), &Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveCmp_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** PrimitiveComponent on which to attach our Material */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "PrimitiveComponent on which to attach our Material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveCmp = { "PrimitiveCmp", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, PrimitiveCmp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveCmp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaSoundCmp_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** MediaSoundComponent associated to play sound of our MediaSource */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "MediaSoundComponent associated to play sound of our MediaSource" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaSoundCmp = { "MediaSoundCmp", nullptr, (EPropertyFlags)0x0024080002090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, MediaSoundCmp), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaSoundCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaSoundCmp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Dynamic instance of the associated MediaBundle base Material */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Dynamic instance of the associated MediaBundle base Material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveMaterialIndex_MetaData[] = {
		{ "Category", "MediaBundle" },
		{ "Comment", "/** Index of the Material on the primitive */" },
		{ "ModuleRelativePath", "Public/MediaBundleActorBase.h" },
		{ "ToolTip", "Index of the Material on the primitive" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveMaterialIndex = { "PrimitiveMaterialIndex", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMediaBundleActorBase, PrimitiveMaterialIndex), METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveMaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveMaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMediaBundleActorBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_GarbageMatteMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaBundle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_bPlayWhileEditing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveCmp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_MediaSoundCmp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMediaBundleActorBase_Statics::NewProp_PrimitiveMaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMediaBundleActorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMediaBundleActorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMediaBundleActorBase_Statics::ClassParams = {
		&AMediaBundleActorBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMediaBundleActorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AMediaBundleActorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMediaBundleActorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMediaBundleActorBase()
	{
		if (!Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton, Z_Construct_UClass_AMediaBundleActorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMediaBundleActorBase.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIES_API UClass* StaticClass<AMediaBundleActorBase>()
	{
		return AMediaBundleActorBase::StaticClass();
	}
	AMediaBundleActorBase::AMediaBundleActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMediaBundleActorBase);
	AMediaBundleActorBase::~AMediaBundleActorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMediaBundleActorBase, AMediaBundleActorBase::StaticClass, TEXT("AMediaBundleActorBase"), &Z_Registration_Info_UClass_AMediaBundleActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMediaBundleActorBase), 2840404617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h_4051664097(TEXT("/Script/MediaFrameworkUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilities_Public_MediaBundleActorBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
