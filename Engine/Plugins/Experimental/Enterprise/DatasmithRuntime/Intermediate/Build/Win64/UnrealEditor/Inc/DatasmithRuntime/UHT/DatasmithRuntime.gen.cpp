// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithRuntime.h"
#include "DatasmithImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithRuntime() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithTessellationOptions();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_ADatasmithRuntimeActor();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister();
	DATASMITHRUNTIME_API UEnum* Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod();
	DATASMITHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag();
	UPackage* Z_Construct_UPackage__Script_DatasmithRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBuildHierarchyMethod;
	static UEnum* EBuildHierarchyMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBuildHierarchyMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBuildHierarchyMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod, (UObject*)Z_Construct_UPackage__Script_DatasmithRuntime(), TEXT("EBuildHierarchyMethod"));
		}
		return Z_Registration_Info_UEnum_EBuildHierarchyMethod.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UEnum* StaticEnum<EBuildHierarchyMethod>()
	{
		return EBuildHierarchyMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enumerators[] = {
		{ "EBuildHierarchyMethod::None", (int64)EBuildHierarchyMethod::None },
		{ "EBuildHierarchyMethod::Simplified", (int64)EBuildHierarchyMethod::Simplified },
		{ "EBuildHierarchyMethod::Unfiltered", (int64)EBuildHierarchyMethod::Unfiltered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "None.Name", "EBuildHierarchyMethod::None" },
		{ "Simplified.Name", "EBuildHierarchyMethod::Simplified" },
		{ "Unfiltered.Name", "EBuildHierarchyMethod::Unfiltered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DatasmithRuntime,
		nullptr,
		"EBuildHierarchyMethod",
		"EBuildHierarchyMethod",
		Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod()
	{
		if (!Z_Registration_Info_UEnum_EBuildHierarchyMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBuildHierarchyMethod.InnerSingleton, Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBuildHierarchyMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions;
class UScriptStruct* FDatasmithRuntimeImportOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions, (UObject*)Z_Construct_UPackage__Script_DatasmithRuntime(), TEXT("DatasmithRuntimeImportOptions"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.OuterSingleton;
}
template<> DATASMITHRUNTIME_API UScriptStruct* StaticStruct<FDatasmithRuntimeImportOptions>()
{
	return FDatasmithRuntimeImportOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TessellationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TessellationOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildHierarchy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildCollisions_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportMetaData_MetaData[];
#endif
		static void NewProp_bImportMetaData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithRuntimeImportOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_TessellationOptions_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/** Tessellation options for CAD import */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "Tessellation options for CAD import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_TessellationOptions = { "TessellationOptions", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithRuntimeImportOptions, TessellationOptions), Z_Construct_UScriptStruct_FDatasmithTessellationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_TessellationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_TessellationOptions_MetaData)) }; // 2392613072
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/**\n\x09 * Indicates whether a hierarchy of actors should be built or not.\n\x09 * In the case a hierarchy is built, it can be simplified to minimize the number of actors created\n\x09 * By default, a simplified hierarchy is built\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "Indicates whether a hierarchy of actors should be built or not.\nIn the case a hierarchy is built, it can be simplified to minimize the number of actors created\nBy default, a simplified hierarchy is built" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy = { "BuildHierarchy", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithRuntimeImportOptions, BuildHierarchy), Z_Construct_UEnum_DatasmithRuntime_EBuildHierarchyMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy_MetaData)) }; // 2631398810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildCollisions_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/**\n\x09 * Indicates the type of collision for components\n\x09 * Set to ECollisionEnabled::QueryOnly (spatial queries, no physics) by default\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "Indicates the type of collision for components\nSet to ECollisionEnabled::QueryOnly (spatial queries, no physics) by default" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildCollisions = { "BuildCollisions", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithRuntimeImportOptions, BuildCollisions), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildCollisions_MetaData)) }; // 1787744072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/**\n\x09 * Indicates the type of collision for static meshes\n\x09 * Set to ECollisionTraceFlag::CTF_UseComplexAsSimple by default\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "Indicates the type of collision for static meshes\nSet to ECollisionTraceFlag::CTF_UseComplexAsSimple by default" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithRuntimeImportOptions, CollisionType), Z_Construct_UEnum_PhysicsCore_ECollisionTraceFlag, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_CollisionType_MetaData)) }; // 3043805667
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "/**\n\x09 * Indicates whether meta-data should be imported or not\n\x09 * Meta-data are imported by default\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "Indicates whether meta-data should be imported or not\nMeta-data are imported by default" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData_SetBit(void* Obj)
	{
		((FDatasmithRuntimeImportOptions*)Obj)->bImportMetaData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData = { "bImportMetaData", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDatasmithRuntimeImportOptions), &Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_TessellationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_BuildCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewProp_bImportMetaData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
		nullptr,
		&NewStructOps,
		"DatasmithRuntimeImportOptions",
		sizeof(FDatasmithRuntimeImportOptions),
		alignof(FDatasmithRuntimeImportOptions),
		Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadFile(Z_Param_FilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execIsReceiving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsReceiving();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execGetSourceIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSourceIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execCloseConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execOpenConnectionWithIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SourceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenConnectionWithIndex(Z_Param_SourceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execGetSourceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSourceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execGetDestinationName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDestinationName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADatasmithRuntimeActor::execIsConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsConnected();
		P_NATIVE_END;
	}
	void ADatasmithRuntimeActor::StaticRegisterNativesADatasmithRuntimeActor()
	{
		UClass* Class = ADatasmithRuntimeActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseConnection", &ADatasmithRuntimeActor::execCloseConnection },
			{ "GetDestinationName", &ADatasmithRuntimeActor::execGetDestinationName },
			{ "GetSourceIndex", &ADatasmithRuntimeActor::execGetSourceIndex },
			{ "GetSourceName", &ADatasmithRuntimeActor::execGetSourceName },
			{ "IsConnected", &ADatasmithRuntimeActor::execIsConnected },
			{ "IsReceiving", &ADatasmithRuntimeActor::execIsReceiving },
			{ "LoadFile", &ADatasmithRuntimeActor::execLoadFile },
			{ "OpenConnectionWithIndex", &ADatasmithRuntimeActor::execOpenConnectionWithIndex },
			{ "Reset", &ADatasmithRuntimeActor::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "CloseConnection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics
	{
		struct DatasmithRuntimeActor_eventGetDestinationName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeActor_eventGetDestinationName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "GetDestinationName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::DatasmithRuntimeActor_eventGetDestinationName_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics
	{
		struct DatasmithRuntimeActor_eventGetSourceIndex_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeActor_eventGetSourceIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "GetSourceIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::DatasmithRuntimeActor_eventGetSourceIndex_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics
	{
		struct DatasmithRuntimeActor_eventGetSourceName_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeActor_eventGetSourceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "GetSourceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::DatasmithRuntimeActor_eventGetSourceName_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics
	{
		struct DatasmithRuntimeActor_eventIsConnected_Parms
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
	void Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeActor_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeActor_eventIsConnected_Parms), &Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "Comment", "// End ISceneChangeListener interface\n" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
		{ "ToolTip", "End ISceneChangeListener interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "IsConnected", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::DatasmithRuntimeActor_eventIsConnected_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics
	{
		struct DatasmithRuntimeActor_eventIsReceiving_Parms
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
	void Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeActor_eventIsReceiving_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeActor_eventIsReceiving_Parms), &Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "IsReceiving", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::DatasmithRuntimeActor_eventIsReceiving_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics
	{
		struct DatasmithRuntimeActor_eventLoadFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeActor_eventLoadFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_FilePath_MetaData)) };
	void Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeActor_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeActor_eventLoadFile_Parms), &Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "LoadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::DatasmithRuntimeActor_eventLoadFile_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics
	{
		struct DatasmithRuntimeActor_eventOpenConnectionWithIndex_Parms
		{
			int32 SourceIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithRuntimeActor_eventOpenConnectionWithIndex_Parms, SourceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithRuntimeActor_eventOpenConnectionWithIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithRuntimeActor_eventOpenConnectionWithIndex_Parms), &Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "OpenConnectionWithIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::DatasmithRuntimeActor_eventOpenConnectionWithIndex_Parms), Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADatasmithRuntimeActor, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADatasmithRuntimeActor_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADatasmithRuntimeActor_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADatasmithRuntimeActor);
	UClass* Z_Construct_UClass_ADatasmithRuntimeActor_NoRegister()
	{
		return ADatasmithRuntimeActor::StaticClass();
	}
	struct Z_Construct_UClass_ADatasmithRuntimeActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Progress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Progress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuilding_MetaData[];
#endif
		static void NewProp_bBuilding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuilding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedScene_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LoadedScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADatasmithRuntimeActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADatasmithRuntimeActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_CloseConnection, "CloseConnection" }, // 1230407518
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_GetDestinationName, "GetDestinationName" }, // 222905640
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceIndex, "GetSourceIndex" }, // 4232162191
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_GetSourceName, "GetSourceName" }, // 4128312090
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_IsConnected, "IsConnected" }, // 665841057
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_IsReceiving, "IsReceiving" }, // 1959128697
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_LoadFile, "LoadFile" }, // 4257080861
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_OpenConnectionWithIndex, "OpenConnectionWithIndex" }, // 2536826867
		{ &Z_Construct_UFunction_ADatasmithRuntimeActor_Reset, "Reset" }, // 3139234293
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Datasmith Destination" },
		{ "IncludePath", "DatasmithRuntime.h" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_Progress_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_Progress = { "Progress", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithRuntimeActor, Progress), METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_Progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_Progress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	void Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding_SetBit(void* Obj)
	{
		((ADatasmithRuntimeActor*)Obj)->bBuilding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding = { "bBuilding", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADatasmithRuntimeActor), &Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_LoadedScene_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_LoadedScene = { "LoadedScene", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithRuntimeActor, LoadedScene), METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_LoadedScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_LoadedScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithRuntimeActor, ImportOptions), Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions, METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ImportOptions_MetaData)) }; // 255065296
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ExternalFile_MetaData[] = {
		{ "Category", "DatasmithRuntime" },
		{ "ModuleRelativePath", "Public/DatasmithRuntime.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ExternalFile = { "ExternalFile", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADatasmithRuntimeActor, ExternalFile), METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ExternalFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ExternalFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADatasmithRuntimeActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_Progress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_bBuilding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_LoadedScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ImportOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADatasmithRuntimeActor_Statics::NewProp_ExternalFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADatasmithRuntimeActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADatasmithRuntimeActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADatasmithRuntimeActor_Statics::ClassParams = {
		&ADatasmithRuntimeActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADatasmithRuntimeActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADatasmithRuntimeActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADatasmithRuntimeActor()
	{
		if (!Z_Registration_Info_UClass_ADatasmithRuntimeActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADatasmithRuntimeActor.OuterSingleton, Z_Construct_UClass_ADatasmithRuntimeActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADatasmithRuntimeActor.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<ADatasmithRuntimeActor>()
	{
		return ADatasmithRuntimeActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADatasmithRuntimeActor);
	ADatasmithRuntimeActor::~ADatasmithRuntimeActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::EnumInfo[] = {
		{ EBuildHierarchyMethod_StaticEnum, TEXT("EBuildHierarchyMethod"), &Z_Registration_Info_UEnum_EBuildHierarchyMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2631398810U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithRuntimeImportOptions::StaticStruct, Z_Construct_UScriptStruct_FDatasmithRuntimeImportOptions_Statics::NewStructOps, TEXT("DatasmithRuntimeImportOptions"), &Z_Registration_Info_UScriptStruct_DatasmithRuntimeImportOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithRuntimeImportOptions), 255065296U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADatasmithRuntimeActor, ADatasmithRuntimeActor::StaticClass, TEXT("ADatasmithRuntimeActor"), &Z_Registration_Info_UClass_ADatasmithRuntimeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADatasmithRuntimeActor), 3014834646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_3360071860(TEXT("/Script/DatasmithRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Public_DatasmithRuntime_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
