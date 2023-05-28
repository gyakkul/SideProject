// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeReference() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult;
	static UEnum* EAnimNodeReferenceConversionResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimNodeReferenceConversionResult"));
		}
		return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimNodeReferenceConversionResult>()
	{
		return EAnimNodeReferenceConversionResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enumerators[] = {
		{ "EAnimNodeReferenceConversionResult::Succeeded", (int64)EAnimNodeReferenceConversionResult::Succeeded },
		{ "EAnimNodeReferenceConversionResult::Failed", (int64)EAnimNodeReferenceConversionResult::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The result of an anim node reference conversion \n" },
		{ "Failed.Name", "EAnimNodeReferenceConversionResult::Failed" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeReference.h" },
		{ "Succeeded.Name", "EAnimNodeReferenceConversionResult::Succeeded" },
		{ "ToolTip", "The result of an anim node reference conversion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimNodeReferenceConversionResult",
		"EAnimNodeReferenceConversionResult",
		Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult()
	{
		if (!Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton, Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeReference;
class UScriptStruct* FAnimNodeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeReference"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeReference>()
{
	return FAnimNodeReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNodeReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A reference to an anim node. Does not persist, only valid for the call in which it was retrieved.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeReference.h" },
		{ "ToolTip", "A reference to an anim node. Does not persist, only valid for the call in which it was retrieved." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodeReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNodeReference",
		sizeof(FAnimNodeReference),
		alignof(FAnimNodeReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNodeReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::EnumInfo[] = {
		{ EAnimNodeReferenceConversionResult_StaticEnum, TEXT("EAnimNodeReferenceConversionResult"), &Z_Registration_Info_UEnum_EAnimNodeReferenceConversionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2316672980U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::ScriptStructInfo[] = {
		{ FAnimNodeReference::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeReference_Statics::NewStructOps, TEXT("AnimNodeReference"), &Z_Registration_Info_UScriptStruct_AnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeReference), 489647993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_1767833379(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeReference_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
