// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/BrushEditingSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushEditingSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UBrushEditingSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UBrushEditingSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBrushEditingSubsystem::StaticRegisterNativesUBrushEditingSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushEditingSubsystem);
	UClass* Z_Construct_UClass_UBrushEditingSubsystem_NoRegister()
	{
		return UBrushEditingSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UBrushEditingSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushEditingSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushEditingSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/BrushEditingSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/BrushEditingSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushEditingSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushEditingSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushEditingSubsystem_Statics::ClassParams = {
		&UBrushEditingSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBrushEditingSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushEditingSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushEditingSubsystem()
	{
		if (!Z_Registration_Info_UClass_UBrushEditingSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushEditingSubsystem.OuterSingleton, Z_Construct_UClass_UBrushEditingSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushEditingSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBrushEditingSubsystem>()
	{
		return UBrushEditingSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushEditingSubsystem);
	UBrushEditingSubsystem::~UBrushEditingSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushEditingSubsystem, UBrushEditingSubsystem::StaticClass, TEXT("UBrushEditingSubsystem"), &Z_Registration_Info_UClass_UBrushEditingSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushEditingSubsystem), 1755229543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_3959682504(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_BrushEditingSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
