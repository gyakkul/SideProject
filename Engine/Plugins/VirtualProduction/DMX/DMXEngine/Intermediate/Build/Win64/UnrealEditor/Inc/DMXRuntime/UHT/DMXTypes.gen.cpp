// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXTypes.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXByteArray64();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXColorCIE1931xyY();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXRawArtNetRequest();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXRawSACN();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXRequest();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXRequestBase();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap;
class UScriptStruct* FDMXNormalizedAttributeValueMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXNormalizedAttributeValueMap"));
	}
	return Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXNormalizedAttributeValueMap>()
{
	return FDMXNormalizedAttributeValueMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Map_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Map_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Map;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "Comment", "/** Holds an array Attribute Names with their normalized Values (expand the property to see the map) */" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "ToolTip", "Holds an array Attribute Names with their normalized Values (expand the property to see the map)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXNormalizedAttributeValueMap>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_ValueProp = { "Map", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_Key_KeyProp = { "Map_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXNormalizedAttributeValueMap, Map), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewProp_Map,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXNormalizedAttributeValueMap",
		sizeof(FDMXNormalizedAttributeValueMap),
		alignof(FDMXNormalizedAttributeValueMap),
		Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.InnerSingleton, Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY;
class UScriptStruct* FDMXColorCIE1931xyY::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXColorCIE1931xyY"));
	}
	return Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXColorCIE1931xyY>()
{
	return FDMXColorCIE1931xyY::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "Comment", "/** xyY color representation in the CIE 1931 color space, as typically used in GDTF and MVR */" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "ToolTip", "xyY color representation in the CIE 1931 color space, as typically used in GDTF and MVR" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXColorCIE1931xyY>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_X_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** x */" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "ToolTip", "x" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE1931xyY, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** y */" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "ToolTip", "y" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE1931xyY, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_YY_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Y */" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "ToolTip", "Y" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_YY = { "YY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXColorCIE1931xyY, YY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_YY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_YY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewProp_YY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXColorCIE1931xyY",
		sizeof(FDMXColorCIE1931xyY),
		alignof(FDMXColorCIE1931xyY),
		Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXColorCIE1931xyY()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.InnerSingleton, Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXByteArray64;
class UScriptStruct* FDMXByteArray64::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXByteArray64.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXByteArray64.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXByteArray64, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXByteArray64"));
	}
	return Z_Registration_Info_UScriptStruct_DMXByteArray64.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXByteArray64>()
{
	return FDMXByteArray64::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXByteArray64_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXByteArray64_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXByteArray64_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXByteArray64>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXByteArray64_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXByteArray64",
		sizeof(FDMXByteArray64),
		alignof(FDMXByteArray64),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXByteArray64_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXByteArray64_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXByteArray64()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXByteArray64.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXByteArray64.InnerSingleton, Z_Construct_UScriptStruct_FDMXByteArray64_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXByteArray64.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXRequestBase;
class UScriptStruct* FDMXRequestBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXRequestBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXRequestBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXRequestBase, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXRequestBase"));
	}
	return Z_Registration_Info_UScriptStruct_DMXRequestBase.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXRequestBase>()
{
	return FDMXRequestBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXRequestBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRequestBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXRequestBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRequestBase, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXRequestBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXRequestBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXRequestBase",
		sizeof(FDMXRequestBase),
		alignof(FDMXRequestBase),
		Z_Construct_UScriptStruct_FDMXRequestBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequestBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRequestBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequestBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXRequestBase()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXRequestBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXRequestBase.InnerSingleton, Z_Construct_UScriptStruct_FDMXRequestBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXRequestBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXRequest>() == std::is_polymorphic<FDMXRequestBase>(), "USTRUCT FDMXRequest cannot be polymorphic unless super FDMXRequestBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXRequest;
class UScriptStruct* FDMXRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXRequest, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DMXRequest.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXRequest>()
{
	return FDMXRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRequest_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Category", "DMX|Request" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDMXRequest_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRequest, DMXLibrary), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRequest_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequest_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRequest_Statics::NewProp_DMXLibrary,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXRequestBase,
		&NewStructOps,
		"DMXRequest",
		sizeof(FDMXRequest),
		alignof(FDMXRequest),
		Z_Construct_UScriptStruct_FDMXRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXRequest.InnerSingleton, Z_Construct_UScriptStruct_FDMXRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXRawArtNetRequest>() == std::is_polymorphic<FDMXRequestBase>(), "USTRUCT FDMXRawArtNetRequest cannot be polymorphic unless super FDMXRequestBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest;
class UScriptStruct* FDMXRawArtNetRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXRawArtNetRequest, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXRawArtNetRequest"));
	}
	return Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXRawArtNetRequest>()
{
	return FDMXRawArtNetRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Net_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Net;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubNet_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubNet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Universe_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Universe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXRawArtNetRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Net_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "137" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "137" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Net = { "Net", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawArtNetRequest, Net), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Net_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Net_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_SubNet_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_SubNet = { "SubNet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawArtNetRequest, SubNet), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_SubNet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_SubNet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Universe_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "15" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "15" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Universe = { "Universe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawArtNetRequest, Universe), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Universe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Universe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "512" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "512" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawArtNetRequest, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Net,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_SubNet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Universe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewProp_Address,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXRequestBase,
		&NewStructOps,
		"DMXRawArtNetRequest",
		sizeof(FDMXRawArtNetRequest),
		alignof(FDMXRawArtNetRequest),
		Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXRawArtNetRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.InnerSingleton, Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXRawSACN>() == std::is_polymorphic<FDMXRequestBase>(), "USTRUCT FDMXRawSACN cannot be polymorphic unless super FDMXRequestBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXRawSACN;
class UScriptStruct* FDMXRawSACN::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXRawSACN.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXRawSACN.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXRawSACN, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXRawSACN"));
	}
	return Z_Registration_Info_UScriptStruct_DMXRawSACN.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXRawSACN>()
{
	return FDMXRawSACN::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXRawSACN_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Universe_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Universe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawSACN_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXRawSACN>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Universe_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "63999" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "63999" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Universe = { "Universe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawSACN, Universe), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Universe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Universe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "DMX|RawRequest" },
		{ "ClampMax", "512" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DMXTypes.h" },
		{ "UIMax", "512" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXRawSACN, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXRawSACN_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Universe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewProp_Address,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXRawSACN_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXRequestBase,
		&NewStructOps,
		"DMXRawSACN",
		sizeof(FDMXRawSACN),
		alignof(FDMXRawSACN),
		Z_Construct_UScriptStruct_FDMXRawSACN_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXRawSACN_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXRawSACN()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXRawSACN.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXRawSACN.InnerSingleton, Z_Construct_UScriptStruct_FDMXRawSACN_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXRawSACN.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXTypes_h_Statics::ScriptStructInfo[] = {
		{ FDMXNormalizedAttributeValueMap::StaticStruct, Z_Construct_UScriptStruct_FDMXNormalizedAttributeValueMap_Statics::NewStructOps, TEXT("DMXNormalizedAttributeValueMap"), &Z_Registration_Info_UScriptStruct_DMXNormalizedAttributeValueMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXNormalizedAttributeValueMap), 2558012157U) },
		{ FDMXColorCIE1931xyY::StaticStruct, Z_Construct_UScriptStruct_FDMXColorCIE1931xyY_Statics::NewStructOps, TEXT("DMXColorCIE1931xyY"), &Z_Registration_Info_UScriptStruct_DMXColorCIE1931xyY, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXColorCIE1931xyY), 2024007841U) },
		{ FDMXByteArray64::StaticStruct, Z_Construct_UScriptStruct_FDMXByteArray64_Statics::NewStructOps, TEXT("DMXByteArray64"), &Z_Registration_Info_UScriptStruct_DMXByteArray64, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXByteArray64), 495864671U) },
		{ FDMXRequestBase::StaticStruct, Z_Construct_UScriptStruct_FDMXRequestBase_Statics::NewStructOps, TEXT("DMXRequestBase"), &Z_Registration_Info_UScriptStruct_DMXRequestBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXRequestBase), 657830735U) },
		{ FDMXRequest::StaticStruct, Z_Construct_UScriptStruct_FDMXRequest_Statics::NewStructOps, TEXT("DMXRequest"), &Z_Registration_Info_UScriptStruct_DMXRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXRequest), 2588663882U) },
		{ FDMXRawArtNetRequest::StaticStruct, Z_Construct_UScriptStruct_FDMXRawArtNetRequest_Statics::NewStructOps, TEXT("DMXRawArtNetRequest"), &Z_Registration_Info_UScriptStruct_DMXRawArtNetRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXRawArtNetRequest), 591834976U) },
		{ FDMXRawSACN::StaticStruct, Z_Construct_UScriptStruct_FDMXRawSACN_Statics::NewStructOps, TEXT("DMXRawSACN"), &Z_Registration_Info_UScriptStruct_DMXRawSACN, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXRawSACN), 2152751471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXTypes_h_465236392(TEXT("/Script/DMXRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
