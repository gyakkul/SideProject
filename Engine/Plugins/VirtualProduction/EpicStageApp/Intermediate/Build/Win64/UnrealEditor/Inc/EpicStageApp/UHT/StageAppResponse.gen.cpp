// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StageAppResponse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageAppResponse() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCActorDragCancelled();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent();
	EPICSTAGEAPP_API UScriptStruct* Z_Construct_UScriptStruct_FRCRequestedActorsCreated();
	UPackage* Z_Construct_UPackage__Script_EpicStageApp();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent;
class UScriptStruct* FRCPreviewRendererCreatedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCPreviewRendererCreatedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCPreviewRendererCreatedEvent>()
{
	return FRCPreviewRendererCreatedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event sent to a client that created a renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Event sent to a client that created a renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPreviewRendererCreatedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRendererCreatedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the new renderer\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The ID of the new renderer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRendererCreatedEvent, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_RendererId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewProp_RendererId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCPreviewRendererCreatedEvent",
		sizeof(FRCPreviewRendererCreatedEvent),
		alignof(FRCPreviewRendererCreatedEvent),
		Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition;
class UScriptStruct* FRCPreviewRenderCompletedEventActorPosition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCPreviewRenderCompletedEventActorPosition"));
	}
	return Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCPreviewRenderCompletedEventActorPosition>()
{
	return FRCPreviewRenderCompletedEventActorPosition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPreviewRenderCompletedEventActorPosition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Path_MetaData[] = {
		{ "Comment", "/** The actor's path. */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The actor's path." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEventActorPosition, Path), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Path_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** The actor's position on the preview texture in coordinates normalized to the size of the preview render's texture. */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The actor's position on the preview texture in coordinates normalized to the size of the preview render's texture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEventActorPosition, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Position_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewProp_Position,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCPreviewRenderCompletedEventActorPosition",
		sizeof(FRCPreviewRenderCompletedEventActorPosition),
		alignof(FRCPreviewRenderCompletedEventActorPosition),
		Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.InnerSingleton, Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent;
class UScriptStruct* FRCPreviewRenderCompletedEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCPreviewRenderCompletedEvent"));
	}
	return Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCPreviewRenderCompletedEvent>()
{
	return FRCPreviewRenderCompletedEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageBase64_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImageBase64;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorPositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNumber_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_SequenceNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsRealTimeDisabled_MetaData[];
#endif
		static void NewProp_IsRealTimeDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRealTimeDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event sent to a client that created a renderer.\n */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Event sent to a client that created a renderer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCPreviewRenderCompletedEvent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer that created the image.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The ID of the renderer that created the image." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_RendererId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ImageBase64_MetaData[] = {
		{ "Comment", "/**\n\x09 * Base64 encoded JPEG data of the preview render.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Base64 encoded JPEG data of the preview render." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ImageBase64 = { "ImageBase64", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, ImageBase64), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ImageBase64_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ImageBase64_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Resolution_MetaData[] = {
		{ "Comment", "/**\n\x09 * The resolution of the image included with this message.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The resolution of the image included with this message." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, Resolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Resolution_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions_Inner = { "ActorPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition, METADATA_PARAMS(nullptr, 0) }; // 1310360203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions_MetaData[] = {
		{ "Comment", "/**\n\x09 * A list of projected positions within the preview render for each rendered actor.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "A list of projected positions within the preview render for each rendered actor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions = { "ActorPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, ActorPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions_MetaData)) }; // 1310360203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_SequenceNumber_MetaData[] = {
		{ "Comment", "/**\n\x09 * The last sequence number that the client sent during a stage actor drag operation on this renderer.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The last sequence number that the client sent during a stage actor drag operation on this renderer." },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_SequenceNumber = { "SequenceNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCPreviewRenderCompletedEvent, SequenceNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_SequenceNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_SequenceNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, real-time preview rendering is disabled in the engine, which may prevent nDisplay previews and stage actor positions from updating correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "If true, real-time preview rendering is disabled in the engine, which may prevent nDisplay previews and stage actor positions from updating correctly." },
	};
#endif
	void Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled_SetBit(void* Obj)
	{
		((FRCPreviewRenderCompletedEvent*)Obj)->IsRealTimeDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled = { "IsRealTimeDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRCPreviewRenderCompletedEvent), &Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_RendererId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ImageBase64,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_ActorPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_SequenceNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewProp_IsRealTimeDisabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCPreviewRenderCompletedEvent",
		sizeof(FRCPreviewRenderCompletedEvent),
		alignof(FRCPreviewRenderCompletedEvent),
		Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.InnerSingleton, Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCActorDragCancelled;
class UScriptStruct* FRCActorDragCancelled::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCActorDragCancelled.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCActorDragCancelled.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCActorDragCancelled, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCActorDragCancelled"));
	}
	return Z_Registration_Info_UScriptStruct_RCActorDragCancelled.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCActorDragCancelled>()
{
	return FRCActorDragCancelled::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event sent to a client when a drag operation is cancelled by the engine.\n */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Event sent to a client when a drag operation is cancelled by the engine." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCActorDragCancelled>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorDragCancelled, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_RendererId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID of the renderer associated with the drag operation.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The ID of the renderer associated with the drag operation." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_RendererId = { "RendererId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCActorDragCancelled, RendererId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_RendererId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_RendererId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewProp_RendererId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCActorDragCancelled",
		sizeof(FRCActorDragCancelled),
		alignof(FRCActorDragCancelled),
		Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCActorDragCancelled()
	{
		if (!Z_Registration_Info_UScriptStruct_RCActorDragCancelled.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCActorDragCancelled.InnerSingleton, Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCActorDragCancelled.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated;
class UScriptStruct* FRCRequestedActorsCreated::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCRequestedActorsCreated, (UObject*)Z_Construct_UPackage__Script_EpicStageApp(), TEXT("RCRequestedActorsCreated"));
	}
	return Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.OuterSingleton;
}
template<> EPICSTAGEAPP_API UScriptStruct* StaticStruct<FRCRequestedActorsCreated>()
{
	return FRCRequestedActorsCreated::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorPaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RequestId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Event sent to a client when light cards were created at the request of the client.\n */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Event sent to a client when light cards were created at the request of the client." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCRequestedActorsCreated>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/**\n\x09 * Type of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "Type of the event." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestedActorsCreated, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths_Inner = { "ActorPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths_MetaData[] = {
		{ "Comment", "/**\n\x09 * The list of newly-created actors' paths.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The list of newly-created actors' paths." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths = { "ActorPaths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestedActorsCreated, ActorPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_RequestId_MetaData[] = {
		{ "Comment", "/**\n\x09 * The ID passed when the actors were created, or -1 if no ID was provided.\n\x09 */" },
		{ "ModuleRelativePath", "Private/StageAppResponse.h" },
		{ "ToolTip", "The ID passed when the actors were created, or -1 if no ID was provided." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRequestedActorsCreated, RequestId), METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_RequestId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_RequestId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_ActorPaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewProp_RequestId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicStageApp,
		nullptr,
		&NewStructOps,
		"RCRequestedActorsCreated",
		sizeof(FRCRequestedActorsCreated),
		alignof(FRCRequestedActorsCreated),
		Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCRequestedActorsCreated()
	{
		if (!Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.InnerSingleton, Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppResponse_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppResponse_h_Statics::ScriptStructInfo[] = {
		{ FRCPreviewRendererCreatedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPreviewRendererCreatedEvent_Statics::NewStructOps, TEXT("RCPreviewRendererCreatedEvent"), &Z_Registration_Info_UScriptStruct_RCPreviewRendererCreatedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPreviewRendererCreatedEvent), 3362272028U) },
		{ FRCPreviewRenderCompletedEventActorPosition::StaticStruct, Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEventActorPosition_Statics::NewStructOps, TEXT("RCPreviewRenderCompletedEventActorPosition"), &Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEventActorPosition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPreviewRenderCompletedEventActorPosition), 1310360203U) },
		{ FRCPreviewRenderCompletedEvent::StaticStruct, Z_Construct_UScriptStruct_FRCPreviewRenderCompletedEvent_Statics::NewStructOps, TEXT("RCPreviewRenderCompletedEvent"), &Z_Registration_Info_UScriptStruct_RCPreviewRenderCompletedEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCPreviewRenderCompletedEvent), 375951419U) },
		{ FRCActorDragCancelled::StaticStruct, Z_Construct_UScriptStruct_FRCActorDragCancelled_Statics::NewStructOps, TEXT("RCActorDragCancelled"), &Z_Registration_Info_UScriptStruct_RCActorDragCancelled, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCActorDragCancelled), 2919169012U) },
		{ FRCRequestedActorsCreated::StaticStruct, Z_Construct_UScriptStruct_FRCRequestedActorsCreated_Statics::NewStructOps, TEXT("RCRequestedActorsCreated"), &Z_Registration_Info_UScriptStruct_RCRequestedActorsCreated, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCRequestedActorsCreated), 4286206731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppResponse_h_3352746931(TEXT("/Script/EpicStageApp"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppResponse_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_EpicStageApp_Source_EpicStageApp_Private_StageAppResponse_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
