// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceBindingReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBindingReference() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference;
class UScriptStruct* FLevelSequenceBindingReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReference, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReference"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReference>()
{
	return FLevelSequenceBindingReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An external reference to an level sequence object, resolvable through an arbitrary context.\n * \n * Bindings consist of an optional package name, and the path to the object within that package.\n * Where package name is empty, the reference is a relative path from a specific outer (the context).\n * Currently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An external reference to an level sequence object, resolvable through an arbitrary context.\n\nBindings consist of an optional package name, and the path to the object within that package.\nWhere package name is empty, the reference is a relative path from a specific outer (the context).\nCurrently, the package name should only ever be empty for component references, which must remain relative bindings to work correctly with spawnables and reinstanced actors." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** Replaced by ExternalObjectPath */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Replaced by ExternalObjectPath" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, PackageName_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData[] = {
		{ "Comment", "/** Path to a specific actor/component inside an external package */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Path to a specific actor/component inside an external package" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath = { "ExternalObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, ExternalObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Comment", "/** Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Object path relative to a passed in context object, this is used if ExternalObjectPath is invalid" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReference, ObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ExternalObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewProp_ObjectPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReference",
		sizeof(FLevelSequenceBindingReference),
		alignof(FLevelSequenceBindingReference),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReference()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray;
class UScriptStruct* FLevelSequenceBindingReferenceArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferenceArray"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferenceArray>()
{
	return FLevelSequenceBindingReferenceArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_References_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_References_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_References;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * An array of binding references\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "An array of binding references" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferenceArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner = { "References", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequenceBindingReference, METADATA_PARAMS(nullptr, 0) }; // 4107245082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References = { "References", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferenceArray, References), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_MetaData)) }; // 4107245082
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewProp_References,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReferenceArray",
		sizeof(FLevelSequenceBindingReferenceArray),
		alignof(FLevelSequenceBindingReferenceArray),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences;
class UScriptStruct* FLevelSequenceBindingReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences, (UObject*)Z_Construct_UPackage__Script_LevelSequence(), TEXT("LevelSequenceBindingReferences"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.OuterSingleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FLevelSequenceBindingReferences>()
{
	return FLevelSequenceBindingReferences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingIdToReferences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingIdToReferences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingIdToReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimSequenceInstances_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequenceInstances_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_AnimSequenceInstances;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessInstances_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessInstances_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_PostProcessInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID.\n */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "Structure that stores a one to many mapping from object binding ID, to object references that pertain to that ID." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceBindingReferences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray, METADATA_PARAMS(nullptr, 0) }; // 2631774547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp = { "BindingIdToReferences_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData[] = {
		{ "Comment", "/** The map from object binding ID to an array of references that pertain to that ID */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "The map from object binding ID to an array of references that pertain to that ID" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences = { "BindingIdToReferences", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferences, BindingIdToReferences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_MetaData)) }; // 2631774547
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData[] = {
		{ "Comment", "/** A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent) */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "A set of object binding IDs that relate to anim sequence instances (must be a child of USkeletalMeshComponent)" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances = { "AnimSequenceInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferences, AnimSequenceInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_ElementProp = { "PostProcessInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_MetaData[] = {
		{ "Comment", "/** A set of object binding IDs that relate to post process instances (must be a child of USkeletalMeshComponent) */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBindingReference.h" },
		{ "ToolTip", "A set of object binding IDs that relate to post process instances (must be a child of USkeletalMeshComponent)" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FGuid>::Value, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances = { "PostProcessInstances", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceBindingReferences, PostProcessInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_BindingIdToReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_AnimSequenceInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewProp_PostProcessInstances,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"LevelSequenceBindingReferences",
		sizeof(FLevelSequenceBindingReferences),
		alignof(FLevelSequenceBindingReferences),
		Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceBindingReferences()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequenceBindingReference::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReference_Statics::NewStructOps, TEXT("LevelSequenceBindingReference"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReference), 4107245082U) },
		{ FLevelSequenceBindingReferenceArray::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferenceArray_Statics::NewStructOps, TEXT("LevelSequenceBindingReferenceArray"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferenceArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReferenceArray), 2631774547U) },
		{ FLevelSequenceBindingReferences::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceBindingReferences_Statics::NewStructOps, TEXT("LevelSequenceBindingReferences"), &Z_Registration_Info_UScriptStruct_LevelSequenceBindingReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceBindingReferences), 2638211466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_2430022894(TEXT("/Script/LevelSequence"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBindingReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
