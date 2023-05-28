// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraParameterDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitions();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitions_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription;
class UScriptStruct* FScriptVarBindingNameSubscription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ScriptVarBindingNameSubscription"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FScriptVarBindingNameSubscription>()
{
	return FScriptVarBindingNameSubscription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalScriptVarId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalScriptVarId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalScriptVarIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalScriptVarIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalScriptVarIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper structs to map between external parameter libraries and a set of their script variables to local script variables. */" },
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
		{ "ToolTip", "Helper structs to map between external parameter libraries and a set of their script variables to local script variables." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptVarBindingNameSubscription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_ExternalScriptVarId_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_ExternalScriptVarId = { "ExternalScriptVarId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptVarBindingNameSubscription, ExternalScriptVarId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_ExternalScriptVarId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_ExternalScriptVarId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds_Inner = { "InternalScriptVarIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds = { "InternalScriptVarIds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FScriptVarBindingNameSubscription, InternalScriptVarIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_ExternalScriptVarId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewProp_InternalScriptVarIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"ScriptVarBindingNameSubscription",
		sizeof(FScriptVarBindingNameSubscription),
		alignof(FScriptVarBindingNameSubscription),
		Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.InnerSingleton, Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription;
class UScriptStruct* FParameterDefinitionsBindingNameSubscription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ParameterDefinitionsBindingNameSubscription"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FParameterDefinitionsBindingNameSubscription>()
{
	return FParameterDefinitionsBindingNameSubscription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubscribedParameterDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubscribedParameterDefinitions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingNameSubscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingNameSubscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingNameSubscriptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterDefinitionsBindingNameSubscription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_SubscribedParameterDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_SubscribedParameterDefinitions = { "SubscribedParameterDefinitions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDefinitionsBindingNameSubscription, SubscribedParameterDefinitions), Z_Construct_UClass_UNiagaraParameterDefinitions_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_SubscribedParameterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_SubscribedParameterDefinitions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions_Inner = { "BindingNameSubscriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription, METADATA_PARAMS(nullptr, 0) }; // 123137595
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions = { "BindingNameSubscriptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FParameterDefinitionsBindingNameSubscription, BindingNameSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions_MetaData)) }; // 123137595
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_SubscribedParameterDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewProp_BindingNameSubscriptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"ParameterDefinitionsBindingNameSubscription",
		sizeof(FParameterDefinitionsBindingNameSubscription),
		alignof(FParameterDefinitionsBindingNameSubscription),
		Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription()
	{
		if (!Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.InnerSingleton, Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription.InnerSingleton;
	}
	void UNiagaraParameterDefinitions::StaticRegisterNativesUNiagaraParameterDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterDefinitions);
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitions_NoRegister()
	{
		return UNiagaraParameterDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromoteToTopInAddMenus_MetaData[];
#endif
		static void NewProp_bPromoteToTopInAddMenus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromoteToTopInAddMenus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MenuSortOrder;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ScriptVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptVariables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalParameterDefinitionsSubscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalParameterDefinitionsSubscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalParameterDefinitionsSubscriptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraParameterDefinitionsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts. */" },
		{ "IncludePath", "NiagaraParameterDefinitions.h" },
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Collection of UNiagaraScriptVariables to synchronize between UNiagaraScripts." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus_MetaData[] = {
		{ "Category", "Definition Preferences" },
		{ "Comment", "// If true then these parameters will appear as top level entry in add menus (e.g. in the module editor)\n" },
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
		{ "ToolTip", "If true then these parameters will appear as top level entry in add menus (e.g. in the module editor)" },
	};
#endif
	void Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus_SetBit(void* Obj)
	{
		((UNiagaraParameterDefinitions*)Obj)->bPromoteToTopInAddMenus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus = { "bPromoteToTopInAddMenus", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraParameterDefinitions), &Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_MenuSortOrder_MetaData[] = {
		{ "Category", "Definition Preferences" },
		{ "Comment", "// Defines the sort order in add menus. Entries with smaller numbers are displayed first.\n" },
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
		{ "ToolTip", "Defines the sort order in add menus. Entries with smaller numbers are displayed first." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_MenuSortOrder = { "MenuSortOrder", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraParameterDefinitions, MenuSortOrder), METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_MenuSortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_MenuSortOrder_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables_Inner = { "ScriptVariables", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables = { "ScriptVariables", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraParameterDefinitions, ScriptVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions_Inner = { "ExternalParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription, METADATA_PARAMS(nullptr, 0) }; // 1974666817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions = { "ExternalParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraParameterDefinitions, ExternalParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions_MetaData)) }; // 1974666817
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_bPromoteToTopInAddMenus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_MenuSortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ScriptVariables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::NewProp_ExternalParameterDefinitionsSubscriptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::ClassParams = {
		&UNiagaraParameterDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitions()
	{
		if (!Z_Registration_Info_UClass_UNiagaraParameterDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterDefinitions.OuterSingleton, Z_Construct_UClass_UNiagaraParameterDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraParameterDefinitions.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraParameterDefinitions>()
	{
		return UNiagaraParameterDefinitions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterDefinitions);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FScriptVarBindingNameSubscription::StaticStruct, Z_Construct_UScriptStruct_FScriptVarBindingNameSubscription_Statics::NewStructOps, TEXT("ScriptVarBindingNameSubscription"), &Z_Registration_Info_UScriptStruct_ScriptVarBindingNameSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptVarBindingNameSubscription), 123137595U) },
		{ FParameterDefinitionsBindingNameSubscription::StaticStruct, Z_Construct_UScriptStruct_FParameterDefinitionsBindingNameSubscription_Statics::NewStructOps, TEXT("ParameterDefinitionsBindingNameSubscription"), &Z_Registration_Info_UScriptStruct_ParameterDefinitionsBindingNameSubscription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterDefinitionsBindingNameSubscription), 1974666817U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParameterDefinitions, UNiagaraParameterDefinitions::StaticClass, TEXT("UNiagaraParameterDefinitions"), &Z_Registration_Info_UClass_UNiagaraParameterDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterDefinitions), 448633878U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_111658855(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
