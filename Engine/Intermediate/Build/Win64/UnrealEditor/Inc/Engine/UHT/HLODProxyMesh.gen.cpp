// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/HLOD/HLODProxyMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODProxyMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALODActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HLODProxyMesh;
class UScriptStruct* FHLODProxyMesh::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HLODProxyMesh.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HLODProxyMesh.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHLODProxyMesh, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("HLODProxyMesh"));
	}
	return Z_Registration_Info_UScriptStruct_HLODProxyMesh.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FHLODProxyMesh>()
{
	return FHLODProxyMesh::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHLODProxyMesh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LODActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A mesh proxy entry */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "A mesh proxy entry" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHLODProxyMesh>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData[] = {
		{ "Comment", "/** The ALODActor that we were generated from */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The ALODActor that we were generated from" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor = { "LODActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODProxyMesh, LODActor), Z_Construct_UClass_ALODActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** The mesh used to display this proxy */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The mesh used to display this proxy" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODProxyMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Proxy Mesh" },
		{ "Comment", "/** The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating. */" },
		{ "ModuleRelativePath", "Public/HLOD/HLODProxyMesh.h" },
		{ "ToolTip", "The key generated from an ALODActor. If this differs from that generated from the ALODActor, then the mesh needs regenerating." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHLODProxyMesh, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_LODActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"HLODProxyMesh",
		sizeof(FHLODProxyMesh),
		alignof(FHLODProxyMesh),
		Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHLODProxyMesh()
	{
		if (!Z_Registration_Info_UScriptStruct_HLODProxyMesh.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HLODProxyMesh.InnerSingleton, Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HLODProxyMesh.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyMesh_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyMesh_h_Statics::ScriptStructInfo[] = {
		{ FHLODProxyMesh::StaticStruct, Z_Construct_UScriptStruct_FHLODProxyMesh_Statics::NewStructOps, TEXT("HLODProxyMesh"), &Z_Registration_Info_UScriptStruct_HLODProxyMesh, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHLODProxyMesh), 2793890692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyMesh_h_1351790345(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODProxyMesh_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
