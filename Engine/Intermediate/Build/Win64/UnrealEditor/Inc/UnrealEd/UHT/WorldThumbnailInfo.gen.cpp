// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ThumbnailRendering/WorldThumbnailInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldThumbnailInfo() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	UNREALED_API UClass* Z_Construct_UClass_USceneThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailInfo();
	UNREALED_API UClass* Z_Construct_UClass_UWorldThumbnailInfo_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrthoThumbnailDirection;
	static UEnum* EOrthoThumbnailDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOrthoThumbnailDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOrthoThumbnailDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EOrthoThumbnailDirection"));
		}
		return Z_Registration_Info_UEnum_EOrthoThumbnailDirection.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EOrthoThumbnailDirection::Type>()
	{
		return EOrthoThumbnailDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enumerators[] = {
		{ "EOrthoThumbnailDirection::Top", (int64)EOrthoThumbnailDirection::Top },
		{ "EOrthoThumbnailDirection::Bottom", (int64)EOrthoThumbnailDirection::Bottom },
		{ "EOrthoThumbnailDirection::Left", (int64)EOrthoThumbnailDirection::Left },
		{ "EOrthoThumbnailDirection::Right", (int64)EOrthoThumbnailDirection::Right },
		{ "EOrthoThumbnailDirection::Front", (int64)EOrthoThumbnailDirection::Front },
		{ "EOrthoThumbnailDirection::Back", (int64)EOrthoThumbnailDirection::Back },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enum_MetaDataParams[] = {
		{ "Back.Name", "EOrthoThumbnailDirection::Back" },
		{ "Bottom.Name", "EOrthoThumbnailDirection::Bottom" },
		{ "Front.Name", "EOrthoThumbnailDirection::Front" },
		{ "Left.Name", "EOrthoThumbnailDirection::Left" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "Right.Name", "EOrthoThumbnailDirection::Right" },
		{ "Top.Name", "EOrthoThumbnailDirection::Top" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EOrthoThumbnailDirection",
		"EOrthoThumbnailDirection::Type",
		Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection()
	{
		if (!Z_Registration_Info_UEnum_EOrthoThumbnailDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrthoThumbnailDirection.InnerSingleton, Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOrthoThumbnailDirection.InnerSingleton;
	}
	void UWorldThumbnailInfo::StaticRegisterNativesUWorldThumbnailInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldThumbnailInfo);
	UClass* Z_Construct_UClass_UWorldThumbnailInfo_NoRegister()
	{
		return UWorldThumbnailInfo::StaticClass();
	}
	struct Z_Construct_UClass_UWorldThumbnailInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrthoDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldThumbnailInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneThumbnailInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The type of projection to use */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ToolTip", "The type of projection to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode = { "CameraMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldThumbnailInfo, CameraMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode_MetaData)) }; // 2603946863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** The direction of the camera when in Orthographic CameraMode */" },
		{ "ModuleRelativePath", "Classes/ThumbnailRendering/WorldThumbnailInfo.h" },
		{ "ToolTip", "The direction of the camera when in Orthographic CameraMode" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection = { "OrthoDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldThumbnailInfo, OrthoDirection), Z_Construct_UEnum_UnrealEd_EOrthoThumbnailDirection, METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection_MetaData)) }; // 2416095247
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_CameraMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldThumbnailInfo_Statics::NewProp_OrthoDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldThumbnailInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldThumbnailInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldThumbnailInfo_Statics::ClassParams = {
		&UWorldThumbnailInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldThumbnailInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldThumbnailInfo()
	{
		if (!Z_Registration_Info_UClass_UWorldThumbnailInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldThumbnailInfo.OuterSingleton, Z_Construct_UClass_UWorldThumbnailInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldThumbnailInfo.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UWorldThumbnailInfo>()
	{
		return UWorldThumbnailInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldThumbnailInfo);
	UWorldThumbnailInfo::~UWorldThumbnailInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::EnumInfo[] = {
		{ EOrthoThumbnailDirection_StaticEnum, TEXT("EOrthoThumbnailDirection"), &Z_Registration_Info_UEnum_EOrthoThumbnailDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2416095247U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldThumbnailInfo, UWorldThumbnailInfo::StaticClass, TEXT("UWorldThumbnailInfo"), &Z_Registration_Info_UClass_UWorldThumbnailInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldThumbnailInfo), 3542998756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_607859465(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ThumbnailRendering_WorldThumbnailInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
