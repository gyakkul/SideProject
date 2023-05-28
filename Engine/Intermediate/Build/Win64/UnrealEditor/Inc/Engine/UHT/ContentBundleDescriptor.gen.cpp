// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleDescriptor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleDescriptor();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleDescriptor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UContentBundleDescriptor::StaticRegisterNativesUContentBundleDescriptor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleDescriptor);
	UClass* Z_Construct_UClass_UContentBundleDescriptor_NoRegister()
	{
		return UContentBundleDescriptor::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleDescriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageRoot_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageRoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleDescriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDescriptor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleDescriptor, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleDescriptor, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleDescriptor, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_PackageRoot_MetaData[] = {
		{ "Category", "BaseInformation" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_PackageRoot = { "PackageRoot", nullptr, (EPropertyFlags)0x0040040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UContentBundleDescriptor, PackageRoot), METADATA_PARAMS(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_PackageRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_PackageRoot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UContentBundleDescriptor_Statics::NewProp_PackageRoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleDescriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleDescriptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleDescriptor_Statics::ClassParams = {
		&UContentBundleDescriptor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleDescriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleDescriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleDescriptor()
	{
		if (!Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton, Z_Construct_UClass_UContentBundleDescriptor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleDescriptor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UContentBundleDescriptor>()
	{
		return UContentBundleDescriptor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleDescriptor);
	UContentBundleDescriptor::~UContentBundleDescriptor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleDescriptor, UContentBundleDescriptor::StaticClass, TEXT("UContentBundleDescriptor"), &Z_Registration_Info_UClass_UContentBundleDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleDescriptor), 924374753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_3589796434(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleDescriptor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
