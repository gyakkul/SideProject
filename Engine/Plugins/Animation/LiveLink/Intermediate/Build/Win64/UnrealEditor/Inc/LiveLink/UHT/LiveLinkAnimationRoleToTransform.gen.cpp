// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Translator/LiveLinkAnimationRoleToTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAnimationRoleToTransform() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkAnimationRoleToTransform::StaticRegisterNativesULiveLinkAnimationRoleToTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationRoleToTransform);
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_NoRegister()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameTranslator,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Basic object to translate data from one role to another\n */" },
		{ "DisplayName", "Animation To Transform" },
		{ "IncludePath", "Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
		{ "ToolTip", "Basic object to translate data from one role to another" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Translator/LiveLinkAnimationRoleToTransform.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkAnimationRoleToTransform, BoneName), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::NewProp_BoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationRoleToTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams = {
		&ULiveLinkAnimationRoleToTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationRoleToTransform()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationRoleToTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationRoleToTransform>()
	{
		return ULiveLinkAnimationRoleToTransform::StaticClass();
	}
	ULiveLinkAnimationRoleToTransform::ULiveLinkAnimationRoleToTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationRoleToTransform);
	ULiveLinkAnimationRoleToTransform::~ULiveLinkAnimationRoleToTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkAnimationRoleToTransform, ULiveLinkAnimationRoleToTransform::StaticClass, TEXT("ULiveLinkAnimationRoleToTransform"), &Z_Registration_Info_UClass_ULiveLinkAnimationRoleToTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationRoleToTransform), 4019179767U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_2174597940(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_Translator_LiveLinkAnimationRoleToTransform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
