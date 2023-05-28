// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MovieSceneWidgetMaterialSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneWidgetMaterialSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem();
	UMG_API UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UMovieSceneWidgetMaterialSystem::StaticRegisterNativesUMovieSceneWidgetMaterialSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneWidgetMaterialSystem);
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_NoRegister()
	{
		return UMovieSceneWidgetMaterialSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE::MovieScene\n" },
		{ "IncludePath", "Animation/MovieSceneWidgetMaterialSystem.h" },
		{ "ModuleRelativePath", "Public/Animation/MovieSceneWidgetMaterialSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE::MovieScene" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePreAnimatedStateSystemInterface_NoRegister, (int32)VTABLE_OFFSET(UMovieSceneWidgetMaterialSystem, IMovieScenePreAnimatedStateSystemInterface), false },  // 1390211309
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneWidgetMaterialSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::ClassParams = {
		&UMovieSceneWidgetMaterialSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneWidgetMaterialSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneWidgetMaterialSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UMovieSceneWidgetMaterialSystem>()
	{
		return UMovieSceneWidgetMaterialSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneWidgetMaterialSystem);
	UMovieSceneWidgetMaterialSystem::~UMovieSceneWidgetMaterialSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneWidgetMaterialSystem, UMovieSceneWidgetMaterialSystem::StaticClass, TEXT("UMovieSceneWidgetMaterialSystem"), &Z_Registration_Info_UClass_UMovieSceneWidgetMaterialSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneWidgetMaterialSystem), 590990635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_3213557415(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_MovieSceneWidgetMaterialSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
