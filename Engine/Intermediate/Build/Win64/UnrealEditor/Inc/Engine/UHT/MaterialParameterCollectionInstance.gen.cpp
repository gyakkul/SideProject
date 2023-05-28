// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialParameterCollectionInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialParameterCollectionInstance::StaticRegisterNativesUMaterialParameterCollectionInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialParameterCollectionInstance);
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister()
	{
		return UMaterialParameterCollectionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Collection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class that stores per-world instance parameter data for a given UMaterialParameterCollection resource. \n * Instances of this class are always transient.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialParameterCollectionInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
		{ "ToolTip", "Class that stores per-world instance parameter data for a given UMaterialParameterCollection resource.\nInstances of this class are always transient." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData[] = {
		{ "Comment", "/** Collection resource this instance is based off of. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialParameterCollectionInstance.h" },
		{ "ToolTip", "Collection resource this instance is based off of." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection = { "Collection", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialParameterCollectionInstance, Collection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::NewProp_Collection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialParameterCollectionInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::ClassParams = {
		&UMaterialParameterCollectionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialParameterCollectionInstance()
	{
		if (!Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.OuterSingleton, Z_Construct_UClass_UMaterialParameterCollectionInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialParameterCollectionInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialParameterCollectionInstance>()
	{
		return UMaterialParameterCollectionInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialParameterCollectionInstance);
	UMaterialParameterCollectionInstance::~UMaterialParameterCollectionInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialParameterCollectionInstance, UMaterialParameterCollectionInstance::StaticClass, TEXT("UMaterialParameterCollectionInstance"), &Z_Registration_Info_UClass_UMaterialParameterCollectionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialParameterCollectionInstance), 1970263883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_3847322655(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialParameterCollectionInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
