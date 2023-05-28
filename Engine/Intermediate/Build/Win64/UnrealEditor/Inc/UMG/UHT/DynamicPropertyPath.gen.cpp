// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/DynamicPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicPropertyPath() {}
// Cross Module References
	PROPERTYPATH_API UScriptStruct* Z_Construct_UScriptStruct_FCachedPropertyPath();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

static_assert(std::is_polymorphic<FDynamicPropertyPath>() == std::is_polymorphic<FCachedPropertyPath>(), "USTRUCT FDynamicPropertyPath cannot be polymorphic unless super FCachedPropertyPath is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DynamicPropertyPath;
class UScriptStruct* FDynamicPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDynamicPropertyPath, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("DynamicPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_DynamicPropertyPath.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FDynamicPropertyPath>()
{
	return FDynamicPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Binding/DynamicPropertyPath.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDynamicPropertyPath>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FCachedPropertyPath,
		&NewStructOps,
		"DynamicPropertyPath",
		sizeof(FDynamicPropertyPath),
		alignof(FDynamicPropertyPath),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DynamicPropertyPath.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics::ScriptStructInfo[] = {
		{ FDynamicPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FDynamicPropertyPath_Statics::NewStructOps, TEXT("DynamicPropertyPath"), &Z_Registration_Info_UScriptStruct_DynamicPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDynamicPropertyPath), 2842537116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_3438787933(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_DynamicPropertyPath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
