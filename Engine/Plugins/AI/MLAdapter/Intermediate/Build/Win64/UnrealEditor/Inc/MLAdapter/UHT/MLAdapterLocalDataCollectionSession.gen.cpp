// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sessions/MLAdapterLocalDataCollectionSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterLocalDataCollectionSession() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterLocalDataCollectionSession();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSession();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	DEFINE_FUNCTION(UMLAdapterLocalDataCollectionSession::execOnPawnControllerChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_InPawn);
		P_GET_OBJECT(AController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnControllerChanged(Z_Param_InPawn,Z_Param_InController);
		P_NATIVE_END;
	}
	void UMLAdapterLocalDataCollectionSession::StaticRegisterNativesUMLAdapterLocalDataCollectionSession()
	{
		UClass* Class = UMLAdapterLocalDataCollectionSession::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPawnControllerChanged", &UMLAdapterLocalDataCollectionSession::execOnPawnControllerChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics
	{
		struct MLAdapterLocalDataCollectionSession_eventOnPawnControllerChanged_Parms
		{
			APawn* InPawn;
			AController* InController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::NewProp_InPawn = { "InPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterLocalDataCollectionSession_eventOnPawnControllerChanged_Parms, InPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterLocalDataCollectionSession_eventOnPawnControllerChanged_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::NewProp_InPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::NewProp_InController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLAdapterLocalDataCollectionSession, nullptr, "OnPawnControllerChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::MLAdapterLocalDataCollectionSession_eventOnPawnControllerChanged_Parms), Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterLocalDataCollectionSession);
	UClass* Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_NoRegister()
	{
		return UMLAdapterLocalDataCollectionSession::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrefixOutputFilenameWithTimestamp_MetaData[];
#endif
		static void NewProp_bPrefixOutputFilenameWithTimestamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrefixOutputFilenameWithTimestamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControlledAgent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PlayerControlledAgent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSession,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLAdapterLocalDataCollectionSession_OnPawnControllerChanged, "OnPawnControllerChanged" }, // 730820741
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Collects data from agents' sensors and writes them to a file for offline processing. Only works with a locally\n * controlled, single-player game.\n */" },
		{ "IncludePath", "Sessions/MLAdapterLocalDataCollectionSession.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
		{ "ToolTip", "Collects data from agents' sensors and writes them to a file for offline processing. Only works with a locally\ncontrolled, single-player game." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterLocalDataCollectionSession, FilePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterLocalDataCollectionSession, FileName), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp_SetBit(void* Obj)
	{
		((UMLAdapterLocalDataCollectionSession*)Obj)->bPrefixOutputFilenameWithTimestamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp = { "bPrefixOutputFilenameWithTimestamp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLAdapterLocalDataCollectionSession), &Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_PlayerControlledAgent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sessions/MLAdapterLocalDataCollectionSession.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_PlayerControlledAgent = { "PlayerControlledAgent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterLocalDataCollectionSession, PlayerControlledAgent), Z_Construct_UClass_UMLAdapterAgent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_PlayerControlledAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_PlayerControlledAgent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_FileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_bPrefixOutputFilenameWithTimestamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::NewProp_PlayerControlledAgent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterLocalDataCollectionSession>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::ClassParams = {
		&UMLAdapterLocalDataCollectionSession::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterLocalDataCollectionSession()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterLocalDataCollectionSession.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterLocalDataCollectionSession.OuterSingleton, Z_Construct_UClass_UMLAdapterLocalDataCollectionSession_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterLocalDataCollectionSession.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterLocalDataCollectionSession>()
	{
		return UMLAdapterLocalDataCollectionSession::StaticClass();
	}
	UMLAdapterLocalDataCollectionSession::UMLAdapterLocalDataCollectionSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterLocalDataCollectionSession);
	UMLAdapterLocalDataCollectionSession::~UMLAdapterLocalDataCollectionSession() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterLocalDataCollectionSession, UMLAdapterLocalDataCollectionSession::StaticClass, TEXT("UMLAdapterLocalDataCollectionSession"), &Z_Registration_Info_UClass_UMLAdapterLocalDataCollectionSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterLocalDataCollectionSession), 2538360048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_2239347690(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sessions_MLAdapterLocalDataCollectionSession_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
