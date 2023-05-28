// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothConfig() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClothMassMode;
	static UEnum* EClothMassMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EClothMassMode"));
		}
		return Z_Registration_Info_UEnum_EClothMassMode.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothMassMode>()
	{
		return EClothMassMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enumerators[] = {
		{ "EClothMassMode::UniformMass", (int64)EClothMassMode::UniformMass },
		{ "EClothMassMode::TotalMass", (int64)EClothMassMode::TotalMass },
		{ "EClothMassMode::Density", (int64)EClothMassMode::Density },
		{ "EClothMassMode::MaxClothMassMode", (int64)EClothMassMode::MaxClothMassMode },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Different mass modes deciding the setup process. */" },
		{ "Density.Comment", "/** The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area. */" },
		{ "Density.Name", "EClothMassMode::Density" },
		{ "Density.ToolTip", "The mass value is used to set the density of the cloth, calculating the mass for each particle depending on its connected surface area." },
		{ "MaxClothMassMode.Hidden", "" },
		{ "MaxClothMassMode.Name", "EClothMassMode::MaxClothMassMode" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Different mass modes deciding the setup process." },
		{ "TotalMass.Comment", "/** The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area. */" },
		{ "TotalMass.Name", "EClothMassMode::TotalMass" },
		{ "TotalMass.ToolTip", "The mass value is used to set the mass of the entire cloth, distributing it to each particle depending on the amount of connected surface area." },
		{ "UniformMass.Comment", "/** The mass value is used to set the same mass for each particle. */" },
		{ "UniformMass.Name", "EClothMassMode::UniformMass" },
		{ "UniformMass.ToolTip", "The mass value is used to set the same mass for each particle." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		"EClothMassMode",
		"EClothMassMode",
		Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode()
	{
		if (!Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton, Z_Construct_UEnum_ClothingSystemRuntimeCommon_EClothMassMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClothMassMode.InnerSingleton;
	}
	void UClothConfigCommon::StaticRegisterNativesUClothConfigCommon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothConfigCommon);
	UClass* Z_Construct_UClass_UClothConfigCommon_NoRegister()
	{
		return UClothConfigCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothConfigCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothConfigCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common configuration base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothConfigCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothConfigCommon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams = {
		&UClothConfigCommon::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothConfigCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothConfigCommon()
	{
		if (!Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton, Z_Construct_UClass_UClothConfigCommon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothConfigCommon.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothConfigCommon>()
	{
		return UClothConfigCommon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothConfigCommon);
	void UClothSharedConfigCommon::StaticRegisterNativesUClothSharedConfigCommon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothSharedConfigCommon);
	UClass* Z_Construct_UClass_UClothSharedConfigCommon_NoRegister()
	{
		return UClothSharedConfigCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothSharedConfigCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothSharedConfigCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothConfigCommon,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common shared configuration base class. */" },
		{ "IncludePath", "ClothConfig.h" },
		{ "ModuleRelativePath", "Public/ClothConfig.h" },
		{ "ToolTip", "Common shared configuration base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothSharedConfigCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothSharedConfigCommon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams = {
		&UClothSharedConfigCommon::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothSharedConfigCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothSharedConfigCommon()
	{
		if (!Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton, Z_Construct_UClass_UClothSharedConfigCommon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothSharedConfigCommon.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothSharedConfigCommon>()
	{
		return UClothSharedConfigCommon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothSharedConfigCommon);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::EnumInfo[] = {
		{ EClothMassMode_StaticEnum, TEXT("EClothMassMode"), &Z_Registration_Info_UEnum_EClothMassMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2134438965U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothConfigCommon, UClothConfigCommon::StaticClass, TEXT("UClothConfigCommon"), &Z_Registration_Info_UClass_UClothConfigCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothConfigCommon), 1576964559U) },
		{ Z_Construct_UClass_UClothSharedConfigCommon, UClothSharedConfigCommon::StaticClass, TEXT("UClothSharedConfigCommon"), &Z_Registration_Info_UClass_UClothSharedConfigCommon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothSharedConfigCommon), 913512634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_2043806137(TEXT("/Script/ClothingSystemRuntimeCommon"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
