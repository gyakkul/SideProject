// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARSharedWorldGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSharedWorldGameMode() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameMode();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameMode_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARSharedWorldReplicationState();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState;
class UScriptStruct* FARSharedWorldReplicationState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARSharedWorldReplicationState, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARSharedWorldReplicationState"));
	}
	return Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARSharedWorldReplicationState>()
{
	return FARSharedWorldReplicationState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImageOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewImageOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARWorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ARWorldOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Per player information about what data has been sent to them */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Per player information about what data has been sent to them" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARSharedWorldReplicationState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The offset in the overall image data buffer */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The offset in the overall image data buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset = { "PreviewImageOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSharedWorldReplicationState, PreviewImageOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The offset in the overall ARWorld data buffer */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The offset in the overall ARWorld data buffer" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset = { "ARWorldOffset", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARSharedWorldReplicationState, ARWorldOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_PreviewImageOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewProp_ARWorldOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARSharedWorldReplicationState",
		sizeof(FARSharedWorldReplicationState),
		alignof(FARSharedWorldReplicationState),
		Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARSharedWorldReplicationState()
	{
		if (!Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.InnerSingleton, Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState.InnerSingleton;
	}
	DEFINE_FUNCTION(AARSharedWorldGameMode::execGetARSharedWorldGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AARSharedWorldGameState**)Z_Param__Result=P_THIS->GetARSharedWorldGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldGameMode::execSetARWorldSharingIsReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetARWorldSharingIsReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldGameMode::execSetARSharedWorldData)
	{
		P_GET_TARRAY(uint8,Z_Param_ARWorldData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetARSharedWorldData(Z_Param_ARWorldData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldGameMode::execSetPreviewImageData)
	{
		P_GET_TARRAY(uint8,Z_Param_ImageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPreviewImageData(Z_Param_ImageData);
		P_NATIVE_END;
	}
	void AARSharedWorldGameMode::StaticRegisterNativesAARSharedWorldGameMode()
	{
		UClass* Class = AARSharedWorldGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetARSharedWorldGameState", &AARSharedWorldGameMode::execGetARSharedWorldGameState },
			{ "SetARSharedWorldData", &AARSharedWorldGameMode::execSetARSharedWorldData },
			{ "SetARWorldSharingIsReady", &AARSharedWorldGameMode::execSetARWorldSharingIsReady },
			{ "SetPreviewImageData", &AARSharedWorldGameMode::execSetPreviewImageData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics
	{
		struct ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms
		{
			AARSharedWorldGameState* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms, ReturnValue), Z_Construct_UClass_AARSharedWorldGameState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/**\n\x09 * @return the game state for this game mode\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "@return the game state for this game mode" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "GetARSharedWorldGameState", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::ARSharedWorldGameMode_eventGetARSharedWorldGameState_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics
	{
		struct ARSharedWorldGameMode_eventSetARSharedWorldData_Parms
		{
			TArray<uint8> ARWorldData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ARWorldData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ARWorldData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData_Inner = { "ARWorldData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData = { "ARWorldData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldGameMode_eventSetARSharedWorldData_Parms, ARWorldData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::NewProp_ARWorldData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/**\n\x09 * Sets the image data for the shared world game session\n\x09 *\n\x09 * @param ARWorldData the blob to use as the AR world data\n\x09 */" },
		{ "DisplayName", "Set AR Shared World Data" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Sets the image data for the shared world game session\n\n@param ARWorldData the blob to use as the AR world data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetARSharedWorldData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::ARSharedWorldGameMode_eventSetARSharedWorldData_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/**\n\x09 * Tells the game mode that the AR data is ready and should be replicated to all connected clients\n\x09 */" },
		{ "DisplayName", "Set AR World Sharing Is Ready" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Tells the game mode that the AR data is ready and should be replicated to all connected clients" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetARWorldSharingIsReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics
	{
		struct ARSharedWorldGameMode_eventSetPreviewImageData_Parms
		{
			TArray<uint8> ImageData;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ImageData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImageData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData_Inner = { "ImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData = { "ImageData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldGameMode_eventSetPreviewImageData_Parms, ImageData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::NewProp_ImageData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/**\n\x09 * Sets the image data for the shared world game session\n\x09 *\n\x09 * @param ImageData the blob to use as the image data\n\x09 */" },
		{ "DisplayName", "Set AR Preview Image Data" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "Sets the image data for the shared world game session\n\n@param ImageData the blob to use as the image data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameMode, nullptr, "SetPreviewImageData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::ARSharedWorldGameMode_eventSetPreviewImageData_Parms), Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARSharedWorldGameMode);
	UClass* Z_Construct_UClass_AARSharedWorldGameMode_NoRegister()
	{
		return AARSharedWorldGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AARSharedWorldGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferSizePerChunk_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BufferSizePerChunk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSharedWorldGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSharedWorldGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState, "GetARSharedWorldGameState" }, // 3706548298
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData, "SetARSharedWorldData" }, // 410615396
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady, "SetARWorldSharingIsReady" }, // 3100156784
		{ &Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData, "SetPreviewImageData" }, // 1180936491
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ARSharedWorldGameMode.h" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The size of the buffer to use per send request. Must be between 1 and 65535, though should not be max to avoid saturation */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameMode.h" },
		{ "ToolTip", "The size of the buffer to use per send request. Must be between 1 and 65535, though should not be max to avoid saturation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk = { "BufferSizePerChunk", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameMode, BufferSizePerChunk), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameMode_Statics::NewProp_BufferSizePerChunk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSharedWorldGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSharedWorldGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARSharedWorldGameMode_Statics::ClassParams = {
		&AARSharedWorldGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSharedWorldGameMode()
	{
		if (!Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton, Z_Construct_UClass_AARSharedWorldGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSharedWorldGameMode>()
	{
		return AARSharedWorldGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSharedWorldGameMode);
	AARSharedWorldGameMode::~AARSharedWorldGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ScriptStructInfo[] = {
		{ FARSharedWorldReplicationState::StaticStruct, Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewStructOps, TEXT("ARSharedWorldReplicationState"), &Z_Registration_Info_UScriptStruct_ARSharedWorldReplicationState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARSharedWorldReplicationState), 2768720072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARSharedWorldGameMode, AARSharedWorldGameMode::StaticClass, TEXT("AARSharedWorldGameMode"), &Z_Registration_Info_UClass_AARSharedWorldGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARSharedWorldGameMode), 2555855728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_796006330(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
