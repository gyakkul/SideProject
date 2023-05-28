// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/EditorElementSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorElementSubsystem() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UEditorElementSubsystem();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UEditorElementSubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	void UEditorElementSubsystem::StaticRegisterNativesUEditorElementSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorElementSubsystem);
	UClass* Z_Construct_UClass_UEditorElementSubsystem_NoRegister()
	{
		return UEditorElementSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorElementSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorElementSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorElementSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/EditorElementSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EditorElementSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorElementSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorElementSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorElementSubsystem_Statics::ClassParams = {
		&UEditorElementSubsystem::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorElementSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorElementSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorElementSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorElementSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorElementSubsystem.OuterSingleton, Z_Construct_UClass_UEditorElementSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorElementSubsystem.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UEditorElementSubsystem>()
	{
		return UEditorElementSubsystem::StaticClass();
	}
	UEditorElementSubsystem::UEditorElementSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorElementSubsystem);
	UEditorElementSubsystem::~UEditorElementSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorElementSubsystem, UEditorElementSubsystem::StaticClass, TEXT("UEditorElementSubsystem"), &Z_Registration_Info_UClass_UEditorElementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorElementSubsystem), 4135002126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_860703105(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Subsystems_EditorElementSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
