// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DocumentationActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDocumentationActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor();
	ENGINE_API UClass* Z_Construct_UClass_ADocumentationActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ADocumentationActor::StaticRegisterNativesADocumentationActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADocumentationActor);
	UClass* Z_Construct_UClass_ADocumentationActor_NoRegister()
	{
		return ADocumentationActor::StaticClass();
	}
	struct Z_Construct_UClass_ADocumentationActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DocumentLink_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DocumentLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Billboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Billboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADocumentationActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Sprite MaterialSprite Actor Transform Tags Materials Rendering Components Blueprint bject Collision Display Physics Input Lighting Layers" },
		{ "IncludePath", "Engine/DocumentationActor.h" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData[] = {
		{ "Category", "HelpDocumentation" },
		{ "Comment", "/** Link to a help document. */" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
		{ "ToolTip", "Link to a help document." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink = { "DocumentLink", nullptr, (EPropertyFlags)0x0010040800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADocumentationActor, DocumentLink), METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Sprite" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/DocumentationActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard = { "Billboard", nullptr, (EPropertyFlags)0x00440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADocumentationActor, Billboard), Z_Construct_UClass_UMaterialBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADocumentationActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_DocumentLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADocumentationActor_Statics::NewProp_Billboard,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADocumentationActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADocumentationActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADocumentationActor_Statics::ClassParams = {
		&ADocumentationActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::PropPointers), 0),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADocumentationActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADocumentationActor()
	{
		if (!Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton, Z_Construct_UClass_ADocumentationActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADocumentationActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ADocumentationActor>()
	{
		return ADocumentationActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADocumentationActor);
	ADocumentationActor::~ADocumentationActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADocumentationActor, ADocumentationActor::StaticClass, TEXT("ADocumentationActor"), &Z_Registration_Info_UClass_ADocumentationActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADocumentationActor), 1520396594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_1111482059(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DocumentationActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
