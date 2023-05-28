// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode_CorrectivesSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_CorrectivesSource() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	POSECORRECTIVESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectivesEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_CorrectivesSource>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_CorrectivesSource cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource;
class UScriptStruct* FAnimNode_CorrectivesSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource, (UObject*)Z_Construct_UPackage__Script_PoseCorrectivesEditor(), TEXT("AnimNode_CorrectivesSource"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.OuterSingleton;
}
template<> POSECORRECTIVESEDITOR_API UScriptStruct* StaticStruct<FAnimNode_CorrectivesSource>()
{
	return FAnimNode_CorrectivesSource::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_CorrectivesSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_CorrectivesSource>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_CorrectivesSource",
		sizeof(FAnimNode_CorrectivesSource),
		alignof(FAnimNode_CorrectivesSource),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimNode_CorrectivesSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimNode_CorrectivesSource_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_CorrectivesSource::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_CorrectivesSource_Statics::NewStructOps, TEXT("AnimNode_CorrectivesSource"), &Z_Registration_Info_UScriptStruct_AnimNode_CorrectivesSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_CorrectivesSource), 1575974595U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimNode_CorrectivesSource_h_1152617509(TEXT("/Script/PoseCorrectivesEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimNode_CorrectivesSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_AnimNode_CorrectivesSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
