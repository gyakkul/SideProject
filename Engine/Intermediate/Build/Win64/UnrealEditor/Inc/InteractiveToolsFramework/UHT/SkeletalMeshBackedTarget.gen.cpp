// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TargetInterfaces/SkeletalMeshBackedTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshBackedTarget() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAssetBackedTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USkeletalMeshBackedTarget();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USkeletalMeshBackedTarget::StaticRegisterNativesUSkeletalMeshBackedTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshBackedTarget);
	UClass* Z_Construct_UClass_USkeletalMeshBackedTarget_NoRegister()
	{
		return USkeletalMeshBackedTarget::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshBackedTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetBackedTarget,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TargetInterfaces/SkeletalMeshBackedTarget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISkeletalMeshBackedTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::ClassParams = {
		&USkeletalMeshBackedTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshBackedTarget()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton, Z_Construct_UClass_USkeletalMeshBackedTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshBackedTarget.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USkeletalMeshBackedTarget>()
	{
		return USkeletalMeshBackedTarget::StaticClass();
	}
	USkeletalMeshBackedTarget::USkeletalMeshBackedTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshBackedTarget);
	USkeletalMeshBackedTarget::~USkeletalMeshBackedTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshBackedTarget, USkeletalMeshBackedTarget::StaticClass, TEXT("USkeletalMeshBackedTarget"), &Z_Registration_Info_UClass_USkeletalMeshBackedTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshBackedTarget), 3563319476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_451173945(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_TargetInterfaces_SkeletalMeshBackedTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
