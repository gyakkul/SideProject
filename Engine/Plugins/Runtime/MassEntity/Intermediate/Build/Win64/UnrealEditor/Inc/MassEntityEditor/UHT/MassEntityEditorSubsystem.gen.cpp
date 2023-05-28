// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	MASSENTITYEDITOR_API UClass* Z_Construct_UClass_UMassEntityEditorSubsystem();
	MASSENTITYEDITOR_API UClass* Z_Construct_UClass_UMassEntityEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassEntityEditor();
// End Cross Module References
	void UMassEntityEditorSubsystem::StaticRegisterNativesUMassEntityEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntityEditorSubsystem);
	UClass* Z_Construct_UClass_UMassEntityEditorSubsystem_NoRegister()
	{
		return UMassEntityEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntityEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MassEntityEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassEntityEditorSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntityEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::ClassParams = {
		&UMassEntityEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntityEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassEntityEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntityEditorSubsystem.OuterSingleton, Z_Construct_UClass_UMassEntityEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntityEditorSubsystem.OuterSingleton;
	}
	template<> MASSENTITYEDITOR_API UClass* StaticClass<UMassEntityEditorSubsystem>()
	{
		return UMassEntityEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntityEditorSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityEditor_Public_MassEntityEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityEditor_Public_MassEntityEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntityEditorSubsystem, UMassEntityEditorSubsystem::StaticClass, TEXT("UMassEntityEditorSubsystem"), &Z_Registration_Info_UClass_UMassEntityEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntityEditorSubsystem), 3215294813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityEditor_Public_MassEntityEditorSubsystem_h_3733805322(TEXT("/Script/MassEntityEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityEditor_Public_MassEntityEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityEditor_Public_MassEntityEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
