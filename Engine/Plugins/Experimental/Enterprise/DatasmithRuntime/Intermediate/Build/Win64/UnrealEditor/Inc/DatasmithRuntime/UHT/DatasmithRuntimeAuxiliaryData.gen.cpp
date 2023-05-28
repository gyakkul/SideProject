// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DatasmithRuntimeAuxiliaryData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithRuntimeAuxiliaryData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_NoRegister();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeTHelper();
	DATASMITHRUNTIME_API UClass* Z_Construct_UClass_UDatasmithRuntimeTHelper_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithRuntime();
// End Cross Module References
	void UDatasmithRuntimeTHelper::StaticRegisterNativesUDatasmithRuntimeTHelper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithRuntimeTHelper);
	UClass* Z_Construct_UClass_UDatasmithRuntimeTHelper_NoRegister()
	{
		return UDatasmithRuntimeTHelper::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class to hold on FAssetData entities while their associated texture is being built\n */" },
		{ "IncludePath", "DatasmithRuntimeAuxiliaryData.h" },
		{ "ModuleRelativePath", "Private/DatasmithRuntimeAuxiliaryData.h" },
		{ "ToolTip", "Utility class to hold on FAssetData entities while their associated texture is being built" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DatasmithRuntimeAuxiliaryData.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithRuntimeTHelper, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::NewProp_AssetUserData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UDatasmithRuntimeTHelper, IInterface_AssetUserData), false },  // 1283872964
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithRuntimeTHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::ClassParams = {
		&UDatasmithRuntimeTHelper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithRuntimeTHelper()
	{
		if (!Z_Registration_Info_UClass_UDatasmithRuntimeTHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithRuntimeTHelper.OuterSingleton, Z_Construct_UClass_UDatasmithRuntimeTHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithRuntimeTHelper.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<UDatasmithRuntimeTHelper>()
	{
		return UDatasmithRuntimeTHelper::StaticClass();
	}
	UDatasmithRuntimeTHelper::UDatasmithRuntimeTHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithRuntimeTHelper);
	UDatasmithRuntimeTHelper::~UDatasmithRuntimeTHelper() {}
	void UDatasmithRuntimeAuxiliaryData::StaticRegisterNativesUDatasmithRuntimeAuxiliaryData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithRuntimeAuxiliaryData);
	UClass* Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_NoRegister()
	{
		return UDatasmithRuntimeAuxiliaryData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Auxiliary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Auxiliary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset user data that can be used with DatasmithRuntime on Actors and other objects  */" },
		{ "IncludePath", "DatasmithRuntimeAuxiliaryData.h" },
		{ "ModuleRelativePath", "Private/DatasmithRuntimeAuxiliaryData.h" },
		{ "ToolTip", "Asset user data that can be used with DatasmithRuntime on Actors and other objects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::NewProp_Auxiliary_MetaData[] = {
		{ "Category", "DatasmithRuntime Internal" },
		{ "ModuleRelativePath", "Private/DatasmithRuntimeAuxiliaryData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::NewProp_Auxiliary = { "Auxiliary", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithRuntimeAuxiliaryData, Auxiliary), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::NewProp_Auxiliary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::NewProp_Auxiliary_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::NewProp_Auxiliary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithRuntimeAuxiliaryData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::ClassParams = {
		&UDatasmithRuntimeAuxiliaryData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData()
	{
		if (!Z_Registration_Info_UClass_UDatasmithRuntimeAuxiliaryData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithRuntimeAuxiliaryData.OuterSingleton, Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithRuntimeAuxiliaryData.OuterSingleton;
	}
	template<> DATASMITHRUNTIME_API UClass* StaticClass<UDatasmithRuntimeAuxiliaryData>()
	{
		return UDatasmithRuntimeAuxiliaryData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithRuntimeAuxiliaryData);
	UDatasmithRuntimeAuxiliaryData::~UDatasmithRuntimeAuxiliaryData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeAuxiliaryData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeAuxiliaryData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithRuntimeTHelper, UDatasmithRuntimeTHelper::StaticClass, TEXT("UDatasmithRuntimeTHelper"), &Z_Registration_Info_UClass_UDatasmithRuntimeTHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithRuntimeTHelper), 2096824248U) },
		{ Z_Construct_UClass_UDatasmithRuntimeAuxiliaryData, UDatasmithRuntimeAuxiliaryData::StaticClass, TEXT("UDatasmithRuntimeAuxiliaryData"), &Z_Registration_Info_UClass_UDatasmithRuntimeAuxiliaryData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithRuntimeAuxiliaryData), 1337273950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeAuxiliaryData_h_211986980(TEXT("/Script/DatasmithRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeAuxiliaryData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithRuntime_Source_Private_DatasmithRuntimeAuxiliaryData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
