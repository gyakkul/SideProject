// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_AGroomActor_NoRegister();
	HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	void AGroomActor::StaticRegisterNativesAGroomActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroomActor);
	UClass* Z_Construct_UClass_AGroomActor_NoRegister()
	{
		return AGroomActor::StaticClass();
	}
	struct Z_Construct_UClass_AGroomActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroomComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroomComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroomActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroomActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An actor that renders a simulated hair */" },
		{ "HideCategories", "Input Replication Mobility" },
		{ "IncludePath", "GroomActor.h" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An actor that renders a simulated hair" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent_MetaData[] = {
		{ "Category", "StrandHair" },
		{ "Comment", "/** Strand hair component that performs simulation and rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ToolTip", "Strand hair component that performs simulation and rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent = { "GroomComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGroomActor, GroomComponent), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard used to see the scene in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GroomActor.h" },
		{ "ToolTip", "Billboard used to see the scene in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0024080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGroomActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroomActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroomActor_Statics::NewProp_GroomComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroomActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroomActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroomActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroomActor_Statics::ClassParams = {
		&AGroomActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGroomActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGroomActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGroomActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroomActor()
	{
		if (!Z_Registration_Info_UClass_AGroomActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroomActor.OuterSingleton, Z_Construct_UClass_AGroomActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGroomActor.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UClass* StaticClass<AGroomActor>()
	{
		return AGroomActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroomActor);
	AGroomActor::~AGroomActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGroomActor, AGroomActor::StaticClass, TEXT("AGroomActor"), &Z_Registration_Info_UClass_AGroomActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroomActor), 2571864775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_2664712267(TEXT("/Script/HairStrandsCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
