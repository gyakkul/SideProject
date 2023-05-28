// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreSessionConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreSessionConfig() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARSessionConfig();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode();
	GOOGLEARCOREBASE_API UEnum* Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UGoogleARCoreSessionConfig::execSetAugmentedImageDatabase)
	{
		P_GET_OBJECT(UGoogleARCoreAugmentedImageDatabase,Z_Param_NewImageDatabase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAugmentedImageDatabase(Z_Param_NewImageDatabase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGoogleARCoreSessionConfig::execGetAugmentedImageDatabase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGoogleARCoreAugmentedImageDatabase**)Z_Param__Result=P_THIS->GetAugmentedImageDatabase();
		P_NATIVE_END;
	}
	void UGoogleARCoreSessionConfig::StaticRegisterNativesUGoogleARCoreSessionConfig()
	{
		UClass* Class = UGoogleARCoreSessionConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAugmentedImageDatabase", &UGoogleARCoreSessionConfig::execGetAugmentedImageDatabase },
			{ "SetAugmentedImageDatabase", &UGoogleARCoreSessionConfig::execSetAugmentedImageDatabase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics
	{
		struct GoogleARCoreSessionConfig_eventGetAugmentedImageDatabase_Parms
		{
			UGoogleARCoreAugmentedImageDatabase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionConfig_eventGetAugmentedImageDatabase_Parms, ReturnValue), Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "google arcore augmentedimages" },
		{ "Comment", "/**\n\x09 * Get the augmented image database being used.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "Get the augmented image database being used." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionConfig, nullptr, "GetAugmentedImageDatabase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::GoogleARCoreSessionConfig_eventGetAugmentedImageDatabase_Parms), Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics
	{
		struct GoogleARCoreSessionConfig_eventSetAugmentedImageDatabase_Parms
		{
			UGoogleARCoreAugmentedImageDatabase* NewImageDatabase;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImageDatabase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::NewProp_NewImageDatabase = { "NewImageDatabase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreSessionConfig_eventSetAugmentedImageDatabase_Parms, NewImageDatabase), Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::NewProp_NewImageDatabase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::Function_MetaDataParams[] = {
		{ "Category", "google arcore augmentedimages" },
		{ "Comment", "/**\n\x09 * Set the augmented image database to use.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "Set the augmented image database to use." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreSessionConfig, nullptr, "SetAugmentedImageDatabase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::GoogleARCoreSessionConfig_eventSetAugmentedImageDatabase_Parms), Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreSessionConfig);
	UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig_NoRegister()
	{
		return UGoogleARCoreSessionConfig::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AugmentedImageDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AugmentedImageDatabase;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraFacing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFacing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraFacing;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AugmentedFaceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AugmentedFaceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AugmentedFaceMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UARSessionConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreSessionConfig_GetAugmentedImageDatabase, "GetAugmentedImageDatabase" }, // 1859087621
		{ &Z_Construct_UFunction_UGoogleARCoreSessionConfig_SetAugmentedImageDatabase, "SetAugmentedImageDatabase" }, // 1760068246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/**\n * A UDataAsset that can be used to configure ARCore specific settings on top of\n * UARSessionConfig. \n */" },
		{ "IncludePath", "GoogleARCoreSessionConfig.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "A UDataAsset that can be used to configure ARCore specific settings on top of\nUARSessionConfig." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedImageDatabase_MetaData[] = {
		{ "Category", "google arcore augmentedimages" },
		{ "Comment", "/**\n\x09 * A UGoogleARCoreAugmentedImageDatabase asset to use use for\n\x09 * image tracking.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "A UGoogleARCoreAugmentedImageDatabase asset to use use for\nimage tracking." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedImageDatabase = { "AugmentedImageDatabase", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreSessionConfig, AugmentedImageDatabase), Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedImageDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedImageDatabase_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing_MetaData[] = {
		{ "Category", "ARCore Settings" },
		{ "Comment", "/** Configure which camera will be used to in the AR session. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "Configure which camera will be used to in the AR session." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing = { "CameraFacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreSessionConfig, CameraFacing), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreCameraFacing, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing_MetaData)) }; // 1544441471
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode_MetaData[] = {
		{ "Category", "ARCore Settings" },
		{ "Comment", "/** Configure which Augmented Face mode will be used in the AR session. */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreSessionConfig.h" },
		{ "ToolTip", "Configure which Augmented Face mode will be used in the AR session." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode = { "AugmentedFaceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreSessionConfig, AugmentedFaceMode), Z_Construct_UEnum_GoogleARCoreBase_EGoogleARCoreAugmentedFaceMode, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode_MetaData)) }; // 314314824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedImageDatabase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_CameraFacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::NewProp_AugmentedFaceMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreSessionConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::ClassParams = {
		&UGoogleARCoreSessionConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreSessionConfig()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreSessionConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreSessionConfig.OuterSingleton, Z_Construct_UClass_UGoogleARCoreSessionConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreSessionConfig.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreSessionConfig>()
	{
		return UGoogleARCoreSessionConfig::StaticClass();
	}
	UGoogleARCoreSessionConfig::UGoogleARCoreSessionConfig() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreSessionConfig);
	UGoogleARCoreSessionConfig::~UGoogleARCoreSessionConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreSessionConfig, UGoogleARCoreSessionConfig::StaticClass, TEXT("UGoogleARCoreSessionConfig"), &Z_Registration_Info_UClass_UGoogleARCoreSessionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreSessionConfig), 667327009U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_3237567008(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreSessionConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
