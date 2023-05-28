// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeMeshAttributeMapsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeMapsTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeInputMeshProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBakeMeshAttributeMapsToolBuilder::StaticRegisterNativesUBakeMeshAttributeMapsToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsToolBuilder);
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_NoRegister()
	{
		return UBakeMeshAttributeMapsToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::ClassParams = {
		&UBakeMeshAttributeMapsToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsToolBuilder>()
	{
		return UBakeMeshAttributeMapsToolBuilder::StaticClass();
	}
	UBakeMeshAttributeMapsToolBuilder::UBakeMeshAttributeMapsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsToolBuilder);
	UBakeMeshAttributeMapsToolBuilder::~UBakeMeshAttributeMapsToolBuilder() {}
	DEFINE_FUNCTION(UBakeMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetMapPreviewNamesFunc();
		P_NATIVE_END;
	}
	void UBakeMeshAttributeMapsToolProperties::StaticRegisterNativesUBakeMeshAttributeMapsToolProperties()
	{
		UClass* Class = UBakeMeshAttributeMapsToolProperties::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMapPreviewNamesFunc", &UBakeMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics
	{
		struct BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties, nullptr, "GetMapPreviewNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms), Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsToolProperties);
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister()
	{
		return UBakeMeshAttributeMapsToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapTypes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPreview_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreview;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BitDepth_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BitDepth;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SamplesPerPixel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplesPerPixel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleFilterMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SampleFilterMask;
		static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreviewNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MapPreviewNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MapPreviewNamesList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc, "GetMapPreviewNamesFunc" }, // 1301461449
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output types to generate */" },
		{ "DisplayName", "Output Types" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The bake output types to generate" },
		{ "ValidEnumValues", "TangentSpaceNormal, AmbientOcclusion, BentNormal, Curvature, Texture, ObjectSpaceNormal, FaceNormal, Position, MaterialID, MultiTexture, VertexColor" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes = { "MapTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapTypes), METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The baked output type used for preview in the viewport */" },
		{ "DisplayName", "Preview Output Type" },
		{ "EditCondition", "MapTypes != 0" },
		{ "GetOptions", "GetMapPreviewNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The baked output type used for preview in the viewport" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview = { "MapPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapPreview), METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The pixel resolution of the generated textures */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The pixel resolution of the generated textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, Resolution), Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_MetaData)) }; // 2876122585
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The bit depth for each channel of the generated textures */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The bit depth for each channel of the generated textures" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, BitDepth), Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_MetaData)) }; // 3847632462
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, SamplesPerPixel), Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_MetaData)) }; // 631028059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Mask texture for filtering out samples/pixels from the output texture */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Mask texture for filtering out samples/pixels from the output texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask = { "SampleFilterMask", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, SampleFilterMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapPreviewNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::ClassParams = {
		&UBakeMeshAttributeMapsToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsToolProperties>()
	{
		return UBakeMeshAttributeMapsToolProperties::StaticClass();
	}
	UBakeMeshAttributeMapsToolProperties::UBakeMeshAttributeMapsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsToolProperties);
	UBakeMeshAttributeMapsToolProperties::~UBakeMeshAttributeMapsToolProperties() {}
	void UBakeMeshAttributeMapsTool::StaticRegisterNativesUBakeMeshAttributeMapsTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsTool);
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool_NoRegister()
	{
		return UBakeMeshAttributeMapsTool::StaticClass();
	}
	struct Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMeshSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMeshSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResultSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ResultSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBakeMeshAttributeMapsToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Detail Map Baking Tool\n */" },
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Detail Map Baking Tool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings_MetaData[] = {
		{ "Comment", "// need to update bResultValid if these are modified, so we don't publicly expose them. \n// @todo setters/getters for these\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "need to update bResultValid if these are modified, so we don't publicly expose them.\n@todo setters/getters for these" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings = { "InputMeshSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, InputMeshSettings), Z_Construct_UClass_UBakeInputMeshProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, Settings), Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings = { "ResultSettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, ResultSettings), Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::ClassParams = {
		&UBakeMeshAttributeMapsTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool()
	{
		if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsTool>()
	{
		return UBakeMeshAttributeMapsTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsTool);
	UBakeMeshAttributeMapsTool::~UBakeMeshAttributeMapsTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder, UBakeMeshAttributeMapsToolBuilder::StaticClass, TEXT("UBakeMeshAttributeMapsToolBuilder"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsToolBuilder), 476706694U) },
		{ Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties, UBakeMeshAttributeMapsToolProperties::StaticClass, TEXT("UBakeMeshAttributeMapsToolProperties"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsToolProperties), 3144509703U) },
		{ Z_Construct_UClass_UBakeMeshAttributeMapsTool, UBakeMeshAttributeMapsTool::StaticClass, TEXT("UBakeMeshAttributeMapsTool"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsTool), 1571684817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_1014643112(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
