// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/Serialization/IrisObjectReferencePackageMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIrisObjectReferencePackageMap() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UPackageMap();
	IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap();
	IRISCORE_API UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	void UIrisObjectReferencePackageMap::StaticRegisterNativesUIrisObjectReferencePackageMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIrisObjectReferencePackageMap);
	UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap_NoRegister()
	{
		return UIrisObjectReferencePackageMap::StaticClass();
	}
	struct Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPackageMap,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom packagemap implementation used to be able to capture UObject* references from external serialization.\n * Any object references written when using this packagemap will be added to the References array and serialized as an index.\n * When reading using this packagemap references will be read as an index and resolved by picking the corresponding entry from the provided array containing the references.\n */" },
		{ "IncludePath", "Iris/Serialization/IrisObjectReferencePackageMap.h" },
		{ "ModuleRelativePath", "Public/Iris/Serialization/IrisObjectReferencePackageMap.h" },
		{ "ToolTip", "Custom packagemap implementation used to be able to capture UObject* references from external serialization.\nAny object references written when using this packagemap will be added to the References array and serialized as an index.\nWhen reading using this packagemap references will be read as an index and resolved by picking the corresponding entry from the provided array containing the references." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIrisObjectReferencePackageMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::ClassParams = {
		&UIrisObjectReferencePackageMap::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIrisObjectReferencePackageMap()
	{
		if (!Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton, Z_Construct_UClass_UIrisObjectReferencePackageMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIrisObjectReferencePackageMap.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UIrisObjectReferencePackageMap>()
	{
		return UIrisObjectReferencePackageMap::StaticClass();
	}
	UIrisObjectReferencePackageMap::UIrisObjectReferencePackageMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIrisObjectReferencePackageMap);
	UIrisObjectReferencePackageMap::~UIrisObjectReferencePackageMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIrisObjectReferencePackageMap, UIrisObjectReferencePackageMap::StaticClass, TEXT("UIrisObjectReferencePackageMap"), &Z_Registration_Info_UClass_UIrisObjectReferencePackageMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIrisObjectReferencePackageMap), 3835102735U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_4131200356(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_Serialization_IrisObjectReferencePackageMap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
