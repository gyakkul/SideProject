// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlActor();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlEntity();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References

static_assert(std::is_polymorphic<FRemoteControlActor>() == std::is_polymorphic<FRemoteControlEntity>(), "USTRUCT FRemoteControlActor cannot be polymorphic unless super FRemoteControlEntity is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlActor;
class UScriptStruct* FRemoteControlActor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlActor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlActor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlActor, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlActor"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlActor.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlActor>()
{
	return FRemoteControlActor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlActor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents an actor exposed in the panel.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlActor.h" },
		{ "ToolTip", "Represents an actor exposed in the panel." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlActor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "RemoteControlEntity" },
		{ "Comment", "/**\n\x09 * Path to the exposed object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlActor.h" },
		{ "ToolTip", "Path to the exposed object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlActor, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewProp_Path,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlActor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRemoteControlEntity,
		&NewStructOps,
		"RemoteControlActor",
		sizeof(FRemoteControlActor),
		alignof(FRemoteControlActor),
		Z_Construct_UScriptStruct_FRemoteControlActor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlActor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlActor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlActor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlActor()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlActor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlActor.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlActor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlActor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlActor_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlActor::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlActor_Statics::NewStructOps, TEXT("RemoteControlActor"), &Z_Registration_Info_UScriptStruct_RemoteControlActor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlActor), 1782627054U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlActor_h_1803909612(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
