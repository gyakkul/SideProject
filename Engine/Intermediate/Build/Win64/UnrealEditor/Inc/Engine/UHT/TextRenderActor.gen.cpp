// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextRenderActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextRenderActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor();
	ENGINE_API UClass* Z_Construct_UClass_ATextRenderActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATextRenderActor::StaticRegisterNativesATextRenderActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATextRenderActor);
	UClass* Z_Construct_UClass_ATextRenderActor_NoRegister()
	{
		return ATextRenderActor::StaticClass();
	}
	struct Z_Construct_UClass_ATextRenderActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextRender;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATextRenderActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/TextRenderActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TextRenderActor" },
		{ "Comment", "/** Component to render a text in 3d with a font */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Rendering|Components|TextRender" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Component to render a text in 3d with a font" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATextRenderActor, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to the billboard component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TextRenderActor.h" },
		{ "ToolTip", "Reference to the billboard component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATextRenderActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATextRenderActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_TextRender,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATextRenderActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATextRenderActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATextRenderActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATextRenderActor_Statics::ClassParams = {
		&ATextRenderActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATextRenderActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATextRenderActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATextRenderActor()
	{
		if (!Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton, Z_Construct_UClass_ATextRenderActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATextRenderActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATextRenderActor>()
	{
		return ATextRenderActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATextRenderActor);
	ATextRenderActor::~ATextRenderActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATextRenderActor, ATextRenderActor::StaticClass, TEXT("ATextRenderActor"), &Z_Registration_Info_UClass_ATextRenderActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATextRenderActor), 806799655U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_618056853(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextRenderActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
