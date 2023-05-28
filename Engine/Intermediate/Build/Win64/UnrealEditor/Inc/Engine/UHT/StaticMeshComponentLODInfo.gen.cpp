// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/StaticMeshComponentLODInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshComponentLODInfo() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo;
class UScriptStruct* FStaticMeshComponentLODInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StaticMeshComponentLODInfo"));
	}
	return Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStaticMeshComponentLODInfo>()
{
	return FStaticMeshComponentLODInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StaticMeshComponentLODInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshComponentLODInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StaticMeshComponentLODInfo",
		sizeof(FStaticMeshComponentLODInfo),
		alignof(FStaticMeshComponentLODInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics::ScriptStructInfo[] = {
		{ FStaticMeshComponentLODInfo::StaticStruct, Z_Construct_UScriptStruct_FStaticMeshComponentLODInfo_Statics::NewStructOps, TEXT("StaticMeshComponentLODInfo"), &Z_Registration_Info_UScriptStruct_StaticMeshComponentLODInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStaticMeshComponentLODInfo), 3472915565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_3106506342(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_StaticMeshComponentLODInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
