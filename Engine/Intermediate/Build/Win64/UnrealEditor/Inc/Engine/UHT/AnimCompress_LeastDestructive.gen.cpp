// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_LeastDestructive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_LeastDestructive() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_LeastDestructive::StaticRegisterNativesUAnimCompress_LeastDestructive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_LeastDestructive);
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive_NoRegister()
	{
		return UAnimCompress_LeastDestructive::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_LeastDestructive.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_LeastDestructive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_LeastDestructive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams = {
		&UAnimCompress_LeastDestructive::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_LeastDestructive()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton, Z_Construct_UClass_UAnimCompress_LeastDestructive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_LeastDestructive.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_LeastDestructive>()
	{
		return UAnimCompress_LeastDestructive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_LeastDestructive);
	UAnimCompress_LeastDestructive::~UAnimCompress_LeastDestructive() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_LeastDestructive, UAnimCompress_LeastDestructive::StaticClass, TEXT("UAnimCompress_LeastDestructive"), &Z_Registration_Info_UClass_UAnimCompress_LeastDestructive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_LeastDestructive), 2257265760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_127640074(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_LeastDestructive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
