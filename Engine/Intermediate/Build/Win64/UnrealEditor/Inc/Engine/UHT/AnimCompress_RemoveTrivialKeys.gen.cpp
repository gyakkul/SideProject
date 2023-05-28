// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveTrivialKeys.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress_RemoveTrivialKeys() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress_RemoveTrivialKeys::StaticRegisterNativesUAnimCompress_RemoveTrivialKeys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress_RemoveTrivialKeys);
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_NoRegister()
	{
		return UAnimCompress_RemoveTrivialKeys::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPosDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPosDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleDiff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaleDiff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScaleDiff;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCompress,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress_RemoveTrivialKeys.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff = { "MaxPosDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxPosDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff = { "MaxAngleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxAngleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData[] = {
		{ "Category", "AnimationCompressionAlgorithm_RemoveTrivialKeys" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress_RemoveTrivialKeys.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff = { "MaxScaleDiff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress_RemoveTrivialKeys, MaxScaleDiff), METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxPosDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxAngleDiff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::NewProp_MaxScaleDiff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress_RemoveTrivialKeys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams = {
		&UAnimCompress_RemoveTrivialKeys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton, Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress_RemoveTrivialKeys>()
	{
		return UAnimCompress_RemoveTrivialKeys::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress_RemoveTrivialKeys);
	UAnimCompress_RemoveTrivialKeys::~UAnimCompress_RemoveTrivialKeys() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress_RemoveTrivialKeys, UAnimCompress_RemoveTrivialKeys::StaticClass, TEXT("UAnimCompress_RemoveTrivialKeys"), &Z_Registration_Info_UClass_UAnimCompress_RemoveTrivialKeys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress_RemoveTrivialKeys), 4230812117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_3378547343(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_RemoveTrivialKeys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
