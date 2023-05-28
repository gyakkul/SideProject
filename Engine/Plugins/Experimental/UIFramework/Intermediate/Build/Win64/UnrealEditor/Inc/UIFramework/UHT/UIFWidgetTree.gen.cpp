// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFWidgetTree.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"
#include "Types/UIFWidgetId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFWidgetTree() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetTree();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References

static_assert(std::is_polymorphic<FUIFrameworkWidgetTreeEntry>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FUIFrameworkWidgetTreeEntry cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry;
class UScriptStruct* FUIFrameworkWidgetTreeEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkWidgetTreeEntry"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkWidgetTreeEntry>()
{
	return FUIFrameworkWidgetTreeEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkWidgetTreeEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTreeEntry, Parent), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Child_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTreeEntry, Child), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Child_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ParentId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ParentId = { "ParentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTreeEntry, ParentId), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ParentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ParentId_MetaData)) }; // 4193507828
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ChildId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ChildId = { "ChildId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTreeEntry, ChildId), Z_Construct_UScriptStruct_FUIFrameworkWidgetId, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ChildId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ChildId_MetaData)) }; // 4193507828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ParentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewProp_ChildId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"UIFrameworkWidgetTreeEntry",
		sizeof(FUIFrameworkWidgetTreeEntry),
		alignof(FUIFrameworkWidgetTreeEntry),
		Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkWidgetTree>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FUIFrameworkWidgetTree cannot be polymorphic unless super FFastArraySerializer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree;
class UScriptStruct* FUIFrameworkWidgetTree::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkWidgetTree"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkWidgetTree>()
{
	return FUIFrameworkWidgetTree::StaticStruct();
}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
	UE_NET_IMPLEMENT_FASTARRAY(FUIFrameworkWidgetTree);
#else
	UE_NET_IMPLEMENT_FASTARRAY_STUB(FUIFrameworkWidgetTree);
#endif
	struct Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplicatedOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A valid snapshot of the widget tree that can be replicated to local instance.\n * Authority widgets know their parent/children relation. That information is not replicated to the local widgets.\n * When a widget is added to the tree, the tree is updated. The widget now has to inform the tree when that relationship changes until it's remove from the tree.\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
		{ "ToolTip", "A valid snapshot of the widget tree that can be replicated to local instance.\nAuthority widgets know their parent/children relation. That information is not replicated to the local widgets.\nWhen a widget is added to the tree, the tree is updated. The widget now has to inform the tree when that relationship changes until it's remove from the tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkWidgetTree>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry, METADATA_PARAMS(nullptr, 0) }; // 3874945824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTree, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries_MetaData)) }; // 3874945824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_ReplicatedOwner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetTree.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_ReplicatedOwner = { "ReplicatedOwner", nullptr, (EPropertyFlags)0x0044000080002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetTree, ReplicatedOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_ReplicatedOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_ReplicatedOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewProp_ReplicatedOwner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"UIFrameworkWidgetTree",
		sizeof(FUIFrameworkWidgetTree),
		alignof(FUIFrameworkWidgetTree),
		Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetTree()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetTree_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetTree_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkWidgetTreeEntry::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkWidgetTreeEntry_Statics::NewStructOps, TEXT("UIFrameworkWidgetTreeEntry"), &Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTreeEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkWidgetTreeEntry), 3874945824U) },
		{ FUIFrameworkWidgetTree::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkWidgetTree_Statics::NewStructOps, TEXT("UIFrameworkWidgetTree"), &Z_Registration_Info_UScriptStruct_UIFrameworkWidgetTree, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkWidgetTree), 1595032571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetTree_h_1779813127(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetTree_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetTree_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
