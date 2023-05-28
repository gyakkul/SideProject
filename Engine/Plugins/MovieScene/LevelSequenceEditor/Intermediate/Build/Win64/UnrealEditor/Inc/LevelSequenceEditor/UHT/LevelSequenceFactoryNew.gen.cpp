// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/LevelSequenceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceFactoryNew() {}
// Cross Module References
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceFactoryNew();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	void ULevelSequenceFactoryNew::StaticRegisterNativesULevelSequenceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceFactoryNew);
	UClass* Z_Construct_UClass_ULevelSequenceFactoryNew_NoRegister()
	{
		return ULevelSequenceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements a factory for ULevelSequence objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/LevelSequenceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/LevelSequenceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for ULevelSequence objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::ClassParams = {
		&ULevelSequenceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceFactoryNew.OuterSingleton, Z_Construct_UClass_ULevelSequenceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceFactoryNew.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<ULevelSequenceFactoryNew>()
	{
		return ULevelSequenceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceFactoryNew);
	ULevelSequenceFactoryNew::~ULevelSequenceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceFactoryNew, ULevelSequenceFactoryNew::StaticClass, TEXT("ULevelSequenceFactoryNew"), &Z_Registration_Info_UClass_ULevelSequenceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceFactoryNew), 446931901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_2826776145(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Factories_LevelSequenceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
