// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeGizmos.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeGizmos() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ACombinedTransformGizmoActor();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UCombinedTransformGizmoBuilder();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRGizmoActor();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRGizmoActor_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRSGizmoActor();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRSGizmoActor_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRUSGizmoActor();
	XRCREATIVE_API UClass* Z_Construct_UClass_AXRCreativeTRUSGizmoActor_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeGizmoBuilder();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeGizmoBuilder_NoRegister();
// End Cross Module References
	void UXRCreativeGizmoBuilder::StaticRegisterNativesUXRCreativeGizmoBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeGizmoBuilder);
	UClass* Z_Construct_UClass_UXRCreativeGizmoBuilder_NoRegister()
	{
		return UXRCreativeGizmoBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCombinedTransformGizmoBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeGizmos.h" },
		{ "ModuleRelativePath", "Public/XRCreativeGizmos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeGizmoBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::ClassParams = {
		&UXRCreativeGizmoBuilder::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeGizmoBuilder()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeGizmoBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeGizmoBuilder.OuterSingleton, Z_Construct_UClass_UXRCreativeGizmoBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeGizmoBuilder.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeGizmoBuilder>()
	{
		return UXRCreativeGizmoBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeGizmoBuilder);
	UXRCreativeGizmoBuilder::~UXRCreativeGizmoBuilder() {}
	void AXRCreativeBaseTransformGizmoActor::StaticRegisterNativesAXRCreativeBaseTransformGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeBaseTransformGizmoActor);
	UClass* Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_NoRegister()
	{
		return AXRCreativeBaseTransformGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACombinedTransformGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XRCreativeGizmos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/XRCreativeGizmos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeBaseTransformGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::ClassParams = {
		&AXRCreativeBaseTransformGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeBaseTransformGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeBaseTransformGizmoActor.OuterSingleton, Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeBaseTransformGizmoActor.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeBaseTransformGizmoActor>()
	{
		return AXRCreativeBaseTransformGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeBaseTransformGizmoActor);
	AXRCreativeBaseTransformGizmoActor::~AXRCreativeBaseTransformGizmoActor() {}
	void AXRCreativeTRSGizmoActor::StaticRegisterNativesAXRCreativeTRSGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeTRSGizmoActor);
	UClass* Z_Construct_UClass_AXRCreativeTRSGizmoActor_NoRegister()
	{
		return AXRCreativeTRSGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeGizmos.h" },
		{ "ModuleRelativePath", "Public/XRCreativeGizmos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeTRSGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::ClassParams = {
		&AXRCreativeTRSGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeTRSGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeTRSGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeTRSGizmoActor.OuterSingleton, Z_Construct_UClass_AXRCreativeTRSGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeTRSGizmoActor.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeTRSGizmoActor>()
	{
		return AXRCreativeTRSGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeTRSGizmoActor);
	AXRCreativeTRSGizmoActor::~AXRCreativeTRSGizmoActor() {}
	void AXRCreativeTRUSGizmoActor::StaticRegisterNativesAXRCreativeTRUSGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeTRUSGizmoActor);
	UClass* Z_Construct_UClass_AXRCreativeTRUSGizmoActor_NoRegister()
	{
		return AXRCreativeTRUSGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeGizmos.h" },
		{ "ModuleRelativePath", "Public/XRCreativeGizmos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeTRUSGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::ClassParams = {
		&AXRCreativeTRUSGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeTRUSGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeTRUSGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeTRUSGizmoActor.OuterSingleton, Z_Construct_UClass_AXRCreativeTRUSGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeTRUSGizmoActor.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeTRUSGizmoActor>()
	{
		return AXRCreativeTRUSGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeTRUSGizmoActor);
	AXRCreativeTRUSGizmoActor::~AXRCreativeTRUSGizmoActor() {}
	void AXRCreativeTRGizmoActor::StaticRegisterNativesAXRCreativeTRGizmoActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AXRCreativeTRGizmoActor);
	UClass* Z_Construct_UClass_AXRCreativeTRGizmoActor_NoRegister()
	{
		return AXRCreativeTRGizmoActor::StaticClass();
	}
	struct Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "XRCreativeGizmos.h" },
		{ "ModuleRelativePath", "Public/XRCreativeGizmos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AXRCreativeTRGizmoActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::ClassParams = {
		&AXRCreativeTRGizmoActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AXRCreativeTRGizmoActor()
	{
		if (!Z_Registration_Info_UClass_AXRCreativeTRGizmoActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AXRCreativeTRGizmoActor.OuterSingleton, Z_Construct_UClass_AXRCreativeTRGizmoActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AXRCreativeTRGizmoActor.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<AXRCreativeTRGizmoActor>()
	{
		return AXRCreativeTRGizmoActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AXRCreativeTRGizmoActor);
	AXRCreativeTRGizmoActor::~AXRCreativeTRGizmoActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeGizmoBuilder, UXRCreativeGizmoBuilder::StaticClass, TEXT("UXRCreativeGizmoBuilder"), &Z_Registration_Info_UClass_UXRCreativeGizmoBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeGizmoBuilder), 3271929856U) },
		{ Z_Construct_UClass_AXRCreativeBaseTransformGizmoActor, AXRCreativeBaseTransformGizmoActor::StaticClass, TEXT("AXRCreativeBaseTransformGizmoActor"), &Z_Registration_Info_UClass_AXRCreativeBaseTransformGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeBaseTransformGizmoActor), 363270051U) },
		{ Z_Construct_UClass_AXRCreativeTRSGizmoActor, AXRCreativeTRSGizmoActor::StaticClass, TEXT("AXRCreativeTRSGizmoActor"), &Z_Registration_Info_UClass_AXRCreativeTRSGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeTRSGizmoActor), 2143193208U) },
		{ Z_Construct_UClass_AXRCreativeTRUSGizmoActor, AXRCreativeTRUSGizmoActor::StaticClass, TEXT("AXRCreativeTRUSGizmoActor"), &Z_Registration_Info_UClass_AXRCreativeTRUSGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeTRUSGizmoActor), 1442648898U) },
		{ Z_Construct_UClass_AXRCreativeTRGizmoActor, AXRCreativeTRGizmoActor::StaticClass, TEXT("AXRCreativeTRGizmoActor"), &Z_Registration_Info_UClass_AXRCreativeTRGizmoActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AXRCreativeTRGizmoActor), 3928948573U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_2221570417(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeGizmos_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
