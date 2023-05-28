// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperGroupedSpriteActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperGroupedSpriteActor();
	PAPER2D_API UClass* Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void APaperGroupedSpriteActor::StaticRegisterNativesAPaperGroupedSpriteActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APaperGroupedSpriteActor);
	UClass* Z_Construct_UClass_APaperGroupedSpriteActor_NoRegister()
	{
		return APaperGroupedSpriteActor::StaticClass();
	}
	struct Z_Construct_UClass_APaperGroupedSpriteActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperGroupedSpriteActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A group of sprites that will be rendered and culled as a single unit\n *\n * This actor is created when you Merge several sprite components together.\n * it is just a thin wrapper around a UPaperGroupedSpriteComponent.\n */" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "PaperGroupedSpriteActor.h" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteActor.h" },
		{ "ToolTip", "A group of sprites that will be rendered and culled as a single unit\n\nThis actor is created when you Merge several sprite components together.\nit is just a thin wrapper around a UPaperGroupedSpriteComponent." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sprite,Rendering,Physics,Components|Sprite" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APaperGroupedSpriteActor, RenderComponent), Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperGroupedSpriteActor_Statics::NewProp_RenderComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperGroupedSpriteActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperGroupedSpriteActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APaperGroupedSpriteActor_Statics::ClassParams = {
		&APaperGroupedSpriteActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperGroupedSpriteActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperGroupedSpriteActor()
	{
		if (!Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton, Z_Construct_UClass_APaperGroupedSpriteActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APaperGroupedSpriteActor.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<APaperGroupedSpriteActor>()
	{
		return APaperGroupedSpriteActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperGroupedSpriteActor);
	APaperGroupedSpriteActor::~APaperGroupedSpriteActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APaperGroupedSpriteActor, APaperGroupedSpriteActor::StaticClass, TEXT("APaperGroupedSpriteActor"), &Z_Registration_Info_UClass_APaperGroupedSpriteActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APaperGroupedSpriteActor), 978502092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_819597189(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
