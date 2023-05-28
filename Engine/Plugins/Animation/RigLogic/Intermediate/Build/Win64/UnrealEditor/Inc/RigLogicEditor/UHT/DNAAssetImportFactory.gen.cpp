// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DNAAssetImportFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDNAAssetImportFactory() {}
// Cross Module References
	RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportFactory();
	RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportFactory_NoRegister();
	RIGLOGICEDITOR_API UClass* Z_Construct_UClass_UDNAAssetImportUI_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RigLogicEditor();
// End Cross Module References
	void UDNAAssetImportFactory::StaticRegisterNativesUDNAAssetImportFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDNAAssetImportFactory);
	UClass* Z_Construct_UClass_UDNAAssetImportFactory_NoRegister()
	{
		return UDNAAssetImportFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDNAAssetImportFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalImportUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDNAAssetImportFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RigLogicEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory responsible for importing DNA file and attaching DNA data into SkeletalMesh\n*\x09""Also extends ReimportHandler for importing DNA file with the same name as SkeletalMesh\n */" },
		{ "IncludePath", "DNAAssetImportFactory.h" },
		{ "ModuleRelativePath", "Public/DNAAssetImportFactory.h" },
		{ "ToolTip", "Factory responsible for importing DNA file and attaching DNA data into SkeletalMesh\n    Also extends ReimportHandler for importing DNA file with the same name as SkeletalMesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_ImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Public/DNAAssetImportFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAssetImportFactory, ImportUI), Z_Construct_UClass_UDNAAssetImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_ImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_ImportUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_OriginalImportUI_MetaData[] = {
		{ "Comment", "/** Prevent garbage collection of original when overriding ImportUI property */" },
		{ "ModuleRelativePath", "Public/DNAAssetImportFactory.h" },
		{ "ToolTip", "Prevent garbage collection of original when overriding ImportUI property" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_OriginalImportUI = { "OriginalImportUI", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDNAAssetImportFactory, OriginalImportUI), Z_Construct_UClass_UDNAAssetImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_OriginalImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_OriginalImportUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDNAAssetImportFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_ImportUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDNAAssetImportFactory_Statics::NewProp_OriginalImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDNAAssetImportFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDNAAssetImportFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDNAAssetImportFactory_Statics::ClassParams = {
		&UDNAAssetImportFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDNAAssetImportFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportFactory_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDNAAssetImportFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDNAAssetImportFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDNAAssetImportFactory()
	{
		if (!Z_Registration_Info_UClass_UDNAAssetImportFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDNAAssetImportFactory.OuterSingleton, Z_Construct_UClass_UDNAAssetImportFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDNAAssetImportFactory.OuterSingleton;
	}
	template<> RIGLOGICEDITOR_API UClass* StaticClass<UDNAAssetImportFactory>()
	{
		return UDNAAssetImportFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDNAAssetImportFactory);
	UDNAAssetImportFactory::~UDNAAssetImportFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDNAAssetImportFactory, UDNAAssetImportFactory::StaticClass, TEXT("UDNAAssetImportFactory"), &Z_Registration_Info_UClass_UDNAAssetImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDNAAssetImportFactory), 2399234111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_3176068261(TEXT("/Script/RigLogicEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicEditor_Public_DNAAssetImportFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
