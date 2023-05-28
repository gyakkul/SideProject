// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRFixtureNode.h"
#include "DMXOptionalTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRFixtureNode() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRFixtureNode();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRFixtureNode_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureGobo();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureMapping();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalBool();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalFloat();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalGuid();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalInt32();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses;
class UScriptStruct* FDMXMVRFixtureAddresses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXMVRFixtureAddresses"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXMVRFixtureAddresses>()
{
	return FDMXMVRFixtureAddresses::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The container for DMX Addresses for this fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The container for DMX Addresses for this fixture." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRFixtureAddresses>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Universe_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Universe = { "Universe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRFixtureAddresses, Universe), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Universe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Universe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Address_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRFixtureAddresses, Address), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Universe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewProp_Address,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXMVRFixtureAddresses",
		sizeof(FDMXMVRFixtureAddresses),
		alignof(FDMXMVRFixtureAddresses),
		Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping;
class UScriptStruct* FDMXMVRFixtureMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRFixtureMapping, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXMVRFixtureMapping"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXMVRFixtureMapping>()
{
	return FDMXMVRFixtureMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines a Mapping */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "Defines a Mapping" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRFixtureMapping>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXMVRFixtureMapping",
		sizeof(FDMXMVRFixtureMapping),
		alignof(FDMXMVRFixtureMapping),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo;
class UScriptStruct* FDMXMVRFixtureGobo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXMVRFixtureGobo"));
	}
	return Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXMVRFixtureGobo>()
{
	return FDMXMVRFixtureGobo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The Gobo used for the fixture. The image ressource must apply to the GDTF standard. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The Gobo used for the fixture. The image ressource must apply to the GDTF standard." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXMVRFixtureGobo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** The node value is the Gobo used for the fixture. The image ressource must apply to the GDTF standard. Use a FileName to specify. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The node value is the Gobo used for the fixture. The image ressource must apply to the GDTF standard. Use a FileName to specify." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRFixtureGobo, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "/** The roation of the Gobo in degree. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The roation of the Gobo in degree." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXMVRFixtureGobo, Rotation), Z_Construct_UScriptStruct_FDMXOptionalFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Rotation_MetaData)) }; // 2203316103
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXMVRFixtureGobo",
		sizeof(FDMXMVRFixtureGobo),
		alignof(FDMXMVRFixtureGobo),
		Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXMVRFixtureGobo()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.InnerSingleton, Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo;
class UScriptStruct* FDMXOptionalMVRFixtureGobo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalMVRFixtureGobo"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalMVRFixtureGobo>()
{
	return FDMXOptionalMVRFixtureGobo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalMVRFixtureGobo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalMVRFixtureGobo",
		sizeof(FDMXOptionalMVRFixtureGobo),
		alignof(FDMXOptionalMVRFixtureGobo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo.InnerSingleton;
	}
	void UDMXMVRFixtureNode::StaticRegisterNativesUDMXMVRFixtureNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRFixtureNode);
	UClass* Z_Construct_UClass_UDMXMVRFixtureNode_NoRegister()
	{
		return UDMXMVRFixtureNode::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRFixtureNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GDTFSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GDTFSpec;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GDTFMode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GDTFMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CastShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureID_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FixtureID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnitNumber_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UnitNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Addresses_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Addresses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CIEColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CIEColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureTypeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixtureTypeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Mappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Mappings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gobo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Gobo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRFixtureNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXMVRParametricObjectNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** This node defines a light fixture object. */" },
		{ "IncludePath", "MVR/Types/DMXMVRFixtureNode.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "This node defines a light fixture object." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the object. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The name of the object." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Name), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFSpec_MetaData[] = {
		{ "Comment", "/** The name of the file containing the GDTF information for this light fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The name of the file containing the GDTF information for this light fixture." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFSpec = { "GDTFSpec", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, GDTFSpec), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFSpec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFSpec_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFMode_MetaData[] = {
		{ "Comment", "/** The name of the used DMX mode. This has to match the name of a DMXMode in the GDTF file. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The name of the used DMX mode. This has to match the name of a DMXMode in the GDTF file." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFMode = { "GDTFMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, GDTFMode), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** A focus point reference that this lighting fixture aims at if this reference exists. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "A focus point reference that this lighting fixture aims at if this reference exists." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Focus), Z_Construct_UScriptStruct_FDMXOptionalGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Focus_MetaData)) }; // 3917036461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CastShadow_MetaData[] = {
		{ "Comment", "/** Defines if a Object cast Shadow. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "Defines if a Object cast Shadow." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, CastShadow), Z_Construct_UScriptStruct_FDMXOptionalBool, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CastShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CastShadow_MetaData)) }; // 3290348763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "/** A position reference that this lighting fixture belongs to if this reference exists. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "A position reference that this lighting fixture belongs to if this reference exists." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Position), Z_Construct_UScriptStruct_FDMXOptionalGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Position_MetaData)) }; // 3917036461
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureID_MetaData[] = {
		{ "Comment", "/** The Fixture Id of the lighting fixture. This is the short name of the fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The Fixture Id of the lighting fixture. This is the short name of the fixture." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureID = { "FixtureID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, FixtureID), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_UnitNumber_MetaData[] = {
		{ "Comment", "/** The unit number of the lighting fixture in a position. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The unit number of the lighting fixture in a position." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_UnitNumber = { "UnitNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, UnitNumber), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_UnitNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_UnitNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Addresses_MetaData[] = {
		{ "Comment", "/** The container for DMX Addresses for this fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The container for DMX Addresses for this fixture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Addresses = { "Addresses", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Addresses), Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Addresses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Addresses_MetaData)) }; // 2546097437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CIEColor_MetaData[] = {
		{ "Comment", "/** A color assigned to a fixture. If it is not defined, there is no color for the fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "A color assigned to a fixture. If it is not defined, there is no color for the fixture." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CIEColor = { "CIEColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, CIEColor), Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CIEColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CIEColor_MetaData)) }; // 2391551759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureTypeId_MetaData[] = {
		{ "Comment", "/** The Fixture Type ID is a value that can be used as a short name of the Fixture Type. This does not have to be unique. The default value is 0. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The Fixture Type ID is a value that can be used as a short name of the Fixture Type. This does not have to be unique. The default value is 0." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureTypeId = { "FixtureTypeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, FixtureTypeId), Z_Construct_UScriptStruct_FDMXOptionalInt32, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureTypeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureTypeId_MetaData)) }; // 227657722
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CustomId_MetaData[] = {
		{ "Comment", "/** The Custom ID is a value that can be used as a short name of the Fixture Instance. This does not have to be unique. The default value is 0. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The Custom ID is a value that can be used as a short name of the Fixture Instance. This does not have to be unique. The default value is 0." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CustomId = { "CustomId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, CustomId), Z_Construct_UScriptStruct_FDMXOptionalInt32, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CustomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CustomId_MetaData)) }; // 227657722
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXMVRFixtureMapping, METADATA_PARAMS(nullptr, 0) }; // 1160273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings_MetaData[] = {
		{ "Comment", "/** The container for Mappings for this fixture. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The container for Mappings for this fixture." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings_MetaData)) }; // 1160273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Gobo_MetaData[] = {
		{ "Comment", "/** The Gobo used for the fixture. The image ressource must apply to the GDTF standard. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRFixtureNode.h" },
		{ "ToolTip", "The Gobo used for the fixture. The image ressource must apply to the GDTF standard." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Gobo = { "Gobo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRFixtureNode, Gobo), Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Gobo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Gobo_MetaData)) }; // 2195312860
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRFixtureNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_GDTFMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CastShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_UnitNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Addresses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CIEColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_FixtureTypeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_CustomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Mappings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRFixtureNode_Statics::NewProp_Gobo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRFixtureNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRFixtureNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRFixtureNode_Statics::ClassParams = {
		&UDMXMVRFixtureNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRFixtureNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRFixtureNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRFixtureNode()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRFixtureNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRFixtureNode.OuterSingleton, Z_Construct_UClass_UDMXMVRFixtureNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRFixtureNode.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRFixtureNode>()
	{
		return UDMXMVRFixtureNode::StaticClass();
	}
	UDMXMVRFixtureNode::UDMXMVRFixtureNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRFixtureNode);
	UDMXMVRFixtureNode::~UDMXMVRFixtureNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ScriptStructInfo[] = {
		{ FDMXMVRFixtureAddresses::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRFixtureAddresses_Statics::NewStructOps, TEXT("DMXMVRFixtureAddresses"), &Z_Registration_Info_UScriptStruct_DMXMVRFixtureAddresses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRFixtureAddresses), 2546097437U) },
		{ FDMXMVRFixtureMapping::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRFixtureMapping_Statics::NewStructOps, TEXT("DMXMVRFixtureMapping"), &Z_Registration_Info_UScriptStruct_DMXMVRFixtureMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRFixtureMapping), 1160273U) },
		{ FDMXMVRFixtureGobo::StaticStruct, Z_Construct_UScriptStruct_FDMXMVRFixtureGobo_Statics::NewStructOps, TEXT("DMXMVRFixtureGobo"), &Z_Registration_Info_UScriptStruct_DMXMVRFixtureGobo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXMVRFixtureGobo), 2006199311U) },
		{ FDMXOptionalMVRFixtureGobo::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalMVRFixtureGobo_Statics::NewStructOps, TEXT("DMXOptionalMVRFixtureGobo"), &Z_Registration_Info_UScriptStruct_DMXOptionalMVRFixtureGobo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalMVRFixtureGobo), 2195312860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRFixtureNode, UDMXMVRFixtureNode::StaticClass, TEXT("UDMXMVRFixtureNode"), &Z_Registration_Info_UClass_UDMXMVRFixtureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRFixtureNode), 3519071293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_2756936024(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRFixtureNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
