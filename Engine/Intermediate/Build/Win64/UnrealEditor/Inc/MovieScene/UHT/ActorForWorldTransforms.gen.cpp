// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorForWorldTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorForWorldTransforms() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FActorForWorldTransforms();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorForWorldTransforms;
class UScriptStruct* FActorForWorldTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorForWorldTransforms, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("ActorForWorldTransforms"));
	}
	return Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FActorForWorldTransforms>()
{
	return FActorForWorldTransforms::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Description of an actor selected parts we can find world transforms on \n" },
		{ "ModuleRelativePath", "Public/ActorForWorldTransforms.h" },
		{ "ToolTip", "Description of an actor selected parts we can find world transforms on" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorForWorldTransforms>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/ActorForWorldTransforms.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorForWorldTransforms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Component_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/ActorForWorldTransforms.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorForWorldTransforms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/ActorForWorldTransforms.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorForWorldTransforms, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewProp_SocketName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"ActorForWorldTransforms",
		sizeof(FActorForWorldTransforms),
		alignof(FActorForWorldTransforms),
		Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorForWorldTransforms()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.InnerSingleton, Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorForWorldTransforms.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_ActorForWorldTransforms_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_ActorForWorldTransforms_h_Statics::ScriptStructInfo[] = {
		{ FActorForWorldTransforms::StaticStruct, Z_Construct_UScriptStruct_FActorForWorldTransforms_Statics::NewStructOps, TEXT("ActorForWorldTransforms"), &Z_Registration_Info_UScriptStruct_ActorForWorldTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorForWorldTransforms), 827878113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_ActorForWorldTransforms_h_1158998664(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_ActorForWorldTransforms_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_ActorForWorldTransforms_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
