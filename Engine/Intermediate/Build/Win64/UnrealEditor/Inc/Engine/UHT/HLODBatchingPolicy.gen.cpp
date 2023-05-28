// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/HLOD/HLODBatchingPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBatchingPolicy() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHLODBatchingPolicy;
	static UEnum* EHLODBatchingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHLODBatchingPolicy, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHLODBatchingPolicy"));
		}
		return Z_Registration_Info_UEnum_EHLODBatchingPolicy.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EHLODBatchingPolicy>()
	{
		return EHLODBatchingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enumerators[] = {
		{ "EHLODBatchingPolicy::None", (int64)EHLODBatchingPolicy::None },
		{ "EHLODBatchingPolicy::MeshSection", (int64)EHLODBatchingPolicy::MeshSection },
		{ "EHLODBatchingPolicy::Instancing", (int64)EHLODBatchingPolicy::Instancing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs. */" },
		{ "Instancing.Comment", "/** Batch this component geometry (using the lowest LOD) as a separate instanced static mesh component in the generated actor. */" },
		{ "Instancing.Name", "EHLODBatchingPolicy::Instancing" },
		{ "Instancing.ToolTip", "Batch this component geometry (using the lowest LOD) as a separate instanced static mesh component in the generated actor." },
		{ "MeshSection.Comment", "/** Batch this component geometry (using the lowest LOD) as a separate mesh section, grouping by material. */" },
		{ "MeshSection.Name", "EHLODBatchingPolicy::MeshSection" },
		{ "MeshSection.ToolTip", "Batch this component geometry (using the lowest LOD) as a separate mesh section, grouping by material." },
		{ "ModuleRelativePath", "Public/HLOD/HLODBatchingPolicy.h" },
		{ "None.Comment", "/** No batching to be performed, geometry is to be simplified. */" },
		{ "None.Name", "EHLODBatchingPolicy::None" },
		{ "None.ToolTip", "No batching to be performed, geometry is to be simplified." },
		{ "ToolTip", "Determines how the geometry of a component will be incorporated in proxy (simplified) HLODs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EHLODBatchingPolicy",
		"EHLODBatchingPolicy",
		Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EHLODBatchingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton, Z_Construct_UEnum_Engine_EHLODBatchingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHLODBatchingPolicy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics::EnumInfo[] = {
		{ EHLODBatchingPolicy_StaticEnum, TEXT("EHLODBatchingPolicy"), &Z_Registration_Info_UEnum_EHLODBatchingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3663747580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_263338614(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODBatchingPolicy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
