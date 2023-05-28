// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Modulators/DMXModulator_ExtraAttributes.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXModulator_ExtraAttributes() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_ExtraAttributes();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_ExtraAttributes_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXModulator_ExtraAttributes::StaticRegisterNativesUDMXModulator_ExtraAttributes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXModulator_ExtraAttributes);
	UClass* Z_Construct_UClass_UDMXModulator_ExtraAttributes_NoRegister()
	{
		return UDMXModulator_ExtraAttributes::StaticClass();
	}
	struct Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics
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
	UObject* (*const Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXModulator,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "Comment", "/** Adds attributes that are not received (e.g. because DMX was generated from PixelMapping) to the DMX signal */" },
		{ "DisplayName", "DMX Modulator Extra Attributes" },
		{ "IncludePath", "Modulators/DMXModulator_ExtraAttributes.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_ExtraAttributes.h" },
		{ "ToolTip", "Adds attributes that are not received (e.g. because DMX was generated from PixelMapping) to the DMX signal" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_ValueProp = { "ExtraAttributeNameToNormalizedValueMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_Key_KeyProp = { "ExtraAttributeNameToNormalizedValueMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(nullptr, 0) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData[] = {
		{ "Category", "Extra Attributes" },
		{ "Comment", "/** Adds the attributes with their values to the Output if they don't exist, or replaces them with the values specified */" },
		{ "DisplayName", "Attribute to Normalized Value Map" },
		{ "ModuleRelativePath", "Private/Modulators/DMXModulator_ExtraAttributes.h" },
		{ "ToolTip", "Adds the attributes with their values to the Output if they don't exist, or replaces them with the values specified" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap = { "ExtraAttributeNameToNormalizedValueMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXModulator_ExtraAttributes, ExtraAttributeNameToNormalizedValueMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::NewProp_ExtraAttributeNameToNormalizedValueMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXModulator_ExtraAttributes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::ClassParams = {
		&UDMXModulator_ExtraAttributes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXModulator_ExtraAttributes()
	{
		if (!Z_Registration_Info_UClass_UDMXModulator_ExtraAttributes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXModulator_ExtraAttributes.OuterSingleton, Z_Construct_UClass_UDMXModulator_ExtraAttributes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXModulator_ExtraAttributes.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXModulator_ExtraAttributes>()
	{
		return UDMXModulator_ExtraAttributes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXModulator_ExtraAttributes);
	UDMXModulator_ExtraAttributes::~UDMXModulator_ExtraAttributes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraAttributes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraAttributes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXModulator_ExtraAttributes, UDMXModulator_ExtraAttributes::StaticClass, TEXT("UDMXModulator_ExtraAttributes"), &Z_Registration_Info_UClass_UDMXModulator_ExtraAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXModulator_ExtraAttributes), 1201431288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraAttributes_h_1031182214(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraAttributes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Private_Modulators_DMXModulator_ExtraAttributes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
