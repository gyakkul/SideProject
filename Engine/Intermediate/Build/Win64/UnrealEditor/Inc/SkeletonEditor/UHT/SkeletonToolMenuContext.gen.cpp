// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletonToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletonToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonToolMenuContext();
	SKELETONEDITOR_API UClass* Z_Construct_UClass_USkeletonToolMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SkeletonEditor();
// End Cross Module References
	void USkeletonToolMenuContext::StaticRegisterNativesUSkeletonToolMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonToolMenuContext);
	UClass* Z_Construct_UClass_USkeletonToolMenuContext_NoRegister()
	{
		return USkeletonToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletonEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletonToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/SkeletonToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonToolMenuContext_Statics::ClassParams = {
		&USkeletonToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USkeletonToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_USkeletonToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonToolMenuContext.OuterSingleton, Z_Construct_UClass_USkeletonToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletonToolMenuContext.OuterSingleton;
	}
	template<> SKELETONEDITOR_API UClass* StaticClass<USkeletonToolMenuContext>()
	{
		return USkeletonToolMenuContext::StaticClass();
	}
	USkeletonToolMenuContext::USkeletonToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonToolMenuContext);
	USkeletonToolMenuContext::~USkeletonToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonToolMenuContext, USkeletonToolMenuContext::StaticClass, TEXT("USkeletonToolMenuContext"), &Z_Registration_Info_UClass_USkeletonToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonToolMenuContext), 1320921815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_3306750312(TEXT("/Script/SkeletonEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SkeletonEditor_Public_SkeletonToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
