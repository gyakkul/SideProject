// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/GeometryFramework/Public/Changes/MeshChange.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshChange() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryFramework();
// End Cross Module References
	void UMeshCommandChangeTarget::StaticRegisterNativesUMeshCommandChangeTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshCommandChangeTarget);
	UClass* Z_Construct_UClass_UMeshCommandChangeTarget_NoRegister()
	{
		return UMeshCommandChangeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UMeshCommandChangeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshCommandChangeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshCommandChangeTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Changes/MeshChange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshCommandChangeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMeshCommandChangeTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshCommandChangeTarget_Statics::ClassParams = {
		&UMeshCommandChangeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMeshCommandChangeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshCommandChangeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshCommandChangeTarget()
	{
		if (!Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton, Z_Construct_UClass_UMeshCommandChangeTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshCommandChangeTarget.OuterSingleton;
	}
	template<> GEOMETRYFRAMEWORK_API UClass* StaticClass<UMeshCommandChangeTarget>()
	{
		return UMeshCommandChangeTarget::StaticClass();
	}
	UMeshCommandChangeTarget::UMeshCommandChangeTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshCommandChangeTarget);
	UMeshCommandChangeTarget::~UMeshCommandChangeTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshCommandChangeTarget, UMeshCommandChangeTarget::StaticClass, TEXT("UMeshCommandChangeTarget"), &Z_Registration_Info_UClass_UMeshCommandChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshCommandChangeTarget), 4016242093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_1889463204(TEXT("/Script/GeometryFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GeometryFramework_Public_Changes_MeshChange_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
