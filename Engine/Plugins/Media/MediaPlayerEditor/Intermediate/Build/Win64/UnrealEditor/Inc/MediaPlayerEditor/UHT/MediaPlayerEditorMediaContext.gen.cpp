// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Shared/MediaPlayerEditorMediaContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlayerEditorMediaContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorMediaContext();
	MEDIAPLAYEREDITOR_API UClass* Z_Construct_UClass_UMediaPlayerEditorMediaContext_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuContextBase();
	UPackage* Z_Construct_UPackage__Script_MediaPlayerEditor();
// End Cross Module References
	void UMediaPlayerEditorMediaContext::StaticRegisterNativesUMediaPlayerEditorMediaContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlayerEditorMediaContext);
	UClass* Z_Construct_UClass_UMediaPlayerEditorMediaContext_NoRegister()
	{
		return UMediaPlayerEditorMediaContext::StaticClass();
	}
	struct Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleSetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleSetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuContextBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaPlayerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Shared/MediaPlayerEditorMediaContext.h" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorMediaContext.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_SelectedAsset_MetaData[] = {
		{ "Category", "Editor Menus" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorMediaContext.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_SelectedAsset = { "SelectedAsset", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerEditorMediaContext, SelectedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_SelectedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_SelectedAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_StyleSetName_MetaData[] = {
		{ "Category", "Editor Menus" },
		{ "ModuleRelativePath", "Private/Shared/MediaPlayerEditorMediaContext.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_StyleSetName = { "StyleSetName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaPlayerEditorMediaContext, StyleSetName), METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_StyleSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_StyleSetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_SelectedAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::NewProp_StyleSetName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlayerEditorMediaContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::ClassParams = {
		&UMediaPlayerEditorMediaContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaPlayerEditorMediaContext()
	{
		if (!Z_Registration_Info_UClass_UMediaPlayerEditorMediaContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlayerEditorMediaContext.OuterSingleton, Z_Construct_UClass_UMediaPlayerEditorMediaContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaPlayerEditorMediaContext.OuterSingleton;
	}
	template<> MEDIAPLAYEREDITOR_API UClass* StaticClass<UMediaPlayerEditorMediaContext>()
	{
		return UMediaPlayerEditorMediaContext::StaticClass();
	}
	UMediaPlayerEditorMediaContext::UMediaPlayerEditorMediaContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlayerEditorMediaContext);
	UMediaPlayerEditorMediaContext::~UMediaPlayerEditorMediaContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlayerEditorMediaContext, UMediaPlayerEditorMediaContext::StaticClass, TEXT("UMediaPlayerEditorMediaContext"), &Z_Registration_Info_UClass_UMediaPlayerEditorMediaContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlayerEditorMediaContext), 1019475133U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_2713033804(TEXT("/Script/MediaPlayerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlayerEditor_Source_MediaPlayerEditor_Private_Shared_MediaPlayerEditorMediaContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
