// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/ActorEditorContextSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorEditorContextSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UActorEditorContextSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UActorEditorContextSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorEditorContextSubsystem::StaticRegisterNativesUActorEditorContextSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorEditorContextSubsystem);
	UClass* Z_Construct_UClass_UActorEditorContextSubsystem_NoRegister()
	{
		return UActorEditorContextSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UActorEditorContextSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorEditorContextSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorEditorContextSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UActorEditorContextSubsystem \n*/" },
		{ "IncludePath", "Subsystems/ActorEditorContextSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/ActorEditorContextSubsystem.h" },
		{ "ToolTip", "UActorEditorContextSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorEditorContextSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorEditorContextSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorEditorContextSubsystem_Statics::ClassParams = {
		&UActorEditorContextSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorEditorContextSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorEditorContextSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorEditorContextSubsystem()
	{
		if (!Z_Registration_Info_UClass_UActorEditorContextSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorEditorContextSubsystem.OuterSingleton, Z_Construct_UClass_UActorEditorContextSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorEditorContextSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorEditorContextSubsystem>()
	{
		return UActorEditorContextSubsystem::StaticClass();
	}
	UActorEditorContextSubsystem::UActorEditorContextSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorEditorContextSubsystem);
	UActorEditorContextSubsystem::~UActorEditorContextSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorEditorContextSubsystem, UActorEditorContextSubsystem::StaticClass, TEXT("UActorEditorContextSubsystem"), &Z_Registration_Info_UClass_UActorEditorContextSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorEditorContextSubsystem), 3662104428U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_1295341476(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ActorEditorContextSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
