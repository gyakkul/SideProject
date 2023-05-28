// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowserWidget_init() {}
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature();
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature();
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_WebBrowserWidget;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_WebBrowserWidget()
	{
		if (!Z_Registration_Info_UPackage__Script_WebBrowserWidget.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/WebBrowserWidget",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7D03C44A,
				0xEDD472CC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_WebBrowserWidget.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_WebBrowserWidget.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_WebBrowserWidget(Z_Construct_UPackage__Script_WebBrowserWidget, TEXT("/Script/WebBrowserWidget"), Z_Registration_Info_UPackage__Script_WebBrowserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D03C44A, 0xEDD472CC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
