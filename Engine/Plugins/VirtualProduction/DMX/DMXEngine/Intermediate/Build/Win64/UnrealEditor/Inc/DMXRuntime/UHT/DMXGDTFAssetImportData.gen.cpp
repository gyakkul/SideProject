// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXGDTFAssetImportData.h"
#include "DMXTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXGDTFAssetImportData() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXGDTFAssetImportData();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXGDTFAssetImportData_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXByteArray64();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXGDTFAssetImportData::StaticRegisterNativesUDMXGDTFAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXGDTFAssetImportData);
	UClass* Z_Construct_UClass_UDMXGDTFAssetImportData_NoRegister()
	{
		return UDMXGDTFAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDMXGDTFAssetImportData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePathAndName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePathAndName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawSourceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawSourceData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Library/DMXGDTFAssetImportData.h" },
		{ "ModuleRelativePath", "Public/Library/DMXGDTFAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_FilePathAndName_MetaData[] = {
		{ "Comment", "/** The imported file path and name */" },
		{ "ModuleRelativePath", "Public/Library/DMXGDTFAssetImportData.h" },
		{ "ToolTip", "The imported file path and name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_FilePathAndName = { "FilePathAndName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXGDTFAssetImportData, FilePathAndName), METADATA_PARAMS(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_FilePathAndName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_FilePathAndName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_RawSourceData_MetaData[] = {
		{ "Comment", "/** The raw GDTF zip file as byte array */" },
		{ "ModuleRelativePath", "Public/Library/DMXGDTFAssetImportData.h" },
		{ "ToolTip", "The raw GDTF zip file as byte array" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_RawSourceData = { "RawSourceData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXGDTFAssetImportData, RawSourceData), Z_Construct_UScriptStruct_FDMXByteArray64, METADATA_PARAMS(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_RawSourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_RawSourceData_MetaData)) }; // 495864671
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_FilePathAndName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::NewProp_RawSourceData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXGDTFAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::ClassParams = {
		&UDMXGDTFAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXGDTFAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UDMXGDTFAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXGDTFAssetImportData.OuterSingleton, Z_Construct_UClass_UDMXGDTFAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXGDTFAssetImportData.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXGDTFAssetImportData>()
	{
		return UDMXGDTFAssetImportData::StaticClass();
	}
	UDMXGDTFAssetImportData::UDMXGDTFAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXGDTFAssetImportData);
	UDMXGDTFAssetImportData::~UDMXGDTFAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXGDTFAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXGDTFAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXGDTFAssetImportData, UDMXGDTFAssetImportData::StaticClass, TEXT("UDMXGDTFAssetImportData"), &Z_Registration_Info_UClass_UDMXGDTFAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXGDTFAssetImportData), 4170741731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXGDTFAssetImportData_h_86976656(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXGDTFAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXGDTFAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
