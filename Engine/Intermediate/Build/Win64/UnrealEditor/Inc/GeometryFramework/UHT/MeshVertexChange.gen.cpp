// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/Changes/MeshVertexChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshVertexChange() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	void UMeshVertexCommandChangeTarget::StaticRegisterNativesUMeshVertexCommandChangeTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshVertexCommandChangeTarget);
	UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget_NoRegister()
	{
		return UMeshVertexCommandChangeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Changes/MeshVertexChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshVertexCommandChangeTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::ClassParams = {
		&UMeshVertexCommandChangeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshVertexCommandChangeTarget()
	{
		if (!Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton, Z_Construct_UClass_UMeshVertexCommandChangeTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UMeshVertexCommandChangeTarget>()
	{
		return UMeshVertexCommandChangeTarget::StaticClass();
	}
	UMeshVertexCommandChangeTarget::UMeshVertexCommandChangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshVertexCommandChangeTarget);
	UMeshVertexCommandChangeTarget::~UMeshVertexCommandChangeTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshVertexCommandChangeTarget, UMeshVertexCommandChangeTarget::StaticClass, TEXT("UMeshVertexCommandChangeTarget"), &Z_Registration_Info_UClass_UMeshVertexCommandChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshVertexCommandChangeTarget), 84206154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_3291045994(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshVertexChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
