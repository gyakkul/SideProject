// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_GetTransform.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetTransform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetTransform;
class UScriptStruct* FRigUnit_GetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTransform_Execute;
		Arguments_FRigUnit_GetTransform_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetTransform_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetTransform_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTransform::Execute"), &FRigUnit_GetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.OuterSingleton, Arguments_FRigUnit_GetTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetTransform>()
{
	return FRigUnit_GetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * GetTransform is used to retrieve a single transform from a hierarchy.\n */" },
		{ "DisplayName", "Get Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetBoneTransform,GetControlTransform,GetInitialTransform,GetSpaceTransform,GetTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "GetTransform is used to retrieve a single transform from a hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to retrieve the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "The item to retrieve the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransform, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be retrieved in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transform should be retrieved in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be retrieved as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transform should be retrieved as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_GetTransform*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetTransform), &Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given item - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given item - or identity in case it wasn't found." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransform, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetTransform",
		sizeof(FRigUnit_GetTransform),
		alignof(FRigUnit_GetTransform),
		Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetTransform.InnerSingleton;
	}

void FRigUnit_GetTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Space,
		bInitial,
		Transform,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetTransformArray>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetTransformArray cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray;
class UScriptStruct* FRigUnit_GetTransformArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetTransformArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTransformArray_Execute;
		Arguments_FRigUnit_GetTransformArray_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_GetTransformArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetTransformArray_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetTransformArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_GetTransformArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTransformArray::Execute"), &FRigUnit_GetTransformArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.OuterSingleton, Arguments_FRigUnit_GetTransformArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetTransformArray>()
{
	return FRigUnit_GetTransformArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n* GetTransformArray is used to retrieve an array of transforms from the hierarchy.\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Transform Array" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetBoneTransform,GetControlTransform,GetInitialTransform,GetSpaceTransform,GetTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "GetTransformArray is used to retrieve an array of transforms from the hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTransformArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* The items to retrieve the transforms for\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "The items to retrieve the transforms for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformArray, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Items_MetaData)) }; // 2993270268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transforms should be retrieved in local or global space\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transforms should be retrieved in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transforms should be retrieved as current (false) or initial (true).\n\x09* Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transforms should be retrieved as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_GetTransformArray*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetTransformArray), &Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given item - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given item - or identity in case it wasn't found." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex_Inner = { "CachedIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformArray, CachedIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetTransformArray",
		sizeof(FRigUnit_GetTransformArray),
		alignof(FRigUnit_GetTransformArray),
		Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray.InnerSingleton;
	}

void FRigUnit_GetTransformArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetTransformArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		Space,
		bInitial,
		Transforms,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetTransformItemArray>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetTransformItemArray cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray;
class UScriptStruct* FRigUnit_GetTransformItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetTransformItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTransformItemArray_Execute;
		Arguments_FRigUnit_GetTransformItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_GetTransformItemArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_GetTransformItemArray_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetTransformItemArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_GetTransformItemArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTransformItemArray::Execute"), &FRigUnit_GetTransformItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.OuterSingleton, Arguments_FRigUnit_GetTransformItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetTransformItemArray>()
{
	return FRigUnit_GetTransformItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n* GetTransformArray is used to retrieve an array of transforms from the hierarchy.\n*/" },
		{ "DisplayName", "Get Transform Array" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetBoneTransform,GetControlTransform,GetInitialTransform,GetSpaceTransform,GetTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "GetTransformArray is used to retrieve an array of transforms from the hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTransformItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* The items to retrieve the transforms for\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "The items to retrieve the transforms for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transforms should be retrieved in local or global space\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transforms should be retrieved in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformItemArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transforms should be retrieved as current (false) or initial (true).\n\x09* Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Defines if the transforms should be retrieved as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_GetTransformItemArray*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetTransformItemArray), &Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given item - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given item - or identity in case it wasn't found." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformItemArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex_Inner = { "CachedIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformItemArray, CachedIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetTransformItemArray",
		sizeof(FRigUnit_GetTransformItemArray),
		alignof(FRigUnit_GetTransformItemArray),
		Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray.InnerSingleton;
	}

void FRigUnit_GetTransformItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetTransformItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Space,
		bInitial,
		Transforms,
		CachedIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTransform_Statics::NewStructOps, TEXT("RigUnit_GetTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTransform), 1163500943U) },
		{ FRigUnit_GetTransformArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTransformArray_Statics::NewStructOps, TEXT("RigUnit_GetTransformArray"), &Z_Registration_Info_UScriptStruct_RigUnit_GetTransformArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTransformArray), 4097588456U) },
		{ FRigUnit_GetTransformItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTransformItemArray_Statics::NewStructOps, TEXT("RigUnit_GetTransformItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_GetTransformItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTransformItemArray), 1693918171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_3709085078(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
