// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IChooserParameterBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIChooserParameterBase() {}
// Cross Module References
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserParameterBase;
class UScriptStruct* FChooserParameterBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserParameterBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserParameterBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserParameterBase, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserParameterBase"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserParameterBase.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserParameterBase>()
{
	return FChooserParameterBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserParameterBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserParameterBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/IChooserParameterBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserParameterBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserParameterBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserParameterBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserParameterBase",
		sizeof(FChooserParameterBase),
		alignof(FChooserParameterBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserParameterBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserParameterBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterBase()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserParameterBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserParameterBase.InnerSingleton, Z_Construct_UScriptStruct_FChooserParameterBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserParameterBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBase_h_Statics::ScriptStructInfo[] = {
		{ FChooserParameterBase::StaticStruct, Z_Construct_UScriptStruct_FChooserParameterBase_Statics::NewStructOps, TEXT("ChooserParameterBase"), &Z_Registration_Info_UScriptStruct_ChooserParameterBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserParameterBase), 4186074919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBase_h_1644138349(TEXT("/Script/Chooser"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Public_IChooserParameterBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
