// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ButtonWidgetStyleData.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeButtonWidgetStyleData() {}
// Cross Module References
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UButtonWidgetStyleData();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UButtonWidgetStyleData_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData();
// End Cross Module References
	void UButtonWidgetStyleData::StaticRegisterNativesUButtonWidgetStyleData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UButtonWidgetStyleData);
	UClass* Z_Construct_UClass_UButtonWidgetStyleData_NoRegister()
	{
		return UButtonWidgetStyleData::StaticClass();
	}
	struct Z_Construct_UClass_UButtonWidgetStyleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ButtonStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UButtonWidgetStyleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetStyleData,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidgetStyleData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Associates a button style for widgets that want to display a button for a modifier / connection point. */" },
		{ "IncludePath", "Styling/ButtonWidgetStyleData.h" },
		{ "ModuleRelativePath", "Public/Styling/ButtonWidgetStyleData.h" },
		{ "ToolTip", "Associates a button style for widgets that want to display a button for a modifier / connection point." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UButtonWidgetStyleData_Statics::NewProp_ButtonStyle_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Styling/ButtonWidgetStyleData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UButtonWidgetStyleData_Statics::NewProp_ButtonStyle = { "ButtonStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UButtonWidgetStyleData, ButtonStyle), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(Z_Construct_UClass_UButtonWidgetStyleData_Statics::NewProp_ButtonStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyleData_Statics::NewProp_ButtonStyle_MetaData)) }; // 2024050934
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UButtonWidgetStyleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UButtonWidgetStyleData_Statics::NewProp_ButtonStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UButtonWidgetStyleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UButtonWidgetStyleData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UButtonWidgetStyleData_Statics::ClassParams = {
		&UButtonWidgetStyleData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UButtonWidgetStyleData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyleData_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UButtonWidgetStyleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UButtonWidgetStyleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UButtonWidgetStyleData()
	{
		if (!Z_Registration_Info_UClass_UButtonWidgetStyleData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UButtonWidgetStyleData.OuterSingleton, Z_Construct_UClass_UButtonWidgetStyleData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UButtonWidgetStyleData.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UButtonWidgetStyleData>()
	{
		return UButtonWidgetStyleData::StaticClass();
	}
	UButtonWidgetStyleData::UButtonWidgetStyleData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UButtonWidgetStyleData);
	UButtonWidgetStyleData::~UButtonWidgetStyleData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ButtonWidgetStyleData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ButtonWidgetStyleData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UButtonWidgetStyleData, UButtonWidgetStyleData::StaticClass, TEXT("UButtonWidgetStyleData"), &Z_Registration_Info_UClass_UButtonWidgetStyleData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UButtonWidgetStyleData), 3497434237U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ButtonWidgetStyleData_h_2855326354(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ButtonWidgetStyleData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ButtonWidgetStyleData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
