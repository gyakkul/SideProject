// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectMipDataProvider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectMipDataProvider() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UMutableTextureMipDataProviderFactory();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureMipDataProviderFactory();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UMutableTextureMipDataProviderFactory::StaticRegisterNativesUMutableTextureMipDataProviderFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMutableTextureMipDataProviderFactory);
	UClass* Z_Construct_UClass_UMutableTextureMipDataProviderFactory_NoRegister()
	{
		return UMutableTextureMipDataProviderFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObjectInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObjectInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureMipDataProviderFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MuCO/CustomizableObjectMipDataProvider.h" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectMipDataProvider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::NewProp_CustomizableObjectInstance_MetaData[] = {
		{ "Comment", "// Todo: Simplify by replacing the reference to the Instance with some static parametrization or hash with enough info to reconstruct the texture\n" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectMipDataProvider.h" },
		{ "ToolTip", "Todo: Simplify by replacing the reference to the Instance with some static parametrization or hash with enough info to reconstruct the texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::NewProp_CustomizableObjectInstance = { "CustomizableObjectInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMutableTextureMipDataProviderFactory, CustomizableObjectInstance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::NewProp_CustomizableObjectInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::NewProp_CustomizableObjectInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::NewProp_CustomizableObjectInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMutableTextureMipDataProviderFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::ClassParams = {
		&UMutableTextureMipDataProviderFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMutableTextureMipDataProviderFactory()
	{
		if (!Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.OuterSingleton, Z_Construct_UClass_UMutableTextureMipDataProviderFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UMutableTextureMipDataProviderFactory>()
	{
		return UMutableTextureMipDataProviderFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMutableTextureMipDataProviderFactory);
	UMutableTextureMipDataProviderFactory::~UMutableTextureMipDataProviderFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectMipDataProvider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectMipDataProvider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMutableTextureMipDataProviderFactory, UMutableTextureMipDataProviderFactory::StaticClass, TEXT("UMutableTextureMipDataProviderFactory"), &Z_Registration_Info_UClass_UMutableTextureMipDataProviderFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMutableTextureMipDataProviderFactory), 2076246582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectMipDataProvider_h_2864796513(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectMipDataProvider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectMipDataProvider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
