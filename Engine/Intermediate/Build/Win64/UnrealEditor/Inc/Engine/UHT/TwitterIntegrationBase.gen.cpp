// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TwitterIntegrationBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwitterIntegrationBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPlatformInterfaceBase();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase();
	ENGINE_API UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETwitterRequestMethod;
	static UEnum* ETwitterRequestMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterRequestMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterRequestMethod"));
		}
		return Z_Registration_Info_UEnum_ETwitterRequestMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETwitterRequestMethod>()
	{
		return ETwitterRequestMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enumerators[] = {
		{ "TRM_Get", (int64)TRM_Get },
		{ "TRM_Post", (int64)TRM_Post },
		{ "TRM_Delete", (int64)TRM_Delete },
		{ "TRM_MAX", (int64)TRM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The possible twitter request methods */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "The possible twitter request methods" },
		{ "TRM_Delete.Name", "TRM_Delete" },
		{ "TRM_Get.Name", "TRM_Get" },
		{ "TRM_MAX.Name", "TRM_MAX" },
		{ "TRM_Post.Name", "TRM_Post" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETwitterRequestMethod",
		"ETwitterRequestMethod",
		Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETwitterRequestMethod()
	{
		if (!Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton, Z_Construct_UEnum_Engine_ETwitterRequestMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETwitterRequestMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETwitterIntegrationDelegate;
	static UEnum* ETwitterIntegrationDelegate_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETwitterIntegrationDelegate"));
		}
		return Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETwitterIntegrationDelegate>()
	{
		return ETwitterIntegrationDelegate_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enumerators[] = {
		{ "TID_AuthorizeComplete", (int64)TID_AuthorizeComplete },
		{ "TID_TweetUIComplete", (int64)TID_TweetUIComplete },
		{ "TID_RequestComplete", (int64)TID_RequestComplete },
		{ "TID_MAX", (int64)TID_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "TID_AuthorizeComplete.Name", "TID_AuthorizeComplete" },
		{ "TID_MAX.Name", "TID_MAX" },
		{ "TID_RequestComplete.Name", "TID_RequestComplete" },
		{ "TID_TweetUIComplete.Name", "TID_TweetUIComplete" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETwitterIntegrationDelegate",
		"ETwitterIntegrationDelegate",
		Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate()
	{
		if (!Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton, Z_Construct_UEnum_Engine_ETwitterIntegrationDelegate_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETwitterIntegrationDelegate.InnerSingleton;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execTwitterRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ParamKeysAndValues);
		P_GET_PROPERTY(FByteProperty,Z_Param_RequestMethod);
		P_GET_PROPERTY(FIntProperty,Z_Param_AccountIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TwitterRequest(Z_Param_URL,Z_Param_Out_ParamKeysAndValues,ETwitterRequestMethod(Z_Param_RequestMethod),Z_Param_AccountIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execGetAccountName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AccountIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAccountName(Z_Param_AccountIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execGetNumAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execAuthorizeAccounts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AuthorizeAccounts();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execShowTweetUI)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InitialMessage);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FStrProperty,Z_Param_Picture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShowTweetUI(Z_Param_InitialMessage,Z_Param_URL,Z_Param_Picture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execCanShowTweetUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanShowTweetUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTwitterIntegrationBase::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	void UTwitterIntegrationBase::StaticRegisterNativesUTwitterIntegrationBase()
	{
		UClass* Class = UTwitterIntegrationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthorizeAccounts", &UTwitterIntegrationBase::execAuthorizeAccounts },
			{ "CanShowTweetUI", &UTwitterIntegrationBase::execCanShowTweetUI },
			{ "GetAccountName", &UTwitterIntegrationBase::execGetAccountName },
			{ "GetNumAccounts", &UTwitterIntegrationBase::execGetNumAccounts },
			{ "Init", &UTwitterIntegrationBase::execInit },
			{ "ShowTweetUI", &UTwitterIntegrationBase::execShowTweetUI },
			{ "TwitterRequest", &UTwitterIntegrationBase::execTwitterRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics
	{
		struct TwitterIntegrationBase_eventAuthorizeAccounts_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventAuthorizeAccounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TwitterIntegrationBase_eventAuthorizeAccounts_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Starts the process of authorizing the local user(s). When TID_AuthorizeComplete is called, then GetNumAccounts() \n\x09 * will return a valid number of accounts\n\x09 *\n\x09 * @return true if the authorization process started, and TID_AuthorizeComplete delegates will be called\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Starts the process of authorizing the local user(s). When TID_AuthorizeComplete is called, then GetNumAccounts()\nwill return a valid number of accounts\n\n@return true if the authorization process started, and TID_AuthorizeComplete delegates will be called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "AuthorizeAccounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::TwitterIntegrationBase_eventAuthorizeAccounts_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics
	{
		struct TwitterIntegrationBase_eventCanShowTweetUI_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventCanShowTweetUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TwitterIntegrationBase_eventCanShowTweetUI_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return true if the user is allowed to use the Tweet UI\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return true if the user is allowed to use the Tweet UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "CanShowTweetUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::TwitterIntegrationBase_eventCanShowTweetUI_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics
	{
		struct TwitterIntegrationBase_eventGetAccountName_Parms
		{
			int32 AccountIndex;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccountIndex;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_AccountIndex = { "AccountIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetAccountName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_AccountIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return the display name of the given Twitter account\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return the display name of the given Twitter account" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "GetAccountName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::TwitterIntegrationBase_eventGetAccountName_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics
	{
		struct TwitterIntegrationBase_eventGetNumAccounts_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventGetNumAccounts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * @return The number of accounts that were authorized\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "@return The number of accounts that were authorized" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "GetNumAccounts", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::TwitterIntegrationBase_eventGetNumAccounts_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Perform any needed initialization\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Perform any needed initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics
	{
		struct TwitterIntegrationBase_eventShowTweetUI_Parms
		{
			FString InitialMessage;
			FString URL;
			FString Picture;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InitialMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Picture_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Picture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage = { "InitialMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, InitialMessage), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture = { "Picture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventShowTweetUI_Parms, Picture), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture_MetaData)) };
	void Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventShowTweetUI_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TwitterIntegrationBase_eventShowTweetUI_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_InitialMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_Picture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Kicks off a tweet, using the platform to show the UI. If this returns false, or you are on a platform that doesn't support the UI,\n\x09 * you can use the TwitterRequest method to perform a manual tweet using the Twitter API\n\x09 *\n\x09 * @param InitialMessage [optional] Initial message to show\n\x09 * @param URL [optional] URL to attach to the tweet\n\x09 * @param Picture [optional] Name of a picture (stored locally, platform subclass will do the searching for it) to add to the tweet\n\x09 *\n\x09 * @return true if a UI was displayed for the user to interact with, and a TID_TweetUIComplete will be sent\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Kicks off a tweet, using the platform to show the UI. If this returns false, or you are on a platform that doesn't support the UI,\nyou can use the TwitterRequest method to perform a manual tweet using the Twitter API\n\n@param InitialMessage [optional] Initial message to show\n@param URL [optional] URL to attach to the tweet\n@param Picture [optional] Name of a picture (stored locally, platform subclass will do the searching for it) to add to the tweet\n\n@return true if a UI was displayed for the user to interact with, and a TID_TweetUIComplete will be sent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "ShowTweetUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::TwitterIntegrationBase_eventShowTweetUI_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics
	{
		struct TwitterIntegrationBase_eventTwitterRequest_Parms
		{
			FString URL;
			TArray<FString> ParamKeysAndValues;
			TEnumAsByte<ETwitterRequestMethod> RequestMethod;
			int32 AccountIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamKeysAndValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamKeysAndValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParamKeysAndValues;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RequestMethod;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AccountIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_Inner = { "ParamKeysAndValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues = { "ParamKeysAndValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, ParamKeysAndValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_RequestMethod = { "RequestMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, RequestMethod), Z_Construct_UEnum_Engine_ETwitterRequestMethod, METADATA_PARAMS(nullptr, 0) }; // 4244388229
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_AccountIndex = { "AccountIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TwitterIntegrationBase_eventTwitterRequest_Parms, AccountIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TwitterIntegrationBase_eventTwitterRequest_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TwitterIntegrationBase_eventTwitterRequest_Parms), &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_URL,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ParamKeysAndValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_RequestMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_AccountIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Kicks off a generic twitter request\n\x09 *\n\x09 * @param URL The URL for the twitter request\n\x09 * @param KeysAndValues The extra parameters to pass to the request (request specific). Separate keys and values: < \"key1\", \"value1\", \"key2\", \"value2\" >\n\x09 * @param Method The method for this request (get, post, delete)\n\x09 * @param AccountIndex A user index if an account is needed, or -1 if an account isn't needed for the request\n\x09 *\n\x09 * @return true the request was sent off, and a TID_RequestComplete\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
		{ "ToolTip", "Kicks off a generic twitter request\n\n@param URL The URL for the twitter request\n@param KeysAndValues The extra parameters to pass to the request (request specific). Separate keys and values: < \"key1\", \"value1\", \"key2\", \"value2\" >\n@param Method The method for this request (get, post, delete)\n@param AccountIndex A user index if an account is needed, or -1 if an account isn't needed for the request\n\n@return true the request was sent off, and a TID_RequestComplete" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTwitterIntegrationBase, nullptr, "TwitterRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::TwitterIntegrationBase_eventTwitterRequest_Parms), Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTwitterIntegrationBase);
	UClass* Z_Construct_UClass_UTwitterIntegrationBase_NoRegister()
	{
		return UTwitterIntegrationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTwitterIntegrationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwitterIntegrationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlatformInterfaceBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTwitterIntegrationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_AuthorizeAccounts, "AuthorizeAccounts" }, // 4157530004
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_CanShowTweetUI, "CanShowTweetUI" }, // 1868950204
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetAccountName, "GetAccountName" }, // 4073219752
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_GetNumAccounts, "GetNumAccounts" }, // 589607061
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_Init, "Init" }, // 816759175
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_ShowTweetUI, "ShowTweetUI" }, // 2850504549
		{ &Z_Construct_UFunction_UTwitterIntegrationBase_TwitterRequest, "TwitterRequest" }, // 3106887929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TwitterIntegrationBase.h" },
		{ "ModuleRelativePath", "Classes/Engine/TwitterIntegrationBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwitterIntegrationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwitterIntegrationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTwitterIntegrationBase_Statics::ClassParams = {
		&UTwitterIntegrationBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwitterIntegrationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwitterIntegrationBase()
	{
		if (!Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton, Z_Construct_UClass_UTwitterIntegrationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTwitterIntegrationBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTwitterIntegrationBase>()
	{
		return UTwitterIntegrationBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwitterIntegrationBase);
	UTwitterIntegrationBase::~UTwitterIntegrationBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::EnumInfo[] = {
		{ ETwitterRequestMethod_StaticEnum, TEXT("ETwitterRequestMethod"), &Z_Registration_Info_UEnum_ETwitterRequestMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4244388229U) },
		{ ETwitterIntegrationDelegate_StaticEnum, TEXT("ETwitterIntegrationDelegate"), &Z_Registration_Info_UEnum_ETwitterIntegrationDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 541743154U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTwitterIntegrationBase, UTwitterIntegrationBase::StaticClass, TEXT("UTwitterIntegrationBase"), &Z_Registration_Info_UClass_UTwitterIntegrationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTwitterIntegrationBase), 2630866543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_913516957(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
