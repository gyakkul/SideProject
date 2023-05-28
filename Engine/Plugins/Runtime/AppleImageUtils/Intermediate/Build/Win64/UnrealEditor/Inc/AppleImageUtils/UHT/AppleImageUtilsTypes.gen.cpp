// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleImageUtilsTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleImageUtilsTypes() {}
// Cross Module References
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageInterface();
	APPLEIMAGEUTILS_API UClass* Z_Construct_UClass_UAppleImageInterface_NoRegister();
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_EAppleTextureType();
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AppleImageUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureRotationDirection;
	static UEnum* ETextureRotationDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, (UObject*)Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("ETextureRotationDirection"));
		}
		return Z_Registration_Info_UEnum_ETextureRotationDirection.OuterSingleton;
	}
	template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<ETextureRotationDirection>()
	{
		return ETextureRotationDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enumerators[] = {
		{ "ETextureRotationDirection::None", (int64)ETextureRotationDirection::None },
		{ "ETextureRotationDirection::Left", (int64)ETextureRotationDirection::Left },
		{ "ETextureRotationDirection::Right", (int64)ETextureRotationDirection::Right },
		{ "ETextureRotationDirection::Down", (int64)ETextureRotationDirection::Down },
		{ "ETextureRotationDirection::LeftMirrored", (int64)ETextureRotationDirection::LeftMirrored },
		{ "ETextureRotationDirection::RightMirrored", (int64)ETextureRotationDirection::RightMirrored },
		{ "ETextureRotationDirection::DownMirrored", (int64)ETextureRotationDirection::DownMirrored },
		{ "ETextureRotationDirection::UpMirrored", (int64)ETextureRotationDirection::UpMirrored },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AppleImageUtils" },
		{ "Down.Name", "ETextureRotationDirection::Down" },
		{ "DownMirrored.Name", "ETextureRotationDirection::DownMirrored" },
		{ "Experimental", "" },
		{ "Left.Name", "ETextureRotationDirection::Left" },
		{ "LeftMirrored.Name", "ETextureRotationDirection::LeftMirrored" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
		{ "None.Name", "ETextureRotationDirection::None" },
		{ "Right.Name", "ETextureRotationDirection::Right" },
		{ "RightMirrored.Name", "ETextureRotationDirection::RightMirrored" },
		{ "UpMirrored.Name", "ETextureRotationDirection::UpMirrored" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils,
		nullptr,
		"ETextureRotationDirection",
		"ETextureRotationDirection",
		Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection()
	{
		if (!Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton, Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureRotationDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAppleTextureType;
	static UEnum* EAppleTextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType, (UObject*)Z_Construct_UPackage__Script_AppleImageUtils(), TEXT("EAppleTextureType"));
		}
		return Z_Registration_Info_UEnum_EAppleTextureType.OuterSingleton;
	}
	template<> APPLEIMAGEUTILS_API UEnum* StaticEnum<EAppleTextureType>()
	{
		return EAppleTextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enumerators[] = {
		{ "EAppleTextureType::Unknown", (int64)EAppleTextureType::Unknown },
		{ "EAppleTextureType::Image", (int64)EAppleTextureType::Image },
		{ "EAppleTextureType::PixelBuffer", (int64)EAppleTextureType::PixelBuffer },
		{ "EAppleTextureType::Surface", (int64)EAppleTextureType::Surface },
		{ "EAppleTextureType::MetalTexture", (int64)EAppleTextureType::MetalTexture },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AppleImageUtils" },
		{ "Experimental", "" },
		{ "Image.Name", "EAppleTextureType::Image" },
		{ "MetalTexture.Name", "EAppleTextureType::MetalTexture" },
		{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
		{ "PixelBuffer.Name", "EAppleTextureType::PixelBuffer" },
		{ "Surface.Name", "EAppleTextureType::Surface" },
		{ "Unknown.Name", "EAppleTextureType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleImageUtils,
		nullptr,
		"EAppleTextureType",
		"EAppleTextureType",
		Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleImageUtils_EAppleTextureType()
	{
		if (!Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton, Z_Construct_UEnum_AppleImageUtils_EAppleTextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAppleTextureType.InnerSingleton;
	}
	void UAppleImageInterface::StaticRegisterNativesUAppleImageInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleImageInterface);
	UClass* Z_Construct_UClass_UAppleImageInterface_NoRegister()
	{
		return UAppleImageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAppleImageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleImageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleImageUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AppleImageUtilsTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleImageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAppleImageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleImageInterface_Statics::ClassParams = {
		&UAppleImageInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleImageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleImageInterface()
	{
		if (!Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton, Z_Construct_UClass_UAppleImageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleImageInterface.OuterSingleton;
	}
	template<> APPLEIMAGEUTILS_API UClass* StaticClass<UAppleImageInterface>()
	{
		return UAppleImageInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleImageInterface);
	UAppleImageInterface::~UAppleImageInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::EnumInfo[] = {
		{ ETextureRotationDirection_StaticEnum, TEXT("ETextureRotationDirection"), &Z_Registration_Info_UEnum_ETextureRotationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4067816981U) },
		{ EAppleTextureType_StaticEnum, TEXT("EAppleTextureType"), &Z_Registration_Info_UEnum_EAppleTextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 780169412U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleImageInterface, UAppleImageInterface::StaticClass, TEXT("UAppleImageInterface"), &Z_Registration_Info_UClass_UAppleImageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleImageInterface), 3449764844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_2066934597(TEXT("/Script/AppleImageUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AppleImageUtils_Source_AppleImageUtils_Public_AppleImageUtilsTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
