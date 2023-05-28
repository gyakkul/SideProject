// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OSCBundle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOSCBundle() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OSCBundle;
class UScriptStruct* FOSCBundle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OSCBundle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OSCBundle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOSCBundle, (UObject*)Z_Construct_UPackage__Script_OSC(), TEXT("OSCBundle"));
	}
	return Z_Registration_Info_UScriptStruct_OSCBundle.OuterSingleton;
}
template<> OSC_API UScriptStruct* StaticStruct<FOSCBundle>()
{
	return FOSCBundle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOSCBundle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOSCBundle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OSCBundle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOSCBundle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOSCBundle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOSCBundle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OSC,
		nullptr,
		&NewStructOps,
		"OSCBundle",
		sizeof(FOSCBundle),
		alignof(FOSCBundle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOSCBundle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOSCBundle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOSCBundle()
	{
		if (!Z_Registration_Info_UScriptStruct_OSCBundle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OSCBundle.InnerSingleton, Z_Construct_UScriptStruct_FOSCBundle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OSCBundle.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCBundle_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCBundle_h_Statics::ScriptStructInfo[] = {
		{ FOSCBundle::StaticStruct, Z_Construct_UScriptStruct_FOSCBundle_Statics::NewStructOps, TEXT("OSCBundle"), &Z_Registration_Info_UScriptStruct_OSCBundle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOSCBundle), 3436399830U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCBundle_h_711179151(TEXT("/Script/OSC"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCBundle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OSC_Source_OSC_Public_OSCBundle_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
