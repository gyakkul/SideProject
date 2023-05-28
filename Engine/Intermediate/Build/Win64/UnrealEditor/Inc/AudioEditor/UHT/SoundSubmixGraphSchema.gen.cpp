// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundSubmixGraph/SoundSubmixGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphSchema();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSoundSubmixGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSoundSubmixGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode;
class UScriptStruct* FSoundSubmixGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundSubmixGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundSubmixGraphSchemaAction_NewNode>()
{
	return FSoundSubmixGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundSubmixGraphSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundSubmixGraphSchemaAction_NewNode",
		sizeof(FSoundSubmixGraphSchemaAction_NewNode),
		alignof(FSoundSubmixGraphSchemaAction_NewNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode.InnerSingleton;
	}
	void USoundSubmixGraphSchema::StaticRegisterNativesUSoundSubmixGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixGraphSchema);
	UClass* Z_Construct_UClass_USoundSubmixGraphSchema_NoRegister()
	{
		return USoundSubmixGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundSubmixGraph/SoundSubmixGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundSubmixGraph/SoundSubmixGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundSubmixGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixGraphSchema_Statics::ClassParams = {
		&USoundSubmixGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixGraphSchema()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixGraphSchema.OuterSingleton, Z_Construct_UClass_USoundSubmixGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixGraphSchema.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundSubmixGraphSchema>()
	{
		return USoundSubmixGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixGraphSchema);
	USoundSubmixGraphSchema::~USoundSubmixGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FSoundSubmixGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FSoundSubmixGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("SoundSubmixGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_SoundSubmixGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundSubmixGraphSchemaAction_NewNode), 1946944971U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixGraphSchema, USoundSubmixGraphSchema::StaticClass, TEXT("USoundSubmixGraphSchema"), &Z_Registration_Info_UClass_USoundSubmixGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixGraphSchema), 3740110333U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_2355684327(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundSubmixGraph_SoundSubmixGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
