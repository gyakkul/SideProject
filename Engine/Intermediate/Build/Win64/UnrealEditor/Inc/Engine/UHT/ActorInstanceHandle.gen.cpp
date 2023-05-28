// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ActorInstanceHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorInstanceHandle() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorInstanceHandle;
class UScriptStruct* FActorInstanceHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInstanceHandle, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ActorInstanceHandle"));
	}
	return Z_Registration_Info_UScriptStruct_ActorInstanceHandle.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FActorInstanceHandle>()
{
	return FActorInstanceHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorInstanceHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Handle to a unique object. This may specify a full weigh actor or it may only specify the light weight instance that represents the same object.\n" },
		{ "ModuleRelativePath", "Classes/Engine/ActorInstanceHandle.h" },
		{ "ToolTip", "Handle to a unique object. This may specify a full weigh actor or it may only specify the light weight instance that represents the same object." },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInstanceHandle>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_Actor_MetaData[] = {
		{ "Comment", "/** this is cached here for convenience */" },
		{ "ModuleRelativePath", "Classes/Engine/ActorInstanceHandle.h" },
		{ "ToolTip", "this is cached here for convenience" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorInstanceHandle, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewProp_Actor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ActorInstanceHandle",
		sizeof(FActorInstanceHandle),
		alignof(FActorInstanceHandle),
		Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorInstanceHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton, Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorInstanceHandle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics::ScriptStructInfo[] = {
		{ FActorInstanceHandle::StaticStruct, Z_Construct_UScriptStruct_FActorInstanceHandle_Statics::NewStructOps, TEXT("ActorInstanceHandle"), &Z_Registration_Info_UScriptStruct_ActorInstanceHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInstanceHandle), 3551898001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_19896125(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ActorInstanceHandle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
