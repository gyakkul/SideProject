// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Systems/MovieSceneMaterialParameterSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialParameterSystem() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntitySystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterSystem();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialParameterSystem_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieSceneMaterialParameterSystem::StaticRegisterNativesUMovieSceneMaterialParameterSystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneMaterialParameterSystem);
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterSystem_NoRegister()
	{
		return UMovieSceneMaterialParameterSystem::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleBlenderSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DoubleBlenderSystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneEntitySystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * System responsible for tracking and animating material parameter entities.\n * Operates on the following component types from FMovieSceneTracksComponentTypes:\n *\n * Instantiation: Tracks any BoundMaterial with a ScalarParameterName, ColorParameterName or VectorParameterName.\n *                Manages adding BlendChannelInputs and Outputs where multiple entities animate the same parameter\n *                on the same bound material.\n *                BoundMaterials may be a UMaterialInstanceDynamic, or a UMaterialParameterCollectionInstance.\n *\n * Evaluation:    Visits any BoundMaterial with the supported parameter names and either a BlendChannelOutput component\n *                or no BlendChannelInput, and applies the resulting parameter to the bound material instance.\n */" },
		{ "IncludePath", "Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterSystem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "System responsible for tracking and animating material parameter entities.\nOperates on the following component types from FMovieSceneTracksComponentTypes:\n\nInstantiation: Tracks any BoundMaterial with a ScalarParameterName, ColorParameterName or VectorParameterName.\n               Manages adding BlendChannelInputs and Outputs where multiple entities animate the same parameter\n               on the same bound material.\n               BoundMaterials may be a UMaterialInstanceDynamic, or a UMaterialParameterCollectionInstance.\n\nEvaluation:    Visits any BoundMaterial with the supported parameter names and either a BlendChannelOutput component\n               or no BlendChannelInput, and applies the resulting parameter to the bound material instance." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::NewProp_DoubleBlenderSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/Systems/MovieSceneMaterialParameterSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::NewProp_DoubleBlenderSystem = { "DoubleBlenderSystem", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneMaterialParameterSystem, DoubleBlenderSystem), Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::NewProp_DoubleBlenderSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::NewProp_DoubleBlenderSystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::NewProp_DoubleBlenderSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialParameterSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::ClassParams = {
		&UMovieSceneMaterialParameterSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMaterialParameterSystem()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneMaterialParameterSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneMaterialParameterSystem.OuterSingleton, Z_Construct_UClass_UMovieSceneMaterialParameterSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneMaterialParameterSystem.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneMaterialParameterSystem>()
	{
		return UMovieSceneMaterialParameterSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialParameterSystem);
	UMovieSceneMaterialParameterSystem::~UMovieSceneMaterialParameterSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneMaterialParameterSystem, UMovieSceneMaterialParameterSystem::StaticClass, TEXT("UMovieSceneMaterialParameterSystem"), &Z_Registration_Info_UClass_UMovieSceneMaterialParameterSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneMaterialParameterSystem), 3197811269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_1942494411(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Systems_MovieSceneMaterialParameterSystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
