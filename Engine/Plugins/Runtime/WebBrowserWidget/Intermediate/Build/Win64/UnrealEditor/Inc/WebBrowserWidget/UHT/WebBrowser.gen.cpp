// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebBrowser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebBrowser() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_WebBrowserWidget();
	WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowser();
	WEBBROWSERWIDGET_API UClass* Z_Construct_UClass_UWebBrowser_NoRegister();
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature();
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature();
	WEBBROWSERWIDGET_API UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics
	{
		struct WebBrowser_eventOnUrlChanged_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnUrlChanged_Parms, Text), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "OnUrlChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::WebBrowser_eventOnUrlChanged_Parms), Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UWebBrowser::FOnUrlChanged_DelegateWrapper(const FMulticastScriptDelegate& OnUrlChanged, FText const& Text)
{
	struct WebBrowser_eventOnUrlChanged_Parms
	{
		FText Text;
	};
	WebBrowser_eventOnUrlChanged_Parms Parms;
	Parms.Text=Text;
	OnUrlChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics
	{
		struct WebBrowser_eventOnBeforePopup_Parms
		{
			FString URL;
			FString Frame;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Frame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnBeforePopup_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnBeforePopup_Parms, Frame), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::NewProp_Frame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "OnBeforePopup__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::WebBrowser_eventOnBeforePopup_Parms), Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UWebBrowser::FOnBeforePopup_DelegateWrapper(const FMulticastScriptDelegate& OnBeforePopup, const FString& URL, const FString& Frame)
{
	struct WebBrowser_eventOnBeforePopup_Parms
	{
		FString URL;
		FString Frame;
	};
	WebBrowser_eventOnBeforePopup_Parms Parms;
	Parms.URL=URL;
	Parms.Frame=Frame;
	OnBeforePopup.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics
	{
		struct WebBrowser_eventOnConsoleMessage_Parms
		{
			FString Message;
			FString Source;
			int32 Line;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Line;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnConsoleMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnConsoleMessage_Parms, Source), METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Line = { "Line", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventOnConsoleMessage_Parms, Line), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::NewProp_Line,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "OnConsoleMessage__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::WebBrowser_eventOnConsoleMessage_Parms), Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UWebBrowser::FOnConsoleMessage_DelegateWrapper(const FMulticastScriptDelegate& OnConsoleMessage, const FString& Message, const FString& Source, int32 Line)
{
	struct WebBrowser_eventOnConsoleMessage_Parms
	{
		FString Message;
		FString Source;
		int32 Line;
	};
	WebBrowser_eventOnConsoleMessage_Parms Parms;
	Parms.Message=Message;
	Parms.Source=Source;
	Parms.Line=Line;
	OnConsoleMessage.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UWebBrowser::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowser::execGetTitleText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTitleText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowser::execExecuteJavascript)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ScriptText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteJavascript(Z_Param_ScriptText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowser::execLoadString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Contents);
		P_GET_PROPERTY(FStrProperty,Z_Param_DummyURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadString(Z_Param_Contents,Z_Param_DummyURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebBrowser::execLoadURL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadURL(Z_Param_NewURL);
		P_NATIVE_END;
	}
	void UWebBrowser::StaticRegisterNativesUWebBrowser()
	{
		UClass* Class = UWebBrowser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteJavascript", &UWebBrowser::execExecuteJavascript },
			{ "GetTitleText", &UWebBrowser::execGetTitleText },
			{ "GetUrl", &UWebBrowser::execGetUrl },
			{ "LoadString", &UWebBrowser::execLoadString },
			{ "LoadURL", &UWebBrowser::execLoadURL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics
	{
		struct WebBrowser_eventExecuteJavascript_Parms
		{
			FString ScriptText;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText = { "ScriptText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventExecuteJavascript_Parms, ScriptText), METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::NewProp_ScriptText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09* Executes a JavaScript string in the context of the web page\n\x09*\n\x09* @param ScriptText JavaScript string to execute\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Executes a JavaScript string in the context of the web page\n\n@param ScriptText JavaScript string to execute" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "ExecuteJavascript", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::WebBrowser_eventExecuteJavascript_Parms), Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBrowser_ExecuteJavascript()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowser_ExecuteJavascript_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics
	{
		struct WebBrowser_eventGetTitleText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventGetTitleText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Get the current title of the web page\n\x09 */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Get the current title of the web page" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "GetTitleText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::WebBrowser_eventGetTitleText_Parms), Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBrowser_GetTitleText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowser_GetTitleText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowser_GetUrl_Statics
	{
		struct WebBrowser_eventGetUrl_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09* Gets the currently loaded URL.\n\x09*\n\x09* @return The URL, or empty string if no document is loaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Gets the currently loaded URL.\n\n@return The URL, or empty string if no document is loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "GetUrl", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::WebBrowser_eventGetUrl_Parms), Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBrowser_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowser_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowser_LoadString_Statics
	{
		struct WebBrowser_eventLoadString_Parms
		{
			FString Contents;
			FString DummyURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Contents;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DummyURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBrowser_LoadString_Statics::NewProp_Contents = { "Contents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventLoadString_Parms, Contents), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBrowser_LoadString_Statics::NewProp_DummyURL = { "DummyURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventLoadString_Parms, DummyURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowser_LoadString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_LoadString_Statics::NewProp_Contents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_LoadString_Statics::NewProp_DummyURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_LoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Load a string as data to create a web page\n\x09 *\n\x09 * @param Contents String to load\n\x09 * @param DummyURL Dummy URL for the page\n\x09 */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Load a string as data to create a web page\n\n@param Contents String to load\n@param DummyURL Dummy URL for the page" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowser_LoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "LoadString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBrowser_LoadString_Statics::WebBrowser_eventLoadString_Parms), Z_Construct_UFunction_UWebBrowser_LoadString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_LoadString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_LoadString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_LoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBrowser_LoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowser_LoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebBrowser_LoadURL_Statics
	{
		struct WebBrowser_eventLoadURL_Parms
		{
			FString NewURL;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WebBrowser_eventLoadURL_Parms, NewURL), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::NewProp_NewURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "Web Browser" },
		{ "Comment", "/**\n\x09 * Load the specified URL\n\x09 *\n\x09 * @param NewURL New URL to load\n\x09 */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Load the specified URL\n\n@param NewURL New URL to load" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebBrowser, nullptr, "LoadURL", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::WebBrowser_eventLoadURL_Parms), Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebBrowser_LoadURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWebBrowser_LoadURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebBrowser);
	UClass* Z_Construct_UClass_UWebBrowser_NoRegister()
	{
		return UWebBrowser::StaticClass();
	}
	struct Z_Construct_UClass_UWebBrowser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUrlChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUrlChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeforePopup_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeforePopup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConsoleMessage_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConsoleMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialURL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportsTransparency_MetaData[];
#endif
		static void NewProp_bSupportsTransparency_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportsTransparency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebBrowser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_WebBrowserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebBrowser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebBrowser_ExecuteJavascript, "ExecuteJavascript" }, // 3225862803
		{ &Z_Construct_UFunction_UWebBrowser_GetTitleText, "GetTitleText" }, // 1816324158
		{ &Z_Construct_UFunction_UWebBrowser_GetUrl, "GetUrl" }, // 2287586018
		{ &Z_Construct_UFunction_UWebBrowser_LoadString, "LoadString" }, // 4227473170
		{ &Z_Construct_UFunction_UWebBrowser_LoadURL, "LoadURL" }, // 3344459628
		{ &Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature, "OnBeforePopup__DelegateSignature" }, // 2945963731
		{ &Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature, "OnConsoleMessage__DelegateSignature" }, // 4226768602
		{ &Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature, "OnUrlChanged__DelegateSignature" }, // 4286597984
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebBrowser.h" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnUrlChanged_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when the Url changes. */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Called when the Url changes." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnUrlChanged = { "OnUrlChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebBrowser, OnUrlChanged), Z_Construct_UDelegateFunction_UWebBrowser_OnUrlChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnUrlChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnUrlChanged_MetaData)) }; // 4286597984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnBeforePopup_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when a popup is about to spawn. */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Called when a popup is about to spawn." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnBeforePopup = { "OnBeforePopup", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebBrowser, OnBeforePopup), Z_Construct_UDelegateFunction_UWebBrowser_OnBeforePopup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnBeforePopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnBeforePopup_MetaData)) }; // 2945963731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData[] = {
		{ "Category", "Web Browser|Event" },
		{ "Comment", "/** Called when the browser has console spew to print */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Called when the browser has console spew to print" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnConsoleMessage = { "OnConsoleMessage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebBrowser, OnConsoleMessage), Z_Construct_UDelegateFunction_UWebBrowser_OnConsoleMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnConsoleMessage_MetaData)) }; // 4226768602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::NewProp_InitialURL_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** URL that the browser will initially navigate to. The URL should include the protocol, eg http:// */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "URL that the browser will initially navigate to. The URL should include the protocol, eg http://" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebBrowser_Statics::NewProp_InitialURL = { "InitialURL", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebBrowser, InitialURL), METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::NewProp_InitialURL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::NewProp_InitialURL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Should the browser window support transparency. */" },
		{ "ModuleRelativePath", "Public/WebBrowser.h" },
		{ "ToolTip", "Should the browser window support transparency." },
	};
#endif
	void Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency_SetBit(void* Obj)
	{
		((UWebBrowser*)Obj)->bSupportsTransparency = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency = { "bSupportsTransparency", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebBrowser), &Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebBrowser_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnUrlChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnBeforePopup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowser_Statics::NewProp_OnConsoleMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowser_Statics::NewProp_InitialURL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebBrowser_Statics::NewProp_bSupportsTransparency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebBrowser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebBrowser>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebBrowser_Statics::ClassParams = {
		&UWebBrowser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWebBrowser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebBrowser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebBrowser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebBrowser()
	{
		if (!Z_Registration_Info_UClass_UWebBrowser.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebBrowser.OuterSingleton, Z_Construct_UClass_UWebBrowser_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebBrowser.OuterSingleton;
	}
	template<> WEBBROWSERWIDGET_API UClass* StaticClass<UWebBrowser>()
	{
		return UWebBrowser::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebBrowser);
	UWebBrowser::~UWebBrowser() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebBrowser, UWebBrowser::StaticClass, TEXT("UWebBrowser"), &Z_Registration_Info_UClass_UWebBrowser, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebBrowser), 146345508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_2007571983(TEXT("/Script/WebBrowserWidget"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WebBrowserWidget_Source_WebBrowserWidget_Public_WebBrowser_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
