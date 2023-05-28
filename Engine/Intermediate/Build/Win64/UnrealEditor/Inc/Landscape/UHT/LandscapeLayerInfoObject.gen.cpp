// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeLayerInfoObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineModulationColorMask;
	static UEnum* ESplineModulationColorMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ESplineModulationColorMask, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ESplineModulationColorMask"));
		}
		return Z_Registration_Info_UEnum_ESplineModulationColorMask.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ESplineModulationColorMask>()
	{
		return ESplineModulationColorMask_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enumerators[] = {
		{ "ESplineModulationColorMask::Red", (int64)ESplineModulationColorMask::Red },
		{ "ESplineModulationColorMask::Green", (int64)ESplineModulationColorMask::Green },
		{ "ESplineModulationColorMask::Blue", (int64)ESplineModulationColorMask::Blue },
		{ "ESplineModulationColorMask::Alpha", (int64)ESplineModulationColorMask::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "ESplineModulationColorMask::Alpha" },
		{ "Blue.Name", "ESplineModulationColorMask::Blue" },
		{ "Green.Name", "ESplineModulationColorMask::Green" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "Red.Name", "ESplineModulationColorMask::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ESplineModulationColorMask",
		"ESplineModulationColorMask",
		Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask()
	{
		if (!Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton, Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplineModulationColorMask.InnerSingleton;
	}
	void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeLayerInfoObject);
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Hardness;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumCollisionRelevanceWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumCollisionRelevanceWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[];
#endif
		static void NewProp_bNoWeightBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineFalloffModulationTexture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SplineFalloffModulationColorMask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationColorMask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SplineFalloffModulationColorMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTiling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[];
#endif
		static void NewProp_IsReferencedFromLoadedData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LandscapeLayerInfoObject.h" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer */" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight = { "MinimumCollisionRelevanceWeight", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, MinimumCollisionRelevanceWeight), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend = { "bNoWeightBlend", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "Comment", "/** Texture to modulate the Splines Falloff Layer Alpha */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "Texture to modulate the Splines Falloff Layer Alpha" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture = { "SplineFalloffModulationTexture", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "DisplayName", "Color Mask" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask = { "SplineFalloffModulationColorMask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationColorMask), Z_Construct_UEnum_Landscape_ESplineModulationColorMask, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData)) }; // 931231473
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Tiling" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling = { "SplineFalloffModulationTiling", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTiling), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bias" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias = { "SplineFalloffModulationBias", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale = { "SplineFalloffModulationScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData = { "IsReferencedFromLoadedData", nullptr, (EPropertyFlags)0x0010000c00002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "Comment", "/* The color to use for layer usage debug */" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The color to use for layer usage debug" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor = { "LayerUsageDebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams = {
		&ULandscapeLayerInfoObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
	{
		if (!Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton, Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeLayerInfoObject.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLayerInfoObject>()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
	ULandscapeLayerInfoObject::~ULandscapeLayerInfoObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::EnumInfo[] = {
		{ ESplineModulationColorMask_StaticEnum, TEXT("ESplineModulationColorMask"), &Z_Registration_Info_UEnum_ESplineModulationColorMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 931231473U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeLayerInfoObject, ULandscapeLayerInfoObject::StaticClass, TEXT("ULandscapeLayerInfoObject"), &Z_Registration_Info_UClass_ULandscapeLayerInfoObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeLayerInfoObject), 696572066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_2184764728(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeLayerInfoObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
