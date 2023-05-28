// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/VCamPlayerInput.h"
#include "Input/VCamInputDeviceConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamPlayerInput() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedPlayerInput();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamPlayerInput();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamPlayerInput_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamInputDeviceConfig();
// End Cross Module References
	void UVCamPlayerInput::StaticRegisterNativesUVCamPlayerInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamPlayerInput);
	UClass* Z_Construct_UClass_UVCamPlayerInput_NoRegister()
	{
		return UVCamPlayerInput::StaticClass();
	}
	struct Z_Construct_UClass_UVCamPlayerInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputDeviceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputDeviceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamPlayerInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnhancedPlayerInput,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPlayerInput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Receives raw input from input processor (or player controller in user code).\n * Filters input\n */" },
		{ "IncludePath", "Input/VCamPlayerInput.h" },
		{ "ModuleRelativePath", "Public/Input/VCamPlayerInput.h" },
		{ "ToolTip", "Receives raw input from input processor (or player controller in user code).\nFilters input" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamPlayerInput_Statics::NewProp_InputDeviceSettings_MetaData[] = {
		{ "Comment", "/** The device settings governing what we do with received input, e.g. filtering depending on input device, logging, etc. */" },
		{ "ModuleRelativePath", "Public/Input/VCamPlayerInput.h" },
		{ "ToolTip", "The device settings governing what we do with received input, e.g. filtering depending on input device, logging, etc." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVCamPlayerInput_Statics::NewProp_InputDeviceSettings = { "InputDeviceSettings", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamPlayerInput, InputDeviceSettings), Z_Construct_UScriptStruct_FVCamInputDeviceConfig, METADATA_PARAMS(Z_Construct_UClass_UVCamPlayerInput_Statics::NewProp_InputDeviceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPlayerInput_Statics::NewProp_InputDeviceSettings_MetaData)) }; // 855388532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamPlayerInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamPlayerInput_Statics::NewProp_InputDeviceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamPlayerInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamPlayerInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamPlayerInput_Statics::ClassParams = {
		&UVCamPlayerInput::StaticClass,
		"Input",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamPlayerInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPlayerInput_Statics::PropPointers),
		0,
		0x009000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVCamPlayerInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamPlayerInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamPlayerInput()
	{
		if (!Z_Registration_Info_UClass_UVCamPlayerInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamPlayerInput.OuterSingleton, Z_Construct_UClass_UVCamPlayerInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamPlayerInput.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamPlayerInput>()
	{
		return UVCamPlayerInput::StaticClass();
	}
	UVCamPlayerInput::UVCamPlayerInput() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamPlayerInput);
	UVCamPlayerInput::~UVCamPlayerInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamPlayerInput, UVCamPlayerInput::StaticClass, TEXT("UVCamPlayerInput"), &Z_Registration_Info_UClass_UVCamPlayerInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamPlayerInput), 2856129625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_1367129367(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_VCamPlayerInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
