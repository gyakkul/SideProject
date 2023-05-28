// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImgMediaSource.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaSource() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource();
	IMGMEDIA_API UClass* Z_Construct_UClass_UImgMediaSource_NoRegister();
	IMGMEDIA_API UScriptStruct* Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UBaseMediaSource();
	UPackage* Z_Construct_UPackage__Script_ImgMedia();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy;
class UScriptStruct* FImgMediaSourceCustomizationSequenceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy, (UObject*)Z_Construct_UPackage__Script_ImgMedia(), TEXT("ImgMediaSourceCustomizationSequenceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.OuterSingleton;
}
template<> IMGMEDIA_API UScriptStruct* StaticStruct<FImgMediaSourceCustomizationSequenceProxy>()
{
	return FImgMediaSourceCustomizationSequenceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This provides customized editing of SequencePath. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This provides customized editing of SequencePath." },
	};
#endif
	void* Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImgMediaSourceCustomizationSequenceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMedia,
		nullptr,
		&NewStructOps,
		"ImgMediaSourceCustomizationSequenceProxy",
		sizeof(FImgMediaSourceCustomizationSequenceProxy),
		alignof(FImgMediaSourceCustomizationSequenceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.InnerSingleton, Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(UImgMediaSource::execSetMipLevelDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMipLevelDistance(Z_Param_Distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execRemoveTargetObject)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTargetObject(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execAddTargetObject)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTargetObject(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execSetTokenizedSequencePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTokenizedSequencePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execRemoveGlobalCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGlobalCamera(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execAddGlobalCamera)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGlobalCamera(Z_Param_InActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execSetSequencePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequencePath(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetSequencePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSequencePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImgMediaSource::execGetProxies)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutProxies);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProxies(Z_Param_Out_OutProxies);
		P_NATIVE_END;
	}
	void UImgMediaSource::StaticRegisterNativesUImgMediaSource()
	{
		UClass* Class = UImgMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGlobalCamera", &UImgMediaSource::execAddGlobalCamera },
			{ "AddTargetObject", &UImgMediaSource::execAddTargetObject },
			{ "GetProxies", &UImgMediaSource::execGetProxies },
			{ "GetSequencePath", &UImgMediaSource::execGetSequencePath },
			{ "RemoveGlobalCamera", &UImgMediaSource::execRemoveGlobalCamera },
			{ "RemoveTargetObject", &UImgMediaSource::execRemoveTargetObject },
			{ "SetMipLevelDistance", &UImgMediaSource::execSetMipLevelDistance },
			{ "SetSequencePath", &UImgMediaSource::execSetSequencePath },
			{ "SetTokenizedSequencePath", &UImgMediaSource::execSetTokenizedSequencePath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics
	{
		struct ImgMediaSource_eventAddGlobalCamera_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventAddGlobalCamera_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddGlobalCamera has been deprecated." },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "AddGlobalCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::ImgMediaSource_eventAddGlobalCamera_Parms), Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics
	{
		struct ImgMediaSource_eventAddTargetObject_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventAddTargetObject_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This object is using our img sequence.\n\x09 *\n\x09 * @param InActor Object using our img sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This object is using our img sequence.\n\n@param InActor Object using our img sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "AddTargetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::ImgMediaSource_eventAddTargetObject_Parms), Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_AddTargetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_AddTargetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics
	{
		struct ImgMediaSource_eventGetProxies_Parms
		{
			TArray<FString> OutProxies;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutProxies_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutProxies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner = { "OutProxies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies = { "OutProxies", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventGetProxies_Parms, OutProxies), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::NewProp_OutProxies,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the names of available proxy directories.\n\x09 *\n\x09 * @param OutProxies Will contain the names of available proxy directories, if any.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the names of available proxy directories.\n\n@param OutProxies Will contain the names of available proxy directories, if any.\n@see GetSequencePath" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetProxies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::ImgMediaSource_eventGetProxies_Parms), Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetProxies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetProxies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics
	{
		struct ImgMediaSource_eventGetSequencePath_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventGetSequencePath_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Get the path to the image sequence directory to be played. Supported tokens will be expanded.\n\x09 *\n\x09 * @return The file path.\n\x09 * @see SetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Get the path to the image sequence directory to be played. Supported tokens will be expanded.\n\n@return The file path.\n@see SetSequencePath" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "GetSequencePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::ImgMediaSource_eventGetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_GetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_GetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics
	{
		struct ImgMediaSource_eventRemoveGlobalCamera_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventRemoveGlobalCamera_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "RemoveGlobalCamera has been deprecated." },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "RemoveGlobalCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::ImgMediaSource_eventRemoveGlobalCamera_Parms), Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics
	{
		struct ImgMediaSource_eventRemoveTargetObject_Parms
		{
			AActor* InActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventRemoveTargetObject_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * This object is no longer using our img sequence.\n\x09 *\n\x09 * @param InActor Object no longer using our img sequence.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This object is no longer using our img sequence.\n\n@param InActor Object no longer using our img sequence." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "RemoveTargetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::ImgMediaSource_eventRemoveTargetObject_Parms), Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics
	{
		struct ImgMediaSource_eventSetMipLevelDistance_Parms
		{
			float Distance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventSetMipLevelDistance_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetMipLevelDistance has been deprecated." },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetMipLevelDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::ImgMediaSource_eventSetMipLevelDistance_Parms), Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics
	{
		struct ImgMediaSource_eventSetSequencePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventSetSequencePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Set the path to the image sequence directory this source represents.\n\x09 *\n\x09 * @param Path The path to an image file in the desired directory.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Set the path to the image sequence directory this source represents.\n\n@param Path The path to an image file in the desired directory.\n@see GetSequencePath" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetSequencePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::ImgMediaSource_eventSetSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics
	{
		struct ImgMediaSource_eventSetTokenizedSequencePath_Parms
		{
			FString Path;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImgMediaSource_eventSetTokenizedSequencePath_Parms, Path), METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "ImgMedia|ImgMediaSource" },
		{ "Comment", "/**\n\x09 * Set the path to the image sequence directory this source represents.\n\x09 *\n\x09 * @param Path The path to the desired image sequence directory. May contain supported tokens.\n\x09 * @see GetSequencePath\n\x09 */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Set the path to the image sequence directory this source represents.\n\n@param Path The path to the desired image sequence directory. May contain supported tokens.\n@see GetSequencePath" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImgMediaSource, nullptr, "SetTokenizedSequencePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::ImgMediaSource_eventSetTokenizedSequencePath_Parms), Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImgMediaSource);
	UClass* Z_Construct_UClass_UImgMediaSource_NoRegister()
	{
		return UImgMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPathRelativeToProjectRoot_MetaData[];
#endif
		static void NewProp_IsPathRelativeToProjectRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPathRelativeToProjectRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRateOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRateOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProxyOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillGapsInSequence_MetaData[];
#endif
		static void NewProp_bFillGapsInSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillGapsInSequence;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceProxy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceProxy;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequencePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequencePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMediaSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMedia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImgMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImgMediaSource_AddGlobalCamera, "AddGlobalCamera" }, // 2371740079
		{ &Z_Construct_UFunction_UImgMediaSource_AddTargetObject, "AddTargetObject" }, // 2042579528
		{ &Z_Construct_UFunction_UImgMediaSource_GetProxies, "GetProxies" }, // 669685671
		{ &Z_Construct_UFunction_UImgMediaSource_GetSequencePath, "GetSequencePath" }, // 1988455706
		{ &Z_Construct_UFunction_UImgMediaSource_RemoveGlobalCamera, "RemoveGlobalCamera" }, // 4138929714
		{ &Z_Construct_UFunction_UImgMediaSource_RemoveTargetObject, "RemoveTargetObject" }, // 2472070466
		{ &Z_Construct_UFunction_UImgMediaSource_SetMipLevelDistance, "SetMipLevelDistance" }, // 689936797
		{ &Z_Construct_UFunction_UImgMediaSource_SetSequencePath, "SetSequencePath" }, // 2344068660
		{ &Z_Construct_UFunction_UImgMediaSource_SetTokenizedSequencePath, "SetTokenizedSequencePath" }, // 3619085249
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Media source for EXR image sequences.\n *\n * Image sequence media sources point to a directory that contains a series of\n * image files in which each image represents a single frame of the sequence.\n * BMP, EXR, PNG and JPG images are currently supported. EXR image sequences\n * are optimized for performance. The first frame of an image sequence is used\n * to determine the image dimensions (all formats) and frame rate (EXR only).\n *\n * The image sequence directory may contain sub-directories, which are called\n * 'proxies'. Proxies can be used to provide alternative media for playback\n * during development and testing of a game. One common scenario is the use\n * of low resolution versions of image sequence media on computers that are\n * too slow or don't have enough storage to play the original high-res media.\n */" },
		{ "HideCategories", "Overrides Playback Object Object" },
		{ "IncludePath", "ImgMediaSource.h" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Media source for EXR image sequences.\n\nImage sequence media sources point to a directory that contains a series of\nimage files in which each image represents a single frame of the sequence.\nBMP, EXR, PNG and JPG images are currently supported. EXR image sequences\nare optimized for performance. The first frame of an image sequence is used\nto determine the image dimensions (all formats) and frame rate (EXR only).\n\nThe image sequence directory may contain sub-directories, which are called\n'proxies'. Proxies can be used to provide alternative media for playback\nduring development and testing of a game. One common scenario is the use\nof low resolution versions of image sequence media on computers that are\ntoo slow or don't have enough storage to play the original high-res media." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData[] = {
		{ "Comment", "/** If true, then relative Sequence Paths are relative to the project root directory. If false, then relative to the Content directory. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "If true, then relative Sequence Paths are relative to the project root directory. If false, then relative to the Content directory." },
	};
#endif
	void Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_SetBit(void* Obj)
	{
		((UImgMediaSource*)Obj)->IsPathRelativeToProjectRoot_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot = { "IsPathRelativeToProjectRoot", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaSource), &Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Overrides the default frame rate stored in the image files (0/0 = do not override). */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Overrides the default frame rate stored in the image files (0/0 = do not override)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride = { "FrameRateOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSource, FrameRateOverride), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** Name of the proxy directory to use. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "Name of the proxy directory to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride = { "ProxyOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSource, ProxyOverride), METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** If true, then any gaps in the sequence will be filled with blank frames. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "If true, then any gaps in the sequence will be filled with blank frames." },
	};
#endif
	void Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_SetBit(void* Obj)
	{
		((UImgMediaSource*)Obj)->bFillGapsInSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence = { "bFillGapsInSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UImgMediaSource), &Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequenceProxy_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** This is only used so we can customize editing of SequencePath. */" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "This is only used so we can customize editing of SequencePath." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequenceProxy = { "SequenceProxy", nullptr, (EPropertyFlags)0x0010000800002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSource, SequenceProxy), Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequenceProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequenceProxy_MetaData)) }; // 3490124505
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "/** The directory that contains the image sequence files.\n\x09 *  \n\x09 * - Relative paths will be with respect to the current Project directory. \n\x09 * - You may use {engine_dir} or {project_dir} tokens.\n\x09 */" },
		{ "EditCondition", "false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ImgMediaSource.h" },
		{ "ToolTip", "The directory that contains the image sequence files.\n\n- Relative paths will be with respect to the current Project directory.\n- You may use {engine_dir} or {project_dir} tokens." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath = { "SequencePath", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaSource, SequencePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_IsPathRelativeToProjectRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_FrameRateOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_ProxyOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_bFillGapsInSequence,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequenceProxy,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaSource_Statics::NewProp_SequencePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaSource_Statics::ClassParams = {
		&UImgMediaSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImgMediaSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaSource()
	{
		if (!Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton, Z_Construct_UClass_UImgMediaSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImgMediaSource.OuterSingleton;
	}
	template<> IMGMEDIA_API UClass* StaticClass<UImgMediaSource>()
	{
		return UImgMediaSource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaSource);
	UImgMediaSource::~UImgMediaSource() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UImgMediaSource)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ScriptStructInfo[] = {
		{ FImgMediaSourceCustomizationSequenceProxy::StaticStruct, Z_Construct_UScriptStruct_FImgMediaSourceCustomizationSequenceProxy_Statics::NewStructOps, TEXT("ImgMediaSourceCustomizationSequenceProxy"), &Z_Registration_Info_UScriptStruct_ImgMediaSourceCustomizationSequenceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImgMediaSourceCustomizationSequenceProxy), 3490124505U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImgMediaSource, UImgMediaSource::StaticClass, TEXT("UImgMediaSource"), &Z_Registration_Info_UClass_UImgMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImgMediaSource), 842330418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_3316791770(TEXT("/Script/ImgMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMedia_Public_ImgMediaSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
