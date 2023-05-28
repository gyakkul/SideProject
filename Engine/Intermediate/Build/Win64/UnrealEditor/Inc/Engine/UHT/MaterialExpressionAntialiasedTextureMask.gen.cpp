// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionAntialiasedTextureMask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionAntialiasedTextureMask() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureColorChannel;
	static UEnum* ETextureColorChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureColorChannel, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureColorChannel"));
		}
		return Z_Registration_Info_UEnum_ETextureColorChannel.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureColorChannel>()
	{
		return ETextureColorChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ETextureColorChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enumerators[] = {
		{ "TCC_Red", (int64)TCC_Red },
		{ "TCC_Green", (int64)TCC_Green },
		{ "TCC_Blue", (int64)TCC_Blue },
		{ "TCC_Alpha", (int64)TCC_Alpha },
		{ "TCC_MAX", (int64)TCC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "TCC_Alpha.Name", "TCC_Alpha" },
		{ "TCC_Blue.Name", "TCC_Blue" },
		{ "TCC_Green.Name", "TCC_Green" },
		{ "TCC_MAX.Name", "TCC_MAX" },
		{ "TCC_Red.Name", "TCC_Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ETextureColorChannel",
		"ETextureColorChannel",
		Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ETextureColorChannel()
	{
		if (!Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton, Z_Construct_UEnum_Engine_ETextureColorChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureColorChannel.InnerSingleton;
	}
	void UMaterialExpressionAntialiasedTextureMask::StaticRegisterNativesUMaterialExpressionAntialiasedTextureMask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionAntialiasedTextureMask);
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_NoRegister()
	{
		return UMaterialExpressionAntialiasedTextureMask::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Channel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureSampleParameter2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Threshold), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "MaterialExpressionAntialiasedTextureMask" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionAntialiasedTextureMask.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionAntialiasedTextureMask, Channel), Z_Construct_UEnum_Engine_ETextureColorChannel, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel_MetaData)) }; // 3335087961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::NewProp_Channel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionAntialiasedTextureMask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams = {
		&UMaterialExpressionAntialiasedTextureMask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton, Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionAntialiasedTextureMask>()
	{
		return UMaterialExpressionAntialiasedTextureMask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionAntialiasedTextureMask);
	UMaterialExpressionAntialiasedTextureMask::~UMaterialExpressionAntialiasedTextureMask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::EnumInfo[] = {
		{ ETextureColorChannel_StaticEnum, TEXT("ETextureColorChannel"), &Z_Registration_Info_UEnum_ETextureColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3335087961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionAntialiasedTextureMask, UMaterialExpressionAntialiasedTextureMask::StaticClass, TEXT("UMaterialExpressionAntialiasedTextureMask"), &Z_Registration_Info_UClass_UMaterialExpressionAntialiasedTextureMask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionAntialiasedTextureMask), 896457104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_39370435(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionAntialiasedTextureMask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
