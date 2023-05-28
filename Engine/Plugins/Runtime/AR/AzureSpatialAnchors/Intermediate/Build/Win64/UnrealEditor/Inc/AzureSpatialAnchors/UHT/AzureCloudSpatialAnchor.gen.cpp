// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AzureCloudSpatialAnchor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAzureCloudSpatialAnchor() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor();
	AZURESPATIALANCHORS_API UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AzureSpatialAnchors();
// End Cross Module References
	DEFINE_FUNCTION(UAzureCloudSpatialAnchor::execSetExpiration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExpiration(Z_Param_Lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureCloudSpatialAnchor::execGetExpiration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetExpiration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureCloudSpatialAnchor::execSetAppProperties)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InAppProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAppProperties(Z_Param_Out_InAppProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureCloudSpatialAnchor::execGetAppProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetAppProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAzureCloudSpatialAnchor::execGetAzureCloudIdentifier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAzureCloudIdentifier();
		P_NATIVE_END;
	}
	void UAzureCloudSpatialAnchor::StaticRegisterNativesUAzureCloudSpatialAnchor()
	{
		UClass* Class = UAzureCloudSpatialAnchor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAppProperties", &UAzureCloudSpatialAnchor::execGetAppProperties },
			{ "GetAzureCloudIdentifier", &UAzureCloudSpatialAnchor::execGetAzureCloudIdentifier },
			{ "GetExpiration", &UAzureCloudSpatialAnchor::execGetExpiration },
			{ "SetAppProperties", &UAzureCloudSpatialAnchor::execSetAppProperties },
			{ "SetExpiration", &UAzureCloudSpatialAnchor::execSetExpiration },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics
	{
		struct AzureCloudSpatialAnchor_eventGetAppProperties_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureCloudSpatialAnchor_eventGetAppProperties_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * The AppProperties dictionary of the cloud anchor.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "The AppProperties dictionary of the cloud anchor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureCloudSpatialAnchor, nullptr, "GetAppProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::AzureCloudSpatialAnchor_eventGetAppProperties_Parms), Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics
	{
		struct AzureCloudSpatialAnchor_eventGetAzureCloudIdentifier_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureCloudSpatialAnchor_eventGetAzureCloudIdentifier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * The Azure Cloud identifier of the spatial anchor is the persistent identifier by which a cloud anchor can be requested from the azure cloud service.  Empty if the anchor has not been saved or loaded yet.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "The Azure Cloud identifier of the spatial anchor is the persistent identifier by which a cloud anchor can be requested from the azure cloud service.  Empty if the anchor has not been saved or loaded yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureCloudSpatialAnchor, nullptr, "GetAzureCloudIdentifier", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::AzureCloudSpatialAnchor_eventGetAzureCloudIdentifier_Parms), Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics
	{
		struct AzureCloudSpatialAnchor_eventGetExpiration_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureCloudSpatialAnchor_eventGetExpiration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * The Expiration time of the cloud anchor as seconds into the future.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "The Expiration time of the cloud anchor as seconds into the future." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureCloudSpatialAnchor, nullptr, "GetExpiration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::AzureCloudSpatialAnchor_eventGetExpiration_Parms), Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics
	{
		struct AzureCloudSpatialAnchor_eventSetAppProperties_Parms
		{
			TMap<FString,FString> InAppProperties;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAppProperties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InAppProperties_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAppProperties_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InAppProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_ValueProp = { "InAppProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_Key_KeyProp = { "InAppProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties = { "InAppProperties", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureCloudSpatialAnchor_eventSetAppProperties_Parms, InAppProperties), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::NewProp_InAppProperties,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * Set the AppProperties dictionary of the cloud anchor.  You must call SaveCloudAnchor or UpdateCloudAnchorProperties before these will be persisted on azure.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "Set the AppProperties dictionary of the cloud anchor.  You must call SaveCloudAnchor or UpdateCloudAnchorProperties before these will be persisted on azure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureCloudSpatialAnchor, nullptr, "SetAppProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::AzureCloudSpatialAnchor_eventSetAppProperties_Parms), Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics
	{
		struct AzureCloudSpatialAnchor_eventSetExpiration_Parms
		{
			float Lifetime;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Lifetime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::NewProp_Lifetime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::NewProp_Lifetime = { "Lifetime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AzureCloudSpatialAnchor_eventSetExpiration_Parms, Lifetime), METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::NewProp_Lifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::NewProp_Lifetime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::NewProp_Lifetime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * Set the Expiration time of the cloud anchor as seconds into the future.  You must call SaveCloudAnchor or UpdateCloudAnchorProperties before this will be persisted on azure.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "Set the Expiration time of the cloud anchor as seconds into the future.  You must call SaveCloudAnchor or UpdateCloudAnchorProperties before this will be persisted on azure." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAzureCloudSpatialAnchor, nullptr, "SetExpiration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::AzureCloudSpatialAnchor_eventSetExpiration_Parms), Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAzureCloudSpatialAnchor);
	UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor_NoRegister()
	{
		return UAzureCloudSpatialAnchor::StaticClass();
	}
	struct Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ARPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AzureSpatialAnchors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAppProperties, "GetAppProperties" }, // 3379320007
		{ &Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetAzureCloudIdentifier, "GetAzureCloudIdentifier" }, // 3124057649
		{ &Z_Construct_UFunction_UAzureCloudSpatialAnchor_GetExpiration, "GetExpiration" }, // 258471580
		{ &Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetAppProperties, "SetAppProperties" }, // 2605801717
		{ &Z_Construct_UFunction_UAzureCloudSpatialAnchor_SetExpiration, "SetExpiration" }, // 1991357668
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AzureSpatialAnchors" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "AzureCloudSpatialAnchor.h" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::NewProp_ARPin_MetaData[] = {
		{ "Category", "AzureSpatialAnchors" },
		{ "Comment", "/**\n\x09 * The ARPin with which this cloud anchor is associated, or null.  Null could mean we are still trying to load the anchor or have not yet located it.\n\x09 */" },
		{ "Keywords", "azure spatial anchor hololens wmr pin ar all" },
		{ "ModuleRelativePath", "Public/AzureCloudSpatialAnchor.h" },
		{ "ToolTip", "The ARPin with which this cloud anchor is associated, or null.  Null could mean we are still trying to load the anchor or have not yet located it." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::NewProp_ARPin = { "ARPin", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAzureCloudSpatialAnchor, ARPin), Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::NewProp_ARPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::NewProp_ARPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::NewProp_ARPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAzureCloudSpatialAnchor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::ClassParams = {
		&UAzureCloudSpatialAnchor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAzureCloudSpatialAnchor()
	{
		if (!Z_Registration_Info_UClass_UAzureCloudSpatialAnchor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAzureCloudSpatialAnchor.OuterSingleton, Z_Construct_UClass_UAzureCloudSpatialAnchor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAzureCloudSpatialAnchor.OuterSingleton;
	}
	template<> AZURESPATIALANCHORS_API UClass* StaticClass<UAzureCloudSpatialAnchor>()
	{
		return UAzureCloudSpatialAnchor::StaticClass();
	}
	UAzureCloudSpatialAnchor::UAzureCloudSpatialAnchor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAzureCloudSpatialAnchor);
	UAzureCloudSpatialAnchor::~UAzureCloudSpatialAnchor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureCloudSpatialAnchor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureCloudSpatialAnchor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAzureCloudSpatialAnchor, UAzureCloudSpatialAnchor::StaticClass, TEXT("UAzureCloudSpatialAnchor"), &Z_Registration_Info_UClass_UAzureCloudSpatialAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAzureCloudSpatialAnchor), 1033573007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureCloudSpatialAnchor_h_3126012132(TEXT("/Script/AzureSpatialAnchors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureCloudSpatialAnchor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AzureSpatialAnchors_Source_AzureSpatialAnchors_Public_AzureCloudSpatialAnchor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
