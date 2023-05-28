// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/DMXMVRGeneralSceneDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRGeneralSceneDescription() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRAssetImportData_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRGeneralSceneDescription();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRGeneralSceneDescription_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRRootNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRGeneralSceneDescription::StaticRegisterNativesUDMXMVRGeneralSceneDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRGeneralSceneDescription);
	UClass* Z_Construct_UClass_UDMXMVRGeneralSceneDescription_NoRegister()
	{
		return UDMXMVRGeneralSceneDescription::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MVRAssetImportData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MVRAssetImportData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** MVR General Scene Description Object */" },
		{ "IncludePath", "MVR/DMXMVRGeneralSceneDescription.h" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRGeneralSceneDescription.h" },
		{ "ToolTip", "MVR General Scene Description Object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** The Root Node of the General Scene Description */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRGeneralSceneDescription.h" },
		{ "ToolTip", "The Root Node of the General Scene Description" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRGeneralSceneDescription, RootNode), Z_Construct_UClass_UDMXMVRRootNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_RootNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_MVRAssetImportData_MetaData[] = {
		{ "Comment", "/** Import Data for this asset */" },
		{ "ModuleRelativePath", "Public/MVR/DMXMVRGeneralSceneDescription.h" },
		{ "ToolTip", "Import Data for this asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_MVRAssetImportData = { "MVRAssetImportData", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRGeneralSceneDescription, MVRAssetImportData), Z_Construct_UClass_UDMXMVRAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_MVRAssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_MVRAssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_RootNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::NewProp_MVRAssetImportData,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRGeneralSceneDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::ClassParams = {
		&UDMXMVRGeneralSceneDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRGeneralSceneDescription()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRGeneralSceneDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRGeneralSceneDescription.OuterSingleton, Z_Construct_UClass_UDMXMVRGeneralSceneDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRGeneralSceneDescription.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRGeneralSceneDescription>()
	{
		return UDMXMVRGeneralSceneDescription::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRGeneralSceneDescription);
	UDMXMVRGeneralSceneDescription::~UDMXMVRGeneralSceneDescription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRGeneralSceneDescription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRGeneralSceneDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRGeneralSceneDescription, UDMXMVRGeneralSceneDescription::StaticClass, TEXT("UDMXMVRGeneralSceneDescription"), &Z_Registration_Info_UClass_UDMXMVRGeneralSceneDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRGeneralSceneDescription), 1973077812U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRGeneralSceneDescription_h_897703603(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRGeneralSceneDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_DMXMVRGeneralSceneDescription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
