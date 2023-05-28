// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/WidgetStyleData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();
// End Cross Module References
	void UWidgetStyleData::StaticRegisterNativesUWidgetStyleData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetStyleData);
	UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister()
	{
		return UWidgetStyleData::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetStyleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetStyleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetStyleData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for data that can be associated with modifiers / their connection points. */" },
		{ "IncludePath", "Styling/WidgetStyleData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Styling/WidgetStyleData.h" },
		{ "ToolTip", "Base class for data that can be associated with modifiers / their connection points." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetStyleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetStyleData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetStyleData_Statics::ClassParams = {
		&UWidgetStyleData::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetStyleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetStyleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetStyleData()
	{
		if (!Z_Registration_Info_UClass_UWidgetStyleData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetStyleData.OuterSingleton, Z_Construct_UClass_UWidgetStyleData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetStyleData.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UWidgetStyleData>()
	{
		return UWidgetStyleData::StaticClass();
	}
	UWidgetStyleData::UWidgetStyleData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetStyleData);
	UWidgetStyleData::~UWidgetStyleData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetStyleData, UWidgetStyleData::StaticClass, TEXT("UWidgetStyleData"), &Z_Registration_Info_UClass_UWidgetStyleData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetStyleData), 1526853791U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_755917302(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
