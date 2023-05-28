// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARSharedWorldPlayerController.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSharedWorldPlayerController() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldPlayerController();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	DEFINE_FUNCTION(AARSharedWorldPlayerController::execClientUpdateARWorldData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_TARRAY(uint8,Z_Param_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientUpdateARWorldData_Validate(Z_Param_Offset,Z_Param_Buffer))
		{
			RPC_ValidateFailed(TEXT("ClientUpdateARWorldData_Validate"));
			return;
		}
		P_THIS->ClientUpdateARWorldData_Implementation(Z_Param_Offset,Z_Param_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldPlayerController::execClientUpdatePreviewImageData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Offset);
		P_GET_TARRAY(uint8,Z_Param_Buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientUpdatePreviewImageData_Validate(Z_Param_Offset,Z_Param_Buffer))
		{
			RPC_ValidateFailed(TEXT("ClientUpdatePreviewImageData_Validate"));
			return;
		}
		P_THIS->ClientUpdatePreviewImageData_Implementation(Z_Param_Offset,Z_Param_Buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldPlayerController::execClientInitSharedWorld)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PreviewImageSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_ARWorldDataSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ClientInitSharedWorld_Validate(Z_Param_PreviewImageSize,Z_Param_ARWorldDataSize))
		{
			RPC_ValidateFailed(TEXT("ClientInitSharedWorld_Validate"));
			return;
		}
		P_THIS->ClientInitSharedWorld_Implementation(Z_Param_PreviewImageSize,Z_Param_ARWorldDataSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AARSharedWorldPlayerController::execServerMarkReadyForReceiving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMarkReadyForReceiving_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerMarkReadyForReceiving_Validate"));
			return;
		}
		P_THIS->ServerMarkReadyForReceiving_Implementation();
		P_NATIVE_END;
	}
	struct ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms
	{
		int32 PreviewImageSize;
		int32 ARWorldDataSize;
	};
	struct ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms
	{
		int32 Offset;
		TArray<uint8> Buffer;
	};
	struct ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms
	{
		int32 Offset;
		TArray<uint8> Buffer;
	};
	static FName NAME_AARSharedWorldPlayerController_ClientInitSharedWorld = FName(TEXT("ClientInitSharedWorld"));
	void AARSharedWorldPlayerController::ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize)
	{
		ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms Parms;
		Parms.PreviewImageSize=PreviewImageSize;
		Parms.ARWorldDataSize=ARWorldDataSize;
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldPlayerController_ClientInitSharedWorld),&Parms);
	}
	static FName NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData = FName(TEXT("ClientUpdateARWorldData"));
	void AARSharedWorldPlayerController::ClientUpdateARWorldData(int32 Offset, TArray<uint8> const& Buffer)
	{
		ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms Parms;
		Parms.Offset=Offset;
		Parms.Buffer=Buffer;
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData),&Parms);
	}
	static FName NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData = FName(TEXT("ClientUpdatePreviewImageData"));
	void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int32 Offset, TArray<uint8> const& Buffer)
	{
		ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms Parms;
		Parms.Offset=Offset;
		Parms.Buffer=Buffer;
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData),&Parms);
	}
	static FName NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving = FName(TEXT("ServerMarkReadyForReceiving"));
	void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving),NULL);
	}
	void AARSharedWorldPlayerController::StaticRegisterNativesAARSharedWorldPlayerController()
	{
		UClass* Class = AARSharedWorldPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientInitSharedWorld", &AARSharedWorldPlayerController::execClientInitSharedWorld },
			{ "ClientUpdateARWorldData", &AARSharedWorldPlayerController::execClientUpdateARWorldData },
			{ "ClientUpdatePreviewImageData", &AARSharedWorldPlayerController::execClientUpdatePreviewImageData },
			{ "ServerMarkReadyForReceiving", &AARSharedWorldPlayerController::execServerMarkReadyForReceiving },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewImageSize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ARWorldDataSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::NewProp_PreviewImageSize = { "PreviewImageSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms, PreviewImageSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::NewProp_ARWorldDataSize = { "ARWorldDataSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms, ARWorldDataSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::NewProp_PreviewImageSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::NewProp_ARWorldDataSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Used to setup the initial values and size the arrays (client)\n\x09 *\n\x09 * @param PreviewImageSize the total size in bytes of the image data that will be sent\n\x09 * @param ARWorldDataSize the total size in bytes of the AR world data that will be sent\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldPlayerController.h" },
		{ "ToolTip", "Used to setup the initial values and size the arrays (client)\n\n@param PreviewImageSize the total size in bytes of the image data that will be sent\n@param ARWorldDataSize the total size in bytes of the AR world data that will be sent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldPlayerController, nullptr, "ClientInitSharedWorld", nullptr, nullptr, sizeof(ARSharedWorldPlayerController_eventClientInitSharedWorld_Parms), Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Copies the buffer into the AR world data (client)\n\x09 *\n\x09 * @param Offset where in the buffer to start the copying\n\x09 * @param Buffer the chunk of data to copy\n\x09 * @param BufferSize the amount of data to copy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldPlayerController.h" },
		{ "ToolTip", "Copies the buffer into the AR world data (client)\n\n@param Offset where in the buffer to start the copying\n@param Buffer the chunk of data to copy\n@param BufferSize the amount of data to copy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldPlayerController, nullptr, "ClientUpdateARWorldData", nullptr, nullptr, sizeof(ARSharedWorldPlayerController_eventClientUpdateARWorldData_Parms), Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Buffer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Buffer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms, Offset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer_Inner = { "Buffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms, Buffer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::NewProp_Buffer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Copies the buffer into the image data (client)\n\x09 *\n\x09 * @param Offset where in the buffer to start the copying\n\x09 * @param Buffer the chunk of data to copy\n\x09 * @param BufferSize the amount of data to copy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldPlayerController.h" },
		{ "ToolTip", "Copies the buffer into the image data (client)\n\n@param Offset where in the buffer to start the copying\n@param Buffer the chunk of data to copy\n@param BufferSize the amount of data to copy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldPlayerController, nullptr, "ClientUpdatePreviewImageData", nullptr, nullptr, sizeof(ARSharedWorldPlayerController_eventClientUpdatePreviewImageData_Parms), Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tells the server it is ready for receiving any shared world data\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldPlayerController.h" },
		{ "ToolTip", "Tells the server it is ready for receiving any shared world data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldPlayerController, nullptr, "ServerMarkReadyForReceiving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARSharedWorldPlayerController);
	UClass* Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister()
	{
		return AARSharedWorldPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AARSharedWorldPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSharedWorldPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSharedWorldPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld, "ClientInitSharedWorld" }, // 1284155352
		{ &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData, "ClientUpdateARWorldData" }, // 1635830396
		{ &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData, "ClientUpdatePreviewImageData" }, // 585180921
		{ &Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving, "ServerMarkReadyForReceiving" }, // 3244404519
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ARSharedWorldPlayerController.h" },
		{ "ModuleRelativePath", "Public/ARSharedWorldPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSharedWorldPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSharedWorldPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARSharedWorldPlayerController_Statics::ClassParams = {
		&AARSharedWorldPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSharedWorldPlayerController()
	{
		if (!Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton, Z_Construct_UClass_AARSharedWorldPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSharedWorldPlayerController>()
	{
		return AARSharedWorldPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSharedWorldPlayerController);
	AARSharedWorldPlayerController::~AARSharedWorldPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARSharedWorldPlayerController, AARSharedWorldPlayerController::StaticClass, TEXT("AARSharedWorldPlayerController"), &Z_Registration_Info_UClass_AARSharedWorldPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARSharedWorldPlayerController), 260398175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_3157552582(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
