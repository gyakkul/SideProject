// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/MeshDescriptionCommitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshDescriptionCommitter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UMeshDescriptionCommitter::StaticRegisterNativesUMeshDescriptionCommitter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshDescriptionCommitter);
	UClass* Z_Construct_UClass_UMeshDescriptionCommitter_NoRegister()
	{
		return UMeshDescriptionCommitter::StaticClass();
	}
	struct Z_Construct_UClass_UMeshDescriptionCommitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshDescriptionCommitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshDescriptionCommitter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/MeshDescriptionCommitter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshDescriptionCommitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshDescriptionCommitter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshDescriptionCommitter_Statics::ClassParams = {
		&UMeshDescriptionCommitter::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshDescriptionCommitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshDescriptionCommitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshDescriptionCommitter()
	{
		if (!Z_Registration_Info_UClass_UMeshDescriptionCommitter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshDescriptionCommitter.OuterSingleton, Z_Construct_UClass_UMeshDescriptionCommitter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshDescriptionCommitter.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UMeshDescriptionCommitter>()
	{
		return UMeshDescriptionCommitter::StaticClass();
	}
	UMeshDescriptionCommitter::UMeshDescriptionCommitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshDescriptionCommitter);
	UMeshDescriptionCommitter::~UMeshDescriptionCommitter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshDescriptionCommitter, UMeshDescriptionCommitter::StaticClass, TEXT("UMeshDescriptionCommitter"), &Z_Registration_Info_UClass_UMeshDescriptionCommitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshDescriptionCommitter), 78481201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_1121503789(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_MeshDescriptionCommitter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
