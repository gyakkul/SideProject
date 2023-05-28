// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Public/SequentialID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequentialID() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSequentialIDBase();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequentialIDBase;
class UScriptStruct* FSequentialIDBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequentialIDBase, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("SequentialIDBase"));
	}
	return Z_Registration_Info_UScriptStruct_SequentialIDBase.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FSequentialIDBase>()
{
	return FSequentialIDBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequentialIDBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequentialIDBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequentialID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequentialIDBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/SequentialID.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequentialIDBase, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequentialIDBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"SequentialIDBase",
		sizeof(FSequentialIDBase),
		alignof(FSequentialIDBase),
		Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequentialIDBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequentialIDBase()
	{
		if (!Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton, Z_Construct_UScriptStruct_FSequentialIDBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequentialIDBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics::ScriptStructInfo[] = {
		{ FSequentialIDBase::StaticStruct, Z_Construct_UScriptStruct_FSequentialIDBase_Statics::NewStructOps, TEXT("SequentialIDBase"), &Z_Registration_Info_UScriptStruct_SequentialIDBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequentialIDBase), 485940612U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_2615389345(TEXT("/Script/AIModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Public_SequentialID_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
