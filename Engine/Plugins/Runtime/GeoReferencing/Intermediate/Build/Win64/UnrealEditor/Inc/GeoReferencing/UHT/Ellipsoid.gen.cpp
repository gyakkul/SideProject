// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ellipsoid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEllipsoid() {}
// Cross Module References
	GEOREFERENCING_API UScriptStruct* Z_Construct_UScriptStruct_FEllipsoid();
	UPackage* Z_Construct_UPackage__Script_GeoReferencing();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Ellipsoid;
class UScriptStruct* FEllipsoid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Ellipsoid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Ellipsoid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEllipsoid, (UObject*)Z_Construct_UPackage__Script_GeoReferencing(), TEXT("Ellipsoid"));
	}
	return Z_Registration_Info_UScriptStruct_Ellipsoid.OuterSingleton;
}
template<> GEOREFERENCING_API UScriptStruct* StaticStruct<FEllipsoid>()
{
	return FEllipsoid::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEllipsoid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEllipsoid_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Ellipsoid.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEllipsoid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEllipsoid>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEllipsoid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeoReferencing,
		nullptr,
		&NewStructOps,
		"Ellipsoid",
		sizeof(FEllipsoid),
		alignof(FEllipsoid),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEllipsoid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEllipsoid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEllipsoid()
	{
		if (!Z_Registration_Info_UScriptStruct_Ellipsoid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Ellipsoid.InnerSingleton, Z_Construct_UScriptStruct_FEllipsoid_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Ellipsoid.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_Ellipsoid_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_Ellipsoid_h_Statics::ScriptStructInfo[] = {
		{ FEllipsoid::StaticStruct, Z_Construct_UScriptStruct_FEllipsoid_Statics::NewStructOps, TEXT("Ellipsoid"), &Z_Registration_Info_UScriptStruct_Ellipsoid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEllipsoid), 2808875923U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_Ellipsoid_h_1946516593(TEXT("/Script/GeoReferencing"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_Ellipsoid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeoReferencing_Source_GeoReferencing_Public_Ellipsoid_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
