// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/SparseVolumeTexture/SparseVolumeTexture.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSparseVolumeTexture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture();
	ENGINE_API UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticSparseVolumeTexture();
	ENGINE_API UClass* Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USparseVolumeTexture::StaticRegisterNativesUSparseVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USparseVolumeTexture);
	UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister()
	{
		return USparseVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_USparseVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USparseVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USparseVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// SparseVolumeTexture base interface to communicate with material graph and shader bindings.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "SparseVolumeTexture base interface to communicate with material graph and shader bindings." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USparseVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USparseVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USparseVolumeTexture_Statics::ClassParams = {
		&USparseVolumeTexture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USparseVolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USparseVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USparseVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton, Z_Construct_UClass_USparseVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USparseVolumeTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USparseVolumeTexture>()
	{
		return USparseVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USparseVolumeTexture);
	void UStaticSparseVolumeTexture::StaticRegisterNativesUStaticSparseVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticSparseVolumeTexture);
	UClass* Z_Construct_UClass_UStaticSparseVolumeTexture_NoRegister()
	{
		return UStaticSparseVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UStaticSparseVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USparseVolumeTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Volume Bounds" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::NewProp_VolumeBounds = { "VolumeBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticSparseVolumeTexture, VolumeBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::NewProp_VolumeBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticSparseVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::ClassParams = {
		&UStaticSparseVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticSparseVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UStaticSparseVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticSparseVolumeTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UStaticSparseVolumeTexture>()
	{
		return UStaticSparseVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticSparseVolumeTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UStaticSparseVolumeTexture)
	void UAnimatedSparseVolumeTexture::StaticRegisterNativesUAnimatedSparseVolumeTexture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimatedSparseVolumeTexture);
	UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister()
	{
		return UAnimatedSparseVolumeTexture::StaticClass();
	}
	struct Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USparseVolumeTexture,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "// UAnimatedSparseVolumeTexture inherit from USparseVolumeTexture to be viewed using the first frame by default.\n" },
		{ "IncludePath", "SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "UAnimatedSparseVolumeTexture inherit from USparseVolumeTexture to be viewed using the first frame by default." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_FrameCount_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// The asset frame count.\n" },
		{ "DisplayName", "Frame Count" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
		{ "ToolTip", "The asset frame count." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedSparseVolumeTexture, FrameCount), METADATA_PARAMS(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_FrameCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Volume Bounds" },
		{ "ModuleRelativePath", "Classes/SparseVolumeTexture/SparseVolumeTexture.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_VolumeBounds = { "VolumeBounds", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimatedSparseVolumeTexture, VolumeBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_VolumeBounds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_FrameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::NewProp_VolumeBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedSparseVolumeTexture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::ClassParams = {
		&UAnimatedSparseVolumeTexture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimatedSparseVolumeTexture()
	{
		if (!Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton, Z_Construct_UClass_UAnimatedSparseVolumeTexture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimatedSparseVolumeTexture>()
	{
		return UAnimatedSparseVolumeTexture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedSparseVolumeTexture);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimatedSparseVolumeTexture)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USparseVolumeTexture, USparseVolumeTexture::StaticClass, TEXT("USparseVolumeTexture"), &Z_Registration_Info_UClass_USparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USparseVolumeTexture), 469546723U) },
		{ Z_Construct_UClass_UStaticSparseVolumeTexture, UStaticSparseVolumeTexture::StaticClass, TEXT("UStaticSparseVolumeTexture"), &Z_Registration_Info_UClass_UStaticSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticSparseVolumeTexture), 4153909512U) },
		{ Z_Construct_UClass_UAnimatedSparseVolumeTexture, UAnimatedSparseVolumeTexture::StaticClass, TEXT("UAnimatedSparseVolumeTexture"), &Z_Registration_Info_UClass_UAnimatedSparseVolumeTexture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedSparseVolumeTexture), 367921106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_2317715603(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_SparseVolumeTexture_SparseVolumeTexture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
