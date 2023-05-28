// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineConfigBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineConfigBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieRenderPipelineCore();
// End Cross Module References
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execFindOrAddSettingByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_UBOOL(Z_Param_bIncludeDisabledSettings);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineSetting**)Z_Param__Result=P_THIS->FindOrAddSettingByClass(Z_Param_InClass,Z_Param_bIncludeDisabledSettings,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execFindSettingByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_UBOOL(Z_Param_bIncludeDisabledSettings);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineSetting**)Z_Param__Result=P_THIS->FindSettingByClass(Z_Param_InClass,Z_Param_bIncludeDisabledSettings,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execFindSettingsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_InClass);
		P_GET_UBOOL(Z_Param_bIncludeDisabledSettings);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineSetting*>*)Z_Param__Result=P_THIS->FindSettingsByClass(Z_Param_InClass,Z_Param_bIncludeDisabledSettings,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execSetConfigOrigin)
	{
		P_GET_OBJECT(UMoviePipelineConfigBase,Z_Param_InConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConfigOrigin(Z_Param_InConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execGetConfigOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineConfigBase**)Z_Param__Result=P_THIS->GetConfigOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execGetUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMoviePipelineSetting*>*)Z_Param__Result=P_THIS->GetUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execCopyFrom)
	{
		P_GET_OBJECT(UMoviePipelineConfigBase,Z_Param_InConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFrom(Z_Param_InConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMoviePipelineConfigBase::execRemoveSetting)
	{
		P_GET_OBJECT(UMoviePipelineSetting,Z_Param_InSetting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSetting(Z_Param_InSetting);
		P_NATIVE_END;
	}
	void UMoviePipelineConfigBase::StaticRegisterNativesUMoviePipelineConfigBase()
	{
		UClass* Class = UMoviePipelineConfigBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFrom", &UMoviePipelineConfigBase::execCopyFrom },
			{ "FindOrAddSettingByClass", &UMoviePipelineConfigBase::execFindOrAddSettingByClass },
			{ "FindSettingByClass", &UMoviePipelineConfigBase::execFindSettingByClass },
			{ "FindSettingsByClass", &UMoviePipelineConfigBase::execFindSettingsByClass },
			{ "GetConfigOrigin", &UMoviePipelineConfigBase::execGetConfigOrigin },
			{ "GetUserSettings", &UMoviePipelineConfigBase::execGetUserSettings },
			{ "RemoveSetting", &UMoviePipelineConfigBase::execRemoveSetting },
			{ "SetConfigOrigin", &UMoviePipelineConfigBase::execSetConfigOrigin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics
	{
		struct MoviePipelineConfigBase_eventCopyFrom_Parms
		{
			UMoviePipelineConfigBase* InConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventCopyFrom_Parms, InConfig), Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Copy this configuration from another existing configuration. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Copy this configuration from another existing configuration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "CopyFrom", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::MoviePipelineConfigBase_eventCopyFrom_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics
	{
		struct MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InClass;
			bool bIncludeDisabledSettings;
			bool bExactMatch;
			UMoviePipelineSetting* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDisabledSettings_MetaData[];
#endif
		static void NewProp_bIncludeDisabledSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisabledSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms*)Obj)->bIncludeDisabledSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings = { "bIncludeDisabledSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bIncludeDisabledSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Finds a setting of a particular type for this pipeline config, adding it if it doesn't already exist.\n\x09* @param InClass - Class you wish to find or create the setting object for.\n\x09* @param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n\x09* @param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n\x09* @return An instance of this class as a setting on this config.\n\x09*/" },
		{ "CPP_Default_bExactMatch", "false" },
		{ "CPP_Default_bIncludeDisabledSettings", "false" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Finds a setting of a particular type for this pipeline config, adding it if it doesn't already exist.\n@param InClass - Class you wish to find or create the setting object for.\n@param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n@param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n@return An instance of this class as a setting on this config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "FindOrAddSettingByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::MoviePipelineConfigBase_eventFindOrAddSettingByClass_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics
	{
		struct MoviePipelineConfigBase_eventFindSettingByClass_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InClass;
			bool bIncludeDisabledSettings;
			bool bExactMatch;
			UMoviePipelineSetting* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDisabledSettings_MetaData[];
#endif
		static void NewProp_bIncludeDisabledSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisabledSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindSettingByClass_Parms*)Obj)->bIncludeDisabledSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings = { "bIncludeDisabledSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindSettingByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindSettingByClass_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindSettingByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingByClass_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bIncludeDisabledSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Find a setting of a particular type for this config.\n\x09* @param InClass - Class that you wish to find the setting object for.\n\x09* @param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n\x09* @param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n\x09* @return An instance of this class if it already exists as a setting on this config, otherwise null.\n\x09*/" },
		{ "CPP_Default_bExactMatch", "false" },
		{ "CPP_Default_bIncludeDisabledSettings", "false" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Find a setting of a particular type for this config.\n@param InClass - Class that you wish to find the setting object for.\n@param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n@param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n@return An instance of this class if it already exists as a setting on this config, otherwise null." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "FindSettingByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::MoviePipelineConfigBase_eventFindSettingByClass_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics
	{
		struct MoviePipelineConfigBase_eventFindSettingsByClass_Parms
		{
			TSubclassOf<UMoviePipelineSetting>  InClass;
			bool bIncludeDisabledSettings;
			bool bExactMatch;
			TArray<UMoviePipelineSetting*> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeDisabledSettings_MetaData[];
#endif
		static void NewProp_bIncludeDisabledSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeDisabledSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExactMatch_MetaData[];
#endif
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingsByClass_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindSettingsByClass_Parms*)Obj)->bIncludeDisabledSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings = { "bIncludeDisabledSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindSettingsByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((MoviePipelineConfigBase_eventFindSettingsByClass_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MoviePipelineConfigBase_eventFindSettingsByClass_Parms), &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventFindSettingsByClass_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bIncludeDisabledSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09* Find all settings of a particular type for this config.\n\x09* @param InClass - Class that you wish to find the setting object for.\n\x09* @param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n\x09* @param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n\x09* @return An array of instances of this class if it already exists as a setting on this config\n\x09*/" },
		{ "CPP_Default_bExactMatch", "false" },
		{ "CPP_Default_bIncludeDisabledSettings", "false" },
		{ "DeterminesOutputType", "InClass" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Find all settings of a particular type for this config.\n@param InClass - Class that you wish to find the setting object for.\n@param bIncludeDisabledSettings - if true, disabled settings will be included in the search\n@param bExactMatch - if true, only exact matches of the specified class will be found, otherwise subclasses of the specified class will also be found\n@return An array of instances of this class if it already exists as a setting on this config" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "FindSettingsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::MoviePipelineConfigBase_eventFindSettingsByClass_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics
	{
		struct MoviePipelineConfigBase_eventGetConfigOrigin_Parms
		{
			UMoviePipelineConfigBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventGetConfigOrigin_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09 * Gets the config that this config was originally based on (if any). The origin will only be set on transient\n\x09 * configs; the origin will be nullptr for non-transient configs because the origin will be this object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Gets the config that this config was originally based on (if any). The origin will only be set on transient\nconfigs; the origin will be nullptr for non-transient configs because the origin will be this object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "GetConfigOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::MoviePipelineConfigBase_eventGetConfigOrigin_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics
	{
		struct MoviePipelineConfigBase_eventGetUserSettings_Parms
		{
			TArray<UMoviePipelineSetting*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventGetUserSettings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Returns an array of all settings in this config that the user has added via the UI or via Scripting. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Returns an array of all settings in this config that the user has added via the UI or via Scripting." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "GetUserSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::MoviePipelineConfigBase_eventGetUserSettings_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics
	{
		struct MoviePipelineConfigBase_eventRemoveSetting_Parms
		{
			UMoviePipelineSetting* InSetting;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSetting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::NewProp_InSetting = { "InSetting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventRemoveSetting_Parms, InSetting), Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::NewProp_InSetting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/** Removes the specific instance from our Setting list. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Removes the specific instance from our Setting list." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "RemoveSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::MoviePipelineConfigBase_eventRemoveSetting_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics
	{
		struct MoviePipelineConfigBase_eventSetConfigOrigin_Parms
		{
			UMoviePipelineConfigBase* InConfig;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::NewProp_InConfig = { "InConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MoviePipelineConfigBase_eventSetConfigOrigin_Parms, InConfig), Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::NewProp_InConfig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movie Render Pipeline" },
		{ "Comment", "/**\n\x09 * Sets the config that this config originated from (if any). The origin should only be set for transient configs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Sets the config that this config originated from (if any). The origin should only be set for transient configs." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMoviePipelineConfigBase, nullptr, "SetConfigOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::MoviePipelineConfigBase_eventSetConfigOrigin_Parms), Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineConfigBase);
	UClass* Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister()
	{
		return UMoviePipelineConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ConfigOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieRenderPipelineCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMoviePipelineConfigBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_CopyFrom, "CopyFrom" }, // 500881534
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_FindOrAddSettingByClass, "FindOrAddSettingByClass" }, // 272914178
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingByClass, "FindSettingByClass" }, // 3224239466
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_FindSettingsByClass, "FindSettingsByClass" }, // 3063174468
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_GetConfigOrigin, "GetConfigOrigin" }, // 1690040148
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_GetUserSettings, "GetUserSettings" }, // 3699890363
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_RemoveSetting, "RemoveSetting" }, // 1312474494
		{ &Z_Construct_UFunction_UMoviePipelineConfigBase_SetConfigOrigin, "SetConfigOrigin" }, // 2575551565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineConfigBase.h" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConfigBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Array of settings classes that affect various parts of the output pipeline. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Array of settings classes that affect various parts of the output pipeline." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x00060000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMoviePipelineSetting_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Movie Pipeline" },
		{ "Comment", "/** Array of settings classes that affect various parts of the output pipeline. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "Array of settings classes that affect various parts of the output pipeline." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024088000020009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConfigBase, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_ConfigOrigin_MetaData[] = {
		{ "Comment", "/** The config that this config originated from. Helpful for transient configs. */" },
		{ "ModuleRelativePath", "Public/MoviePipelineConfigBase.h" },
		{ "ToolTip", "The config that this config originated from. Helpful for transient configs." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_ConfigOrigin = { "ConfigOrigin", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineConfigBase, ConfigOrigin), Z_Construct_UClass_UMoviePipelineConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_ConfigOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_ConfigOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineConfigBase_Statics::NewProp_ConfigOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineConfigBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineConfigBase_Statics::ClassParams = {
		&UMoviePipelineConfigBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineConfigBase()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineConfigBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineConfigBase.OuterSingleton, Z_Construct_UClass_UMoviePipelineConfigBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineConfigBase.OuterSingleton;
	}
	template<> MOVIERENDERPIPELINECORE_API UClass* StaticClass<UMoviePipelineConfigBase>()
	{
		return UMoviePipelineConfigBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineConfigBase);
	UMoviePipelineConfigBase::~UMoviePipelineConfigBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineConfigBase, UMoviePipelineConfigBase::StaticClass, TEXT("UMoviePipelineConfigBase"), &Z_Registration_Info_UClass_UMoviePipelineConfigBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineConfigBase), 108062653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_1179978229(TEXT("/Script/MovieRenderPipelineCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MovieRenderPipeline_Source_MovieRenderPipelineCore_Public_MoviePipelineConfigBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
