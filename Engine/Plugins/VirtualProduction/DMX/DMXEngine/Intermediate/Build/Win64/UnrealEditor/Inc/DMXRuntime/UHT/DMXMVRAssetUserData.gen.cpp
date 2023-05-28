// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/DMXMVRAssetUserData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRAssetUserData() {}
// Cross Module References
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRAssetUserData();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRAssetUserData::StaticRegisterNativesUDMXMVRAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRAssetUserData);
	UClass* Z_Construct_UClass_UDMXMVRAssetUserData_NoRegister()
	{
		return UDMXMVRAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset user data for Actors in an MVR Scene */" },
		{ "IncludePath", "MVR/DMXMVRAssetUserData.h" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRAssetUserData.h" },
		{ "ToolTip", "Asset user data for Actors in an MVR Scene" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "MVR" },
		{ "Comment", "/** MVR Meta Data for the Actor */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRAssetUserData.h" },
		{ "ToolTip", "MVR Meta Data for the Actor" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010040000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRAssetUserData, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRAssetUserData_Statics::NewProp_MetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRAssetUserData_Statics::ClassParams = {
		&UDMXMVRAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRAssetUserData.OuterSingleton, Z_Construct_UClass_UDMXMVRAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRAssetUserData.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRAssetUserData>()
	{
		return UDMXMVRAssetUserData::StaticClass();
	}
	UDMXMVRAssetUserData::UDMXMVRAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRAssetUserData);
	UDMXMVRAssetUserData::~UDMXMVRAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetUserData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetUserData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRAssetUserData, UDMXMVRAssetUserData::StaticClass, TEXT("UDMXMVRAssetUserData"), &Z_Registration_Info_UClass_UDMXMVRAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRAssetUserData), 3236190600U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetUserData_h_3550458735(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetUserData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRAssetUserData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
