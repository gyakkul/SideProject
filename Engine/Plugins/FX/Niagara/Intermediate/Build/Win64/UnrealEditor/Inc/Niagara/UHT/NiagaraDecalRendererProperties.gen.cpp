// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDecalRendererProperties.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraParameterBinding.h"
#include "../Public/NiagaraRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDecalRendererProperties() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDecalRendererProperties::StaticRegisterNativesUNiagaraDecalRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDecalRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister()
	{
		return UNiagaraDecalRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MICMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MICMaterial;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBinding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalScreenSizeFade_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalScreenSizeFade;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalOrientationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalOrientationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSizeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSizeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFadeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalSortOrderBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSortOrderBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalColorBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalColorBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DecalVisibleBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DecalVisibleBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Decal Renderer" },
		{ "IncludePath", "NiagaraDecalRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** What material to use for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "What material to use for the decal." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial = { "MICMaterial", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MICMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** Binding to material. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Binding to material." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding = { "MaterialParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MaterialParameterBinding), Z_Construct_UScriptStruct_FNiagaraParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding_MetaData)) }; // 3357512247
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_MetaData)) }; // 919437016
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** When the decal is smaller than this screen size fade out the decal, can be used to reduce the amount of small decals drawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "When the decal is smaller than this screen size fade out the decal, can be used to reduce the amount of small decals drawn." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade = { "DecalScreenSizeFade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalScreenSizeFade), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Position binding for the decals, should be center of the decal */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Position binding for the decals, should be center of the decal" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Orientation binding for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Orientation binding for the decal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding = { "DecalOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Size binding for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Size binding for the decal." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding = { "DecalSizeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Fade binding for the decal, value can be queried using the Decal Lifetime Opacity material node. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Fade binding for the decal, value can be queried using the Decal Lifetime Opacity material node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding = { "DecalFadeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalFadeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Sort Order binding for the decal, used to ensure decals to not flicker when overlapping. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Sort Order binding for the decal, used to ensure decals to not flicker when overlapping." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding = { "DecalSortOrderBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalSortOrderBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Color binding for the decal, value can be queried using the Decal Color material node. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Color binding for the decal, value can be queried using the Decal Color material node." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding = { "DecalColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Should the decal be visibile or not, works in conjunction with RendererVisibilityTagBinding to determine visibility. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Should the decal be visibile or not, works in conjunction with RendererVisibilityTagBinding to determine visibility." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding = { "DecalVisibleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalVisibleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Visibility tag binding, when valid the returned values is compated with RendererVisibility. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Visibility tag binding, when valid the returned values is compated with RendererVisibility." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters_MetaData)) }; // 2971467554
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDecalRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::ClassParams = {
		&UNiagaraDecalRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDecalRendererProperties>()
	{
		return UNiagaraDecalRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDecalRendererProperties);
	UNiagaraDecalRendererProperties::~UNiagaraDecalRendererProperties() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDecalRendererProperties)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDecalRendererProperties, UNiagaraDecalRendererProperties::StaticClass, TEXT("UNiagaraDecalRendererProperties"), &Z_Registration_Info_UClass_UNiagaraDecalRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDecalRendererProperties), 4164716129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_467717970(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
