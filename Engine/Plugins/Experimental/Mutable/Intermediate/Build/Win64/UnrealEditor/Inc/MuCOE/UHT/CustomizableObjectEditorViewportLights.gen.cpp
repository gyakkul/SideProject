// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/CustomizableObjectEditorViewportLights.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectEditorViewportLights() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorViewportLights();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectEditorViewportLights_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FViewportLightData();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportLightData;
class UScriptStruct* FViewportLightData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportLightData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportLightData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportLightData, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ViewportLightData"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportLightData.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FViewportLightData>()
{
	return FViewportLightData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewportLightData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpotLight_MetaData[];
#endif
		static void NewProp_bIsSpotLight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpotLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewportLightData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportLightData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight_SetBit(void* Obj)
	{
		((FViewportLightData*)Obj)->bIsSpotLight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight = { "bIsSpotLight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FViewportLightData), &Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Intensity_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, AttenuationRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, SourceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceLength_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, SourceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, InnerConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_InnerConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_InnerConeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewportLightData, OuterConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_OuterConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_OuterConeAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportLightData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_bIsSpotLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_SourceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_InnerConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportLightData_Statics::NewProp_OuterConeAngle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportLightData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"ViewportLightData",
		sizeof(FViewportLightData),
		alignof(FViewportLightData),
		Z_Construct_UScriptStruct_FViewportLightData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewportLightData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportLightData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewportLightData()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewportLightData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportLightData.InnerSingleton, Z_Construct_UScriptStruct_FViewportLightData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewportLightData.InnerSingleton;
	}
	void UCustomizableObjectEditorViewportLights::StaticRegisterNativesUCustomizableObjectEditorViewportLights()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectEditorViewportLights);
	UClass* Z_Construct_UClass_UCustomizableObjectEditorViewportLights_NoRegister()
	{
		return UCustomizableObjectEditorViewportLights::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LightsData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/CustomizableObjectEditorViewportLights.h" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData_Inner = { "LightsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FViewportLightData, METADATA_PARAMS(nullptr, 0) }; // 2667255571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData_MetaData[] = {
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectEditorViewportLights.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData = { "LightsData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectEditorViewportLights, LightsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData_MetaData)) }; // 2667255571
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::NewProp_LightsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectEditorViewportLights>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::ClassParams = {
		&UCustomizableObjectEditorViewportLights::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectEditorViewportLights()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectEditorViewportLights.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectEditorViewportLights.OuterSingleton, Z_Construct_UClass_UCustomizableObjectEditorViewportLights_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectEditorViewportLights.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectEditorViewportLights>()
	{
		return UCustomizableObjectEditorViewportLights::StaticClass();
	}
	UCustomizableObjectEditorViewportLights::UCustomizableObjectEditorViewportLights(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectEditorViewportLights);
	UCustomizableObjectEditorViewportLights::~UCustomizableObjectEditorViewportLights() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ScriptStructInfo[] = {
		{ FViewportLightData::StaticStruct, Z_Construct_UScriptStruct_FViewportLightData_Statics::NewStructOps, TEXT("ViewportLightData"), &Z_Registration_Info_UScriptStruct_ViewportLightData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportLightData), 2667255571U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectEditorViewportLights, UCustomizableObjectEditorViewportLights::StaticClass, TEXT("UCustomizableObjectEditorViewportLights"), &Z_Registration_Info_UClass_UCustomizableObjectEditorViewportLights, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectEditorViewportLights), 1104679434U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_2201413762(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectEditorViewportLights_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
