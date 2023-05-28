// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/Changes/MeshReplacementChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReplacementChange() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	void UMeshReplacementCommandChangeTarget::StaticRegisterNativesUMeshReplacementCommandChangeTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshReplacementCommandChangeTarget);
	UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister()
	{
		return UMeshReplacementCommandChangeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Changes/MeshReplacementChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshReplacementCommandChangeTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::ClassParams = {
		&UMeshReplacementCommandChangeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget()
	{
		if (!Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton, Z_Construct_UClass_UMeshReplacementCommandChangeTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UMeshReplacementCommandChangeTarget>()
	{
		return UMeshReplacementCommandChangeTarget::StaticClass();
	}
	UMeshReplacementCommandChangeTarget::UMeshReplacementCommandChangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReplacementCommandChangeTarget);
	UMeshReplacementCommandChangeTarget::~UMeshReplacementCommandChangeTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget, UMeshReplacementCommandChangeTarget::StaticClass, TEXT("UMeshReplacementCommandChangeTarget"), &Z_Registration_Info_UClass_UMeshReplacementCommandChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshReplacementCommandChangeTarget), 2403131168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_1891805369(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshReplacementChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
