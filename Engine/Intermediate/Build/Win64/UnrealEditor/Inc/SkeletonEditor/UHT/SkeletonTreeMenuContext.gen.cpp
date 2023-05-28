// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SkeletonTreeMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonTreeMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonTreeMenuContext();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonTreeMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletonEditor();
// End Cross Module References
	void USkeletonTreeMenuContext::StaticRegisterNativesUSkeletonTreeMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonTreeMenuContext);
	UClass* Z_Construct_UClass_USkeletonTreeMenuContext_NoRegister()
	{
		return USkeletonTreeMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonTreeMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonTreeMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletonEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonTreeMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletonTreeMenuContext.h" },
		{ "ModuleRelativePath", "Private/SkeletonTreeMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonTreeMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonTreeMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonTreeMenuContext_Statics::ClassParams = {
		&USkeletonTreeMenuContext::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletonTreeMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonTreeMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonTreeMenuContext()
	{
		if (!Z_Registration_Info_UClass_USkeletonTreeMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonTreeMenuContext.OuterSingleton, Z_Construct_UClass_USkeletonTreeMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletonTreeMenuContext.OuterSingleton;
	}
	template<> SKELETONEDITOR_API UClass* StaticClass<USkeletonTreeMenuContext>()
	{
		return USkeletonTreeMenuContext::StaticClass();
	}
	USkeletonTreeMenuContext::USkeletonTreeMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonTreeMenuContext);
	USkeletonTreeMenuContext::~USkeletonTreeMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonTreeMenuContext, USkeletonTreeMenuContext::StaticClass, TEXT("USkeletonTreeMenuContext"), &Z_Registration_Info_UClass_USkeletonTreeMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonTreeMenuContext), 786630516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_1686945638(TEXT("/Script/SkeletonEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Private_SkeletonTreeMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
