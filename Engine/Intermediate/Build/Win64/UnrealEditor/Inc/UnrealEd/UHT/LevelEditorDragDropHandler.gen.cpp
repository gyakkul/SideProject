// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/LevelEditorDragDropHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorDragDropHandler() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorDragDropHandler();
	UNREALED_API UClass* Z_Construct_UClass_ULevelEditorDragDropHandler_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULevelEditorDragDropHandler::StaticRegisterNativesULevelEditorDragDropHandler()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorDragDropHandler);
	UClass* Z_Construct_UClass_ULevelEditorDragDropHandler_NoRegister()
	{
		return ULevelEditorDragDropHandler::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorDragDropHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelEditorDragDropHandler.h" },
		{ "ModuleRelativePath", "Public/LevelEditorDragDropHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorDragDropHandler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::ClassParams = {
		&ULevelEditorDragDropHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorDragDropHandler()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorDragDropHandler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorDragDropHandler.OuterSingleton, Z_Construct_UClass_ULevelEditorDragDropHandler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorDragDropHandler.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULevelEditorDragDropHandler>()
	{
		return ULevelEditorDragDropHandler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorDragDropHandler);
	ULevelEditorDragDropHandler::~ULevelEditorDragDropHandler() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_LevelEditorDragDropHandler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_LevelEditorDragDropHandler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelEditorDragDropHandler, ULevelEditorDragDropHandler::StaticClass, TEXT("ULevelEditorDragDropHandler"), &Z_Registration_Info_UClass_ULevelEditorDragDropHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorDragDropHandler), 1732809809U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_LevelEditorDragDropHandler_h_3169342333(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_LevelEditorDragDropHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_LevelEditorDragDropHandler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
