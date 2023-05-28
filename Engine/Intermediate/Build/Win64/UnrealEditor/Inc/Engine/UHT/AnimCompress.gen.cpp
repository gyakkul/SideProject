// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCompress.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCompress() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompress_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCompress::StaticRegisterNativesUAnimCompress()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCompress);
	UClass* Z_Construct_UClass_UAnimCompress_NoRegister()
	{
		return UAnimCompress::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCompress_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsSkeleton_MetaData[];
#endif
		static void NewProp_bNeedsSkeleton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationCompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationCompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationCompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationCompressionFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCompressionFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleCompressionFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCompress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBoneCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimCompress.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData[] = {
		{ "Comment", "/** Compression algorithms requiring a skeleton should set this value to true. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Compression algorithms requiring a skeleton should set this value to true." },
	};
#endif
	void Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit(void* Obj)
	{
		((UAnimCompress*)Obj)->bNeedsSkeleton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton = { "bNeedsSkeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimCompress), &Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of translation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of translation data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat = { "TranslationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress, TranslationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat_MetaData)) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of rotation data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of rotation data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat = { "RotationCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress, RotationCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat_MetaData)) }; // 2787951824
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Format for bitwise compression of scale data. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCompress.h" },
		{ "ToolTip", "Format for bitwise compression of scale data." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat = { "ScaleCompressionFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCompress, ScaleCompressionFormat), Z_Construct_UEnum_Engine_AnimationCompressionFormat, METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat_MetaData)) }; // 2787951824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCompress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_bNeedsSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_TranslationCompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_RotationCompressionFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCompress_Statics::NewProp_ScaleCompressionFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCompress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCompress>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCompress_Statics::ClassParams = {
		&UAnimCompress::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCompress_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::PropPointers),
		0,
		0x000810A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCompress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCompress()
	{
		if (!Z_Registration_Info_UClass_UAnimCompress.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCompress.OuterSingleton, Z_Construct_UClass_UAnimCompress_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCompress.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCompress>()
	{
		return UAnimCompress::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCompress);
	UAnimCompress::~UAnimCompress() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCompress, UAnimCompress::StaticClass, TEXT("UAnimCompress"), &Z_Registration_Info_UClass_UAnimCompress, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCompress), 469350344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_1160322704(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCompress_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
