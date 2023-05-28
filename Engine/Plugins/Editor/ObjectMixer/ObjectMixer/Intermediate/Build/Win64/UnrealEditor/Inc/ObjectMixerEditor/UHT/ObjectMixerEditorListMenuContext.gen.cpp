// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Views/Widgets/ObjectMixerEditorListMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMixerEditorListMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorListMenuContext();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerEditorListMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ObjectMixerEditor();
// End Cross Module References
	void UObjectMixerEditorListMenuContext::StaticRegisterNativesUObjectMixerEditorListMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerEditorListMenuContext);
	UClass* Z_Construct_UClass_UObjectMixerEditorListMenuContext_NoRegister()
	{
		return UObjectMixerEditorListMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Views/Widgets/ObjectMixerEditorListMenuContext.h" },
		{ "ModuleRelativePath", "Public/Views/Widgets/ObjectMixerEditorListMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerEditorListMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::ClassParams = {
		&UObjectMixerEditorListMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerEditorListMenuContext()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerEditorListMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerEditorListMenuContext.OuterSingleton, Z_Construct_UClass_UObjectMixerEditorListMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerEditorListMenuContext.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerEditorListMenuContext>()
	{
		return UObjectMixerEditorListMenuContext::StaticClass();
	}
	UObjectMixerEditorListMenuContext::UObjectMixerEditorListMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerEditorListMenuContext);
	UObjectMixerEditorListMenuContext::~UObjectMixerEditorListMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorListMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorListMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectMixerEditorListMenuContext, UObjectMixerEditorListMenuContext::StaticClass, TEXT("UObjectMixerEditorListMenuContext"), &Z_Registration_Info_UClass_UObjectMixerEditorListMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerEditorListMenuContext), 3114727820U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorListMenuContext_h_524592454(TEXT("/Script/ObjectMixerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorListMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_Views_Widgets_ObjectMixerEditorListMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
