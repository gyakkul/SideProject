// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeGizmoActiveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActiveActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeGizmoType;
	static UEnum* ELandscapeGizmoType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeGizmoType>()
	{
		return ELandscapeGizmoType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enumerators[] = {
		{ "LGT_None", (int64)LGT_None },
		{ "LGT_Height", (int64)LGT_Height },
		{ "LGT_Weight", (int64)LGT_Weight },
		{ "LGT_MAX", (int64)LGT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enum_MetaDataParams[] = {
		{ "LGT_Height.Name", "LGT_Height" },
		{ "LGT_MAX.Name", "LGT_MAX" },
		{ "LGT_None.Name", "LGT_None" },
		{ "LGT_Weight.Name", "LGT_Weight" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeGizmoType",
		"ELandscapeGizmoType",
		Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeGizmoSnapType;
	static UEnum* ELandscapeGizmoSnapType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoSnapType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeGizmoSnapType>()
	{
		return ELandscapeGizmoSnapType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enumerators[] = {
		{ "ELandscapeGizmoSnapType::None", (int64)ELandscapeGizmoSnapType::None },
		{ "ELandscapeGizmoSnapType::Component", (int64)ELandscapeGizmoSnapType::Component },
		{ "ELandscapeGizmoSnapType::Texel", (int64)ELandscapeGizmoSnapType::Texel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enum_MetaDataParams[] = {
		{ "Component.Name", "ELandscapeGizmoSnapType::Component" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
		{ "None.Name", "ELandscapeGizmoSnapType::None" },
		{ "Texel.Name", "ELandscapeGizmoSnapType::Texel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeGizmoSnapType",
		"ELandscapeGizmoSnapType",
		Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoSelectData;
class UScriptStruct* FGizmoSelectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoSelectData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GizmoSelectData"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGizmoSelectData>()
{
	return FGizmoSelectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGizmoSelectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoSelectData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoSelectData, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoSelectData, HeightData), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"GizmoSelectData",
		sizeof(FGizmoSelectData),
		alignof(FGizmoSelectData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData()
	{
		if (!Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton, Z_Construct_UScriptStruct_FGizmoSelectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton;
	}
	void ALandscapeGizmoActiveActor::StaticRegisterNativesALandscapeGizmoActiveActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeGizmoActiveActor);
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister()
	{
		return ALandscapeGizmoActiveActor::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampledHeight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampledHeight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampledHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampledNormal_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampledNormal_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SampledNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedScaleXY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedScaleXY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumVerts_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoDataMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoDataMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMeshMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoMeshMaterial;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerInfos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SnapType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowTerrainHeight_MetaData[];
#endif
		static void NewProp_bFollowTerrainHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowTerrainHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnsnappedRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UnsnappedRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeGizmoActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGizmoActiveActor.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, DataType), Z_Construct_UEnum_Landscape_ELandscapeGizmoType, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType_MetaData)) }; // 2982935571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture = { "GizmoTexture", nullptr, (EPropertyFlags)0x0014000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner = { "SampledHeight", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight = { "SampledHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledHeight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner = { "SampledNormal", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal = { "SampledNormal", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledNormal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX = { "SampleSizeX", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeX), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY = { "SampleSizeY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeY), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth = { "CachedWidth", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedWidth), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight = { "CachedHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedHeight), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY = { "CachedScaleXY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedScaleXY), METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts = { "FrustumVerts", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FrustumVerts, ALandscapeGizmoActiveActor), nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, FrustumVerts), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial = { "GizmoDataMaterial", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoDataMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial = { "GizmoMeshMaterial", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0004000800020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData[] = {
		{ "Category", "LandscapeGizmoActiveActor" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0014000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType = { "SnapType", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SnapType), Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_MetaData)) }; // 906983974
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_SetBit(void* Obj)
	{
		((ALandscapeGizmoActiveActor*)Obj)->bFollowTerrainHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight = { "bFollowTerrainHeight", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALandscapeGizmoActiveActor), &Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation = { "UnsnappedRotation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALandscapeGizmoActiveActor, UnsnappedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGizmoActiveActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams = {
		&ALandscapeGizmoActiveActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers), 0),
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor()
	{
		if (!Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton, Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeGizmoActiveActor>()
	{
		return ALandscapeGizmoActiveActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActiveActor);
	ALandscapeGizmoActiveActor::~ALandscapeGizmoActiveActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::EnumInfo[] = {
		{ ELandscapeGizmoType_StaticEnum, TEXT("ELandscapeGizmoType"), &Z_Registration_Info_UEnum_ELandscapeGizmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2982935571U) },
		{ ELandscapeGizmoSnapType_StaticEnum, TEXT("ELandscapeGizmoSnapType"), &Z_Registration_Info_UEnum_ELandscapeGizmoSnapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 906983974U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ScriptStructInfo[] = {
		{ FGizmoSelectData::StaticStruct, Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewStructOps, TEXT("GizmoSelectData"), &Z_Registration_Info_UScriptStruct_GizmoSelectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoSelectData), 2069648565U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeGizmoActiveActor, ALandscapeGizmoActiveActor::StaticClass, TEXT("ALandscapeGizmoActiveActor"), &Z_Registration_Info_UClass_ALandscapeGizmoActiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeGizmoActiveActor), 1898594221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_575889525(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
