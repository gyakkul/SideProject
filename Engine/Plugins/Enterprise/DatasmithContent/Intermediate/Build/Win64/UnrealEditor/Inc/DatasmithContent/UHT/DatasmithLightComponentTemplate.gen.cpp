// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithLightComponentTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithLightComponentTemplate() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithLightComponentTemplate::StaticRegisterNativesUDatasmithLightComponentTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithLightComponentTemplate);
	UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate_NoRegister()
	{
		return UDatasmithLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[];
#endif
		static void NewProp_bUseTemperature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[];
#endif
		static void NewProp_bUseIESBrightness_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightFunctionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IESTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->CastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bUseTemperature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
	{
		((UDatasmithLightComponentTemplate*)Obj)->bUseIESBrightness = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDatasmithLightComponentTemplate), &Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Intensity), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, Temperature), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESBrightnessScale), METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithLightComponentTemplate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithLightComponentTemplate, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseTemperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_bUseIESBrightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESBrightnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_LightFunctionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::NewProp_IESTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithLightComponentTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithLightComponentTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithLightComponentTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithLightComponentTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithLightComponentTemplate>()
	{
		return UDatasmithLightComponentTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithLightComponentTemplate);
	UDatasmithLightComponentTemplate::~UDatasmithLightComponentTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithLightComponentTemplate, UDatasmithLightComponentTemplate::StaticClass, TEXT("UDatasmithLightComponentTemplate"), &Z_Registration_Info_UClass_UDatasmithLightComponentTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithLightComponentTemplate), 62977818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_1727244613(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithLightComponentTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
