// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStreamableRenderAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UStreamableRenderAsset::execSetForceMipLevelsToBeResident)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicLODGroupMask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceMipLevelsToBeResident(Z_Param_Seconds,Z_Param_CinematicLODGroupMask);
		P_NATIVE_END;
	}
	void UStreamableRenderAsset::StaticRegisterNativesUStreamableRenderAsset()
	{
		UClass* Class = UStreamableRenderAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetForceMipLevelsToBeResident", &UStreamableRenderAsset::execSetForceMipLevelsToBeResident },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics
	{
		struct StreamableRenderAsset_eventSetForceMipLevelsToBeResident_Parms
		{
			float Seconds;
			int32 CinematicLODGroupMask;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicLODGroupMask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamableRenderAsset_eventSetForceMipLevelsToBeResident_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicLODGroupMask = { "CinematicLODGroupMask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StreamableRenderAsset_eventSetForceMipLevelsToBeResident_Parms, CinematicLODGroupMask), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicLODGroupMask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Tells the streaming system that it should force all mip-levels to be resident for a number of seconds.\n\x09* @param Seconds\x09\x09\x09\x09\x09""Duration in seconds\n\x09* @param CinematicTextureGroups\x09""Bitfield indicating which texture groups that use extra high-resolution mips\n\x09*/" },
		{ "CPP_Default_CinematicLODGroupMask", "0" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Tells the streaming system that it should force all mip-levels to be resident for a number of seconds.\n@param Seconds                                        Duration in seconds\n@param CinematicTextureGroups Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStreamableRenderAsset, nullptr, "SetForceMipLevelsToBeResident", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::StreamableRenderAsset_eventSetForceMipLevelsToBeResident_Parms), Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStreamableRenderAsset);
	UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister()
	{
		return UStreamableRenderAsset::StaticClass();
	}
	struct Z_Construct_UClass_UStreamableRenderAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ForceMipLevelsToBeResidentTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumCinematicMipLevels_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumCinematicMipLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoRefStreamingLODBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoRefStreamingLODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamingIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StreamingIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeverStream_MetaData[];
#endif
		static void NewProp_NeverStream_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NeverStream;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalForceMipLevelsToBeResident_MetaData[];
#endif
		static void NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalForceMipLevelsToBeResident;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasStreamingUpdatePending_MetaData[];
#endif
		static void NewProp_bHasStreamingUpdatePending_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStreamingUpdatePending;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceMiplevelsToBeResident_MetaData[];
#endif
		static void NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResident;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStreamingMipBias_MetaData[];
#endif
		static void NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStreamingMipBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCinematicMipLevels_MetaData[];
#endif
		static void NewProp_bUseCinematicMipLevels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCinematicMipLevels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStreamableRenderAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStreamableRenderAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStreamableRenderAsset_SetForceMipLevelsToBeResident, "SetForceMipLevelsToBeResident" }, // 2500077089
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/StreamableRenderAsset.h" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[] = {
		{ "Comment", "/** WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp = { "ForceMipLevelsToBeResidentTimestamp", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamableRenderAsset, ForceMipLevelsToBeResidentTimestamp), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Number of mip-levels to use for cinematic quality. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Number of mip-levels to use for cinematic quality." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels = { "NumCinematicMipLevels", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamableRenderAsset, NumCinematicMipLevels), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NoRefStreamingLODBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NoRefStreamingLODBias = { "NoRefStreamingLODBias", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamableRenderAsset, NoRefStreamingLODBias), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NoRefStreamingLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NoRefStreamingLODBias_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData[] = {
		{ "Comment", "/** FStreamingRenderAsset index used by the texture streaming system. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "FStreamingRenderAsset index used by the texture streaming system." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex = { "StreamingIndex", nullptr, (EPropertyFlags)0x0020080400202000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStreamableRenderAsset, StreamingIndex), METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->NeverStream = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream = { "NeverStream", nullptr, (EPropertyFlags)0x0010050000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Global and serialized version of ForceMiplevelsToBeResident.\x09\x09\x09\x09*/" },
		{ "DisplayName", "Global Force Resident Mip Levels" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Global and serialized version of ForceMiplevelsToBeResident." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bGlobalForceMipLevelsToBeResident = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident = { "bGlobalForceMipLevelsToBeResident", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData[] = {
		{ "Comment", "/** Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bHasStreamingUpdatePending = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending = { "bHasStreamingUpdatePending", nullptr, (EPropertyFlags)0x0010000400002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData[] = {
		{ "Comment", "/** Override whether to fully stream even if texture hasn't been rendered.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Override whether to fully stream even if texture hasn't been rendered." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bForceMiplevelsToBeResident = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident = { "bForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData[] = {
		{ "Comment", "/** When forced fully resident, ignores the streaming mip bias used to accommodate memory constraints. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "When forced fully resident, ignores the streaming mip bias used to accommodate memory constraints." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bIgnoreStreamingMipBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias = { "bIgnoreStreamingMipBias", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData[] = {
		{ "Comment", "/** Whether to use the extra cinematic quality mip-levels, when we're forcing mip-levels to be resident. */" },
		{ "ModuleRelativePath", "Classes/Engine/StreamableRenderAsset.h" },
		{ "ToolTip", "Whether to use the extra cinematic quality mip-levels, when we're forcing mip-levels to be resident." },
	};
#endif
	void Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_SetBit(void* Obj)
	{
		((UStreamableRenderAsset*)Obj)->bUseCinematicMipLevels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels = { "bUseCinematicMipLevels", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UStreamableRenderAsset), &Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_ForceMipLevelsToBeResidentTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NumCinematicMipLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NoRefStreamingLODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_StreamingIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_NeverStream,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bGlobalForceMipLevelsToBeResident,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bHasStreamingUpdatePending,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bForceMiplevelsToBeResident,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bIgnoreStreamingMipBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStreamableRenderAsset_Statics::NewProp_bUseCinematicMipLevels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStreamableRenderAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStreamableRenderAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStreamableRenderAsset_Statics::ClassParams = {
		&UStreamableRenderAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStreamableRenderAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStreamableRenderAsset()
	{
		if (!Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton, Z_Construct_UClass_UStreamableRenderAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStreamableRenderAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStreamableRenderAsset>()
	{
		return UStreamableRenderAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStreamableRenderAsset);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStreamableRenderAsset, UStreamableRenderAsset::StaticClass, TEXT("UStreamableRenderAsset"), &Z_Registration_Info_UClass_UStreamableRenderAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStreamableRenderAsset), 4160002104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_1375695104(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StreamableRenderAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
