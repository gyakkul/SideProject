// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassActorEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassActorEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	MASSGAMEPLAYEDITOR_API UClass* Z_Construct_UClass_UMassActorEditorSubsystem();
	MASSGAMEPLAYEDITOR_API UClass* Z_Construct_UClass_UMassActorEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassGameplayEditor();
// End Cross Module References
	void UMassActorEditorSubsystem::StaticRegisterNativesUMassActorEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassActorEditorSubsystem);
	UClass* Z_Construct_UClass_UMassActorEditorSubsystem_NoRegister()
	{
		return UMassActorEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassActorEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassActorEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassGameplayEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassActorEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassActorEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassActorEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassActorEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassActorEditorSubsystem_Statics::ClassParams = {
		&UMassActorEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassActorEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassActorEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassActorEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassActorEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMassActorEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassActorEditorSubsystem.OuterSingleton;
	}
	template<> MASSGAMEPLAYEDITOR_API UClass* StaticClass<UMassActorEditorSubsystem>()
	{
		return UMassActorEditorSubsystem::StaticClass();
	}
	UMassActorEditorSubsystem::UMassActorEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassActorEditorSubsystem);
	UMassActorEditorSubsystem::~UMassActorEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassActorEditorSubsystem, UMassActorEditorSubsystem::StaticClass, TEXT("UMassActorEditorSubsystem"), &Z_Registration_Info_UClass_UMassActorEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassActorEditorSubsystem), 4127039496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_1196564108(TEXT("/Script/MassGameplayEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassGameplayEditor_Public_MassActorEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
