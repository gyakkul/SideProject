// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Actions/OptimusNodeActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeActions() {}
// Cross Module References
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusAction();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References

static_assert(std::is_polymorphic<FOptimusNodeAction_RenameNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_RenameNode cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode;
class UScriptStruct* FOptimusNodeAction_RenameNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_RenameNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_RenameNode>()
{
	return FOptimusNodeAction_RenameNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_RenameNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_RenameNode",
		sizeof(FOptimusNodeAction_RenameNode),
		alignof(FOptimusNodeAction_RenameNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_MoveNode>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_MoveNode cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode;
class UScriptStruct* FOptimusNodeAction_MoveNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_MoveNode"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_MoveNode>()
{
	return FOptimusNodeAction_MoveNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_MoveNode>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_MoveNode",
		sizeof(FOptimusNodeAction_MoveNode),
		alignof(FOptimusNodeAction_MoveNode),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_SetPinValue>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_SetPinValue cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue;
class UScriptStruct* FOptimusNodeAction_SetPinValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_SetPinValue"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_SetPinValue>()
{
	return FOptimusNodeAction_SetPinValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_SetPinValue>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_SetPinValue",
		sizeof(FOptimusNodeAction_SetPinValue),
		alignof(FOptimusNodeAction_SetPinValue),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_SetPinName>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_SetPinName cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName;
class UScriptStruct* FOptimusNodeAction_SetPinName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_SetPinName"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_SetPinName>()
{
	return FOptimusNodeAction_SetPinName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_SetPinName>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_SetPinName",
		sizeof(FOptimusNodeAction_SetPinName),
		alignof(FOptimusNodeAction_SetPinName),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_SetPinType>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_SetPinType cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType;
class UScriptStruct* FOptimusNodeAction_SetPinType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_SetPinType"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_SetPinType>()
{
	return FOptimusNodeAction_SetPinType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_SetPinType>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_SetPinType",
		sizeof(FOptimusNodeAction_SetPinType),
		alignof(FOptimusNodeAction_SetPinType),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_SetPinDataDomain>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_SetPinDataDomain cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain;
class UScriptStruct* FOptimusNodeAction_SetPinDataDomain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_SetPinDataDomain"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_SetPinDataDomain>()
{
	return FOptimusNodeAction_SetPinDataDomain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_SetPinDataDomain>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_SetPinDataDomain",
		sizeof(FOptimusNodeAction_SetPinDataDomain),
		alignof(FOptimusNodeAction_SetPinDataDomain),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_ConnectAdderPin>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_ConnectAdderPin cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin;
class UScriptStruct* FOptimusNodeAction_ConnectAdderPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_ConnectAdderPin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_ConnectAdderPin>()
{
	return FOptimusNodeAction_ConnectAdderPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_ConnectAdderPin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_ConnectAdderPin",
		sizeof(FOptimusNodeAction_ConnectAdderPin),
		alignof(FOptimusNodeAction_ConnectAdderPin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_AddRemovePin>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_AddRemovePin cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin;
class UScriptStruct* FOptimusNodeAction_AddRemovePin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_AddRemovePin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_AddRemovePin>()
{
	return FOptimusNodeAction_AddRemovePin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_AddRemovePin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_AddRemovePin",
		sizeof(FOptimusNodeAction_AddRemovePin),
		alignof(FOptimusNodeAction_AddRemovePin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_AddPin>() == std::is_polymorphic<FOptimusNodeAction_AddRemovePin>(), "USTRUCT FOptimusNodeAction_AddPin cannot be polymorphic unless super FOptimusNodeAction_AddRemovePin is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin;
class UScriptStruct* FOptimusNodeAction_AddPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_AddPin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_AddPin>()
{
	return FOptimusNodeAction_AddPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_AddPin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin,
		&NewStructOps,
		"OptimusNodeAction_AddPin",
		sizeof(FOptimusNodeAction_AddPin),
		alignof(FOptimusNodeAction_AddPin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_AddGroupingPin>() == std::is_polymorphic<FOptimusNodeAction_AddRemovePin>(), "USTRUCT FOptimusNodeAction_AddGroupingPin cannot be polymorphic unless super FOptimusNodeAction_AddRemovePin is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin;
class UScriptStruct* FOptimusNodeAction_AddGroupingPin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_AddGroupingPin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_AddGroupingPin>()
{
	return FOptimusNodeAction_AddGroupingPin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_AddGroupingPin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin,
		&NewStructOps,
		"OptimusNodeAction_AddGroupingPin",
		sizeof(FOptimusNodeAction_AddGroupingPin),
		alignof(FOptimusNodeAction_AddGroupingPin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_RemovePin>() == std::is_polymorphic<FOptimusNodeAction_AddRemovePin>(), "USTRUCT FOptimusNodeAction_RemovePin cannot be polymorphic unless super FOptimusNodeAction_AddRemovePin is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin;
class UScriptStruct* FOptimusNodeAction_RemovePin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_RemovePin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_RemovePin>()
{
	return FOptimusNodeAction_RemovePin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_RemovePin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin,
		&NewStructOps,
		"OptimusNodeAction_RemovePin",
		sizeof(FOptimusNodeAction_RemovePin),
		alignof(FOptimusNodeAction_RemovePin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin.InnerSingleton;
	}

static_assert(std::is_polymorphic<FOptimusNodeAction_MovePin>() == std::is_polymorphic<FOptimusAction>(), "USTRUCT FOptimusNodeAction_MovePin cannot be polymorphic unless super FOptimusAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin;
class UScriptStruct* FOptimusNodeAction_MovePin::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNodeAction_MovePin"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNodeAction_MovePin>()
{
	return FOptimusNodeAction_MovePin::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Actions/OptimusNodeActions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNodeAction_MovePin>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		Z_Construct_UScriptStruct_FOptimusAction,
		&NewStructOps,
		"OptimusNodeAction_MovePin",
		sizeof(FOptimusNodeAction_MovePin),
		alignof(FOptimusNodeAction_MovePin),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeActions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeActions_h_Statics::ScriptStructInfo[] = {
		{ FOptimusNodeAction_RenameNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_RenameNode_Statics::NewStructOps, TEXT("OptimusNodeAction_RenameNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_RenameNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_RenameNode), 497091384U) },
		{ FOptimusNodeAction_MoveNode::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_MoveNode_Statics::NewStructOps, TEXT("OptimusNodeAction_MoveNode"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_MoveNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_MoveNode), 1167857716U) },
		{ FOptimusNodeAction_SetPinValue::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinValue_Statics::NewStructOps, TEXT("OptimusNodeAction_SetPinValue"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_SetPinValue), 1449867221U) },
		{ FOptimusNodeAction_SetPinName::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinName_Statics::NewStructOps, TEXT("OptimusNodeAction_SetPinName"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_SetPinName), 4251239922U) },
		{ FOptimusNodeAction_SetPinType::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinType_Statics::NewStructOps, TEXT("OptimusNodeAction_SetPinType"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_SetPinType), 3497099542U) },
		{ FOptimusNodeAction_SetPinDataDomain::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_SetPinDataDomain_Statics::NewStructOps, TEXT("OptimusNodeAction_SetPinDataDomain"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_SetPinDataDomain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_SetPinDataDomain), 2599994144U) },
		{ FOptimusNodeAction_ConnectAdderPin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_ConnectAdderPin_Statics::NewStructOps, TEXT("OptimusNodeAction_ConnectAdderPin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_ConnectAdderPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_ConnectAdderPin), 319826443U) },
		{ FOptimusNodeAction_AddRemovePin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_AddRemovePin_Statics::NewStructOps, TEXT("OptimusNodeAction_AddRemovePin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddRemovePin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_AddRemovePin), 1023168249U) },
		{ FOptimusNodeAction_AddPin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_AddPin_Statics::NewStructOps, TEXT("OptimusNodeAction_AddPin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_AddPin), 295556062U) },
		{ FOptimusNodeAction_AddGroupingPin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_AddGroupingPin_Statics::NewStructOps, TEXT("OptimusNodeAction_AddGroupingPin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_AddGroupingPin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_AddGroupingPin), 1753126366U) },
		{ FOptimusNodeAction_RemovePin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_RemovePin_Statics::NewStructOps, TEXT("OptimusNodeAction_RemovePin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_RemovePin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_RemovePin), 1282501040U) },
		{ FOptimusNodeAction_MovePin::StaticStruct, Z_Construct_UScriptStruct_FOptimusNodeAction_MovePin_Statics::NewStructOps, TEXT("OptimusNodeAction_MovePin"), &Z_Registration_Info_UScriptStruct_OptimusNodeAction_MovePin, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNodeAction_MovePin), 737078949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeActions_h_3580514686(TEXT("/Script/OptimusCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeActions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Actions_OptimusNodeActions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
