// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/StaticMeshBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshBackedTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UStaticMeshBackedTarget::StaticRegisterNativesUStaticMeshBackedTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshBackedTarget);
	UClass* Z_Construct_UClass_UStaticMeshBackedTarget_NoRegister()
	{
		return UStaticMeshBackedTarget::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshBackedTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshBackedTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetBackedTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshBackedTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/StaticMeshBackedTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshBackedTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStaticMeshBackedTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshBackedTarget_Statics::ClassParams = {
		&UStaticMeshBackedTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshBackedTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshBackedTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshBackedTarget()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton, Z_Construct_UClass_UStaticMeshBackedTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshBackedTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UStaticMeshBackedTarget>()
	{
		return UStaticMeshBackedTarget::StaticClass();
	}
	UStaticMeshBackedTarget::UStaticMeshBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshBackedTarget);
	UStaticMeshBackedTarget::~UStaticMeshBackedTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaticMeshBackedTarget, UStaticMeshBackedTarget::StaticClass, TEXT("UStaticMeshBackedTarget"), &Z_Registration_Info_UClass_UStaticMeshBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshBackedTarget), 311638602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_2746241533(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_StaticMeshBackedTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
