// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundClassGraph/SoundClassGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundClassGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphSchema();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundClassGraphSchema_NoRegister();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSoundClassGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSoundClassGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode;
class UScriptStruct* FSoundClassGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundClassGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundClassGraphSchemaAction_NewNode>()
{
	return FSoundClassGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundClassGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundClassGraphSchemaAction_NewNode",
		sizeof(FSoundClassGraphSchemaAction_NewNode),
		alignof(FSoundClassGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode.InnerSingleton;
	}
	void USoundClassGraphSchema::StaticRegisterNativesUSoundClassGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundClassGraphSchema);
	UClass* Z_Construct_UClass_USoundClassGraphSchema_NoRegister()
	{
		return USoundClassGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundClassGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundClassGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundClassGraph/SoundClassGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundClassGraph/SoundClassGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundClassGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundClassGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundClassGraphSchema_Statics::ClassParams = {
		&USoundClassGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundClassGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundClassGraphSchema()
	{
		if (!Z_Registration_Info_UClass_USoundClassGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundClassGraphSchema.OuterSingleton, Z_Construct_UClass_USoundClassGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundClassGraphSchema.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundClassGraphSchema>()
	{
		return USoundClassGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundClassGraphSchema);
	USoundClassGraphSchema::~USoundClassGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FSoundClassGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FSoundClassGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("SoundClassGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_SoundClassGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundClassGraphSchemaAction_NewNode), 846407714U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundClassGraphSchema, USoundClassGraphSchema::StaticClass, TEXT("USoundClassGraphSchema"), &Z_Registration_Info_UClass_USoundClassGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundClassGraphSchema), 2166780957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_2289497735(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundClassGraph_SoundClassGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
