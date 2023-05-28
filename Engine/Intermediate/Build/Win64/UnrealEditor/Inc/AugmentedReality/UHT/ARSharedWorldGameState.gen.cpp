// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARSharedWorldGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARSharedWorldGameState() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FName NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady = FName(TEXT("K2_OnARWorldMapIsReady"));
	void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
	{
		ProcessEvent(FindFunctionChecked(NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady),NULL);
	}
	void AARSharedWorldGameState::StaticRegisterNativesAARSharedWorldGameState()
	{
	}
	struct Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AR Shared World" },
		{ "DisplayName", "OnARWorldMapIsReady" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ScriptName", "OnARWorldMapIsReady" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARSharedWorldGameState, nullptr, "K2_OnARWorldMapIsReady", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARSharedWorldGameState);
	UClass* Z_Construct_UClass_AARSharedWorldGameState_NoRegister()
	{
		return AARSharedWorldGameState::StaticClass();
	}
	struct Z_Construct_UClass_AARSharedWorldGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewImageData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImageData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewImageData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ARWorldData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARWorldData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ARWorldData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImageBytesTotal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewImageBytesTotal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARWorldBytesTotal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ARWorldBytesTotal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewImageBytesDelivered_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewImageBytesDelivered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARWorldBytesDelivered_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ARWorldBytesDelivered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARSharedWorldGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARSharedWorldGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady, "K2_OnARWorldMapIsReady" }, // 32671720
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ARSharedWorldGameState.h" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_Inner = { "PreviewImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The image taken at the time of world saving for use when aligning the AR world later in the session */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The image taken at the time of world saving for use when aligning the AR world later in the session" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData = { "PreviewImageData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_Inner = { "ARWorldData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** Each client and the host have a copy of the shared world data */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "Each client and the host have a copy of the shared world data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData = { "ARWorldData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The size of the image that will be replicated to each client */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The size of the image that will be replicated to each client" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal = { "PreviewImageBytesTotal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageBytesTotal), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The size of the AR world data that will be replicated to each client */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The size of the AR world data that will be replicated to each client" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal = { "ARWorldBytesTotal", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldBytesTotal), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The amount of the preview image data that has been replicated to this client so far */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The amount of the preview image data that has been replicated to this client so far" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered = { "PreviewImageBytesDelivered", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, PreviewImageBytesDelivered), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData[] = {
		{ "Category", "AR Shared World" },
		{ "Comment", "/** The amount of the AR world data that has been replicated to this client so far */" },
		{ "ModuleRelativePath", "Public/ARSharedWorldGameState.h" },
		{ "ToolTip", "The amount of the AR world data that has been replicated to this client so far" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered = { "ARWorldBytesDelivered", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARSharedWorldGameState, ARWorldBytesDelivered), METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesTotal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_PreviewImageBytesDelivered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARSharedWorldGameState_Statics::NewProp_ARWorldBytesDelivered,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARSharedWorldGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARSharedWorldGameState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARSharedWorldGameState_Statics::ClassParams = {
		&AARSharedWorldGameState::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARSharedWorldGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARSharedWorldGameState()
	{
		if (!Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton, Z_Construct_UClass_AARSharedWorldGameState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AARSharedWorldGameState>()
	{
		return AARSharedWorldGameState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARSharedWorldGameState);
	AARSharedWorldGameState::~AARSharedWorldGameState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARSharedWorldGameState, AARSharedWorldGameState::StaticClass, TEXT("AARSharedWorldGameState"), &Z_Registration_Info_UClass_AARSharedWorldGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARSharedWorldGameState), 794949039U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_2743133721(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
