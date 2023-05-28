// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraActions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_EScriptSource();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAction_NewNode();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraActionSourceData();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction_Base();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMenuSections;
	static UEnum* ENiagaraMenuSections_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMenuSections.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMenuSections.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraMenuSections"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMenuSections.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraMenuSections>()
	{
		return ENiagaraMenuSections_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enumerators[] = {
		{ "ENiagaraMenuSections::Suggested", (int64)ENiagaraMenuSections::Suggested },
		{ "ENiagaraMenuSections::General", (int64)ENiagaraMenuSections::General },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enum_MetaDataParams[] = {
		{ "General.Name", "ENiagaraMenuSections::General" },
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
		{ "Suggested.Name", "ENiagaraMenuSections::Suggested" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraMenuSections",
		"ENiagaraMenuSections",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMenuSections.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMenuSections.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraMenuSections_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMenuSections.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScriptSource;
	static UEnum* EScriptSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScriptSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScriptSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_EScriptSource, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("EScriptSource"));
		}
		return Z_Registration_Info_UEnum_EScriptSource.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<EScriptSource>()
	{
		return EScriptSource_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enumerators[] = {
		{ "EScriptSource::Niagara", (int64)EScriptSource::Niagara },
		{ "EScriptSource::Game", (int64)EScriptSource::Game },
		{ "EScriptSource::Plugins", (int64)EScriptSource::Plugins },
		{ "EScriptSource::Developer", (int64)EScriptSource::Developer },
		{ "EScriptSource::Unknown", (int64)EScriptSource::Unknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enum_MetaDataParams[] = {
		{ "Developer.Name", "EScriptSource::Developer" },
		{ "Game.Name", "EScriptSource::Game" },
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
		{ "Niagara.Name", "EScriptSource::Niagara" },
		{ "Plugins.Name", "EScriptSource::Plugins" },
		{ "Unknown.Name", "EScriptSource::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"EScriptSource",
		"EScriptSource",
		Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_EScriptSource()
	{
		if (!Z_Registration_Info_UEnum_EScriptSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScriptSource.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_EScriptSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScriptSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraActionSourceData;
class UScriptStruct* FNiagaraActionSourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraActionSourceData, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraActionSourceData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraActionSourceData>()
{
	return FNiagaraActionSourceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraActionSourceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraActionSourceData",
		sizeof(FNiagaraActionSourceData),
		alignof(FNiagaraActionSourceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraActionSourceData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraActionSourceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraMenuAction>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FNiagaraMenuAction cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMenuAction;
class UScriptStruct* FNiagaraMenuAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMenuAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMenuAction, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraMenuAction"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMenuAction.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraMenuAction>()
{
	return FNiagaraMenuAction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMenuAction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"NiagaraMenuAction",
		sizeof(FNiagaraMenuAction),
		alignof(FNiagaraMenuAction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMenuAction.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMenuAction.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base;
class UScriptStruct* FNiagaraMenuAction_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMenuAction_Base, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraMenuAction_Base"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraMenuAction_Base>()
{
	return FNiagaraMenuAction_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// new action hierarchy for the new menus. Prefer inheriting from this rather than the above\n// this action does not have any use; inherit from it and provide your own functionality\n" },
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
		{ "ToolTip", "new action hierarchy for the new menus. Prefer inheriting from this rather than the above\nthis action does not have any use; inherit from it and provide your own functionality" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMenuAction_Base>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraMenuAction_Base",
		sizeof(FNiagaraMenuAction_Base),
		alignof(FNiagaraMenuAction_Base),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraMenuAction_Generic>() == std::is_polymorphic<FNiagaraMenuAction_Base>(), "USTRUCT FNiagaraMenuAction_Generic cannot be polymorphic unless super FNiagaraMenuAction_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic;
class UScriptStruct* FNiagaraMenuAction_Generic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraMenuAction_Generic"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraMenuAction_Generic>()
{
	return FNiagaraMenuAction_Generic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraMenuAction_Generic>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FNiagaraMenuAction_Base,
		&NewStructOps,
		"NiagaraMenuAction_Generic",
		sizeof(FNiagaraMenuAction_Generic),
		alignof(FNiagaraMenuAction_Generic),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNiagaraAction_NewNode>() == std::is_polymorphic<FNiagaraMenuAction_Generic>(), "USTRUCT FNiagaraAction_NewNode cannot be polymorphic unless super FNiagaraMenuAction_Generic is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode;
class UScriptStruct* FNiagaraAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraAction_NewNode, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraAction_NewNode>()
{
	return FNiagaraAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraAction_NewNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraActions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewProp_NodeTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewProp_NodeTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewProp_NodeTemplate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic,
		&NewStructOps,
		"NiagaraAction_NewNode",
		sizeof(FNiagaraAction_NewNode),
		alignof(FNiagaraAction_NewNode),
		Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::EnumInfo[] = {
		{ ENiagaraMenuSections_StaticEnum, TEXT("ENiagaraMenuSections"), &Z_Registration_Info_UEnum_ENiagaraMenuSections, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3068537110U) },
		{ EScriptSource_StaticEnum, TEXT("EScriptSource"), &Z_Registration_Info_UEnum_EScriptSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2436739936U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraActionSourceData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraActionSourceData_Statics::NewStructOps, TEXT("NiagaraActionSourceData"), &Z_Registration_Info_UScriptStruct_NiagaraActionSourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraActionSourceData), 3973121673U) },
		{ FNiagaraMenuAction::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMenuAction_Statics::NewStructOps, TEXT("NiagaraMenuAction"), &Z_Registration_Info_UScriptStruct_NiagaraMenuAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMenuAction), 3399571527U) },
		{ FNiagaraMenuAction_Base::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMenuAction_Base_Statics::NewStructOps, TEXT("NiagaraMenuAction_Base"), &Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMenuAction_Base), 1231950003U) },
		{ FNiagaraMenuAction_Generic::StaticStruct, Z_Construct_UScriptStruct_FNiagaraMenuAction_Generic_Statics::NewStructOps, TEXT("NiagaraMenuAction_Generic"), &Z_Registration_Info_UScriptStruct_NiagaraMenuAction_Generic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraMenuAction_Generic), 283372255U) },
		{ FNiagaraAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FNiagaraAction_NewNode_Statics::NewStructOps, TEXT("NiagaraAction_NewNode"), &Z_Registration_Info_UScriptStruct_NiagaraAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraAction_NewNode), 3354505873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_423402288(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraActions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
