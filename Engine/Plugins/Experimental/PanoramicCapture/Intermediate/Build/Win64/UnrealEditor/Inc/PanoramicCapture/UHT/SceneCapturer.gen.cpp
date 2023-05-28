// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SceneCapturer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCapturer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_USceneCapturer();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_USceneCapturer_NoRegister();
	PANORAMICCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessVolumeData();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PostProcessVolumeData;
class UScriptStruct* FPostProcessVolumeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PostProcessVolumeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PostProcessVolumeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPostProcessVolumeData, (UObject*)Z_Construct_UPackage__Script_PanoramicCapture(), TEXT("PostProcessVolumeData"));
	}
	return Z_Registration_Info_UScriptStruct_PostProcessVolumeData.OuterSingleton;
}
template<> PANORAMICCAPTURE_API UScriptStruct* StaticStruct<FPostProcessVolumeData>()
{
	return FPostProcessVolumeData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPostProcessVolumeData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPostProcessVolumeData, Object), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
		nullptr,
		&NewStructOps,
		"PostProcessVolumeData",
		sizeof(FPostProcessVolumeData),
		alignof(FPostProcessVolumeData),
		Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPostProcessVolumeData()
	{
		if (!Z_Registration_Info_UScriptStruct_PostProcessVolumeData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PostProcessVolumeData.InnerSingleton, Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PostProcessVolumeData.InnerSingleton;
	}
	void USceneCapturer::StaticRegisterNativesUSceneCapturer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCapturer);
	UClass* Z_Construct_UClass_USceneCapturer_NoRegister()
	{
		return USceneCapturer::StaticClass();
	}
	struct Z_Construct_UClass_USceneCapturer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PPVolumeArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPVolumeArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PPVolumeArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureSceneComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCapturer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SceneCapturer.h" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_Inner = { "PPVolumeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPostProcessVolumeData, METADATA_PARAMS(nullptr, 0) }; // 3674019846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData[] = {
		{ "Comment", "// store post process volumes data\n" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
		{ "ToolTip", "store post process volumes data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray = { "PPVolumeArray", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCapturer, PPVolumeArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_MetaData)) }; // 3674019846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData[] = {
		{ "Comment", "// CaptureSceneComponent will be used as parent of capturecomponents to provide world location and rotation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/SceneCapturer.h" },
		{ "ToolTip", "CaptureSceneComponent will be used as parent of capturecomponents to provide world location and rotation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent = { "CaptureSceneComponent", nullptr, (EPropertyFlags)0x0014000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCapturer, CaptureSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCapturer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_PPVolumeArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCapturer_Statics::NewProp_CaptureSceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCapturer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCapturer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCapturer_Statics::ClassParams = {
		&USceneCapturer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USceneCapturer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCapturer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCapturer()
	{
		if (!Z_Registration_Info_UClass_USceneCapturer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCapturer.OuterSingleton, Z_Construct_UClass_USceneCapturer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneCapturer.OuterSingleton;
	}
	template<> PANORAMICCAPTURE_API UClass* StaticClass<USceneCapturer>()
	{
		return USceneCapturer::StaticClass();
	}
	USceneCapturer::~USceneCapturer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ScriptStructInfo[] = {
		{ FPostProcessVolumeData::StaticStruct, Z_Construct_UScriptStruct_FPostProcessVolumeData_Statics::NewStructOps, TEXT("PostProcessVolumeData"), &Z_Registration_Info_UScriptStruct_PostProcessVolumeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPostProcessVolumeData), 3674019846U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneCapturer, USceneCapturer::StaticClass, TEXT("USceneCapturer"), &Z_Registration_Info_UClass_USceneCapturer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCapturer), 2931481227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_3031122855(TEXT("/Script/PanoramicCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Private_SceneCapturer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
