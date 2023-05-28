// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/SkeletalMeshToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshToolMenuContext();
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USkeletalMeshToolMenuContext::StaticRegisterNativesUSkeletalMeshToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshToolMenuContext);
	UClass* Z_Construct_UClass_USkeletalMeshToolMenuContext_NoRegister()
	{
		return USkeletalMeshToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::ClassParams = {
		&USkeletalMeshToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshToolMenuContext.OuterSingleton, Z_Construct_UClass_USkeletalMeshToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshToolMenuContext.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USkeletalMeshToolMenuContext>()
	{
		return USkeletalMeshToolMenuContext::StaticClass();
	}
	USkeletalMeshToolMenuContext::USkeletalMeshToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshToolMenuContext);
	USkeletalMeshToolMenuContext::~USkeletalMeshToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SkeletalMeshToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SkeletalMeshToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshToolMenuContext, USkeletalMeshToolMenuContext::StaticClass, TEXT("USkeletalMeshToolMenuContext"), &Z_Registration_Info_UClass_USkeletalMeshToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshToolMenuContext), 2176353014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SkeletalMeshToolMenuContext_h_4050087085(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SkeletalMeshToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_SkeletalMeshToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
