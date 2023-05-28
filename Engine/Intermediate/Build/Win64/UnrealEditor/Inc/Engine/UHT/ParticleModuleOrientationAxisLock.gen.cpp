// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleOrientationAxisLock() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleOrientationBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EParticleAxisLock;
	static UEnum* EParticleAxisLock_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EParticleAxisLock.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EParticleAxisLock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleAxisLock, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EParticleAxisLock"));
		}
		return Z_Registration_Info_UEnum_EParticleAxisLock.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EParticleAxisLock>()
	{
		return EParticleAxisLock_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EParticleAxisLock_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enumerators[] = {
		{ "EPAL_NONE", (int64)EPAL_NONE },
		{ "EPAL_X", (int64)EPAL_X },
		{ "EPAL_Y", (int64)EPAL_Y },
		{ "EPAL_Z", (int64)EPAL_Z },
		{ "EPAL_NEGATIVE_X", (int64)EPAL_NEGATIVE_X },
		{ "EPAL_NEGATIVE_Y", (int64)EPAL_NEGATIVE_Y },
		{ "EPAL_NEGATIVE_Z", (int64)EPAL_NEGATIVE_Z },
		{ "EPAL_ROTATE_X", (int64)EPAL_ROTATE_X },
		{ "EPAL_ROTATE_Y", (int64)EPAL_ROTATE_Y },
		{ "EPAL_ROTATE_Z", (int64)EPAL_ROTATE_Z },
		{ "EPAL_MAX", (int64)EPAL_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Flags indicating lock\n" },
		{ "EPAL_MAX.Name", "EPAL_MAX" },
		{ "EPAL_NEGATIVE_X.Comment", "/** Lock the sprite facing towards the negative X-axis\x09*/" },
		{ "EPAL_NEGATIVE_X.DisplayName", "-X" },
		{ "EPAL_NEGATIVE_X.Name", "EPAL_NEGATIVE_X" },
		{ "EPAL_NEGATIVE_X.ToolTip", "Lock the sprite facing towards the negative X-axis" },
		{ "EPAL_NEGATIVE_Y.Comment", "/** Lock the sprite facing towards the negative Y-axis\x09*/" },
		{ "EPAL_NEGATIVE_Y.DisplayName", "-Y" },
		{ "EPAL_NEGATIVE_Y.Name", "EPAL_NEGATIVE_Y" },
		{ "EPAL_NEGATIVE_Y.ToolTip", "Lock the sprite facing towards the negative Y-axis" },
		{ "EPAL_NEGATIVE_Z.Comment", "/** Lock the sprite facing towards the negative Z-axis\x09*/" },
		{ "EPAL_NEGATIVE_Z.DisplayName", "-Z" },
		{ "EPAL_NEGATIVE_Z.Name", "EPAL_NEGATIVE_Z" },
		{ "EPAL_NEGATIVE_Z.ToolTip", "Lock the sprite facing towards the negative Z-axis" },
		{ "EPAL_NONE.Comment", "/** No locking to an axis...\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "EPAL_NONE.DisplayName", "None" },
		{ "EPAL_NONE.Name", "EPAL_NONE" },
		{ "EPAL_NONE.ToolTip", "No locking to an axis..." },
		{ "EPAL_ROTATE_X.Comment", "/** Lock the sprite rotation on the X-axis\x09\x09\x09\x09*/" },
		{ "EPAL_ROTATE_X.DisplayName", "Rotate X" },
		{ "EPAL_ROTATE_X.Name", "EPAL_ROTATE_X" },
		{ "EPAL_ROTATE_X.ToolTip", "Lock the sprite rotation on the X-axis" },
		{ "EPAL_ROTATE_Y.Comment", "/** Lock the sprite rotation on the Y-axis\x09\x09\x09\x09*/" },
		{ "EPAL_ROTATE_Y.DisplayName", "Rotate Y" },
		{ "EPAL_ROTATE_Y.Name", "EPAL_ROTATE_Y" },
		{ "EPAL_ROTATE_Y.ToolTip", "Lock the sprite rotation on the Y-axis" },
		{ "EPAL_ROTATE_Z.Comment", "/** Lock the sprite rotation on the Z-axis\x09\x09\x09\x09*/" },
		{ "EPAL_ROTATE_Z.DisplayName", "Rotate Z" },
		{ "EPAL_ROTATE_Z.Name", "EPAL_ROTATE_Z" },
		{ "EPAL_ROTATE_Z.ToolTip", "Lock the sprite rotation on the Z-axis" },
		{ "EPAL_X.Comment", "/** Lock the sprite facing towards the positive X-axis\x09*/" },
		{ "EPAL_X.DisplayName", "X" },
		{ "EPAL_X.Name", "EPAL_X" },
		{ "EPAL_X.ToolTip", "Lock the sprite facing towards the positive X-axis" },
		{ "EPAL_Y.Comment", "/** Lock the sprite facing towards the positive Y-axis\x09*/" },
		{ "EPAL_Y.DisplayName", "Y" },
		{ "EPAL_Y.Name", "EPAL_Y" },
		{ "EPAL_Y.ToolTip", "Lock the sprite facing towards the positive Y-axis" },
		{ "EPAL_Z.Comment", "/** Lock the sprite facing towards the positive Z-axis\x09*/" },
		{ "EPAL_Z.DisplayName", "Z" },
		{ "EPAL_Z.Name", "EPAL_Z" },
		{ "EPAL_Z.ToolTip", "Lock the sprite facing towards the positive Z-axis" },
		{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
		{ "ToolTip", "Flags indicating lock" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EParticleAxisLock",
		"EParticleAxisLock",
		Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock()
	{
		if (!Z_Registration_Info_UEnum_EParticleAxisLock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EParticleAxisLock.InnerSingleton, Z_Construct_UEnum_Engine_EParticleAxisLock_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EParticleAxisLock.InnerSingleton;
	}
	void UParticleModuleOrientationAxisLock::StaticRegisterNativesUParticleModuleOrientationAxisLock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleOrientationAxisLock);
	UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock_NoRegister()
	{
		return UParticleModuleOrientationAxisLock::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockAxisFlags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockAxisFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleOrientationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Lock Axis" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
		{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::NewProp_LockAxisFlags_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/**\n\x09 *\x09The lock axis flag setting.\n\x09 *\x09""Can be one of the following:\n\x09 *\x09\x09""EPAL_NONE\x09\x09\x09No locking to an axis.\n\x09 *\x09\x09""EPAL_X\x09\x09\x09\x09Lock the sprite facing towards +X.\n\x09 *\x09\x09""EPAL_Y\x09\x09\x09\x09Lock the sprite facing towards +Y.\n\x09 *\x09\x09""EPAL_Z\x09\x09\x09\x09Lock the sprite facing towards +Z.\n\x09 *\x09\x09""EPAL_NEGATIVE_X\x09\x09Lock the sprite facing towards -X.\n\x09 *\x09\x09""EPAL_NEGATIVE_Y\x09\x09Lock the sprite facing towards -Y.\n\x09 *\x09\x09""EPAL_NEGATIVE_Z\x09\x09Lock the sprite facing towards -Z.\n\x09 *\x09\x09""EPAL_ROTATE_X\x09\x09Lock the sprite rotation on the X-axis.\n\x09 *\x09\x09""EPAL_ROTATE_Y\x09\x09Lock the sprite rotation on the Y-axis.\n\x09 *\x09\x09""EPAL_ROTATE_Z\x09\x09Lock the sprite rotation on the Z-axis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h" },
		{ "ToolTip", "The lock axis flag setting.\nCan be one of the following:\n        EPAL_NONE                       No locking to an axis.\n        EPAL_X                          Lock the sprite facing towards +X.\n        EPAL_Y                          Lock the sprite facing towards +Y.\n        EPAL_Z                          Lock the sprite facing towards +Z.\n        EPAL_NEGATIVE_X         Lock the sprite facing towards -X.\n        EPAL_NEGATIVE_Y         Lock the sprite facing towards -Y.\n        EPAL_NEGATIVE_Z         Lock the sprite facing towards -Z.\n        EPAL_ROTATE_X           Lock the sprite rotation on the X-axis.\n        EPAL_ROTATE_Y           Lock the sprite rotation on the Y-axis.\n        EPAL_ROTATE_Z           Lock the sprite rotation on the Z-axis." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::NewProp_LockAxisFlags = { "LockAxisFlags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleOrientationAxisLock, LockAxisFlags), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::NewProp_LockAxisFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::NewProp_LockAxisFlags_MetaData)) }; // 4266016895
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::NewProp_LockAxisFlags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleOrientationAxisLock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::ClassParams = {
		&UParticleModuleOrientationAxisLock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleOrientationAxisLock()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.OuterSingleton, Z_Construct_UClass_UParticleModuleOrientationAxisLock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleOrientationAxisLock>()
	{
		return UParticleModuleOrientationAxisLock::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleOrientationAxisLock);
	UParticleModuleOrientationAxisLock::~UParticleModuleOrientationAxisLock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::EnumInfo[] = {
		{ EParticleAxisLock_StaticEnum, TEXT("EParticleAxisLock"), &Z_Registration_Info_UEnum_EParticleAxisLock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4266016895U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleOrientationAxisLock, UParticleModuleOrientationAxisLock::StaticClass, TEXT("UParticleModuleOrientationAxisLock"), &Z_Registration_Info_UClass_UParticleModuleOrientationAxisLock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleOrientationAxisLock), 1738173906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_864799992(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Orientation_ParticleModuleOrientationAxisLock_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
