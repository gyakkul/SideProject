// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubUVAnimation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESubUVBoundingVertexCount;
	static UEnum* ESubUVBoundingVertexCount_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ESubUVBoundingVertexCount"));
		}
		return Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESubUVBoundingVertexCount>()
	{
		return ESubUVBoundingVertexCount_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enumerators[] = {
		{ "BVC_FourVertices", (int64)BVC_FourVertices },
		{ "BVC_EightVertices", (int64)BVC_EightVertices },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enum_MetaDataParams[] = {
		{ "BVC_EightVertices.Name", "BVC_EightVertices" },
		{ "BVC_FourVertices.Name", "BVC_FourVertices" },
		{ "Comment", "/** \n * More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n * The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n * and when the particles using the texture will be few and large.\n */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ESubUVBoundingVertexCount",
		"ESubUVBoundingVertexCount",
		Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount()
	{
		if (!Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton, Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESubUVBoundingVertexCount.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpacitySourceMode;
	static UEnum* EOpacitySourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EOpacitySourceMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EOpacitySourceMode"));
		}
		return Z_Registration_Info_UEnum_EOpacitySourceMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EOpacitySourceMode>()
	{
		return EOpacitySourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enumerators[] = {
		{ "OSM_Alpha", (int64)OSM_Alpha },
		{ "OSM_ColorBrightness", (int64)OSM_ColorBrightness },
		{ "OSM_RedChannel", (int64)OSM_RedChannel },
		{ "OSM_GreenChannel", (int64)OSM_GreenChannel },
		{ "OSM_BlueChannel", (int64)OSM_BlueChannel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "OSM_Alpha.Name", "OSM_Alpha" },
		{ "OSM_BlueChannel.Name", "OSM_BlueChannel" },
		{ "OSM_ColorBrightness.Name", "OSM_ColorBrightness" },
		{ "OSM_GreenChannel.Name", "OSM_GreenChannel" },
		{ "OSM_RedChannel.Name", "OSM_RedChannel" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EOpacitySourceMode",
		"EOpacitySourceMode",
		Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode()
	{
		if (!Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton, Z_Construct_UEnum_Engine_EOpacitySourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOpacitySourceMode.InnerSingleton;
	}
	void USubUVAnimation::StaticRegisterNativesUSubUVAnimation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubUVAnimation);
	UClass* Z_Construct_UClass_USubUVAnimation_NoRegister()
	{
		return USubUVAnimation::StaticClass();
	}
	struct Z_Construct_UClass_USubUVAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubUVTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubUVTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundingMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubUVAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SubUV animation asset, which caches bounding geometry for regions in the SubUVTexture with non-zero opacity.\n * Particle emitters with a SubUV module which use this asset leverage the optimal bounding geometry to reduce overdraw.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Particles/SubUVAnimation.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "SubUV animation asset, which caches bounding geometry for regions in the SubUVTexture with non-zero opacity.\nParticle emitters with a SubUV module which use this asset leverage the optimal bounding geometry to reduce overdraw." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** \n\x09 * Texture to generate bounding geometry from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "Texture to generate bounding geometry from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture = { "SubUVTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, SubUVTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images horizontally in the texture\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "The number of sub-images horizontally in the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal = { "SubImages_Horizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, SubImages_Horizontal), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** The number of sub-images vertically in the texture\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "The number of sub-images vertically in the texture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical = { "SubImages_Vertical", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, SubImages_Vertical), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** \n\x09 * More bounding vertices results in reduced overdraw, but adds more triangle overhead.\n\x09 * The eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\n\x09 * and when the particles using the texture will be few and large.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode = { "BoundingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode_MetaData)) }; // 1272199695
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData[] = {
		{ "Category", "SubUV" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode = { "OpacitySourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode_MetaData)) }; // 4187087167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/** \n\x09 * Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\n\x09 * Raising this threshold slightly can reduce overdraw in particles using this animation asset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUVAnimation.h" },
		{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold = { "AlphaThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimation, AlphaThreshold), METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubUVAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubUVTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Horizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_SubImages_Vertical,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_BoundingMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_OpacitySourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimation_Statics::NewProp_AlphaThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubUVAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubUVAnimation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubUVAnimation_Statics::ClassParams = {
		&USubUVAnimation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubUVAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubUVAnimation()
	{
		if (!Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton, Z_Construct_UClass_USubUVAnimation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubUVAnimation.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USubUVAnimation>()
	{
		return USubUVAnimation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubUVAnimation);
	USubUVAnimation::~USubUVAnimation() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(USubUVAnimation)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::EnumInfo[] = {
		{ ESubUVBoundingVertexCount_StaticEnum, TEXT("ESubUVBoundingVertexCount"), &Z_Registration_Info_UEnum_ESubUVBoundingVertexCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1272199695U) },
		{ EOpacitySourceMode_StaticEnum, TEXT("EOpacitySourceMode"), &Z_Registration_Info_UEnum_EOpacitySourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4187087167U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubUVAnimation, USubUVAnimation::StaticClass, TEXT("USubUVAnimation"), &Z_Registration_Info_UClass_USubUVAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubUVAnimation), 3918477093U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_809431042(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUVAnimation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
