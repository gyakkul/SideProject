// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepContentConsumer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepContentConsumer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepConsumerUserData();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepConsumerUserData_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepConsumerUserData::StaticRegisterNativesUDataprepConsumerUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepConsumerUserData);
	UClass* Z_Construct_UClass_UDataprepConsumerUserData_NoRegister()
	{
		return UDataprepConsumerUserData::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepConsumerUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Markers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Markers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Markers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Markers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepConsumerUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepConsumerUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A UDataprepConsumerUserData is used to mark an asset or an actor to be respectively moved to a sub-folder or sub-level\n * A DataprepContentConsumer is not obligated to honor this marker \n */" },
		{ "DisplayName", "Dataprep Consumer User Data" },
		{ "IncludePath", "DataprepContentConsumer.h" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ScriptName", "DataprepConsumerUserData" },
		{ "ToolTip", "A UDataprepConsumerUserData is used to mark an asset or an actor to be respectively moved to a sub-folder or sub-level\nA DataprepContentConsumer is not obligated to honor this marker" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_ValueProp = { "Markers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_Key_KeyProp = { "Markers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_MetaData[] = {
		{ "Comment", "/** Map for Dataprep entities to store data consumable or not by a consumer */" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Map for Dataprep entities to store data consumable or not by a consumer" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers = { "Markers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepConsumerUserData, Markers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepConsumerUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepConsumerUserData_Statics::NewProp_Markers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepConsumerUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepConsumerUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepConsumerUserData_Statics::ClassParams = {
		&UDataprepConsumerUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepConsumerUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepConsumerUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepConsumerUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepConsumerUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepConsumerUserData()
	{
		if (!Z_Registration_Info_UClass_UDataprepConsumerUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepConsumerUserData.OuterSingleton, Z_Construct_UClass_UDataprepConsumerUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepConsumerUserData.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepConsumerUserData>()
	{
		return UDataprepConsumerUserData::StaticClass();
	}
	UDataprepConsumerUserData::UDataprepConsumerUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepConsumerUserData);
	UDataprepConsumerUserData::~UDataprepConsumerUserData() {}
	DEFINE_FUNCTION(UDataprepContentConsumer::execGetTargetContentFolder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTargetContentFolder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepContentConsumer::execSetTargetContentFolderAutomated)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTargetContentFolder);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTargetContentFolderAutomated(Z_Param_InTargetContentFolder,Z_Param_Out_OutFailureReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepContentConsumer::execSetTargetContentFolder)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTargetContentFolder);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetTargetContentFolder(Z_Param_InTargetContentFolder,Z_Param_Out_OutFailureReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepContentConsumer::execGetLevelName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLevelName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepContentConsumer::execSetLevelNameAutomated)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLevelName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLevelNameAutomated(Z_Param_InLevelName,Z_Param_Out_OutFailureReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDataprepContentConsumer::execSetLevelName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InLevelName);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutFailureReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLevelName(Z_Param_InLevelName,Z_Param_Out_OutFailureReason);
		P_NATIVE_END;
	}
	void UDataprepContentConsumer::StaticRegisterNativesUDataprepContentConsumer()
	{
		UClass* Class = UDataprepContentConsumer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLevelName", &UDataprepContentConsumer::execGetLevelName },
			{ "GetTargetContentFolder", &UDataprepContentConsumer::execGetTargetContentFolder },
			{ "SetLevelName", &UDataprepContentConsumer::execSetLevelName },
			{ "SetLevelNameAutomated", &UDataprepContentConsumer::execSetLevelNameAutomated },
			{ "SetTargetContentFolder", &UDataprepContentConsumer::execSetTargetContentFolder },
			{ "SetTargetContentFolderAutomated", &UDataprepContentConsumer::execSetTargetContentFolderAutomated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics
	{
		struct DataprepContentConsumer_eventGetLevelName_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventGetLevelName_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "GetLevelName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::DataprepContentConsumer_eventGetLevelName_Parms), Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics
	{
		struct DataprepContentConsumer_eventGetTargetContentFolder_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventGetTargetContentFolder_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "GetTargetContentFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::DataprepContentConsumer_eventGetTargetContentFolder_Parms), Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics
	{
		struct DataprepContentConsumer_eventSetLevelName_Parms
		{
			FString InLevelName;
			FText OutFailureReason;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLevelName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_InLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_InLevelName = { "InLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetLevelName_Parms, InLevelName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_InLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_InLevelName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetLevelName_Parms, OutFailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataprepContentConsumer_eventSetLevelName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepContentConsumer_eventSetLevelName_Parms), &Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_InLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_OutFailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "Comment", "/**\n\x09 * Sets the name of the level the consumer should move objects to if applicable.\n\x09 * @param InLevelName : New name for the consumer's level.\n\x09 * @param OutFailureReason : String explaining reason of failure to set the level name\n\x09 * @return true if the name has been successfully set\n\x09 * @remark if InLevelName is empty or equal to 'current' (case insensitive), no change is made\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Sets the name of the level the consumer should move objects to if applicable.\n@param InLevelName : New name for the consumer's level.\n@param OutFailureReason : String explaining reason of failure to set the level name\n@return true if the name has been successfully set\n@remark if InLevelName is empty or equal to 'current' (case insensitive), no change is made" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "SetLevelName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::DataprepContentConsumer_eventSetLevelName_Parms), Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics
	{
		struct DataprepContentConsumer_eventSetLevelNameAutomated_Parms
		{
			FString InLevelName;
			FText OutFailureReason;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InLevelName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_InLevelName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_InLevelName = { "InLevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetLevelNameAutomated_Parms, InLevelName), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_InLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_InLevelName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetLevelNameAutomated_Parms, OutFailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataprepContentConsumer_eventSetLevelNameAutomated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepContentConsumer_eventSetLevelNameAutomated_Parms), &Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_InLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_OutFailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "Comment", "/**\n\x09 * Sets the name of the level the consumer should move objects to if applicable.\n\x09 * This version won't pop any ui\n\x09 * @param InLevelName : New name for the consumer's level.\n\x09 * @param OutFailureReason : String explaining reason of failure to set the level name\n\x09 * @return true if the name has been successfully set\n\x09 * @remark if InLevelName is empty or equal to 'current' (case insensitive), no change is made\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Sets the name of the level the consumer should move objects to if applicable.\nThis version won't pop any ui\n@param InLevelName : New name for the consumer's level.\n@param OutFailureReason : String explaining reason of failure to set the level name\n@return true if the name has been successfully set\n@remark if InLevelName is empty or equal to 'current' (case insensitive), no change is made" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "SetLevelNameAutomated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::DataprepContentConsumer_eventSetLevelNameAutomated_Parms), Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics
	{
		struct DataprepContentConsumer_eventSetTargetContentFolder_Parms
		{
			FString InTargetContentFolder;
			FText OutFailureReason;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargetContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTargetContentFolder;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_InTargetContentFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_InTargetContentFolder = { "InTargetContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetTargetContentFolder_Parms, InTargetContentFolder), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_InTargetContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_InTargetContentFolder_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetTargetContentFolder_Parms, OutFailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataprepContentConsumer_eventSetTargetContentFolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepContentConsumer_eventSetTargetContentFolder_Parms), &Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_InTargetContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_OutFailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "Comment", "/**\n\x09 * Sets the path of the package the consumer should move assets to if applicable.\n\x09 * Generally, this package path is substituted to the temporary path the assets are in\n\x09 * @param InTargetContentFolder : Path of the package to save any assets in\n\x09 * @param OutFailureReason : String explaining reason of failure to set the target content folder\n\x09 * @return true if the assignment has been successful, false otherwise\n\x09 * @remark if InPackagePath is empty the package path of the consumer is used\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Sets the path of the package the consumer should move assets to if applicable.\nGenerally, this package path is substituted to the temporary path the assets are in\n@param InTargetContentFolder : Path of the package to save any assets in\n@param OutFailureReason : String explaining reason of failure to set the target content folder\n@return true if the assignment has been successful, false otherwise\n@remark if InPackagePath is empty the package path of the consumer is used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "SetTargetContentFolder", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::DataprepContentConsumer_eventSetTargetContentFolder_Parms), Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics
	{
		struct DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms
		{
			FString InTargetContentFolder;
			FText OutFailureReason;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTargetContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTargetContentFolder;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutFailureReason;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_InTargetContentFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_InTargetContentFolder = { "InTargetContentFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms, InTargetContentFolder), METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_InTargetContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_InTargetContentFolder_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_OutFailureReason = { "OutFailureReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms, OutFailureReason), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms), &Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_InTargetContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_OutFailureReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataprepConsumer" },
		{ "Comment", "/**\n\x09 * Sets the path of the package the consumer should move assets to if applicable.\n\x09 * This version won't pop any ui\n\x09 * Generally, this package path is substituted to the temporary path the assets are in\n\x09 * @param InTargetContentFolder : Path of the package to save any assets in\n\x09 * @param OutFailureReason : String explaining reason of failure to set the target content folder\n\x09 * @return true if the assignment has been successful, false otherwise\n\x09 * @remark if InPackagePath is empty the package path of the consumer is used\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Sets the path of the package the consumer should move assets to if applicable.\nThis version won't pop any ui\nGenerally, this package path is substituted to the temporary path the assets are in\n@param InTargetContentFolder : Path of the package to save any assets in\n@param OutFailureReason : String explaining reason of failure to set the target content folder\n@return true if the assignment has been successful, false otherwise\n@remark if InPackagePath is empty the package path of the consumer is used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDataprepContentConsumer, nullptr, "SetTargetContentFolderAutomated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::DataprepContentConsumer_eventSetTargetContentFolderAutomated_Parms), Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepContentConsumer);
	UClass* Z_Construct_UClass_UDataprepContentConsumer_NoRegister()
	{
		return UDataprepContentConsumer::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepContentConsumer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetContentFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetContentFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepContentConsumer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDataprepContentConsumer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDataprepContentConsumer_GetLevelName, "GetLevelName" }, // 2647942301
		{ &Z_Construct_UFunction_UDataprepContentConsumer_GetTargetContentFolder, "GetTargetContentFolder" }, // 3795540568
		{ &Z_Construct_UFunction_UDataprepContentConsumer_SetLevelName, "SetLevelName" }, // 3278145454
		{ &Z_Construct_UFunction_UDataprepContentConsumer_SetLevelNameAutomated, "SetLevelNameAutomated" }, // 322581985
		{ &Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolder, "SetTargetContentFolder" }, // 4115281002
		{ &Z_Construct_UFunction_UDataprepContentConsumer_SetTargetContentFolderAutomated, "SetTargetContentFolderAutomated" }, // 2076028469
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepContentConsumer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract class providing the minimal services required for a DataprepConsumer\n * \n * Use the SDataprepConsumerWidget class to detail the properties of this class\n */" },
		{ "IncludePath", "DataprepContentConsumer.h" },
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
		{ "ToolTip", "Abstract class providing the minimal services required for a DataprepConsumer\n\nUse the SDataprepConsumerWidget class to detail the properties of this class" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_TargetContentFolder_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_TargetContentFolder = { "TargetContentFolder", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepContentConsumer, TargetContentFolder), METADATA_PARAMS(Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_TargetContentFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_TargetContentFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataprepContentConsumer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepContentConsumer, LevelName), METADATA_PARAMS(Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_LevelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepContentConsumer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_TargetContentFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepContentConsumer_Statics::NewProp_LevelName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepContentConsumer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepContentConsumer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepContentConsumer_Statics::ClassParams = {
		&UDataprepContentConsumer::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDataprepContentConsumer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepContentConsumer_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepContentConsumer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepContentConsumer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepContentConsumer()
	{
		if (!Z_Registration_Info_UClass_UDataprepContentConsumer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepContentConsumer.OuterSingleton, Z_Construct_UClass_UDataprepContentConsumer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepContentConsumer.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepContentConsumer>()
	{
		return UDataprepContentConsumer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepContentConsumer);
	UDataprepContentConsumer::~UDataprepContentConsumer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepConsumerUserData, UDataprepConsumerUserData::StaticClass, TEXT("UDataprepConsumerUserData"), &Z_Registration_Info_UClass_UDataprepConsumerUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepConsumerUserData), 467298270U) },
		{ Z_Construct_UClass_UDataprepContentConsumer, UDataprepContentConsumer::StaticClass, TEXT("UDataprepContentConsumer"), &Z_Registration_Info_UClass_UDataprepContentConsumer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepContentConsumer), 3548870048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_2443007661(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepContentConsumer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
