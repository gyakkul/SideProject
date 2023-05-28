// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureLightProfile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLightProfile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UTextureLightProfile::StaticRegisterNativesUTextureLightProfile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureLightProfile);
	UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister()
	{
		return UTextureLightProfile::StaticClass();
	}
	struct Z_Construct_UClass_UTextureLightProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureLightProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexture2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object CompositeTexture Texture2D Object" },
		{ "IncludePath", "Engine/TextureLightProfile.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "Comment", "/** Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Light brightness in Candelas, imported from IES profile, <= 0 if the profile is used for masking only. Use with InverseSquareFalloff." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureLightProfile, Brightness), METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData[] = {
		{ "Category", "TextureLightProfile" },
		{ "Comment", "/** Multiplier to map texture value to result to integrate over the sphere to 1.0f */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLightProfile.h" },
		{ "ToolTip", "Multiplier to map texture value to result to integrate over the sphere to 1.0f" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier = { "TextureMultiplier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureLightProfile, TextureMultiplier), METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_Brightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLightProfile_Statics::NewProp_TextureMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureLightProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLightProfile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams = {
		&UTextureLightProfile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLightProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureLightProfile()
	{
		if (!Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton, Z_Construct_UClass_UTextureLightProfile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureLightProfile.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureLightProfile>()
	{
		return UTextureLightProfile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLightProfile);
	UTextureLightProfile::~UTextureLightProfile() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureLightProfile, UTextureLightProfile::StaticClass, TEXT("UTextureLightProfile"), &Z_Registration_Info_UClass_UTextureLightProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureLightProfile), 3948585397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_2182428727(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLightProfile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
