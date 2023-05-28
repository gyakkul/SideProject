// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePixelStreaming_init() {}
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature();
	PIXELSTREAMING_API UFunction* Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PixelStreaming;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PixelStreaming()
	{
		if (!Z_Registration_Info_UPackage__Script_PixelStreaming.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_AllConnectionsClosed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ClosedConnection__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_ConnectedToSignallingServer__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_DisconnectedFromSignallingServer__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_FallbackToSoftwareEncodering__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_NewConnection__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingDelegates_StatsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UPixelStreamingInput_OnInput__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PixelStreaming",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDF241DA2,
				0xC7F335D6,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PixelStreaming.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PixelStreaming.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PixelStreaming(Z_Construct_UPackage__Script_PixelStreaming, TEXT("/Script/PixelStreaming"), Z_Registration_Info_UPackage__Script_PixelStreaming, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDF241DA2, 0xC7F335D6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
