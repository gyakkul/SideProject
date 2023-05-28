// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DummyMeshReconstructor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyMeshReconstructor() {}
// Cross Module References
	DUMMYMESHRECONSTRUCTOR_API UClass* Z_Construct_UClass_UDummyMeshReconstructor();
	DUMMYMESHRECONSTRUCTOR_API UClass* Z_Construct_UClass_UDummyMeshReconstructor_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
	UPackage* Z_Construct_UPackage__Script_DummyMeshReconstructor();
// End Cross Module References
	void UDummyMeshReconstructor::StaticRegisterNativesUDummyMeshReconstructor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDummyMeshReconstructor);
	UClass* Z_Construct_UClass_UDummyMeshReconstructor_NoRegister()
	{
		return UDummyMeshReconstructor::StaticClass();
	}
	struct Z_Construct_UClass_UDummyMeshReconstructor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyMeshReconstructor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshReconstructorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DummyMeshReconstructor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyMeshReconstructor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Experimental", "" },
		{ "IncludePath", "DummyMeshReconstructor.h" },
		{ "ModuleRelativePath", "Public/DummyMeshReconstructor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyMeshReconstructor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyMeshReconstructor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDummyMeshReconstructor_Statics::ClassParams = {
		&UDummyMeshReconstructor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDummyMeshReconstructor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDummyMeshReconstructor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDummyMeshReconstructor()
	{
		if (!Z_Registration_Info_UClass_UDummyMeshReconstructor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDummyMeshReconstructor.OuterSingleton, Z_Construct_UClass_UDummyMeshReconstructor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDummyMeshReconstructor.OuterSingleton;
	}
	template<> DUMMYMESHRECONSTRUCTOR_API UClass* StaticClass<UDummyMeshReconstructor>()
	{
		return UDummyMeshReconstructor::StaticClass();
	}
	UDummyMeshReconstructor::UDummyMeshReconstructor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyMeshReconstructor);
	UDummyMeshReconstructor::~UDummyMeshReconstructor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshReconstruction_DummyMeshReconstructor_Source_DummyMeshReconstructor_Public_DummyMeshReconstructor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshReconstruction_DummyMeshReconstructor_Source_DummyMeshReconstructor_Public_DummyMeshReconstructor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDummyMeshReconstructor, UDummyMeshReconstructor::StaticClass, TEXT("UDummyMeshReconstructor"), &Z_Registration_Info_UClass_UDummyMeshReconstructor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDummyMeshReconstructor), 2367092899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshReconstruction_DummyMeshReconstructor_Source_DummyMeshReconstructor_Public_DummyMeshReconstructor_h_1813975831(TEXT("/Script/DummyMeshReconstructor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshReconstruction_DummyMeshReconstructor_Source_DummyMeshReconstructor_Public_DummyMeshReconstructor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshReconstruction_DummyMeshReconstructor_Source_DummyMeshReconstructor_Public_DummyMeshReconstructor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
