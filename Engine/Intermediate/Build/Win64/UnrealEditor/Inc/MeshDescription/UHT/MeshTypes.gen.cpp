// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshTypes() {}
// Cross Module References
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FEdgeID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FElementID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FPolygonID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FTriangleID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FUVID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexID();
	MESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID();
	UPackage* Z_Construct_UPackage__Script_MeshDescription();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ElementID;
class UScriptStruct* FElementID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ElementID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ElementID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FElementID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("ElementID"));
	}
	return Z_Registration_Info_UScriptStruct_ElementID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FElementID>()
{
	return FElementID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FElementID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IDValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// @todo mesheditor: Need comments\n// @todo mesheditor script: BP doesn't have name spaces, so we might need a more specific display name, or just rename our various types\n" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
		{ "ToolTip", "@todo mesheditor: Need comments\n@todo mesheditor script: BP doesn't have name spaces, so we might need a more specific display name, or just rename our various types" },
	};
#endif
	void* Z_Construct_UScriptStruct_FElementID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElementID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData[] = {
		{ "Category", "Editable Mesh" },
		{ "Comment", "/** The actual mesh element index this ID represents.  Read-only. */" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
		{ "ToolTip", "The actual mesh element index this ID represents.  Read-only." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue = { "IDValue", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FElementID, IDValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FElementID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FElementID_Statics::NewProp_IDValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElementID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		nullptr,
		&NewStructOps,
		"ElementID",
		sizeof(FElementID),
		alignof(FElementID),
		Z_Construct_UScriptStruct_FElementID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FElementID()
	{
		if (!Z_Registration_Info_UScriptStruct_ElementID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ElementID.InnerSingleton, Z_Construct_UScriptStruct_FElementID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ElementID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexID>() == std::is_polymorphic<FElementID>(), "USTRUCT FVertexID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexID;
class UScriptStruct* FVertexID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("VertexID"));
	}
	return Z_Registration_Info_UScriptStruct_VertexID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FVertexID>()
{
	return FVertexID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"VertexID",
		sizeof(FVertexID),
		alignof(FVertexID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexID()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexID.InnerSingleton, Z_Construct_UScriptStruct_FVertexID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVertexInstanceID>() == std::is_polymorphic<FElementID>(), "USTRUCT FVertexInstanceID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VertexInstanceID;
class UScriptStruct* FVertexInstanceID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VertexInstanceID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VertexInstanceID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVertexInstanceID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("VertexInstanceID"));
	}
	return Z_Registration_Info_UScriptStruct_VertexInstanceID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FVertexInstanceID>()
{
	return FVertexInstanceID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVertexInstanceID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVertexInstanceID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVertexInstanceID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVertexInstanceID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"VertexInstanceID",
		sizeof(FVertexInstanceID),
		alignof(FVertexInstanceID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVertexInstanceID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVertexInstanceID()
	{
		if (!Z_Registration_Info_UScriptStruct_VertexInstanceID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VertexInstanceID.InnerSingleton, Z_Construct_UScriptStruct_FVertexInstanceID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VertexInstanceID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEdgeID>() == std::is_polymorphic<FElementID>(), "USTRUCT FEdgeID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EdgeID;
class UScriptStruct* FEdgeID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EdgeID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EdgeID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEdgeID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("EdgeID"));
	}
	return Z_Registration_Info_UScriptStruct_EdgeID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FEdgeID>()
{
	return FEdgeID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEdgeID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEdgeID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEdgeID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEdgeID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"EdgeID",
		sizeof(FEdgeID),
		alignof(FEdgeID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEdgeID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEdgeID()
	{
		if (!Z_Registration_Info_UScriptStruct_EdgeID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EdgeID.InnerSingleton, Z_Construct_UScriptStruct_FEdgeID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EdgeID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUVID>() == std::is_polymorphic<FElementID>(), "USTRUCT FUVID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UVID;
class UScriptStruct* FUVID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UVID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UVID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUVID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("UVID"));
	}
	return Z_Registration_Info_UScriptStruct_UVID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FUVID>()
{
	return FUVID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUVID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUVID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUVID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUVID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"UVID",
		sizeof(FUVID),
		alignof(FUVID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUVID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUVID()
	{
		if (!Z_Registration_Info_UScriptStruct_UVID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UVID.InnerSingleton, Z_Construct_UScriptStruct_FUVID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UVID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTriangleID>() == std::is_polymorphic<FElementID>(), "USTRUCT FTriangleID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TriangleID;
class UScriptStruct* FTriangleID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TriangleID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TriangleID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriangleID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("TriangleID"));
	}
	return Z_Registration_Info_UScriptStruct_TriangleID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FTriangleID>()
{
	return FTriangleID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTriangleID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriangleID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriangleID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriangleID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriangleID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"TriangleID",
		sizeof(FTriangleID),
		alignof(FTriangleID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriangleID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriangleID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriangleID()
	{
		if (!Z_Registration_Info_UScriptStruct_TriangleID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TriangleID.InnerSingleton, Z_Construct_UScriptStruct_FTriangleID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TriangleID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPolygonGroupID>() == std::is_polymorphic<FElementID>(), "USTRUCT FPolygonGroupID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonGroupID;
class UScriptStruct* FPolygonGroupID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonGroupID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonGroupID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonGroupID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("PolygonGroupID"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonGroupID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FPolygonGroupID>()
{
	return FPolygonGroupID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolygonGroupID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonGroupID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonGroupID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonGroupID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"PolygonGroupID",
		sizeof(FPolygonGroupID),
		alignof(FPolygonGroupID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonGroupID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonGroupID()
	{
		if (!Z_Registration_Info_UScriptStruct_PolygonGroupID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonGroupID.InnerSingleton, Z_Construct_UScriptStruct_FPolygonGroupID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolygonGroupID.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPolygonID>() == std::is_polymorphic<FElementID>(), "USTRUCT FPolygonID cannot be polymorphic unless super FElementID is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PolygonID;
class UScriptStruct* FPolygonID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PolygonID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PolygonID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPolygonID, (UObject*)Z_Construct_UPackage__Script_MeshDescription(), TEXT("PolygonID"));
	}
	return Z_Registration_Info_UScriptStruct_PolygonID.OuterSingleton;
}
template<> MESHDESCRIPTION_API UScriptStruct* StaticStruct<FPolygonID>()
{
	return FPolygonID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPolygonID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MeshTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPolygonID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPolygonID>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPolygonID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MeshDescription,
		Z_Construct_UScriptStruct_FElementID,
		&NewStructOps,
		"PolygonID",
		sizeof(FPolygonID),
		alignof(FPolygonID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPolygonID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPolygonID()
	{
		if (!Z_Registration_Info_UScriptStruct_PolygonID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PolygonID.InnerSingleton, Z_Construct_UScriptStruct_FPolygonID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PolygonID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h_Statics::ScriptStructInfo[] = {
		{ FElementID::StaticStruct, Z_Construct_UScriptStruct_FElementID_Statics::NewStructOps, TEXT("ElementID"), &Z_Registration_Info_UScriptStruct_ElementID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FElementID), 2151738912U) },
		{ FVertexID::StaticStruct, Z_Construct_UScriptStruct_FVertexID_Statics::NewStructOps, TEXT("VertexID"), &Z_Registration_Info_UScriptStruct_VertexID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexID), 2752972282U) },
		{ FVertexInstanceID::StaticStruct, Z_Construct_UScriptStruct_FVertexInstanceID_Statics::NewStructOps, TEXT("VertexInstanceID"), &Z_Registration_Info_UScriptStruct_VertexInstanceID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVertexInstanceID), 2916807164U) },
		{ FEdgeID::StaticStruct, Z_Construct_UScriptStruct_FEdgeID_Statics::NewStructOps, TEXT("EdgeID"), &Z_Registration_Info_UScriptStruct_EdgeID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEdgeID), 512610801U) },
		{ FUVID::StaticStruct, Z_Construct_UScriptStruct_FUVID_Statics::NewStructOps, TEXT("UVID"), &Z_Registration_Info_UScriptStruct_UVID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUVID), 2794289489U) },
		{ FTriangleID::StaticStruct, Z_Construct_UScriptStruct_FTriangleID_Statics::NewStructOps, TEXT("TriangleID"), &Z_Registration_Info_UScriptStruct_TriangleID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTriangleID), 11177462U) },
		{ FPolygonGroupID::StaticStruct, Z_Construct_UScriptStruct_FPolygonGroupID_Statics::NewStructOps, TEXT("PolygonGroupID"), &Z_Registration_Info_UScriptStruct_PolygonGroupID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonGroupID), 2384158107U) },
		{ FPolygonID::StaticStruct, Z_Construct_UScriptStruct_FPolygonID_Statics::NewStructOps, TEXT("PolygonID"), &Z_Registration_Info_UScriptStruct_PolygonID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPolygonID), 2395458409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h_632012552(TEXT("/Script/MeshDescription"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MeshDescription_Public_MeshTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
