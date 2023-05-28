// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataprepAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepAssetUserData() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetInterface_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetUserData();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepAssetUserData_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	void UDataprepAssetUserData::StaticRegisterNativesUDataprepAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepAssetUserData);
	UClass* Z_Construct_UClass_UDataprepAssetUserData_NoRegister()
	{
		return UDataprepAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepOperationPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataprepOperationPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataprepAssetPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataprepAssetPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A DataprepAssetUserData is used to mark assets or actors created through a Dataprep pipeline  */" },
		{ "DisplayName", "Dataprep User Data" },
		{ "IncludePath", "DataprepAssetUserData.h" },
		{ "ModuleRelativePath", "Public/DataprepAssetUserData.h" },
		{ "ScriptName", "DataprepUserData" },
		{ "ToolTip", "A DataprepAssetUserData is used to mark assets or actors created through a Dataprep pipeline" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepOperationPtr_MetaData[] = {
		{ "Comment", "/** Dataprep operation which was used to generate the hosting object, if applicable */" },
		{ "ModuleRelativePath", "Public/DataprepAssetUserData.h" },
		{ "ToolTip", "Dataprep operation which was used to generate the hosting object, if applicable" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepOperationPtr = { "DataprepOperationPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetUserData, DataprepOperationPtr), Z_Construct_UClass_UDataprepEditingOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepOperationPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepOperationPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepAssetPtr_MetaData[] = {
		{ "Comment", "/** Dataprep asset which was used to generate the hosting object */" },
		{ "ModuleRelativePath", "Public/DataprepAssetUserData.h" },
		{ "ToolTip", "Dataprep asset which was used to generate the hosting object" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepAssetPtr = { "DataprepAssetPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepAssetUserData, DataprepAssetPtr), Z_Construct_UClass_UDataprepAssetInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepAssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepAssetPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepOperationPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepAssetUserData_Statics::NewProp_DataprepAssetPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepAssetUserData_Statics::ClassParams = {
		&UDataprepAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UDataprepAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepAssetUserData.OuterSingleton, Z_Construct_UClass_UDataprepAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepAssetUserData.OuterSingleton;
	}
	template<> DATAPREPCORE_API UClass* StaticClass<UDataprepAssetUserData>()
	{
		return UDataprepAssetUserData::StaticClass();
	}
	UDataprepAssetUserData::UDataprepAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepAssetUserData);
	UDataprepAssetUserData::~UDataprepAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepAssetUserData, UDataprepAssetUserData::StaticClass, TEXT("UDataprepAssetUserData"), &Z_Registration_Info_UClass_UDataprepAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepAssetUserData), 2811923959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_837713965(TEXT("/Script/DataprepCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_DataprepAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
