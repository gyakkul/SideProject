// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSettings_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSubsystem();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
	ZONEGRAPHANNOTATIONS_API UClass* Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister();
// End Cross Module References
	void UMassCrowdSubsystem::StaticRegisterNativesUMassCrowdSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdSubsystem);
	UClass* Z_Construct_UClass_UMassCrowdSubsystem_NoRegister()
	{
		return UMassCrowdSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphAnnotationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphAnnotationSubsystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassCrowdSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MassCrowdSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Subsystem that tracks mass entities that are wandering on the zone graph.\n * It will create custom runtime lane data to allow branching decisions.\n */" },
		{ "IncludePath", "MassCrowdSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassCrowdSubsystem.h" },
		{ "ToolTip", "Subsystem that tracks mass entities that are wandering on the zone graph.\nIt will create custom runtime lane data to allow branching decisions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphSubsystem = { "ZoneGraphSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSubsystem, ZoneGraphSubsystem), Z_Construct_UClass_UZoneGraphSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphAnnotationSubsystem = { "ZoneGraphAnnotationSubsystem", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSubsystem, ZoneGraphAnnotationSubsystem), Z_Construct_UClass_UZoneGraphAnnotationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphAnnotationSubsystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_MassCrowdSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassCrowdSubsystem.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_MassCrowdSettings = { "MassCrowdSettings", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdSubsystem, MassCrowdSettings), Z_Construct_UClass_UMassCrowdSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_MassCrowdSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_MassCrowdSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_ZoneGraphAnnotationSubsystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdSubsystem_Statics::NewProp_MassCrowdSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdSubsystem_Statics::ClassParams = {
		&UMassCrowdSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdSubsystem.OuterSingleton, Z_Construct_UClass_UMassCrowdSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdSubsystem.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdSubsystem>()
	{
		return UMassCrowdSubsystem::StaticClass();
	}
	UMassCrowdSubsystem::UMassCrowdSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdSubsystem);
	UMassCrowdSubsystem::~UMassCrowdSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdSubsystem, UMassCrowdSubsystem::StaticClass, TEXT("UMassCrowdSubsystem"), &Z_Registration_Info_UClass_UMassCrowdSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdSubsystem), 3886881457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_128433526(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
