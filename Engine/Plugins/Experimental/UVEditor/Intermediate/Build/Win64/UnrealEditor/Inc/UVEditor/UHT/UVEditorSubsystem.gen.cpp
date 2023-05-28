// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorSubsystem() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTargetManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditor();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorSubsystem();
	UVEDITOR_API UClass* Z_Construct_UClass_UUVEditorSubsystem_NoRegister();
// End Cross Module References
	void UUVEditorSubsystem::StaticRegisterNativesUUVEditorSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorSubsystem);
	UClass* Z_Construct_UClass_UUVEditorSubsystem_NoRegister()
	{
		return UUVEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolTargetManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolTargetManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The subsystem is meant to hold any UV editor operations that are not UI related (those are\n * handled by the toolkit); however, in our case, most of our operations are wrapped up inside\n * tools and the UV mode. \n * Instead, the subsystem deals with some global UV asset editor things- it manages existing\n * instances (we can't rely on the asset editor subsystem for this because the UV editor is\n * not the primary editor for meshes), and figures out what we can launch the editor on.\n */" },
		{ "IncludePath", "UVEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/UVEditorSubsystem.h" },
		{ "ToolTip", "The subsystem is meant to hold any UV editor operations that are not UI related (those are\nhandled by the toolkit); however, in our case, most of our operations are wrapped up inside\ntools and the UV mode.\nInstead, the subsystem deals with some global UV asset editor things- it manages existing\ninstances (we can't rely on the asset editor subsystem for this because the UV editor is\nnot the primary editor for meshes), and figures out what we can launch the editor on." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData[] = {
		{ "Comment", "/**\n\x09 * Used to let the subsystem figure out whether targets are valid. New factories should be\n\x09 * added here in Initialize() as they are developed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/UVEditorSubsystem.h" },
		{ "ToolTip", "Used to let the subsystem figure out whether targets are valid. New factories should be\nadded here in Initialize() as they are developed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSubsystem_Statics::NewProp_ToolTargetManager = { "ToolTargetManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSubsystem, ToolTargetManager), Z_Construct_UClass_UToolTargetManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSubsystem_Statics::NewProp_ToolTargetManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSubsystem_Statics::NewProp_ToolTargetManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorSubsystem_Statics::ClassParams = {
		&UUVEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UUVEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorSubsystem.OuterSingleton, Z_Construct_UClass_UUVEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorSubsystem.OuterSingleton;
	}
	template<> UVEDITOR_API UClass* StaticClass<UUVEditorSubsystem>()
	{
		return UUVEditorSubsystem::StaticClass();
	}
	UUVEditorSubsystem::UUVEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorSubsystem);
	UUVEditorSubsystem::~UUVEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorSubsystem, UUVEditorSubsystem::StaticClass, TEXT("UUVEditorSubsystem"), &Z_Registration_Info_UClass_UUVEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorSubsystem), 3107492187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_3120999815(TEXT("/Script/UVEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditor_Public_UVEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
