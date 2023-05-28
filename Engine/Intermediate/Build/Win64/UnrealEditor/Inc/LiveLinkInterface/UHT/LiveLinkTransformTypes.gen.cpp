// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkTransformTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTransformTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkTransformStaticData>() == std::is_polymorphic<FLiveLinkBaseStaticData>(), "USTRUCT FLiveLinkTransformStaticData cannot be polymorphic unless super FLiveLinkBaseStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData;
class UScriptStruct* FLiveLinkTransformStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformStaticData>()
{
	return FLiveLinkTransformStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocationSupported_MetaData[];
#endif
		static void NewProp_bIsLocationSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocationSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRotationSupported_MetaData[];
#endif
		static void NewProp_bIsRotationSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRotationSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScaleSupported_MetaData[];
#endif
		static void NewProp_bIsScaleSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScaleSupported;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Transform data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data for Transform data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether location in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether location in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsLocationSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported = { "bIsLocationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether rotation in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether rotation in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsRotationSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported = { "bIsRotationSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Whether scale in frame data should be used\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Whether scale in frame data should be used" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit(void* Obj)
	{
		((FLiveLinkTransformStaticData*)Obj)->bIsScaleSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported = { "bIsScaleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkTransformStaticData), &Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsLocationSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsRotationSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewProp_bIsScaleSupported,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseStaticData,
		&NewStructOps,
		"LiveLinkTransformStaticData",
		sizeof(FLiveLinkTransformStaticData),
		alignof(FLiveLinkTransformStaticData),
		Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkTransformFrameData>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkTransformFrameData cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData;
class UScriptStruct* FLiveLinkTransformFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformFrameData>()
{
	return FLiveLinkTransformFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Transform \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data for Transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "// Transform of the frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Transform of the frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTransformFrameData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"LiveLinkTransformFrameData",
		sizeof(FLiveLinkTransformFrameData),
		alignof(FLiveLinkTransformFrameData),
		Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkTransformBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkTransformBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData;
class UScriptStruct* FLiveLinkTransformBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkTransformBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkTransformBlueprintData>()
{
	return FLiveLinkTransformBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle transform data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Facility structure to handle transform data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTransformBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkTransformStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData_MetaData)) }; // 804501645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "Transform Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkTransformTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTransformBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkTransformFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData_MetaData)) }; // 2741422351
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkTransformBlueprintData",
		sizeof(FLiveLinkTransformBlueprintData),
		alignof(FLiveLinkTransformBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkTransformStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformStaticData_Statics::NewStructOps, TEXT("LiveLinkTransformStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformStaticData), 804501645U) },
		{ FLiveLinkTransformFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformFrameData_Statics::NewStructOps, TEXT("LiveLinkTransformFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformFrameData), 2741422351U) },
		{ FLiveLinkTransformBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTransformBlueprintData_Statics::NewStructOps, TEXT("LiveLinkTransformBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkTransformBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTransformBlueprintData), 2853463398U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_1978623018(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkTransformTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
