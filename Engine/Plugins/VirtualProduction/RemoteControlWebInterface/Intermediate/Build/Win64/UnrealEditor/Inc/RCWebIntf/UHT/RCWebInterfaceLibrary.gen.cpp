// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RCWebInterfaceLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCWebInterfaceLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	REMOTECONTROLWEBINTERFACE_API UClass* Z_Construct_UClass_URCWebInterfaceBlueprintLibrary();
	REMOTECONTROLWEBINTERFACE_API UClass* Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlWebInterface();
// End Cross Module References
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execGetValuesOfActorsByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<AActor*,FString>*)Z_Param__Result=URCWebInterfaceBlueprintLibrary::GetValuesOfActorsByClass(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execSpawnActor)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=URCWebInterfaceBlueprintLibrary::SpawnActor(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execFindAllActorsOfClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<AActor*,FString>*)Z_Param__Result=URCWebInterfaceBlueprintLibrary::FindAllActorsOfClass(Z_Param_Class);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execRebindProperties)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PropertyIds);
		P_GET_OBJECT(AActor,Z_Param_NewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		URCWebInterfaceBlueprintLibrary::RebindProperties(Z_Param_PresetId,Z_Param_Out_PropertyIds,Z_Param_NewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execGetOwnerActorLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PropertyIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URCWebInterfaceBlueprintLibrary::GetOwnerActorLabel(Z_Param_PresetId,Z_Param_Out_PropertyIds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URCWebInterfaceBlueprintLibrary::execFindMatchingActorsToRebind)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetId);
		P_GET_TARRAY_REF(FString,Z_Param_Out_PropertyIds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,AActor*>*)Z_Param__Result=URCWebInterfaceBlueprintLibrary::FindMatchingActorsToRebind(Z_Param_PresetId,Z_Param_Out_PropertyIds);
		P_NATIVE_END;
	}
	void URCWebInterfaceBlueprintLibrary::StaticRegisterNativesURCWebInterfaceBlueprintLibrary()
	{
		UClass* Class = URCWebInterfaceBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindAllActorsOfClass", &URCWebInterfaceBlueprintLibrary::execFindAllActorsOfClass },
			{ "FindMatchingActorsToRebind", &URCWebInterfaceBlueprintLibrary::execFindMatchingActorsToRebind },
			{ "GetOwnerActorLabel", &URCWebInterfaceBlueprintLibrary::execGetOwnerActorLabel },
			{ "GetValuesOfActorsByClass", &URCWebInterfaceBlueprintLibrary::execGetValuesOfActorsByClass },
			{ "RebindProperties", &URCWebInterfaceBlueprintLibrary::execRebindProperties },
			{ "SpawnActor", &URCWebInterfaceBlueprintLibrary::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventFindAllActorsOfClass_Parms
		{
			UClass* Class;
			TMap<AActor*,FString> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventFindAllActorsOfClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventFindAllActorsOfClass_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Shortcut function to find all actors of a class\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Shortcut function to find all actors of a class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "FindAllActorsOfClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::RCWebInterfaceBlueprintLibrary_eventFindAllActorsOfClass_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventFindMatchingActorsToRebind_Parms
		{
			FString PresetId;
			TArray<FString> PropertyIds;
			TMap<FString,AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PresetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventFindMatchingActorsToRebind_Parms, PresetId), METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds_Inner = { "PropertyIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds = { "PropertyIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventFindMatchingActorsToRebind_Parms, PropertyIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventFindMatchingActorsToRebind_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_PropertyIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Get a list of compatible actors to rebind the remote control preset properties\n\x09 * returned value is a map, key is the actor label\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Get a list of compatible actors to rebind the remote control preset properties\nreturned value is a map, key is the actor label" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "FindMatchingActorsToRebind", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::RCWebInterfaceBlueprintLibrary_eventFindMatchingActorsToRebind_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventGetOwnerActorLabel_Parms
		{
			FString PresetId;
			TArray<FString> PropertyIds;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIds;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PresetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventGetOwnerActorLabel_Parms, PresetId), METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds_Inner = { "PropertyIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds = { "PropertyIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventGetOwnerActorLabel_Parms, PropertyIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventGetOwnerActorLabel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_PropertyIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Get the label of the owner actor of the remote control preset properties\n\x09 * If the properties has different owners, an empty string will be returned\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Get the label of the owner actor of the remote control preset properties\nIf the properties has different owners, an empty string will be returned" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "GetOwnerActorLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::RCWebInterfaceBlueprintLibrary_eventGetOwnerActorLabel_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventGetValuesOfActorsByClass_Parms
		{
			UClass* Class;
			TMap<AActor*,FString> ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventGetValuesOfActorsByClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventGetValuesOfActorsByClass_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Gets all properties values (as a json) of all actors of type Class\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Gets all properties values (as a json) of all actors of type Class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "GetValuesOfActorsByClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::RCWebInterfaceBlueprintLibrary_eventGetValuesOfActorsByClass_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventRebindProperties_Parms
		{
			FString PresetId;
			TArray<FString> PropertyIds;
			AActor* NewOwner;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyIds;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PresetId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PresetId = { "PresetId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventRebindProperties_Parms, PresetId), METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PresetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PresetId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds_Inner = { "PropertyIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds = { "PropertyIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventRebindProperties_Parms, PropertyIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_NewOwner = { "NewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventRebindProperties_Parms, NewOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PresetId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_PropertyIds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::NewProp_NewOwner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Rebind the remote control preset properties to a new owner\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Rebind the remote control preset properties to a new owner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "RebindProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::RCWebInterfaceBlueprintLibrary_eventRebindProperties_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics
	{
		struct RCWebInterfaceBlueprintLibrary_eventSpawnActor_Parms
		{
			UClass* Class;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RCWebInterfaceBlueprintLibrary_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlWebInterface" },
		{ "Comment", "/**\n\x09 * Shortcut function to spawn an actor of a class\n\x09 */" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
		{ "ToolTip", "Shortcut function to spawn an actor of a class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, nullptr, "SpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::RCWebInterfaceBlueprintLibrary_eventSpawnActor_Parms), Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCWebInterfaceBlueprintLibrary);
	UClass* Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_NoRegister()
	{
		return URCWebInterfaceBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlWebInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindAllActorsOfClass, "FindAllActorsOfClass" }, // 3109390079
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_FindMatchingActorsToRebind, "FindMatchingActorsToRebind" }, // 2625335178
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetOwnerActorLabel, "GetOwnerActorLabel" }, // 1300911225
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_GetValuesOfActorsByClass, "GetValuesOfActorsByClass" }, // 1758878601
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_RebindProperties, "RebindProperties" }, // 26534144
		{ &Z_Construct_UFunction_URCWebInterfaceBlueprintLibrary_SpawnActor, "SpawnActor" }, // 3387477743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RCWebInterfaceLibrary.h" },
		{ "ModuleRelativePath", "Private/RCWebInterfaceLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCWebInterfaceBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::ClassParams = {
		&URCWebInterfaceBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCWebInterfaceBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_URCWebInterfaceBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCWebInterfaceBlueprintLibrary.OuterSingleton, Z_Construct_UClass_URCWebInterfaceBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCWebInterfaceBlueprintLibrary.OuterSingleton;
	}
	template<> REMOTECONTROLWEBINTERFACE_API UClass* StaticClass<URCWebInterfaceBlueprintLibrary>()
	{
		return URCWebInterfaceBlueprintLibrary::StaticClass();
	}
	URCWebInterfaceBlueprintLibrary::URCWebInterfaceBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCWebInterfaceBlueprintLibrary);
	URCWebInterfaceBlueprintLibrary::~URCWebInterfaceBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCWebInterfaceBlueprintLibrary, URCWebInterfaceBlueprintLibrary::StaticClass, TEXT("URCWebInterfaceBlueprintLibrary"), &Z_Registration_Info_UClass_URCWebInterfaceBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCWebInterfaceBlueprintLibrary), 1363560119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_945138940(TEXT("/Script/RemoteControlWebInterface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControlWebInterface_Source_RemoteControlWebInterface_Private_RCWebInterfaceLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
