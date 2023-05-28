// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualSubjects/LiveLinkBlueprintVirtualSubjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubjectFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	LIVELINKEDITOR_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory();
	LIVELINKEDITOR_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UPackage* Z_Construct_UPackage__Script_LiveLinkEditor();
// End Cross Module References
	void ULiveLinkBlueprintVirtualSubjectFactory::StaticRegisterNativesULiveLinkBlueprintVirtualSubjectFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBlueprintVirtualSubjectFactory);
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_NoRegister()
	{
		return ULiveLinkBlueprintVirtualSubjectFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "VirtualSubjects/LiveLinkBlueprintVirtualSubjectFactory.h" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubjectFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "Live Link Blueprint Virtual Subject Factory" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubjectFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkBlueprintVirtualSubjectFactory, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::NewProp_Role_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::NewProp_Role,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBlueprintVirtualSubjectFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::ClassParams = {
		&ULiveLinkBlueprintVirtualSubjectFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubjectFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubjectFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubjectFactory.OuterSingleton;
	}
	template<> LIVELINKEDITOR_API UClass* StaticClass<ULiveLinkBlueprintVirtualSubjectFactory>()
	{
		return ULiveLinkBlueprintVirtualSubjectFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBlueprintVirtualSubjectFactory);
	ULiveLinkBlueprintVirtualSubjectFactory::~ULiveLinkBlueprintVirtualSubjectFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubjectFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubjectFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBlueprintVirtualSubjectFactory, ULiveLinkBlueprintVirtualSubjectFactory::StaticClass, TEXT("ULiveLinkBlueprintVirtualSubjectFactory"), &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubjectFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBlueprintVirtualSubjectFactory), 242755734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubjectFactory_h_2809969572(TEXT("/Script/LiveLinkEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubjectFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
