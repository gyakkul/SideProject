// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FilmOverlayToolkit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilmOverlayToolkit() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UFilmOverlayToolkit();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_UFilmOverlayToolkit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	void UFilmOverlayToolkit::StaticRegisterNativesUFilmOverlayToolkit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilmOverlayToolkit);
	UClass* Z_Construct_UClass_UFilmOverlayToolkit_NoRegister()
	{
		return UFilmOverlayToolkit::StaticClass();
	}
	struct Z_Construct_UClass_UFilmOverlayToolkit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilmOverlayToolkit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilmOverlayToolkit_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Tool kit for film overlays */" },
		{ "IncludePath", "FilmOverlayToolkit.h" },
		{ "ModuleRelativePath", "Public/FilmOverlayToolkit.h" },
		{ "ToolTip", "Tool kit for film overlays" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilmOverlayToolkit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilmOverlayToolkit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilmOverlayToolkit_Statics::ClassParams = {
		&UFilmOverlayToolkit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFilmOverlayToolkit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilmOverlayToolkit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilmOverlayToolkit()
	{
		if (!Z_Registration_Info_UClass_UFilmOverlayToolkit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilmOverlayToolkit.OuterSingleton, Z_Construct_UClass_UFilmOverlayToolkit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilmOverlayToolkit.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<UFilmOverlayToolkit>()
	{
		return UFilmOverlayToolkit::StaticClass();
	}
	UFilmOverlayToolkit::UFilmOverlayToolkit(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilmOverlayToolkit);
	UFilmOverlayToolkit::~UFilmOverlayToolkit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilmOverlayToolkit, UFilmOverlayToolkit::StaticClass, TEXT("UFilmOverlayToolkit"), &Z_Registration_Info_UClass_UFilmOverlayToolkit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilmOverlayToolkit), 3215889586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_730949344(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Public_FilmOverlayToolkit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
