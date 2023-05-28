// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorModeUILayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorModeUILayer() {}
// Cross Module References
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetEditorUISubsystem();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUISubsystem();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorUISubsystem_NoRegister();
// End Cross Module References
	void UUVEditorUISubsystem::StaticRegisterNativesUUVEditorUISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorUISubsystem);
	UClass* Z_Construct_UClass_UUVEditorUISubsystem_NoRegister()
	{
		return UUVEditorUISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorUISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorUISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetEditorUISubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorUISubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Interchange layer to manage built in tab locations within the editor's layout. **/" },
		{ "IncludePath", "UVEditorModeUILayer.h" },
		{ "ModuleRelativePath", "Public/UVEditorModeUILayer.h" },
		{ "ToolTip", "Interchange layer to manage built in tab locations within the editor's layout. *" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorUISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorUISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorUISubsystem_Statics::ClassParams = {
		&UUVEditorUISubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorUISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorUISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorUISubsystem()
	{
		if (!Z_Registration_Info_UClass_UUVEditorUISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorUISubsystem.OuterSingleton, Z_Construct_UClass_UUVEditorUISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorUISubsystem.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorUISubsystem>()
	{
		return UUVEditorUISubsystem::StaticClass();
	}
	UUVEditorUISubsystem::UUVEditorUISubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorUISubsystem);
	UUVEditorUISubsystem::~UUVEditorUISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeUILayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeUILayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorUISubsystem, UUVEditorUISubsystem::StaticClass, TEXT("UUVEditorUISubsystem"), &Z_Registration_Info_UClass_UUVEditorUISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorUISubsystem), 4232612332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeUILayer_h_683873387(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeUILayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorModeUILayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
