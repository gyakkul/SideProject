// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementSettings.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/MassMovementTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassMovementSettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementSettings();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassMovementSettings_NoRegister();
	MASSMOVEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FMassMovementStyle();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References
	void UMassMovementSettings::StaticRegisterNativesUMassMovementSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassMovementSettings);
	UClass* Z_Construct_UClass_UMassMovementSettings_NoRegister()
	{
		return UMassMovementSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassMovementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementStyles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementStyles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementStyles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassMovementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovementSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mass Movement" },
		{ "IncludePath", "MassMovementSettings.h" },
		{ "ModuleRelativePath", "Public/MassMovementSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles_Inner = { "MovementStyles", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassMovementStyle, METADATA_PARAMS(nullptr, 0) }; // 4121061834
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/MassMovementSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles = { "MovementStyles", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassMovementSettings, MovementStyles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles_MetaData)) }; // 4121061834
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassMovementSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassMovementSettings_Statics::NewProp_MovementStyles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassMovementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassMovementSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassMovementSettings_Statics::ClassParams = {
		&UMassMovementSettings::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassMovementSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassMovementSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassMovementSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassMovementSettings()
	{
		if (!Z_Registration_Info_UClass_UMassMovementSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassMovementSettings.OuterSingleton, Z_Construct_UClass_UMassMovementSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassMovementSettings.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassMovementSettings>()
	{
		return UMassMovementSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassMovementSettings);
	UMassMovementSettings::~UMassMovementSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassMovementSettings, UMassMovementSettings::StaticClass, TEXT("UMassMovementSettings"), &Z_Registration_Info_UClass_UMassMovementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassMovementSettings), 2861944142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_742773432(TEXT("/Script/MassMovement"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_MassMovementSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
