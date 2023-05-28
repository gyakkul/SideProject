// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataInterfaceGeometryCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGeometryCollection() {}
// Cross Module References
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection();
	CHAOSNIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosNiagara();
// End Cross Module References
	void UNiagaraDataInterfaceGeometryCollection::StaticRegisterNativesUNiagaraDataInterfaceGeometryCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGeometryCollection);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_NoRegister()
	{
		return UNiagaraDataInterfaceGeometryCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollectionActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosNiagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Data Interface for the Collisions */" },
		{ "DisplayName", "Geometry Collection" },
		{ "IncludePath", "NiagaraDataInterfaceGeometryCollection.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
		{ "ToolTip", "Data Interface for the Collisions" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor_MetaData[] = {
		{ "Category", "Geometry Collection" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceGeometryCollection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor = { "GeometryCollectionActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGeometryCollection, GeometryCollectionActor), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::NewProp_GeometryCollectionActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGeometryCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams = {
		&UNiagaraDataInterfaceGeometryCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection.OuterSingleton;
	}
	template<> CHAOSNIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGeometryCollection>()
	{
		return UNiagaraDataInterfaceGeometryCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGeometryCollection);
	UNiagaraDataInterfaceGeometryCollection::~UNiagaraDataInterfaceGeometryCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGeometryCollection, UNiagaraDataInterfaceGeometryCollection::StaticClass, TEXT("UNiagaraDataInterfaceGeometryCollection"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGeometryCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGeometryCollection), 3544075955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_1571765227(TEXT("/Script/ChaosNiagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosNiagara_Source_ChaosNiagara_Public_NiagaraDataInterfaceGeometryCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
