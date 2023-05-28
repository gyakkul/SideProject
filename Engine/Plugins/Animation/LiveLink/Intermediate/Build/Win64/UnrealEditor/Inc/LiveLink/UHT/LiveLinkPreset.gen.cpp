// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkPreset.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "LiveLinkPresetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkPreset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourcePreset();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectPreset();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	DEFINE_FUNCTION(ULiveLinkPreset::execBuildFromClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildFromClient();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkPreset::execAddToClient)
	{
		P_GET_UBOOL(Z_Param_bRecreatePresets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddToClient(Z_Param_bRecreatePresets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkPreset::execApplyToClientLatent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyToClientLatent(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkPreset::execApplyToClient)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyToClient();
		P_NATIVE_END;
	}
	void ULiveLinkPreset::StaticRegisterNativesULiveLinkPreset()
	{
		UClass* Class = ULiveLinkPreset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToClient", &ULiveLinkPreset::execAddToClient },
			{ "ApplyToClient", &ULiveLinkPreset::execApplyToClient },
			{ "ApplyToClientLatent", &ULiveLinkPreset::execApplyToClientLatent },
			{ "BuildFromClient", &ULiveLinkPreset::execBuildFromClient },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics
	{
		struct LiveLinkPreset_eventAddToClient_Parms
		{
			bool bRecreatePresets;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecreatePresets_MetaData[];
#endif
		static void NewProp_bRecreatePresets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecreatePresets;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventAddToClient_Parms*)Obj)->bRecreatePresets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets = { "bRecreatePresets", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_SetBit, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventAddToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkPreset_eventAddToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_bRecreatePresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\x09 *\n\x09 * @param bRecreatePresets\x09When true, if subjects and sources from this preset already exist, we will recreate them.\n\x09 *\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "CPP_Default_bRecreatePresets", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Add the sources and subjects from this preset, but leave any existing sources and subjects connected.\n\n@param bRecreatePresets      When true, if subjects and sources from this preset already exist, we will recreate them.\n\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "AddToClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::LiveLinkPreset_eventAddToClient_Parms), Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_AddToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_AddToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics
	{
		struct LiveLinkPreset_eventApplyToClient_Parms
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
	void Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkPreset_eventApplyToClient_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkPreset_eventApplyToClient_Parms), &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClient", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::LiveLinkPreset_eventApplyToClient_Parms), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics
	{
		struct LiveLinkPreset_eventApplyToClientLatent_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkPreset_eventApplyToClientLatent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkPreset_eventApplyToClientLatent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/**\n\x09 * Remove all previous sources and subjects and add the sources and subjects from this preset.\n\x09 * @return True is all sources and subjects from this preset could be created and added.\n\x09 */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Remove all previous sources and subjects and add the sources and subjects from this preset.\n@return True is all sources and subjects from this preset could be created and added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "ApplyToClientLatent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::LiveLinkPreset_eventApplyToClientLatent_Parms), Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reset this preset and build the list of sources and subjects from the client. */" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
		{ "ToolTip", "Reset this preset and build the list of sources and subjects from the client." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkPreset, nullptr, "BuildFromClient", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkPreset);
	UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister()
	{
		return ULiveLinkPreset::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkPreset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkPreset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkPreset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkPreset_AddToClient, "AddToClient" }, // 258414919
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClient, "ApplyToClient" }, // 66238902
		{ &Z_Construct_UFunction_ULiveLinkPreset_ApplyToClientLatent, "ApplyToClientLatent" }, // 1652068043
		{ &Z_Construct_UFunction_ULiveLinkPreset_BuildFromClient, "BuildFromClient" }, // 935105385
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LiveLinkPreset.h" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSourcePreset, METADATA_PARAMS(nullptr, 0) }; // 1027253594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData[] = {
		{ "Category", "LiveLinkSourcePresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPreset, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_MetaData)) }; // 1027253594
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectPreset, METADATA_PARAMS(nullptr, 0) }; // 855667327
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLinkSubjectPresets" },
		{ "ModuleRelativePath", "Public/LiveLinkPreset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkPreset, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_MetaData)) }; // 855667327
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Sources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkPreset_Statics::NewProp_Subjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkPreset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkPreset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams = {
		&ULiveLinkPreset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkPreset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkPreset()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton, Z_Construct_UClass_ULiveLinkPreset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkPreset.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkPreset>()
	{
		return ULiveLinkPreset::StaticClass();
	}
	ULiveLinkPreset::ULiveLinkPreset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkPreset);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkPreset, ULiveLinkPreset::StaticClass, TEXT("ULiveLinkPreset"), &Z_Registration_Info_UClass_ULiveLinkPreset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkPreset), 1836325212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_3980517227(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkPreset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
