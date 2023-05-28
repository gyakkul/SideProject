// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	UPackage* Z_Construct_UPackage__Script_EditorSubsystem();
// End Cross Module References
	void UEditorSubsystem::StaticRegisterNativesUEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorSubsystem);
	UClass* Z_Construct_UClass_UEditorSubsystem_NoRegister()
	{
		return UEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEditorSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the Editor\n *\n * UEditorSubsystems are dynamic and will be initialized when the module is loaded if necessary.\n * This means that after StartupModule() is called on the module containing a subsystem,\n * the subsystem collection with instantiate and initialize the subsystem automatically.\n * If the subsystem collection is created post module load then the instances will be created at\n * collection initialization time.\n */" },
		{ "IncludePath", "EditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorSubsystem.h" },
		{ "ToolTip", "UEditorSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Editor\n\nUEditorSubsystems are dynamic and will be initialized when the module is loaded if necessary.\nThis means that after StartupModule() is called on the module containing a subsystem,\nthe subsystem collection with instantiate and initialize the subsystem automatically.\nIf the subsystem collection is created post module load then the instances will be created at\ncollection initialization time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorSubsystem_Statics::ClassParams = {
		&UEditorSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorSubsystem.OuterSingleton, Z_Construct_UClass_UEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorSubsystem.OuterSingleton;
	}
	template<> EDITORSUBSYSTEM_API UClass* StaticClass<UEditorSubsystem>()
	{
		return UEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorSubsystem);
	UEditorSubsystem::~UEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorSubsystem, UEditorSubsystem::StaticClass, TEXT("UEditorSubsystem"), &Z_Registration_Info_UClass_UEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorSubsystem), 2305820933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_1074009423(TEXT("/Script/EditorSubsystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorSubsystem_Public_EditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
