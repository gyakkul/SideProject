// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeTextureLayer() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureLayer();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect;
	static UEnum* ECustomizableObjectTextureLayerEffect_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ECustomizableObjectTextureLayerEffect"));
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ECustomizableObjectTextureLayerEffect>()
	{
		return ECustomizableObjectTextureLayerEffect_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enumerators[] = {
		{ "COTLE_MODULATE", (int64)COTLE_MODULATE },
		{ "COTLE_MULTIPLY", (int64)COTLE_MULTIPLY },
		{ "COTLE_SOFTLIGHT", (int64)COTLE_SOFTLIGHT },
		{ "COTLE_HARDLIGHT", (int64)COTLE_HARDLIGHT },
		{ "COTLE_DODGE", (int64)COTLE_DODGE },
		{ "COTLE_BURN", (int64)COTLE_BURN },
		{ "COTLE_SCREEN", (int64)COTLE_SCREEN },
		{ "COTLE_OVERLAY", (int64)COTLE_OVERLAY },
		{ "COTLE_ALPHA_OVERLAY", (int64)COTLE_ALPHA_OVERLAY },
		{ "COTLE_NORMAL_COMBINE", (int64)COTLE_NORMAL_COMBINE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enum_MetaDataParams[] = {
		{ "COTLE_ALPHA_OVERLAY.DisplayName", "LIGHTEN" },
		{ "COTLE_ALPHA_OVERLAY.Name", "COTLE_ALPHA_OVERLAY" },
		{ "COTLE_BURN.DisplayName", "BURN" },
		{ "COTLE_BURN.Name", "COTLE_BURN" },
		{ "COTLE_DODGE.DisplayName", "DODGE" },
		{ "COTLE_DODGE.Name", "COTLE_DODGE" },
		{ "COTLE_HARDLIGHT.DisplayName", "HARDLIGHT" },
		{ "COTLE_HARDLIGHT.Name", "COTLE_HARDLIGHT" },
		{ "COTLE_MODULATE.DisplayName", "MODULATE" },
		{ "COTLE_MODULATE.Name", "COTLE_MODULATE" },
		{ "COTLE_MULTIPLY.DisplayName", "MULTIPLY" },
		{ "COTLE_MULTIPLY.Name", "COTLE_MULTIPLY" },
		{ "COTLE_NORMAL_COMBINE.DisplayName", "COMBINE" },
		{ "COTLE_NORMAL_COMBINE.Name", "COTLE_NORMAL_COMBINE" },
		{ "COTLE_OVERLAY.DisplayName", "OVERLAY" },
		{ "COTLE_OVERLAY.Name", "COTLE_OVERLAY" },
		{ "COTLE_SCREEN.DisplayName", "SCREEN" },
		{ "COTLE_SCREEN.Name", "COTLE_SCREEN" },
		{ "COTLE_SOFTLIGHT.DisplayName", "SOFTLIGHT" },
		{ "COTLE_SOFTLIGHT.Name", "COTLE_SOFTLIGHT" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ECustomizableObjectTextureLayerEffect",
		"ECustomizableObjectTextureLayerEffect",
		Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect()
	{
		if (!Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer;
class UScriptStruct* FCustomizableObjectTextureLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("CustomizableObjectTextureLayer"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* StaticStruct<FCustomizableObjectTextureLayer>()
{
	return FCustomizableObjectTextureLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectTextureLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectTextureLayer, Effect), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayerEffect, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewProp_Effect_MetaData)) }; // 329125671
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewProp_Effect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		&NewStructOps,
		"CustomizableObjectTextureLayer",
		sizeof(FCustomizableObjectTextureLayer),
		alignof(FCustomizableObjectTextureLayer),
		Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer.InnerSingleton;
	}
	void UCustomizableObjectNodeTextureLayer::StaticRegisterNativesUCustomizableObjectNodeTextureLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeTextureLayer);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_NoRegister()
	{
		return UCustomizableObjectNodeTextureLayer::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPinReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPinReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer, METADATA_PARAMS(nullptr, 0) }; // 1364073396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureLayer, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers_MetaData)) }; // 1364073396
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_OutputPinReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeTextureLayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_OutputPinReference = { "OutputPinReference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeTextureLayer, OutputPinReference), Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_OutputPinReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_OutputPinReference_MetaData)) }; // 1910659421
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::NewProp_OutputPinReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeTextureLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::ClassParams = {
		&UCustomizableObjectNodeTextureLayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeTextureLayer()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeTextureLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeTextureLayer.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeTextureLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeTextureLayer.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeTextureLayer>()
	{
		return UCustomizableObjectNodeTextureLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeTextureLayer);
	UCustomizableObjectNodeTextureLayer::~UCustomizableObjectNodeTextureLayer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeTextureLayer)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::EnumInfo[] = {
		{ ECustomizableObjectTextureLayerEffect_StaticEnum, TEXT("ECustomizableObjectTextureLayerEffect"), &Z_Registration_Info_UEnum_ECustomizableObjectTextureLayerEffect, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 329125671U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectTextureLayer::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectTextureLayer_Statics::NewStructOps, TEXT("CustomizableObjectTextureLayer"), &Z_Registration_Info_UScriptStruct_CustomizableObjectTextureLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectTextureLayer), 1364073396U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeTextureLayer, UCustomizableObjectNodeTextureLayer::StaticClass, TEXT("UCustomizableObjectNodeTextureLayer"), &Z_Registration_Info_UClass_UCustomizableObjectNodeTextureLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeTextureLayer), 1625821966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_1379768296(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeTextureLayer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
