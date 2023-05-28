// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisplayNodes/VariantManagerDisplayNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantManagerDisplayNode() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManager();
	VARIANTMANAGER_API UEnum* Z_Construct_UEnum_VariantManager_EVariantManagerNodeType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVariantManagerNodeType;
	static UEnum* EVariantManagerNodeType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVariantManagerNodeType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVariantManagerNodeType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VariantManager_EVariantManagerNodeType, (UObject*)Z_Construct_UPackage__Script_VariantManager(), TEXT("EVariantManagerNodeType"));
		}
		return Z_Registration_Info_UEnum_EVariantManagerNodeType.OuterSingleton;
	}
	template<> VARIANTMANAGER_API UEnum* StaticEnum<EVariantManagerNodeType>()
	{
		return EVariantManagerNodeType_StaticEnum();
	}
	struct Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enumerators[] = {
		{ "EVariantManagerNodeType::VariantSet", (int64)EVariantManagerNodeType::VariantSet },
		{ "EVariantManagerNodeType::Variant", (int64)EVariantManagerNodeType::Variant },
		{ "EVariantManagerNodeType::Actor", (int64)EVariantManagerNodeType::Actor },
		{ "EVariantManagerNodeType::Property", (int64)EVariantManagerNodeType::Property },
		{ "EVariantManagerNodeType::Function", (int64)EVariantManagerNodeType::Function },
		{ "EVariantManagerNodeType::Spacer", (int64)EVariantManagerNodeType::Spacer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "EVariantManagerNodeType::Actor" },
		{ "Function.Name", "EVariantManagerNodeType::Function" },
		{ "ModuleRelativePath", "Private/DisplayNodes/VariantManagerDisplayNode.h" },
		{ "Property.Name", "EVariantManagerNodeType::Property" },
		{ "Spacer.Name", "EVariantManagerNodeType::Spacer" },
		{ "Variant.Name", "EVariantManagerNodeType::Variant" },
		{ "VariantSet.Name", "EVariantManagerNodeType::VariantSet" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VariantManager,
		nullptr,
		"EVariantManagerNodeType",
		"EVariantManagerNodeType",
		Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VariantManager_EVariantManagerNodeType()
	{
		if (!Z_Registration_Info_UEnum_EVariantManagerNodeType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVariantManagerNodeType.InnerSingleton, Z_Construct_UEnum_VariantManager_EVariantManagerNodeType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVariantManagerNodeType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h_Statics::EnumInfo[] = {
		{ EVariantManagerNodeType_StaticEnum, TEXT("EVariantManagerNodeType"), &Z_Registration_Info_UEnum_EVariantManagerNodeType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 336973555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h_4157093977(TEXT("/Script/VariantManager"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_DisplayNodes_VariantManagerDisplayNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
