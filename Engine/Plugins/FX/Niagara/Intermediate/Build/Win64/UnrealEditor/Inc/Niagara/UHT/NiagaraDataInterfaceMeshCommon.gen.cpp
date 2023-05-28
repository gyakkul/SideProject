// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceMeshCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMeshCommon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FMeshTriCoordinate();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshTriCoordinate;
class UScriptStruct* FMeshTriCoordinate::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshTriCoordinate.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshTriCoordinate.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshTriCoordinate, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("MeshTriCoordinate"));
	}
	return Z_Registration_Info_UScriptStruct_MeshTriCoordinate.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FMeshTriCoordinate>()
{
	return FMeshTriCoordinate::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tri_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tri;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaryCoord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaryCoord;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//A coordinate on a mesh usable in Niagara.\n//Do not alter this struct without updating the data interfaces that use it!\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
		{ "ToolTip", "A coordinate on a mesh usable in Niagara.\nDo not alter this struct without updating the data interfaces that use it!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshTriCoordinate>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData[] = {
		{ "Category", "Coordinate" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri = { "Tri", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTriCoordinate, Tri), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData[] = {
		{ "Category", "Coordinate" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceMeshCommon.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord = { "BaryCoord", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMeshTriCoordinate, BaryCoord), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_Tri,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewProp_BaryCoord,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"MeshTriCoordinate",
		sizeof(FMeshTriCoordinate),
		alignof(FMeshTriCoordinate),
		Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeshTriCoordinate()
	{
		if (!Z_Registration_Info_UScriptStruct_MeshTriCoordinate.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshTriCoordinate.InnerSingleton, Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MeshTriCoordinate.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h_Statics::ScriptStructInfo[] = {
		{ FMeshTriCoordinate::StaticStruct, Z_Construct_UScriptStruct_FMeshTriCoordinate_Statics::NewStructOps, TEXT("MeshTriCoordinate"), &Z_Registration_Info_UScriptStruct_MeshTriCoordinate, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshTriCoordinate), 1600021325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h_1444153215(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceMeshCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
