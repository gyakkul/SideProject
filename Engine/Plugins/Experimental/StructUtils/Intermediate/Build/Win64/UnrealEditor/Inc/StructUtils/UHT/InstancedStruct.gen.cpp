// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStruct() {}
// Cross Module References
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStruct;
class UScriptStruct* FInstancedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStruct, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("InstancedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStruct.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FInstancedStruct>()
{
	return FInstancedStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FInstancedStruct works similarly as instanced UObject* property but is USTRUCTs.\n * Example:\n *\n *\x09UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n *\x09""FInstancedStruct Test;\n *\n *\x09UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n *\x09TArray<FInstancedStruct> TestArray;\n */" },
		{ "HasNativeMake", "/Script/StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct" },
		{ "ModuleRelativePath", "Public/InstancedStruct.h" },
		{ "ToolTip", "FInstancedStruct works similarly as instanced UObject* property but is USTRUCTs.\nExample:\n\n    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n    FInstancedStruct Test;\n\n    UPROPERTY(EditAnywhere, Category = Foo, meta = (BaseStruct = \"/Script/ModuleName.TestStructBase\"))\n    TArray<FInstancedStruct> TestArray;" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"InstancedStruct",
		sizeof(FInstancedStruct),
		alignof(FInstancedStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStruct_h_Statics::ScriptStructInfo[] = {
		{ FInstancedStruct::StaticStruct, Z_Construct_UScriptStruct_FInstancedStruct_Statics::NewStructOps, TEXT("InstancedStruct"), &Z_Registration_Info_UScriptStruct_InstancedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStruct), 3026308664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStruct_h_2002627477(TEXT("/Script/StructUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
