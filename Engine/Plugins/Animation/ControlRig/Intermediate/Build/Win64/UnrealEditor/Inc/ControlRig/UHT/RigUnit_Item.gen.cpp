// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_Item.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Item() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemExists();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemReplace();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemToName();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ItemBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_ItemBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemBase;
class UScriptStruct* FRigUnit_ItemBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemBase>()
{
	return FRigUnit_ItemBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "NodeColor", "0.7 0.05 0.5" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_ItemBase",
		sizeof(FRigUnit_ItemBase),
		alignof(FRigUnit_ItemBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ItemBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ItemBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable;
class UScriptStruct* FRigUnit_ItemBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemBaseMutable>()
{
	return FRigUnit_ItemBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "NodeColor", "0.7 0.05 0.5" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_ItemBaseMutable",
		sizeof(FRigUnit_ItemBaseMutable),
		alignof(FRigUnit_ItemBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_ItemExists>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemExists cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemExists;
class UScriptStruct* FRigUnit_ItemExists::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemExists, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemExists"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemExists_Execute;
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("Exists"), TEXT("bool"));
		Arguments_FRigUnit_ItemExists_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemExists::Execute"), &FRigUnit_ItemExists::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton, Arguments_FRigUnit_ItemExists_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemExists>()
{
	return FRigUnit_ItemExists::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exists_MetaData[];
#endif
		static void NewProp_Exists_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Exists;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns true or false if a given item exists\n */" },
		{ "DisplayName", "Item Exists" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true or false if a given item exists" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemExists>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemExists, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_SetBit(void* Obj)
	{
		((FRigUnit_ItemExists*)Obj)->Exists = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists = { "Exists", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ItemExists), &Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemExists, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_Exists,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemExists",
		sizeof(FRigUnit_ItemExists),
		alignof(FRigUnit_ItemExists),
		Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemExists()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemExists.InnerSingleton;
	}

void FRigUnit_ItemExists::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemExists::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Exists,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemReplace>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemReplace cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace;
class UScriptStruct* FRigUnit_ItemReplace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemReplace, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemReplace"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemReplace_Execute;
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Old"), TEXT("FName"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("New"), TEXT("FName"));
		Arguments_FRigUnit_ItemReplace_Execute.Emplace(TEXT("Result"), TEXT("FRigElementKey"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemReplace::Execute"), &FRigUnit_ItemReplace::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton, Arguments_FRigUnit_ItemReplace_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemReplace>()
{
	return FRigUnit_ItemReplace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Old_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Old;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_New_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_New;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Replaces the text within the name of the item\n */" },
		{ "DisplayName", "Item Replace" },
		{ "Keywords", "Replace,Name" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Replaces the text within the name of the item" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemReplace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemReplace, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemReplace, Old), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemReplace, New), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemReplace, Result), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Old,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_New,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemReplace",
		sizeof(FRigUnit_ItemReplace),
		alignof(FRigUnit_ItemReplace),
		Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemReplace()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace.InnerSingleton;
	}

void FRigUnit_ItemReplace::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemReplace::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Old,
		New,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals;
class UScriptStruct* FRigUnit_ItemEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemEquals_Execute;
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemEquals::Execute"), &FRigUnit_ItemEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton, Arguments_FRigUnit_ItemEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemEquals>()
{
	return FRigUnit_ItemEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items are equal\n*/" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Item Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items are equal" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_ItemEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ItemEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemEquals",
		sizeof(FRigUnit_ItemEquals),
		alignof(FRigUnit_ItemEquals),
		Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals.InnerSingleton;
	}

void FRigUnit_ItemEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemNotEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemNotEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals;
class UScriptStruct* FRigUnit_ItemNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemNotEquals_Execute;
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemNotEquals::Execute"), &FRigUnit_ItemNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton, Arguments_FRigUnit_ItemNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemNotEquals>()
{
	return FRigUnit_ItemNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items are not equal\n*/" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "Item Not Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items are not equal" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemNotEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemNotEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_ItemNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ItemNotEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemNotEquals",
		sizeof(FRigUnit_ItemNotEquals),
		alignof(FRigUnit_ItemNotEquals),
		Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals.InnerSingleton;
	}

void FRigUnit_ItemNotEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemNotEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemTypeEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemTypeEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals;
class UScriptStruct* FRigUnit_ItemTypeEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemTypeEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemTypeEquals_Execute;
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemTypeEquals::Execute"), &FRigUnit_ItemTypeEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton, Arguments_FRigUnit_ItemTypeEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemTypeEquals>()
{
	return FRigUnit_ItemTypeEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items' types are equal\n*/" },
		{ "DisplayName", "Item Type Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items' types are equal" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemTypeEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemTypeEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemTypeEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_ItemTypeEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ItemTypeEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemTypeEquals",
		sizeof(FRigUnit_ItemTypeEquals),
		alignof(FRigUnit_ItemTypeEquals),
		Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals.InnerSingleton;
	}

void FRigUnit_ItemTypeEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemTypeEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemTypeNotEquals>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemTypeNotEquals cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals;
class UScriptStruct* FRigUnit_ItemTypeNotEquals::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemTypeNotEquals"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemTypeNotEquals_Execute;
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("A"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("B"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemTypeNotEquals_Execute.Emplace(TEXT("Result"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemTypeNotEquals::Execute"), &FRigUnit_ItemTypeNotEquals::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton, Arguments_FRigUnit_ItemTypeNotEquals_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemTypeNotEquals>()
{
	return FRigUnit_ItemTypeNotEquals::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns true if the two items's types are not equal\n*/" },
		{ "DisplayName", "Item Type Not Equals" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "ToolTip", "Returns true if the two items's types are not equal" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemTypeNotEquals>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemTypeNotEquals, A), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemTypeNotEquals, B), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FRigUnit_ItemTypeNotEquals*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ItemTypeNotEquals), &Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemTypeNotEquals",
		sizeof(FRigUnit_ItemTypeNotEquals),
		alignof(FRigUnit_ItemTypeNotEquals),
		Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals.InnerSingleton;
	}

void FRigUnit_ItemTypeNotEquals::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemTypeNotEquals::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		A,
		B,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_ItemToName>() == std::is_polymorphic<FRigUnit_ItemBase>(), "USTRUCT FRigUnit_ItemToName cannot be polymorphic unless super FRigUnit_ItemBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ItemToName;
class UScriptStruct* FRigUnit_ItemToName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ItemToName, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ItemToName"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ItemToName_Execute;
		Arguments_FRigUnit_ItemToName_Execute.Emplace(TEXT("Value"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ItemToName_Execute.Emplace(TEXT("Result"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ItemToName::Execute"), &FRigUnit_ItemToName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton, Arguments_FRigUnit_ItemToName_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ItemToName>()
{
	return FRigUnit_ItemToName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Casts the provided item key to its name\n */" },
		{ "DisplayName", "To Name" },
		{ "ExecuteContext", "FRigVMExecuteContext" },
		{ "Keywords", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "TemplateName", "Cast" },
		{ "ToolTip", "Casts the provided item key to its name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ItemToName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemToName, Value), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Item.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ItemToName, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_ItemBase,
		&NewStructOps,
		"RigUnit_ItemToName",
		sizeof(FRigUnit_ItemToName),
		alignof(FRigUnit_ItemToName),
		Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ItemToName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ItemToName.InnerSingleton;
	}

void FRigUnit_ItemToName::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ItemToName::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ItemBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemBase_Statics::NewStructOps, TEXT("RigUnit_ItemBase"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemBase), 2074672345U) },
		{ FRigUnit_ItemBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemBaseMutable_Statics::NewStructOps, TEXT("RigUnit_ItemBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemBaseMutable), 3268448209U) },
		{ FRigUnit_ItemExists::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemExists_Statics::NewStructOps, TEXT("RigUnit_ItemExists"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemExists, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemExists), 3835906771U) },
		{ FRigUnit_ItemReplace::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemReplace_Statics::NewStructOps, TEXT("RigUnit_ItemReplace"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemReplace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemReplace), 2481391335U) },
		{ FRigUnit_ItemEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemEquals_Statics::NewStructOps, TEXT("RigUnit_ItemEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemEquals), 2648899981U) },
		{ FRigUnit_ItemNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemNotEquals_Statics::NewStructOps, TEXT("RigUnit_ItemNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemNotEquals), 678859509U) },
		{ FRigUnit_ItemTypeEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemTypeEquals_Statics::NewStructOps, TEXT("RigUnit_ItemTypeEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemTypeEquals), 1121125447U) },
		{ FRigUnit_ItemTypeNotEquals::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemTypeNotEquals_Statics::NewStructOps, TEXT("RigUnit_ItemTypeNotEquals"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemTypeNotEquals, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemTypeNotEquals), 2559204479U) },
		{ FRigUnit_ItemToName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ItemToName_Statics::NewStructOps, TEXT("RigUnit_ItemToName"), &Z_Registration_Info_UScriptStruct_RigUnit_ItemToName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ItemToName), 2896417253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_2281274523(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Item_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
