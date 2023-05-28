// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLatentActionManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LatentActionInfo;
class UScriptStruct* FLatentActionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LatentActionInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionInfo>()
{
	return FLatentActionInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLatentActionInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Linkage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Linkage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionFunction_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExecutionFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallbackTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CallbackTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Latent action info\n" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Latent action info" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData[] = {
		{ "Comment", "/** The resume point within the function to execute */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "NeedsLatentFixup", "TRUE" },
		{ "ToolTip", "The resume point within the function to execute" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage = { "Linkage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLatentActionInfo, Linkage), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData[] = {
		{ "Comment", "/** the UUID for this action */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "the UUID for this action" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLatentActionInfo, UUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData[] = {
		{ "Comment", "/** The function to execute. */" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The function to execute." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction = { "ExecutionFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLatentActionInfo, ExecutionFunction), METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData[] = {
		{ "Comment", "/** Object to execute the function on. */" },
		{ "LatentCallbackTarget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "Object to execute the function on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget = { "CallbackTarget", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLatentActionInfo, CallbackTarget), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_Linkage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_UUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_ExecutionFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewProp_CallbackTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LatentActionInfo",
		sizeof(FLatentActionInfo),
		alignof(FLatentActionInfo),
		Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton, Z_Construct_UScriptStruct_FLatentActionInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LatentActionInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LatentActionManager;
class UScriptStruct* FLatentActionManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLatentActionManager, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LatentActionManager"));
	}
	return Z_Registration_Info_UScriptStruct_LatentActionManager.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLatentActionManager>()
{
	return FLatentActionManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLatentActionManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The latent action manager handles all pending latent actions for a single world\n" },
		{ "ModuleRelativePath", "Classes/Engine/LatentActionManager.h" },
		{ "ToolTip", "The latent action manager handles all pending latent actions for a single world" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLatentActionManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLatentActionManager>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLatentActionManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LatentActionManager",
		sizeof(FLatentActionManager),
		alignof(FLatentActionManager),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLatentActionManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLatentActionManager()
	{
		if (!Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton, Z_Construct_UScriptStruct_FLatentActionManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LatentActionManager.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics::ScriptStructInfo[] = {
		{ FLatentActionInfo::StaticStruct, Z_Construct_UScriptStruct_FLatentActionInfo_Statics::NewStructOps, TEXT("LatentActionInfo"), &Z_Registration_Info_UScriptStruct_LatentActionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLatentActionInfo), 2194022737U) },
		{ FLatentActionManager::StaticStruct, Z_Construct_UScriptStruct_FLatentActionManager_Statics::NewStructOps, TEXT("LatentActionManager"), &Z_Registration_Info_UScriptStruct_LatentActionManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLatentActionManager), 1480726355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_4036465085(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LatentActionManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
