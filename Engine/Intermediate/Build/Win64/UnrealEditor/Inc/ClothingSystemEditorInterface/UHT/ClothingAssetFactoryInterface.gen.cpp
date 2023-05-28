// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingAssetFactoryInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAssetFactoryInterface() {}
// Cross Module References
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase();
	CLOTHINGSYSTEMEDITORINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetFactoryBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemEditorInterface();
// End Cross Module References
	void UClothingAssetFactoryBase::StaticRegisterNativesUClothingAssetFactoryBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingAssetFactoryBase);
	UClass* Z_Construct_UClass_UClothingAssetFactoryBase_NoRegister()
	{
		return UClothingAssetFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemEditorInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Clothing asset factories should inherit this interface/uobject to provide functionality\n// to build clothing assets from .apx files imported to the engine\n" },
		{ "IncludePath", "ClothingAssetFactoryInterface.h" },
		{ "ModuleRelativePath", "Public/ClothingAssetFactoryInterface.h" },
		{ "ToolTip", "Clothing asset factories should inherit this interface/uobject to provide functionality\nto build clothing assets from .apx files imported to the engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetFactoryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetFactoryBase_Statics::ClassParams = {
		&UClothingAssetFactoryBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetFactoryBase()
	{
		if (!Z_Registration_Info_UClass_UClothingAssetFactoryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingAssetFactoryBase.OuterSingleton, Z_Construct_UClass_UClothingAssetFactoryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingAssetFactoryBase.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMEDITORINTERFACE_API UClass* StaticClass<UClothingAssetFactoryBase>()
	{
		return UClothingAssetFactoryBase::StaticClass();
	}
	UClothingAssetFactoryBase::UClothingAssetFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetFactoryBase);
	UClothingAssetFactoryBase::~UClothingAssetFactoryBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingAssetFactoryBase, UClothingAssetFactoryBase::StaticClass, TEXT("UClothingAssetFactoryBase"), &Z_Registration_Info_UClass_UClothingAssetFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingAssetFactoryBase), 2954950123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_2936256927(TEXT("/Script/ClothingSystemEditorInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothingSystemEditorInterface_Public_ClothingAssetFactoryInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
