// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRCreativeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRCreativeSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettingsBackedByCVars();
	UPackage* Z_Construct_UPackage__Script_XRCreative();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSettings();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSettings_NoRegister();
	XRCREATIVE_API UClass* Z_Construct_UClass_UXRCreativeSubsystemHelpers_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXRCreativeSettings::execGetXRCreativeSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXRCreativeSettings**)Z_Param__Result=UXRCreativeSettings::GetXRCreativeSettings();
		P_NATIVE_END;
	}
	void UXRCreativeSettings::StaticRegisterNativesUXRCreativeSettings()
	{
		UClass* Class = UXRCreativeSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetXRCreativeSettings", &UXRCreativeSettings::execGetXRCreativeSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics
	{
		struct XRCreativeSettings_eventGetXRCreativeSettings_Parms
		{
			UXRCreativeSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(XRCreativeSettings_eventGetXRCreativeSettings_Parms, ReturnValue), Z_Construct_UClass_UXRCreativeSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXRCreativeSettings, nullptr, "GetXRCreativeSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::XRCreativeSettings_eventGetXRCreativeSettings_Parms), Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXRCreativeSettings);
	UClass* Z_Construct_UClass_UXRCreativeSettings_NoRegister()
	{
		return UXRCreativeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UXRCreativeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseImperial_MetaData[];
#endif
		static void NewProp_bUseImperial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImperial;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubsystemHelpersClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SubsystemHelpersClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXRCreativeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettingsBackedByCVars,
		(UObject* (*)())Z_Construct_UPackage__Script_XRCreative,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXRCreativeSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXRCreativeSettings_GetXRCreativeSettings, "GetXRCreativeSettings" }, // 645597757
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "XR Creative" },
		{ "IncludePath", "XRCreativeSettings.h" },
		{ "ModuleRelativePath", "Public/XRCreativeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "DisplayName", "Show Measurements in Imperial Units" },
		{ "ModuleRelativePath", "Public/XRCreativeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial_SetBit(void* Obj)
	{
		((UXRCreativeSettings*)Obj)->bUseImperial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial = { "bUseImperial", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UXRCreativeSettings), &Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "DisplayName", "TestArray" },
		{ "ModuleRelativePath", "Public/XRCreativeSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeSettings, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_SubsystemHelpersClass_MetaData[] = {
		{ "Category", "XR Creative" },
		{ "ModuleRelativePath", "Public/XRCreativeSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_SubsystemHelpersClass = { "SubsystemHelpersClass", nullptr, (EPropertyFlags)0x0014000000004005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UXRCreativeSettings, SubsystemHelpersClass), Z_Construct_UClass_UXRCreativeSubsystemHelpers_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_SubsystemHelpersClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_SubsystemHelpersClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UXRCreativeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_bUseImperial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UXRCreativeSettings_Statics::NewProp_SubsystemHelpersClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXRCreativeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXRCreativeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXRCreativeSettings_Statics::ClassParams = {
		&UXRCreativeSettings::StaticClass,
		"XRCreativeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UXRCreativeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UXRCreativeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXRCreativeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXRCreativeSettings()
	{
		if (!Z_Registration_Info_UClass_UXRCreativeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXRCreativeSettings.OuterSingleton, Z_Construct_UClass_UXRCreativeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXRCreativeSettings.OuterSingleton;
	}
	template<> XRCREATIVE_API UClass* StaticClass<UXRCreativeSettings>()
	{
		return UXRCreativeSettings::StaticClass();
	}
	UXRCreativeSettings::UXRCreativeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXRCreativeSettings);
	UXRCreativeSettings::~UXRCreativeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXRCreativeSettings, UXRCreativeSettings::StaticClass, TEXT("UXRCreativeSettings"), &Z_Registration_Info_UClass_UXRCreativeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXRCreativeSettings), 1708653512U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_2380341517(TEXT("/Script/XRCreative"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_XRCreativeFramework_Source_XRCreative_Public_XRCreativeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
