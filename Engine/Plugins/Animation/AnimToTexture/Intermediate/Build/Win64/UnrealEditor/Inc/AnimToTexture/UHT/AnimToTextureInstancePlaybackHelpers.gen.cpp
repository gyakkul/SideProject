// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimToTextureInstancePlaybackHelpers.h"
#include "../../Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimToTextureInstancePlaybackHelpers() {}
// Cross Module References
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary();
	ANIMTOTEXTURE_API UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAnimState();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureInstanceData();
	ANIMTOTEXTURE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData();
	UPackage* Z_Construct_UPackage__Script_AnimToTexture();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureAnimState;
class UScriptStruct* FAnimToTextureAnimState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureAnimState, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureAnimState"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureAnimState>()
{
	return FAnimToTextureAnimState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalStartTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Use floats to match custom floats of instanced static mesh\n// We could pack a float w/ more parameters if desired\n" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Use floats to match custom floats of instanced static mesh\nWe could pack a float w/ more parameters if desired" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureAnimState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureAnimState, StartFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureAnimState, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureAnimState, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureAnimState, bLooping), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_bLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_GlobalStartTime_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_GlobalStartTime = { "GlobalStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureAnimState, GlobalStartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_GlobalStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_GlobalStartTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewProp_GlobalStartTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureAnimState",
		sizeof(FAnimToTextureAnimState),
		alignof(FAnimToTextureAnimState),
		Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAnimState()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureAnimState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData;
class UScriptStruct* FAnimToTextureInstancePlaybackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureInstancePlaybackData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureInstancePlaybackData>()
{
	return FAnimToTextureInstancePlaybackData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureInstancePlaybackData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "AnimToTexture" },
		{ "Comment", "// Store prev state to allow blending of prev->current state in material\n// Uncomment this if we start blending states\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AnimToTexture\")\n//FAnimToTextureAnimState PrevState;\n" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
		{ "ToolTip", "Store prev state to allow blending of prev->current state in material\nUncomment this if we start blending states\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"AnimToTexture\")\nFAnimToTextureAnimState PrevState;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureInstancePlaybackData, CurrentState), Z_Construct_UScriptStruct_FAnimToTextureAnimState, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewProp_CurrentState_MetaData)) }; // 3899064024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewProp_CurrentState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureInstancePlaybackData",
		sizeof(FAnimToTextureInstancePlaybackData),
		alignof(FAnimToTextureInstancePlaybackData),
		Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData;
class UScriptStruct* FAnimToTextureAnimationSyncData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureAnimationSyncData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureAnimationSyncData>()
{
	return FAnimToTextureAnimationSyncData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureAnimationSyncData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureAnimationSyncData",
		sizeof(FAnimToTextureAnimationSyncData),
		alignof(FAnimToTextureAnimationSyncData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData;
class UScriptStruct* FAnimToTextureInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimToTextureInstanceData, (UObject*)Z_Construct_UPackage__Script_AnimToTexture(), TEXT("AnimToTextureInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.OuterSingleton;
}
template<> ANIMTOTEXTURE_API UScriptStruct* StaticStruct<FAnimToTextureInstanceData>()
{
	return FAnimToTextureInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlaybackData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshInstanceData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshInstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticMeshInstanceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimToTextureInstanceData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData_Inner = { "PlaybackData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData, METADATA_PARAMS(nullptr, 0) }; // 2844828982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData = { "PlaybackData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureInstanceData, PlaybackData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData_MetaData)) }; // 2844828982
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData_Inner = { "StaticMeshInstanceData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStaticMeshInstanceData, METADATA_PARAMS(nullptr, 0) }; // 1322225863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData = { "StaticMeshInstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimToTextureInstanceData, StaticMeshInstanceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData_MetaData)) }; // 1322225863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_PlaybackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewProp_StaticMeshInstanceData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
		nullptr,
		&NewStructOps,
		"AnimToTextureInstanceData",
		sizeof(FAnimToTextureInstanceData),
		alignof(FAnimToTextureInstanceData),
		Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimToTextureInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execAnimStateFromDataAsset)
	{
		P_GET_OBJECT(UAnimToTextureDataAsset,Z_Param_DataAsset);
		P_GET_PROPERTY(FIntProperty,Z_Param_StateIndex);
		P_GET_STRUCT_REF(FAnimToTextureAnimState,Z_Param_Out_AnimState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::AnimStateFromDataAsset(Z_Param_DataAsset,Z_Param_StateIndex,Z_Param_Out_AnimState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execGetInstanceTransform)
	{
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InstanceTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::GetInstanceTransform(Z_Param_Out_InstanceData,Z_Param_InstanceIndex,Z_Param_Out_InstanceTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execGetInstancePlaybackData)
	{
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FAnimToTextureInstancePlaybackData,Z_Param_Out_InstancePlaybackData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::GetInstancePlaybackData(Z_Param_Out_InstanceData,Z_Param_InstanceIndex,Z_Param_Out_InstancePlaybackData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceData)
	{
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FAnimToTextureInstancePlaybackData,Z_Param_Out_PlaybackData);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimToTextureInstancePlaybackLibrary::UpdateInstanceData(Z_Param_Out_InstanceData,Z_Param_InstanceIndex,Z_Param_Out_PlaybackData,Z_Param_Out_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execAllocateInstanceData)
	{
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureInstancePlaybackLibrary::AllocateInstanceData(Z_Param_Out_InstanceData,Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancedMeshComponent)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureInstancePlaybackLibrary::BatchUpdateInstancedMeshComponent(Z_Param_InstancedMeshComponent,Z_Param_Out_InstanceData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimToTextureInstancePlaybackLibrary::execSetupInstancedMeshComponent)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_InstancedMeshComponent);
		P_GET_STRUCT_REF(FAnimToTextureInstanceData,Z_Param_Out_InstanceData);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimToTextureInstancePlaybackLibrary::SetupInstancedMeshComponent(Z_Param_InstancedMeshComponent,Z_Param_Out_InstanceData,Z_Param_NumInstances);
		P_NATIVE_END;
	}
	void UAnimToTextureInstancePlaybackLibrary::StaticRegisterNativesUAnimToTextureInstancePlaybackLibrary()
	{
		UClass* Class = UAnimToTextureInstancePlaybackLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AllocateInstanceData", &UAnimToTextureInstancePlaybackLibrary::execAllocateInstanceData },
			{ "AnimStateFromDataAsset", &UAnimToTextureInstancePlaybackLibrary::execAnimStateFromDataAsset },
			{ "BatchUpdateInstancedMeshComponent", &UAnimToTextureInstancePlaybackLibrary::execBatchUpdateInstancedMeshComponent },
			{ "GetInstancePlaybackData", &UAnimToTextureInstancePlaybackLibrary::execGetInstancePlaybackData },
			{ "GetInstanceTransform", &UAnimToTextureInstancePlaybackLibrary::execGetInstanceTransform },
			{ "SetupInstancedMeshComponent", &UAnimToTextureInstancePlaybackLibrary::execSetupInstancedMeshComponent },
			{ "UpdateInstanceData", &UAnimToTextureInstancePlaybackLibrary::execUpdateInstanceData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventAllocateInstanceData_Parms
		{
			FAnimToTextureInstanceData InstanceData;
			int32 Count;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventAllocateInstanceData_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(nullptr, 0) }; // 935708691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventAllocateInstanceData_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "AllocateInstanceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::AnimToTextureInstancePlaybackLibrary_eventAllocateInstanceData_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms
		{
			const UAnimToTextureDataAsset* DataAsset;
			int32 StateIndex;
			FAnimToTextureAnimState AnimState;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_StateIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, DataAsset), Z_Construct_UClass_UAnimToTextureDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_StateIndex = { "StateIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, StateIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_AnimState = { "AnimState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms, AnimState), Z_Construct_UScriptStruct_FAnimToTextureAnimState, METADATA_PARAMS(nullptr, 0) }; // 3899064024
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_DataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_StateIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_AnimState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "AnimStateFromDataAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::AnimToTextureInstancePlaybackLibrary_eventAnimStateFromDataAsset_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancedMeshComponent_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			FAnimToTextureInstanceData InstanceData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancedMeshComponent_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancedMeshComponent_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(nullptr, 0) }; // 935708691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::NewProp_InstanceData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "BatchUpdateInstancedMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::AnimToTextureInstancePlaybackLibrary_eventBatchUpdateInstancedMeshComponent_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms
		{
			FAnimToTextureInstanceData InstanceData;
			int32 InstanceIndex;
			FAnimToTextureInstancePlaybackData InstancePlaybackData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancePlaybackData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceData_MetaData)) }; // 935708691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstancePlaybackData = { "InstancePlaybackData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms, InstancePlaybackData), Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData, METADATA_PARAMS(nullptr, 0) }; // 2844828982
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_InstancePlaybackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "GetInstancePlaybackData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::AnimToTextureInstancePlaybackLibrary_eventGetInstancePlaybackData_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms
		{
			FAnimToTextureInstanceData InstanceData;
			int32 InstanceIndex;
			FTransform InstanceTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceData_MetaData)) }; // 935708691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceTransform = { "InstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms, InstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_InstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "GetInstanceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::AnimToTextureInstancePlaybackLibrary_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms
		{
			UInstancedStaticMeshComponent* InstancedMeshComponent;
			FAnimToTextureInstanceData InstanceData;
			int32 NumInstances;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMeshComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent = { "InstancedMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms, InstancedMeshComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(nullptr, 0) }; // 935708691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms, NumInstances), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstancedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::NewProp_NumInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "SetupInstancedMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::AnimToTextureInstancePlaybackLibrary_eventSetupInstancedMeshComponent_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics
	{
		struct AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms
		{
			FAnimToTextureInstanceData InstanceData;
			int32 InstanceIndex;
			FAnimToTextureInstancePlaybackData PlaybackData;
			FTransform Transform;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaybackData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms, InstanceData), Z_Construct_UScriptStruct_FAnimToTextureInstanceData, METADATA_PARAMS(nullptr, 0) }; // 935708691
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_PlaybackData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_PlaybackData = { "PlaybackData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms, PlaybackData), Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_PlaybackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_PlaybackData_MetaData)) }; // 2844828982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_Transform_MetaData)) };
	void Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms), &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_PlaybackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimToTexture|Playback" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, nullptr, "UpdateInstanceData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::AnimToTextureInstancePlaybackLibrary_eventUpdateInstanceData_Parms), Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimToTextureInstancePlaybackLibrary);
	UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_NoRegister()
	{
		return UAnimToTextureInstancePlaybackLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimToTexture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AllocateInstanceData, "AllocateInstanceData" }, // 1272003920
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_AnimStateFromDataAsset, "AnimStateFromDataAsset" }, // 902750144
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_BatchUpdateInstancedMeshComponent, "BatchUpdateInstancedMeshComponent" }, // 2589116051
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstancePlaybackData, "GetInstancePlaybackData" }, // 2507062847
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_GetInstanceTransform, "GetInstanceTransform" }, // 3641327274
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_SetupInstancedMeshComponent, "SetupInstancedMeshComponent" }, // 2251259501
		{ &Z_Construct_UFunction_UAnimToTextureInstancePlaybackLibrary_UpdateInstanceData, "UpdateInstanceData" }, // 247131844
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimToTextureInstancePlaybackHelpers.h" },
		{ "ModuleRelativePath", "Public/AnimToTextureInstancePlaybackHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimToTextureInstancePlaybackLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::ClassParams = {
		&UAnimToTextureInstancePlaybackLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton, Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary.OuterSingleton;
	}
	template<> ANIMTOTEXTURE_API UClass* StaticClass<UAnimToTextureInstancePlaybackLibrary>()
	{
		return UAnimToTextureInstancePlaybackLibrary::StaticClass();
	}
	UAnimToTextureInstancePlaybackLibrary::UAnimToTextureInstancePlaybackLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimToTextureInstancePlaybackLibrary);
	UAnimToTextureInstancePlaybackLibrary::~UAnimToTextureInstancePlaybackLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo[] = {
		{ FAnimToTextureAnimState::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureAnimState_Statics::NewStructOps, TEXT("AnimToTextureAnimState"), &Z_Registration_Info_UScriptStruct_AnimToTextureAnimState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureAnimState), 3899064024U) },
		{ FAnimToTextureInstancePlaybackData::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureInstancePlaybackData_Statics::NewStructOps, TEXT("AnimToTextureInstancePlaybackData"), &Z_Registration_Info_UScriptStruct_AnimToTextureInstancePlaybackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureInstancePlaybackData), 2844828982U) },
		{ FAnimToTextureAnimationSyncData::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureAnimationSyncData_Statics::NewStructOps, TEXT("AnimToTextureAnimationSyncData"), &Z_Registration_Info_UScriptStruct_AnimToTextureAnimationSyncData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureAnimationSyncData), 2523245190U) },
		{ FAnimToTextureInstanceData::StaticStruct, Z_Construct_UScriptStruct_FAnimToTextureInstanceData_Statics::NewStructOps, TEXT("AnimToTextureInstanceData"), &Z_Registration_Info_UScriptStruct_AnimToTextureInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimToTextureInstanceData), 935708691U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimToTextureInstancePlaybackLibrary, UAnimToTextureInstancePlaybackLibrary::StaticClass, TEXT("UAnimToTextureInstancePlaybackLibrary"), &Z_Registration_Info_UClass_UAnimToTextureInstancePlaybackLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimToTextureInstancePlaybackLibrary), 2044894826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_252391333(TEXT("/Script/AnimToTexture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimToTexture_Source_AnimToTexture_Public_AnimToTextureInstancePlaybackHelpers_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
