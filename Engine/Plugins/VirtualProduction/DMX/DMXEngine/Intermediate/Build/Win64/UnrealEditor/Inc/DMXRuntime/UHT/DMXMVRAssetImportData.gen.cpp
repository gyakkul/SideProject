// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/DMXMVRAssetImportData.h"
#include "DMXTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRAssetImportData() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRAssetImportData();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRAssetImportData_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXByteArray64();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRAssetImportData::StaticRegisterNativesUDMXMVRAssetImportData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRAssetImportData);
	UClass* Z_Construct_UClass_UDMXMVRAssetImportData_NoRegister()
	{
		return UDMXMVRAssetImportData::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRAssetImportData_Statics
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
	UObject* (*const Z_Construct_UClass_UDMXMVRAssetImportData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetImportData,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRAssetImportData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MVR/DMXMVRAssetImportData.h" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRAssetImportData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_FilePathAndName_MetaData[] = {
		{ "Comment", "/** The imported file path and name */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRAssetImportData.h" },
		{ "ToolTip", "The imported file path and name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_FilePathAndName = { "FilePathAndName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRAssetImportData, FilePathAndName), METADATA_PARAMS(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_FilePathAndName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_FilePathAndName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_RawSourceData_MetaData[] = {
		{ "Comment", "/** The raw source file as byte array, as it was imported */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRAssetImportData.h" },
		{ "ToolTip", "The raw source file as byte array, as it was imported" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_RawSourceData = { "RawSourceData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRAssetImportData, RawSourceData), Z_Construct_UScriptStruct_FDMXByteArray64, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_RawSourceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_RawSourceData_MetaData)) }; // 495864671
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRAssetImportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_FilePathAndName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRAssetImportData_Statics::NewProp_RawSourceData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRAssetImportData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRAssetImportData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRAssetImportData_Statics::ClassParams = {
		&UDMXMVRAssetImportData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRAssetImportData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetImportData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRAssetImportData()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRAssetImportData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRAssetImportData.OuterSingleton, Z_Construct_UClass_UDMXMVRAssetImportData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRAssetImportData.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRAssetImportData>()
	{
		return UDMXMVRAssetImportData::StaticClass();
	}
	UDMXMVRAssetImportData::UDMXMVRAssetImportData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRAssetImportData);
	UDMXMVRAssetImportData::~UDMXMVRAssetImportData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetImportData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetImportData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRAssetImportData, UDMXMVRAssetImportData::StaticClass, TEXT("UDMXMVRAssetImportData"), &Z_Registration_Info_UClass_UDMXMVRAssetImportData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRAssetImportData), 315421183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetImportData_h_3270576138(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetImportData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetImportData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
