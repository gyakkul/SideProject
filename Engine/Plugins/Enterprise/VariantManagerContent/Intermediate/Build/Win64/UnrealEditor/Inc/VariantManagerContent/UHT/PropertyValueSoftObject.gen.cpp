// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyValueSoftObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyValueSoftObject() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueSoftObject();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValueSoftObject_NoRegister();
// End Cross Module References
	void UPropertyValueSoftObject::StaticRegisterNativesUPropertyValueSoftObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyValueSoftObject);
	UClass* Z_Construct_UClass_UPropertyValueSoftObject_NoRegister()
	{
		return UPropertyValueSoftObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyValueSoftObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyValueSoftObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyValue,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Stores data from a USoftObjectProperty.\n * It will store it's recorded data as a raw UObject*, and use the usual UPropertyValue\n * facilities for serializing it as a Soft object ptr. This derived class handles converting\n * to and from the property's underlying FSoftObjectPtr to our UObject*.\n * We can't keep a FSoftObjectPtr ourselves, neither as a temp member nor as raw bytes, as it has\n * internal heap-allocated data members like FName and FString.\n */" },
		{ "IncludePath", "PropertyValueSoftObject.h" },
		{ "ModuleRelativePath", "Public/PropertyValueSoftObject.h" },
		{ "ToolTip", "Stores data from a USoftObjectProperty.\nIt will store it's recorded data as a raw UObject*, and use the usual UPropertyValue\nfacilities for serializing it as a Soft object ptr. This derived class handles converting\nto and from the property's underlying FSoftObjectPtr to our UObject*.\nWe can't keep a FSoftObjectPtr ourselves, neither as a temp member nor as raw bytes, as it has\ninternal heap-allocated data members like FName and FString." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyValueSoftObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyValueSoftObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyValueSoftObject_Statics::ClassParams = {
		&UPropertyValueSoftObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyValueSoftObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyValueSoftObject()
	{
		if (!Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton, Z_Construct_UClass_UPropertyValueSoftObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyValueSoftObject.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<UPropertyValueSoftObject>()
	{
		return UPropertyValueSoftObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyValueSoftObject);
	UPropertyValueSoftObject::~UPropertyValueSoftObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyValueSoftObject, UPropertyValueSoftObject::StaticClass, TEXT("UPropertyValueSoftObject"), &Z_Registration_Info_UClass_UPropertyValueSoftObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyValueSoftObject), 70146087U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_906619687(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_PropertyValueSoftObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
