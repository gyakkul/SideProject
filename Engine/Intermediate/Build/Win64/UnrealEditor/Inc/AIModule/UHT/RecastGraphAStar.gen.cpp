// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/RecastGraphAStar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecastGraphAStar() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ARecastNavMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RecastGraphWrapper;
class UScriptStruct* FRecastGraphWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecastGraphWrapper, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("RecastGraphWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_RecastGraphWrapper.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FRecastGraphWrapper>()
{
	return FRecastGraphWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecastNavMeshActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecastNavMeshActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecastGraphWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/RecastGraphAStar.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor = { "RecastNavMeshActor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRecastGraphWrapper, RecastNavMeshActor), Z_Construct_UClass_ARecastNavMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewProp_RecastNavMeshActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		&NewStructOps,
		"RecastGraphWrapper",
		sizeof(FRecastGraphWrapper),
		alignof(FRecastGraphWrapper),
		Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecastGraphWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton, Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RecastGraphWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics::ScriptStructInfo[] = {
		{ FRecastGraphWrapper::StaticStruct, Z_Construct_UScriptStruct_FRecastGraphWrapper_Statics::NewStructOps, TEXT("RecastGraphWrapper"), &Z_Registration_Info_UScriptStruct_RecastGraphWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRecastGraphWrapper), 2039031309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_3071864536(TEXT("/Script/AIModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_RecastGraphAStar_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
