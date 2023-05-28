// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GoogleARCorePermissionHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCorePermissionHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreAndroidPermissionHandler();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UARCoreAndroidPermissionHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	DEFINE_FUNCTION(UARCoreAndroidPermissionHandler::execOnPermissionsGranted)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_Permissions);
		P_GET_TARRAY_REF(bool,Z_Param_Out_Granted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPermissionsGranted(Z_Param_Out_Permissions,Z_Param_Out_Granted);
		P_NATIVE_END;
	}
	void UARCoreAndroidPermissionHandler::StaticRegisterNativesUARCoreAndroidPermissionHandler()
	{
		UClass* Class = UARCoreAndroidPermissionHandler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPermissionsGranted", &UARCoreAndroidPermissionHandler::execOnPermissionsGranted },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics
	{
		struct ARCoreAndroidPermissionHandler_eventOnPermissionsGranted_Parms
		{
			TArray<FString> Permissions;
			TArray<bool> Granted;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Permissions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Permissions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Permissions;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Granted_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Granted_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Granted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions_Inner = { "Permissions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions = { "Permissions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCoreAndroidPermissionHandler_eventOnPermissionsGranted_Parms, Permissions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted_Inner = { "Granted", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted = { "Granted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARCoreAndroidPermissionHandler_eventOnPermissionsGranted_Parms, Granted), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Permissions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::NewProp_Granted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GoogleARCorePermissionHandler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UARCoreAndroidPermissionHandler, nullptr, "OnPermissionsGranted", nullptr, nullptr, sizeof(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::ARCoreAndroidPermissionHandler_eventOnPermissionsGranted_Parms), Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARCoreAndroidPermissionHandler);
	UClass* Z_Construct_UClass_UARCoreAndroidPermissionHandler_NoRegister()
	{
		return UARCoreAndroidPermissionHandler::StaticClass();
	}
	struct Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UARCoreAndroidPermissionHandler_OnPermissionsGranted, "OnPermissionsGranted" }, // 3491633950
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleARCorePermissionHandler.h" },
		{ "ModuleRelativePath", "Private/GoogleARCorePermissionHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARCoreAndroidPermissionHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::ClassParams = {
		&UARCoreAndroidPermissionHandler::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARCoreAndroidPermissionHandler()
	{
		if (!Z_Registration_Info_UClass_UARCoreAndroidPermissionHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARCoreAndroidPermissionHandler.OuterSingleton, Z_Construct_UClass_UARCoreAndroidPermissionHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARCoreAndroidPermissionHandler.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UARCoreAndroidPermissionHandler>()
	{
		return UARCoreAndroidPermissionHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARCoreAndroidPermissionHandler);
	UARCoreAndroidPermissionHandler::~UARCoreAndroidPermissionHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARCoreAndroidPermissionHandler, UARCoreAndroidPermissionHandler::StaticClass, TEXT("UARCoreAndroidPermissionHandler"), &Z_Registration_Info_UClass_UARCoreAndroidPermissionHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARCoreAndroidPermissionHandler), 3320005540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_2320644158(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCorePermissionHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
