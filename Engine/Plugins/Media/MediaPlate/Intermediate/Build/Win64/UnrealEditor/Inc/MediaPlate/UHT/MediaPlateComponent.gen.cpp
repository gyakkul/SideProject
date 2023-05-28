// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlateComponent.h"
#include "MediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlateComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles();
	MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings();
	MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent();
	MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister();
	MEDIAPLATE_API UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateEventState();
	UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlateEventState;
	static UEnum* EMediaPlateEventState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState, (UObject*)Z_Construct_UPackage__Script_MediaPlate(), TEXT("EMediaPlateEventState"));
		}
		return Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton;
	}
	template<> MEDIAPLATE_API UEnum* StaticEnum<EMediaPlateEventState>()
	{
		return EMediaPlateEventState_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enumerators[] = {
		{ "EMediaPlateEventState::Play", (int64)EMediaPlateEventState::Play },
		{ "EMediaPlateEventState::Open", (int64)EMediaPlateEventState::Open },
		{ "EMediaPlateEventState::Close", (int64)EMediaPlateEventState::Close },
		{ "EMediaPlateEventState::Pause", (int64)EMediaPlateEventState::Pause },
		{ "EMediaPlateEventState::Reverse", (int64)EMediaPlateEventState::Reverse },
		{ "EMediaPlateEventState::Forward", (int64)EMediaPlateEventState::Forward },
		{ "EMediaPlateEventState::Rewind", (int64)EMediaPlateEventState::Rewind },
		{ "EMediaPlateEventState::MAX", (int64)EMediaPlateEventState::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enum_MetaDataParams[] = {
		{ "Close.Name", "EMediaPlateEventState::Close" },
		{ "Forward.Name", "EMediaPlateEventState::Forward" },
		{ "MAX.Name", "EMediaPlateEventState::MAX" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "Open.Name", "EMediaPlateEventState::Open" },
		{ "Pause.Name", "EMediaPlateEventState::Pause" },
		{ "Play.Name", "EMediaPlateEventState::Play" },
		{ "Reverse.Name", "EMediaPlateEventState::Reverse" },
		{ "Rewind.Name", "EMediaPlateEventState::Rewind" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaPlate,
		nullptr,
		"EMediaPlateEventState",
		"EMediaPlateEventState",
		Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateEventState()
	{
		if (!Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton, Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaOpened)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaOpened(Z_Param_DeviceUrl);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSetLetterboxAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLetterboxAspectRatio(Z_Param_AspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetLetterboxAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLetterboxAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSetIsAspectRatioAuto)
	{
		P_GET_UBOOL(Z_Param_bInIsAspectRatioAuto);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsAspectRatioAuto(Z_Param_bInIsAspectRatioAuto);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetIsAspectRatioAuto)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsAspectRatioAuto();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSetPlayOnlyWhenVisible)
	{
		P_GET_UBOOL(Z_Param_bInPlayOnlyWhenVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayOnlyWhenVisible(Z_Param_bInPlayOnlyWhenVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetMeshRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetMeshRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSetMeshRange)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InMeshRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMeshRange(Z_Param_InMeshRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSetLoop)
	{
		P_GET_UBOOL(Z_Param_bInLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoop(Z_Param_bInLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetLoop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLoop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execIsMediaPlatePlaying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMediaPlatePlaying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execSeek)
	{
		P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execRewind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Rewind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execOpen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Open();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetMediaTexture)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaTexture**)Z_Param__Result=P_THIS->GetMediaTexture(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaPlateComponent::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	void UMediaPlateComponent::StaticRegisterNativesUMediaPlateComponent()
	{
		UClass* Class = UMediaPlateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &UMediaPlateComponent::execClose },
			{ "GetIsAspectRatioAuto", &UMediaPlateComponent::execGetIsAspectRatioAuto },
			{ "GetLetterboxAspectRatio", &UMediaPlateComponent::execGetLetterboxAspectRatio },
			{ "GetLoop", &UMediaPlateComponent::execGetLoop },
			{ "GetMediaPlayer", &UMediaPlateComponent::execGetMediaPlayer },
			{ "GetMediaTexture", &UMediaPlateComponent::execGetMediaTexture },
			{ "GetMeshRange", &UMediaPlateComponent::execGetMeshRange },
			{ "IsMediaPlatePlaying", &UMediaPlateComponent::execIsMediaPlatePlaying },
			{ "OnMediaEnd", &UMediaPlateComponent::execOnMediaEnd },
			{ "OnMediaOpened", &UMediaPlateComponent::execOnMediaOpened },
			{ "Open", &UMediaPlateComponent::execOpen },
			{ "Pause", &UMediaPlateComponent::execPause },
			{ "Play", &UMediaPlateComponent::execPlay },
			{ "Rewind", &UMediaPlateComponent::execRewind },
			{ "Seek", &UMediaPlateComponent::execSeek },
			{ "SetIsAspectRatioAuto", &UMediaPlateComponent::execSetIsAspectRatioAuto },
			{ "SetLetterboxAspectRatio", &UMediaPlateComponent::execSetLetterboxAspectRatio },
			{ "SetLoop", &UMediaPlateComponent::execSetLoop },
			{ "SetMeshRange", &UMediaPlateComponent::execSetMeshRange },
			{ "SetPlayOnlyWhenVisible", &UMediaPlateComponent::execSetPlayOnlyWhenVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Close_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to close the media.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to close the media." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics
	{
		struct MediaPlateComponent_eventGetIsAspectRatioAuto_Parms
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
	void Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventGetIsAspectRatioAuto_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventGetIsAspectRatioAuto_Parms), &Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Gets whether automatic aspect ratio is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Gets whether automatic aspect ratio is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetIsAspectRatioAuto", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::MediaPlateComponent_eventGetIsAspectRatioAuto_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics
	{
		struct MediaPlateComponent_eventGetLetterboxAspectRatio_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventGetLetterboxAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to get the aspect ratio of the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to get the aspect ratio of the screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetLetterboxAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::MediaPlateComponent_eventGetLetterboxAspectRatio_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics
	{
		struct MediaPlateComponent_eventGetLoop_Parms
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
	void Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventGetLoop_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventGetLoop_Parms), &Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Call this to see if we want to loop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to see if we want to loop." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::MediaPlateComponent_eventGetLoop_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics
	{
		struct MediaPlateComponent_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this get our media player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this get our media player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::MediaPlateComponent_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics
	{
		struct MediaPlateComponent_eventGetMediaTexture_Parms
		{
			int32 Index;
			UMediaTexture* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaTexture_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaTexture_Parms, ReturnValue), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this get our media texture.\n\x09 */" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this get our media texture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMediaTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::MediaPlateComponent_eventGetMediaTexture_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics
	{
		struct MediaPlateComponent_eventGetMeshRange_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventGetMeshRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Return the arc size in degrees used for visible mips and tiles calculations, specific to the sphere. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Return the arc size in degrees used for visible mips and tiles calculations, specific to the sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMeshRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::MediaPlateComponent_eventGetMeshRange_Parms), Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics
	{
		struct MediaPlateComponent_eventIsMediaPlatePlaying_Parms
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
	void Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventIsMediaPlatePlaying_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventIsMediaPlatePlaying_Parms), &Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Call this to see if the media plate is playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to see if the media plate is playing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "IsMediaPlatePlaying", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::MediaPlateComponent_eventIsMediaPlatePlaying_Parms), Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the video ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the video ends." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics
	{
		struct MediaPlateComponent_eventOnMediaOpened_Parms
		{
			FString DeviceUrl;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventOnMediaOpened_Parms, DeviceUrl), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::NewProp_DeviceUrl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the media opens.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the media opens." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::MediaPlateComponent_eventOnMediaOpened_Parms), Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Open_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to open the media.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to open the media." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to pause playback.\n\x09 * Play can be called to resume playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to pause playback.\nPlay can be called to resume playback." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Play_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to start playing.\n\x09 * Open must be called before this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to start playing.\nOpen must be called before this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics
	{
		struct MediaPlateComponent_eventRewind_Parms
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
	void Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventRewind_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventRewind_Parms), &Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Rewinds the media to the beginning.\n\x09 *\n\x09 * This is the same as seeking to zero time.\n\x09 *\n\x09 * @return\x09\x09\x09\x09True if rewinding, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Rewinds the media to the beginning.\n\nThis is the same as seeking to zero time.\n\n@return                              True if rewinding, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Rewind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::MediaPlateComponent_eventRewind_Parms), Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Rewind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics
	{
		struct MediaPlateComponent_eventSeek_Parms
		{
			FTimespan Time;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time_MetaData)) };
	void Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventSeek_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventSeek_Parms), &Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to seek to the specified playback time.\n\x09 * \n\x09 * @param Time\x09\x09\x09Time to seek to.\n\x09 * @return\x09\x09\x09\x09True on success, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to seek to the specified playback time.\n\n@param Time                  Time to seek to.\n@return                              True on success, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Seek", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::MediaPlateComponent_eventSeek_Parms), Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_Seek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics
	{
		struct MediaPlateComponent_eventSetIsAspectRatioAuto_Parms
		{
			bool bInIsAspectRatioAuto;
		};
		static void NewProp_bInIsAspectRatioAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsAspectRatioAuto;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventSetIsAspectRatioAuto_Parms*)Obj)->bInIsAspectRatioAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto = { "bInIsAspectRatioAuto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventSetIsAspectRatioAuto_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Sets whether automatic aspect ratio is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Sets whether automatic aspect ratio is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetIsAspectRatioAuto", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::MediaPlateComponent_eventSetIsAspectRatioAuto_Parms), Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics
	{
		struct MediaPlateComponent_eventSetLetterboxAspectRatio_Parms
		{
			float AspectRatio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventSetLetterboxAspectRatio_Parms, AspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::NewProp_AspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to set the aspect ratio of the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to set the aspect ratio of the screen." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetLetterboxAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::MediaPlateComponent_eventSetLetterboxAspectRatio_Parms), Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics
	{
		struct MediaPlateComponent_eventSetLoop_Parms
		{
			bool bInLoop;
		};
		static void NewProp_bInLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventSetLoop_Parms*)Obj)->bInLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop = { "bInLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventSetLoop_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Call this enable/disable looping.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this enable/disable looping." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetLoop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::MediaPlateComponent_eventSetLoop_Parms), Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetLoop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics
	{
		struct MediaPlateComponent_eventSetMeshRange_Parms
		{
			FVector2D InMeshRange;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InMeshRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::NewProp_InMeshRange = { "InMeshRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaPlateComponent_eventSetMeshRange_Parms, InMeshRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::NewProp_InMeshRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Set the arc size in degrees used for visible mips and tiles calculations, specific to the sphere. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Set the arc size in degrees used for visible mips and tiles calculations, specific to the sphere." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetMeshRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::MediaPlateComponent_eventSetMeshRange_Parms), Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics
	{
		struct MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms
		{
			bool bInPlayOnlyWhenVisible;
		};
		static void NewProp_bInPlayOnlyWhenVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInPlayOnlyWhenVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible_SetBit(void* Obj)
	{
		((MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms*)Obj)->bInPlayOnlyWhenVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible = { "bInPlayOnlyWhenVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Call this to set bPlayOnlyWhenVisible. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to set bPlayOnlyWhenVisible." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetPlayOnlyWhenVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms), Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlateComponent);
	UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister()
	{
		return UMediaPlateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnOpen_MetaData[];
#endif
		static void NewProp_bPlayOnOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAudio_MetaData[];
#endif
		static void NewProp_bEnableAudio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAudio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SoundComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Letterboxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Letterboxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Letterboxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlaylist_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlaylist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMediaPlatePlaying_MetaData[];
#endif
		static void NewProp_bIsMediaPlatePlaying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMediaPlatePlaying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnlyWhenVisible_MetaData[];
#endif
		static void NewProp_bPlayOnlyWhenVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnlyWhenVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleMipsTilesCalculations_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleMipsTilesCalculations_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibleMipsTilesCalculations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipMapBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MipMapBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAspectRatioAuto_MetaData[];
#endif
		static void NewProp_bIsAspectRatioAuto_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAspectRatioAuto;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMipMapUpscaling_MetaData[];
#endif
		static void NewProp_bEnableMipMapUpscaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMipMapUpscaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipLevelToUpscale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MipLevelToUpscale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LetterboxAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LetterboxAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRange;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextures_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaPlateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPlateComponent_Close, "Close" }, // 3861559875
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto, "GetIsAspectRatioAuto" }, // 2868542640
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio, "GetLetterboxAspectRatio" }, // 1554091901
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetLoop, "GetLoop" }, // 3964963462
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer, "GetMediaPlayer" }, // 2428283043
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture, "GetMediaTexture" }, // 3360232586
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange, "GetMeshRange" }, // 2399698243
		{ &Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying, "IsMediaPlatePlaying" }, // 4137322787
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd, "OnMediaEnd" }, // 3316336403
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened, "OnMediaOpened" }, // 657916434
		{ &Z_Construct_UFunction_UMediaPlateComponent_Open, "Open" }, // 2178159378
		{ &Z_Construct_UFunction_UMediaPlateComponent_Pause, "Pause" }, // 3100011912
		{ &Z_Construct_UFunction_UMediaPlateComponent_Play, "Play" }, // 1384632883
		{ &Z_Construct_UFunction_UMediaPlateComponent_Rewind, "Rewind" }, // 3528039465
		{ &Z_Construct_UFunction_UMediaPlateComponent_Seek, "Seek" }, // 3440036258
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto, "SetIsAspectRatioAuto" }, // 1199040476
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio, "SetLetterboxAspectRatio" }, // 1947422109
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetLoop, "SetLoop" }, // 3402638548
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange, "SetMeshRange" }, // 2738307012
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible, "SetPlayOnlyWhenVisible" }, // 3828214280
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a component for AMediaPlate that can play and show media in the world.\n */" },
		{ "IncludePath", "MediaPlateComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "This is a component for AMediaPlate that can play and show media in the world." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then play when opening the media. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then play when opening the media." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bPlayOnOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen = { "bPlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then start playing when this object is active. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then start playing when this object is active." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bAutoPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then enable audio. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then enable audio." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bEnableAudio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio = { "bEnableAudio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** What time to start playing from (in seconds). */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "What time to start playing from (in seconds)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, StartTime), METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Holds the component to play sound. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component to play sound." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x0014040000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Holds the component for the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component for the mesh." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0014040000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_Inner = { "Letterboxes", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Holds the component for the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component for the mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes = { "Letterboxes", nullptr, (EPropertyFlags)0x0014048000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, Letterboxes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** What media playlist to play. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "What media playlist to play." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist = { "MediaPlaylist", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MediaPlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** The current index of the source in the play list being played. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "The current index of the source in the play list being played." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, PlaylistIndex), METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Override the default cache settings. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Override the default cache settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings = { "CacheSettings", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, CacheSettings), Z_Construct_UScriptStruct_FMediaSourceCacheSettings, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings_MetaData)) }; // 2300968702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "IsMediaPlatePlaying" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/**\n\x09 * If true, then we want the media plate to play.\n\x09 * Note that this could be true, but the player is not actually playing because\n\x09 * bPlayOnlyWhenVisible = true and the plate is not visible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true, then we want the media plate to play.\nNote that this could be true, but the player is not actually playing because\nbPlayOnlyWhenVisible = true and the plate is not visible." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bIsMediaPlatePlaying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying = { "bIsMediaPlatePlaying", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Control" },
		{ "Comment", "/** If true then only allow playback when the media plate is visible. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then only allow playback when the media plate is visible." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bPlayOnlyWhenVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible = { "bPlayOnlyWhenVisible", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetLoop" },
		{ "BlueprintSetter", "SetLoop" },
		{ "Category", "Control" },
		{ "Comment", "/** If set then loop when we reach the end. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then loop when we reach the end." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Visible mips and tiles calculation mode for the supported mesh types in MediaPlate. (Player restart on change.) */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Visible mips and tiles calculation mode for the supported mesh types in MediaPlate. (Player restart on change.)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations = { "VisibleMipsTilesCalculations", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, VisibleMipsTilesCalculations), Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_MetaData)) }; // 1505052229
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/** Media texture mip map bias shared between the (image sequence) loader and the media texture sampler. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Media texture mip map bias shared between the (image sequence) loader and the media texture sampler." },
		{ "UIMax", "15.99" },
		{ "UIMin", "-16.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias = { "MipMapBias", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MipMapBias), METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetIsAspectRatioAuto" },
		{ "BlueprintSetter", "SetIsAspectRatioAuto" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/** If true then set the aspect ratio automatically based on the media. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then set the aspect ratio automatically based on the media." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bIsAspectRatioAuto = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto = { "bIsAspectRatioAuto", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/** If true then enable the use of MipLevelToUpscale as defined below. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then enable the use of MipLevelToUpscale as defined below." },
	};
#endif
	void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_SetBit(void* Obj)
	{
		((UMediaPlateComponent*)Obj)->bEnableMipMapUpscaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling = { "bEnableMipMapUpscaling", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/* With exr playback, upscale into lower quality mips from this specified level. All levels including and above the specified value will be fully read. */" },
		{ "EditCondition", "bEnableMipMapUpscaling" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "With exr playback, upscale into lower quality mips from this specified level. All levels including and above the specified value will be fully read." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale = { "MipLevelToUpscale", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MipLevelToUpscale), METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio_MetaData[] = {
		{ "Comment", "/** If > 0, then this is the aspect ratio of our screen and \n\x09 * letterboxes will be added if the media is smaller than the screen. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If > 0, then this is the aspect ratio of our screen and\nletterboxes will be added if the media is smaller than the screen." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio = { "LetterboxAspectRatio", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, LetterboxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange = { "MeshRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MeshRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "Comment", "/** Superseded by MediaTextures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Superseded by MediaTextures." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0046000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MediaTexture_DEPRECATED), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner_MetaData[] = {
		{ "Comment", "/** Holds the media textures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the media textures." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner = { "MediaTextures", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_MetaData[] = {
		{ "Comment", "/** Holds the media textures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the media textures." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures = { "MediaTextures", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MediaTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "Comment", "/** This component's media player */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "This component's media player" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlateComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMediaPlateComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister, (int32)VTABLE_OFFSET(UMediaPlateComponent, IMediaPlayerProxyInterface), false },  // 921733538
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlateComponent_Statics::ClassParams = {
		&UMediaPlateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlateComponent()
	{
		if (!Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton, Z_Construct_UClass_UMediaPlateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton;
	}
	template<> MEDIAPLATE_API UClass* StaticClass<UMediaPlateComponent>()
	{
		return UMediaPlateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlateComponent);
	UMediaPlateComponent::~UMediaPlateComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::EnumInfo[] = {
		{ EMediaPlateEventState_StaticEnum, TEXT("EMediaPlateEventState"), &Z_Registration_Info_UEnum_EMediaPlateEventState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2307847938U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlateComponent, UMediaPlateComponent::StaticClass, TEXT("UMediaPlateComponent"), &Z_Registration_Info_UClass_UMediaPlateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlateComponent), 2659249738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_4094344383(TEXT("/Script/MediaPlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
