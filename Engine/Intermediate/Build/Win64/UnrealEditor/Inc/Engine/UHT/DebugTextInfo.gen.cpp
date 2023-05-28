// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugTextInfo() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugTextInfo;
class UScriptStruct* FDebugTextInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugTextInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugTextInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugTextInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebugTextInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DebugTextInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugTextInfo>()
{
	return FDebugTextInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebugTextInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SrcActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcActorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SrcActorOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcActorDesiredOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SrcActorDesiredOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteLocation_MetaData[];
#endif
		static void NewProp_bAbsoluteLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepAttachedToActor_MetaData[];
#endif
		static void NewProp_bKeepAttachedToActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepAttachedToActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawShadow_MetaData[];
#endif
		static void NewProp_bDrawShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrigActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OrigActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Font_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FontScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Single entry of a debug text item to render. \n *\n * @see AHud\n * @see AddDebugText(), RemoveDebugText() and DrawDebugTextList()\n */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "* Single entry of a debug text item to render.\n*\n* @see AHud\n* @see AddDebugText(), RemoveDebugText() and DrawDebugTextList()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugTextInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData[] = {
		{ "Comment", "/**  AActor related to text item */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "AActor related to text item" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor = { "SrcActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData[] = {
		{ "Comment", "/** Offset from SrcActor.Location to apply */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Offset from SrcActor.Location to apply" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset = { "SrcActorOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActorOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData[] = {
		{ "Comment", "/** Desired offset to interpolate to */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Desired offset to interpolate to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset = { "SrcActorDesiredOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, SrcActorDesiredOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData[] = {
		{ "Comment", "/** Text to display */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Text to display" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText = { "DebugText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, DebugText), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData[] = {
		{ "Comment", "/** Time remaining for the debug text, -1.f == infinite */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Time remaining for the debug text, -1.f == infinite" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, TimeRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Comment", "/** Duration used to lerp desired offset */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Duration used to lerp desired offset" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData[] = {
		{ "Comment", "/** Text color */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Text color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, TextColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData[] = {
		{ "Comment", "/** whether the offset should be treated as absolute world location of the string */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "whether the offset should be treated as absolute world location of the string" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bAbsoluteLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation = { "bAbsoluteLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData[] = {
		{ "Comment", "/** If the actor moves does the text also move with it? */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "If the actor moves does the text also move with it?" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bKeepAttachedToActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor = { "bKeepAttachedToActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData[] = {
		{ "Comment", "/** Whether to draw a shadow for the text */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Whether to draw a shadow for the text" },
	};
#endif
	void Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_SetBit(void* Obj)
	{
		((FDebugTextInfo*)Obj)->bDrawShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow = { "bDrawShadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDebugTextInfo), &Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData[] = {
		{ "Comment", "/** When we first spawn store off the original actor location for use with bKeepAttachedToActor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "When we first spawn store off the original actor location for use with bKeepAttachedToActor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation = { "OrigActorLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, OrigActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData[] = {
		{ "Comment", "/** The Font which to display this as.  Will Default to GetSmallFont()**/" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "The Font which to display this as.  Will Default to GetSmallFont()*" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font = { "Font", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, Font), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData[] = {
		{ "Comment", "/** Scale to apply to font when rendering */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DebugTextInfo.h" },
		{ "ToolTip", "Scale to apply to font when rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale = { "FontScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTextInfo, FontScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_SrcActorDesiredOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_DebugText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bAbsoluteLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bKeepAttachedToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_bDrawShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_OrigActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewProp_FontScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugTextInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugTextInfo",
		sizeof(FDebugTextInfo),
		alignof(FDebugTextInfo),
		Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTextInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugTextInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugTextInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugTextInfo.InnerSingleton, Z_Construct_UScriptStruct_FDebugTextInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugTextInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DebugTextInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DebugTextInfo_h_Statics::ScriptStructInfo[] = {
		{ FDebugTextInfo::StaticStruct, Z_Construct_UScriptStruct_FDebugTextInfo_Statics::NewStructOps, TEXT("DebugTextInfo"), &Z_Registration_Info_UScriptStruct_DebugTextInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugTextInfo), 3821770259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DebugTextInfo_h_1201102834(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DebugTextInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DebugTextInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
