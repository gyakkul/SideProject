// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementBrushToolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementBrushToolBase() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementBrushToolBase_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UBaseBrushTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementToolBuilderBase::StaticRegisterNativesUPlacementToolBuilderBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementToolBuilderBase);
	UClass* Z_Construct_UClass_UPlacementToolBuilderBase_NoRegister()
	{
		return UPlacementToolBuilderBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementToolBuilderBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementToolBuilderBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementToolBuilderBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementBrushToolBase.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementBrushToolBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementToolBuilderBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementToolBuilderBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementToolBuilderBase_Statics::ClassParams = {
		&UPlacementToolBuilderBase::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementToolBuilderBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementToolBuilderBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementToolBuilderBase()
	{
		if (!Z_Registration_Info_UClass_UPlacementToolBuilderBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementToolBuilderBase.OuterSingleton, Z_Construct_UClass_UPlacementToolBuilderBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementToolBuilderBase.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementToolBuilderBase>()
	{
		return UPlacementToolBuilderBase::StaticClass();
	}
	UPlacementToolBuilderBase::UPlacementToolBuilderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementToolBuilderBase);
	UPlacementToolBuilderBase::~UPlacementToolBuilderBase() {}
	void UPlacementBrushToolBase::StaticRegisterNativesUPlacementBrushToolBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementBrushToolBase);
	UClass* Z_Construct_UClass_UPlacementBrushToolBase_NoRegister()
	{
		return UPlacementBrushToolBase::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementBrushToolBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementBrushToolBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseBrushTool,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementBrushToolBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementBrushToolBase.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementBrushToolBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementBrushToolBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementBrushToolBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementBrushToolBase_Statics::ClassParams = {
		&UPlacementBrushToolBase::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementBrushToolBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementBrushToolBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementBrushToolBase()
	{
		if (!Z_Registration_Info_UClass_UPlacementBrushToolBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementBrushToolBase.OuterSingleton, Z_Construct_UClass_UPlacementBrushToolBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementBrushToolBase.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementBrushToolBase>()
	{
		return UPlacementBrushToolBase::StaticClass();
	}
	UPlacementBrushToolBase::UPlacementBrushToolBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementBrushToolBase);
	UPlacementBrushToolBase::~UPlacementBrushToolBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementBrushToolBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementBrushToolBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementToolBuilderBase, UPlacementToolBuilderBase::StaticClass, TEXT("UPlacementToolBuilderBase"), &Z_Registration_Info_UClass_UPlacementToolBuilderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementToolBuilderBase), 843780749U) },
		{ Z_Construct_UClass_UPlacementBrushToolBase, UPlacementBrushToolBase::StaticClass, TEXT("UPlacementBrushToolBase"), &Z_Registration_Info_UClass_UPlacementBrushToolBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementBrushToolBase), 1546699272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementBrushToolBase_h_2278336944(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementBrushToolBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementBrushToolBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
