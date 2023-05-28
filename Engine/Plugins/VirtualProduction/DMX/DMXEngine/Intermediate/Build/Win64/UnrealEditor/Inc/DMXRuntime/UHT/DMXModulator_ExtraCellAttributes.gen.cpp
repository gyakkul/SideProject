// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modulators/DMXModulator_ExtraCellAttributes.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator_ExtraCellAttributes() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_ExtraCellAttributes();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXModulator_ExtraCellAttributes::StaticRegisterNativesUDMXModulator_ExtraCellAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator_ExtraCellAttributes);
	UClass* Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_NoRegister()
	{
		return UDMXModulator_ExtraCellAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ExtraAttributeNameToNormalizedValueMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraAttributeNameToNormalizedValueMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtraAttributeNameToNormalizedValueMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXModulator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "Comment", "/** Adds matrix attributes that are not received (e.g. because DMX was generated from PixelMapping) to the DMX signal */" },
		{ "DisplayName", "DMX Modulator Extra Cell Attributes" },
		{ "IncludePath", "Modulators/DMXModulator_ExtraCellAttributes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_ExtraCellAttributes.h" },
		{ "ToolTip", "Adds matrix attributes that are not received (e.g. because DMX was generated from PixelMapping) to the DMX signal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_ValueProp = { "ExtraAttributeNameToNormalizedValueMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_Key_KeyProp = { "ExtraAttributeNameToNormalizedValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData[] = {
		{ "Category", "Extra Cell Attributes" },
		{ "Comment", "/** Adds the attributes with their values to the Output if they don't exist, or replaces them with the values specified */" },
		{ "DisplayName", "Attribute to Normalized Value Map" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_ExtraCellAttributes.h" },
		{ "ToolTip", "Adds the attributes with their values to the Output if they don't exist, or replaces them with the values specified" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap = { "ExtraAttributeNameToNormalizedValueMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_ExtraCellAttributes, ExtraAttributeNameToNormalizedValueMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator_ExtraCellAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::ClassParams = {
		&UDMXModulator_ExtraCellAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator_ExtraCellAttributes()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator_ExtraCellAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator_ExtraCellAttributes.OuterSingleton, Z_Construct_UClass_UDMXModulator_ExtraCellAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator_ExtraCellAttributes.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXModulator_ExtraCellAttributes>()
	{
		return UDMXModulator_ExtraCellAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator_ExtraCellAttributes);
	UDMXModulator_ExtraCellAttributes::~UDMXModulator_ExtraCellAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraCellAttributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraCellAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator_ExtraCellAttributes, UDMXModulator_ExtraCellAttributes::StaticClass, TEXT("UDMXModulator_ExtraCellAttributes"), &Z_Registration_Info_UClass_UDMXModulator_ExtraCellAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator_ExtraCellAttributes), 1322525742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraCellAttributes_h_2358352916(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraCellAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraCellAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
