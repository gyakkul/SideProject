// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkBasicTypes.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkBasicBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkBasicBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData;
class UScriptStruct* FLiveLinkBasicBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkBasicBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkBasicBlueprintData>()
{
	return FLiveLinkBasicBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle base data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Facility structure to handle base data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkBasicBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData_MetaData)) }; // 1789085157
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "Base Data" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkBasicTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkBasicBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData_MetaData)) }; // 1384013997
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkBasicBlueprintData",
		sizeof(FLiveLinkBasicBlueprintData),
		alignof(FLiveLinkBasicBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkBasicBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkBasicBlueprintData_Statics::NewStructOps, TEXT("LiveLinkBasicBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkBasicBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkBasicBlueprintData), 917839139U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_3060375280(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkBasicTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
