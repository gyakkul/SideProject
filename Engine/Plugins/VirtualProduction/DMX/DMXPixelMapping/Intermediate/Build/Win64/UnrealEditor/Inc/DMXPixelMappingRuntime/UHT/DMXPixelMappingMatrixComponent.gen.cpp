// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingMatrixComponent.h"
#include "DMXAttribute.h"
#include "Library/DMXEntityReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingMatrixComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DMXPIXELMAPPINGCORE_API UEnum* Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXModulator_NoRegister();
	DMXRUNTIME_API UEnum* Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingMatrixComponent::StaticRegisterNativesUDMXPixelMappingMatrixComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingMatrixComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister()
	{
		return UDMXPixelMappingMatrixComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchMatrixRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchMatrixRef;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixturePatchRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixturePatchRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ColorSpaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorSpace;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModulatorClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulatorClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModulatorClasses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modulators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modulators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modulators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateGrid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinateGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CellSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Distribution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distribution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Distribution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayoutScript;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRExpose_MetaData[];
#endif
		static void NewProp_AttributeRExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeRExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGExpose_MetaData[];
#endif
		static void NewProp_AttributeGExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeGExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBExpose_MetaData[];
#endif
		static void NewProp_AttributeBExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeBExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonochromeExpose_MetaData[];
#endif
		static void NewProp_bMonochromeExpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonochromeExpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeRInvert_MetaData[];
#endif
		static void NewProp_AttributeRInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeRInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeGInvert_MetaData[];
#endif
		static void NewProp_AttributeGInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeGInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBInvert_MetaData[];
#endif
		static void NewProp_AttributeBInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeBInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMonochromeInvert_MetaData[];
#endif
		static void NewProp_bMonochromeInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMonochromeInvert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeR_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeG_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MonochromeIntensity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MonochromeIntensity;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * DMX Matrix group component\n */" },
		{ "IncludePath", "Components/DMXPixelMappingMatrixComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ToolTip", "DMX Matrix group component" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchMatrixRef = { "FixturePatchMatrixRef", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, FixturePatchMatrixRef_DEPRECATED), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchMatrixRef_MetaData)) }; // 1707509301
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchRef_MetaData[] = {
		{ "Category", "Matrix Settings" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchRef = { "FixturePatchRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, FixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchRef_MetaData)) }; // 1707509301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpaceClass_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** Sets which color space Pixel Mapping sends */" },
		{ "DisplayName", "Output Mode" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "Sets which color space Pixel Mapping sends" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpaceClass = { "ColorSpaceClass", nullptr, (EPropertyFlags)0x0014000002002001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, ColorSpaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpaceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpace_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** The Color Space currently in use */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ToolTip", "The Color Space currently in use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x00160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, ColorSpace), Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpace_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses_Inner = { "ModulatorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses_MetaData[] = {
		{ "Category", "Output Settings" },
		{ "Comment", "/** Modulators applied to the output before sending DMX */" },
		{ "DisplayName", "Output Modulators" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ToolTip", "Modulators applied to the output before sending DMX" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses = { "ModulatorClasses", nullptr, (EPropertyFlags)0x0014000000002015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, ModulatorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators_Inner = { "Modulators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXModulator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators_MetaData[] = {
		{ "Comment", "/** The actual modulator instances */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ToolTip", "The actual modulator instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators = { "Modulators", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, Modulators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CoordinateGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CoordinateGrid = { "CoordinateGrid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, CoordinateGrid), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CoordinateGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CoordinateGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CellSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, CellSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CellSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CellSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution = { "Distribution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, Distribution), Z_Construct_UEnum_DMXRuntime_EDMXPixelMappingDistribution, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution_MetaData)) }; // 1209359822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_LayoutScript_MetaData[] = {
		{ "Category", "Layout" },
		{ "Comment", "/** Layout script for the children of this component (hidden in customizations and displayed in its own panel). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
		{ "ToolTip", "Layout script for the children of this component (hidden in customizations and displayed in its own panel)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_LayoutScript = { "LayoutScript", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, LayoutScript), Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_LayoutScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_LayoutScript_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode = { "ColorMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, ColorMode_DEPRECATED), Z_Construct_UEnum_DMXPixelMappingCore_EDMXColorMode, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode_MetaData)) }; // 1955628948
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeRExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose = { "AttributeRExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeGExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose = { "AttributeGExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeBExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose = { "AttributeBExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->bMonochromeExpose_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose = { "bMonochromeExpose", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeRInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert = { "AttributeRInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeGInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert = { "AttributeGInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->AttributeBInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert = { "AttributeBInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert_SetBit(void* Obj)
	{
		((UDMXPixelMappingMatrixComponent*)Obj)->bMonochromeInvert_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert = { "bMonochromeInvert", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingMatrixComponent), &Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeR_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeR = { "AttributeR", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, AttributeR_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeR_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeR_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeG_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeG = { "AttributeG", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, AttributeG_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeG_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeG_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeB_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeB = { "AttributeB", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, AttributeB_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeB_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_MonochromeIntensity_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Deprecated in favor of DMXPixelMappingColorSpace. See ColorSpace member." },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingMatrixComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_MonochromeIntensity = { "MonochromeIntensity", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingMatrixComponent, MonochromeIntensity_DEPRECATED), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_MonochromeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_MonochromeIntensity_MetaData)) }; // 2246266977
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchMatrixRef,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_FixturePatchRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ModulatorClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Modulators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CoordinateGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_Distribution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_LayoutScript,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_ColorMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeExpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeRInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeGInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeBInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_bMonochromeInvert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_AttributeB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::NewProp_MonochromeIntensity,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingMatrixComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::ClassParams = {
		&UDMXPixelMappingMatrixComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingMatrixComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingMatrixComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingMatrixComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingMatrixComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingMatrixComponent>()
	{
		return UDMXPixelMappingMatrixComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingMatrixComponent);
	UDMXPixelMappingMatrixComponent::~UDMXPixelMappingMatrixComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDMXPixelMappingMatrixComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingMatrixComponent, UDMXPixelMappingMatrixComponent::StaticClass, TEXT("UDMXPixelMappingMatrixComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingMatrixComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingMatrixComponent), 4051906652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixComponent_h_1710780352(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingMatrixComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
