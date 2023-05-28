// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_AddWPContent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddWPContent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleDescriptor_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWPContent();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWPContent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	void UGameFeatureAction_AddWPContent::StaticRegisterNativesUGameFeatureAction_AddWPContent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddWPContent);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWPContent_NoRegister()
	{
		return UGameFeatureAction_AddWPContent::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentBundleDescriptor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ContentBundleDescriptor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Add World Partition Content" },
		{ "IncludePath", "GameFeatureAction_AddWPContent.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddWPContent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::NewProp_ContentBundleDescriptor_MetaData[] = {
		{ "Category", "ContentBundle" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddWPContent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::NewProp_ContentBundleDescriptor = { "ContentBundleDescriptor", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddWPContent, ContentBundleDescriptor), Z_Construct_UClass_UContentBundleDescriptor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::NewProp_ContentBundleDescriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::NewProp_ContentBundleDescriptor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::NewProp_ContentBundleDescriptor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddWPContent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::ClassParams = {
		&UGameFeatureAction_AddWPContent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddWPContent()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWPContent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddWPContent.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddWPContent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddWPContent.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_AddWPContent>()
	{
		return UGameFeatureAction_AddWPContent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddWPContent);
	UGameFeatureAction_AddWPContent::~UGameFeatureAction_AddWPContent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddWPContent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddWPContent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddWPContent, UGameFeatureAction_AddWPContent::StaticClass, TEXT("UGameFeatureAction_AddWPContent"), &Z_Registration_Info_UClass_UGameFeatureAction_AddWPContent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddWPContent), 4288697007U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddWPContent_h_1028528241(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddWPContent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_AddWPContent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
