// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueGraph/SoundCueGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueGraphSchema() {}
// Cross Module References
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphSchema();
	AUDIOEDITOR_API UClass* Z_Construct_UClass_USoundCueGraphSchema_NoRegister();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode();
	AUDIOEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_AudioEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FSoundCueGraphSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSoundCueGraphSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode;
class UScriptStruct* FSoundCueGraphSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewNode>()
{
	return FSoundCueGraphSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundNodeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_SoundNodeClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add a node to the graph */" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to add a node to the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData[] = {
		{ "Comment", "/** Class of node we want to create */" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Class of node we want to create" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass = { "SoundNodeClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundCueGraphSchemaAction_NewNode, SoundNodeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewProp_SoundNodeClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewNode",
		sizeof(FSoundCueGraphSchemaAction_NewNode),
		alignof(FSoundCueGraphSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoundCueGraphSchemaAction_NewFromSelected>() == std::is_polymorphic<FSoundCueGraphSchemaAction_NewNode>(), "USTRUCT FSoundCueGraphSchemaAction_NewFromSelected cannot be polymorphic unless super FSoundCueGraphSchemaAction_NewNode is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected;
class UScriptStruct* FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewFromSelected"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewFromSelected>()
{
	return FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to add nodes to the graph based on selected objects*/" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to add nodes to the graph based on selected objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewFromSelected>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewFromSelected",
		sizeof(FSoundCueGraphSchemaAction_NewFromSelected),
		alignof(FSoundCueGraphSchemaAction_NewFromSelected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoundCueGraphSchemaAction_NewComment>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSoundCueGraphSchemaAction_NewComment cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment;
class UScriptStruct* FSoundCueGraphSchemaAction_NewComment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_NewComment"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_NewComment>()
{
	return FSoundCueGraphSchemaAction_NewComment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to create new comment */" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to create new comment" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_NewComment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_NewComment",
		sizeof(FSoundCueGraphSchemaAction_NewComment),
		alignof(FSoundCueGraphSchemaAction_NewComment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSoundCueGraphSchemaAction_Paste>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FSoundCueGraphSchemaAction_Paste cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste;
class UScriptStruct* FSoundCueGraphSchemaAction_Paste::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste, (UObject*)Z_Construct_UPackage__Script_AudioEditor(), TEXT("SoundCueGraphSchemaAction_Paste"));
	}
	return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.OuterSingleton;
}
template<> AUDIOEDITOR_API UScriptStruct* StaticStruct<FSoundCueGraphSchemaAction_Paste>()
{
	return FSoundCueGraphSchemaAction_Paste::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to paste clipboard contents into the graph */" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ToolTip", "Action to paste clipboard contents into the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundCueGraphSchemaAction_Paste>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"SoundCueGraphSchemaAction_Paste",
		sizeof(FSoundCueGraphSchemaAction_Paste),
		alignof(FSoundCueGraphSchemaAction_Paste),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.InnerSingleton, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste.InnerSingleton;
	}
	void USoundCueGraphSchema::StaticRegisterNativesUSoundCueGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueGraphSchema);
	UClass* Z_Construct_UClass_USoundCueGraphSchema_NoRegister()
	{
		return USoundCueGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueGraph/SoundCueGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/SoundCueGraph/SoundCueGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueGraphSchema_Statics::ClassParams = {
		&USoundCueGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueGraphSchema()
	{
		if (!Z_Registration_Info_UClass_USoundCueGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueGraphSchema.OuterSingleton, Z_Construct_UClass_USoundCueGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueGraphSchema.OuterSingleton;
	}
	template<> AUDIOEDITOR_API UClass* StaticClass<USoundCueGraphSchema>()
	{
		return USoundCueGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueGraphSchema);
	USoundCueGraphSchema::~USoundCueGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FSoundCueGraphSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewNode_Statics::NewStructOps, TEXT("SoundCueGraphSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueGraphSchemaAction_NewNode), 2306870632U) },
		{ FSoundCueGraphSchemaAction_NewFromSelected::StaticStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewFromSelected_Statics::NewStructOps, TEXT("SoundCueGraphSchemaAction_NewFromSelected"), &Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewFromSelected, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueGraphSchemaAction_NewFromSelected), 342374945U) },
		{ FSoundCueGraphSchemaAction_NewComment::StaticStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_NewComment_Statics::NewStructOps, TEXT("SoundCueGraphSchemaAction_NewComment"), &Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_NewComment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueGraphSchemaAction_NewComment), 1580555664U) },
		{ FSoundCueGraphSchemaAction_Paste::StaticStruct, Z_Construct_UScriptStruct_FSoundCueGraphSchemaAction_Paste_Statics::NewStructOps, TEXT("SoundCueGraphSchemaAction_Paste"), &Z_Registration_Info_UScriptStruct_SoundCueGraphSchemaAction_Paste, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundCueGraphSchemaAction_Paste), 3464244291U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueGraphSchema, USoundCueGraphSchema::StaticClass, TEXT("USoundCueGraphSchema"), &Z_Registration_Info_UClass_USoundCueGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueGraphSchema), 2633017254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_2202953545(TEXT("/Script/AudioEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AudioEditor_Classes_SoundCueGraph_SoundCueGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
