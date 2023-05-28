// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassSignals/Public/MassSignalSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSignalSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem();
	MASSSIGNALS_API UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSignals();
// End Cross Module References
	void UMassSignalSubsystem::StaticRegisterNativesUMassSignalSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSignalSubsystem);
	UClass* Z_Construct_UClass_UMassSignalSubsystem_NoRegister()
	{
		return UMassSignalSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassSignalSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSignalSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSignals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A subsystem for handling Signals in Mass\n*/" },
		{ "IncludePath", "MassSignalSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassSignalSubsystem.h" },
		{ "ToolTip", "A subsystem for handling Signals in Mass" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSignalSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSignalSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSignalSubsystem_Statics::ClassParams = {
		&UMassSignalSubsystem::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSignalSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSignalSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton, Z_Construct_UClass_UMassSignalSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSignalSubsystem.OuterSingleton;
	}
	template<> MASSSIGNALS_API UClass* StaticClass<UMassSignalSubsystem>()
	{
		return UMassSignalSubsystem::StaticClass();
	}
	UMassSignalSubsystem::UMassSignalSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSignalSubsystem);
	UMassSignalSubsystem::~UMassSignalSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSignalSubsystem, UMassSignalSubsystem::StaticClass, TEXT("UMassSignalSubsystem"), &Z_Registration_Info_UClass_UMassSignalSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSignalSubsystem), 3387666668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_606751806(TEXT("/Script/MassSignals"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSignals_Public_MassSignalSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
