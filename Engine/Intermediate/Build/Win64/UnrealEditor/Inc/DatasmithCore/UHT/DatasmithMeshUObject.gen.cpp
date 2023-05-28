// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithMeshUObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithMeshUObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCORE_API UClass* Z_Construct_UClass_UDatasmithMesh();
	DATASMITHCORE_API UClass* Z_Construct_UClass_UDatasmithMesh_NoRegister();
	DATASMITHCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSourceModel();
	UPackage* Z_Construct_UPackage__Script_DatasmithCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel;
class UScriptStruct* FDatasmithMeshSourceModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithMeshSourceModel, (UObject*)Z_Construct_UPackage__Script_DatasmithCore(), TEXT("DatasmithMeshSourceModel"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.OuterSingleton;
}
template<> DATASMITHCORE_API UScriptStruct* StaticStruct<FDatasmithMeshSourceModel>()
{
	return FDatasmithMeshSourceModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithMeshUObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithMeshSourceModel>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithCore,
		nullptr,
		&NewStructOps,
		"DatasmithMeshSourceModel",
		sizeof(FDatasmithMeshSourceModel),
		alignof(FDatasmithMeshSourceModel),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithMeshSourceModel()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel.InnerSingleton;
	}
	void UDatasmithMesh::StaticRegisterNativesUDatasmithMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithMesh);
	UClass* Z_Construct_UClass_UDatasmithMesh_NoRegister()
	{
		return UDatasmithMesh::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCollisionMesh_MetaData[];
#endif
		static void NewProp_bIsCollisionMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCollisionMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DatasmithMeshUObject.h" },
		{ "ModuleRelativePath", "Public/DatasmithMeshUObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_MeshName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithMeshUObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_MeshName = { "MeshName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithMesh, MeshName), METADATA_PARAMS(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_MeshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_MeshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithMeshUObject.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh_SetBit(void* Obj)
	{
		((UDatasmithMesh*)Obj)->bIsCollisionMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh = { "bIsCollisionMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDatasmithMesh), &Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels_Inner = { "SourceModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDatasmithMeshSourceModel, METADATA_PARAMS(nullptr, 0) }; // 3646161519
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithMeshUObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels = { "SourceModels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithMesh, SourceModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels_MetaData)) }; // 3646161519
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_MeshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_bIsCollisionMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMesh_Statics::NewProp_SourceModels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMesh_Statics::ClassParams = {
		&UDatasmithMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMesh_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMesh()
	{
		if (!Z_Registration_Info_UClass_UDatasmithMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithMesh.OuterSingleton, Z_Construct_UClass_UDatasmithMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithMesh.OuterSingleton;
	}
	template<> DATASMITHCORE_API UClass* StaticClass<UDatasmithMesh>()
	{
		return UDatasmithMesh::StaticClass();
	}
	UDatasmithMesh::UDatasmithMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMesh);
	UDatasmithMesh::~UDatasmithMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDatasmithMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithMeshSourceModel::StaticStruct, Z_Construct_UScriptStruct_FDatasmithMeshSourceModel_Statics::NewStructOps, TEXT("DatasmithMeshSourceModel"), &Z_Registration_Info_UScriptStruct_DatasmithMeshSourceModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithMeshSourceModel), 3646161519U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithMesh, UDatasmithMesh::StaticClass, TEXT("UDatasmithMesh"), &Z_Registration_Info_UClass_UDatasmithMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithMesh), 2162987592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_3047875923(TEXT("/Script/DatasmithCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Datasmith_DatasmithCore_Public_DatasmithMeshUObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
