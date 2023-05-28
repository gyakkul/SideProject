// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_BitwiseCompressOnly.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_BitwiseCompressOnly() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_BitwiseCompressOnly::StaticRegisterNativesUAnimCompress_BitwiseCompressOnly()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_BitwiseCompressOnly);
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_NoRegister()
	{
		return UAnimCompress_BitwiseCompressOnly::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_BitwiseCompressOnly.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_BitwiseCompressOnly.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_BitwiseCompressOnly>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams = {
		&UAnimCompress_BitwiseCompressOnly::StaticClass,
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
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton, Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_BitwiseCompressOnly>()
	{
		return UAnimCompress_BitwiseCompressOnly::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_BitwiseCompressOnly);
	UAnimCompress_BitwiseCompressOnly::~UAnimCompress_BitwiseCompressOnly() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_BitwiseCompressOnly, UAnimCompress_BitwiseCompressOnly::StaticClass, TEXT("UAnimCompress_BitwiseCompressOnly"), &Z_Registration_Info_UClass_UAnimCompress_BitwiseCompressOnly, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_BitwiseCompressOnly), 2717063579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_2218354604(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_BitwiseCompressOnly_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
