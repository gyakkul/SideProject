// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceObject;
class UScriptStruct* FLevelSequenceObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceObject, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceObject"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceObject.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceObject>()
{
	return FLevelSequenceObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectOrOwner_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_ObjectOrOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure for animated Actor objects.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Structure for animated Actor objects." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData[] = {
		{ "Comment", "/** The object or the owner of the object being possessed. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "The object or the owner of the object being possessed." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner = { "ObjectOrOwner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceObject, ObjectOrOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/** Optional name of an ActorComponent. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Optional name of an ActorComponent." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceObject, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData[] = {
		{ "Comment", "/** Cached pointer to the Actor component (only if ComponentName is set). */" },
		{ "ModuleRelativePath", "Public/LevelSequenceObject.h" },
		{ "ToolTip", "Cached pointer to the Actor component (only if ComponentName is set)." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent = { "CachedComponent", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceObject, CachedComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ObjectOrOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewProp_CachedComponent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceObject",
		sizeof(FLevelSequenceObject),
		alignof(FLevelSequenceObject),
		Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceObject()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceObject.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceObject::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceObject_Statics::NewStructOps, TEXT("LevelSequenceObject"), &Z_Registration_Info_UScriptStruct_LevelSequenceObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceObject), 3408572087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_4078748591(TEXT("/Script/LevelSequence"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
