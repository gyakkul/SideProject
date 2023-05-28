// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/CameraAnimationSequenceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraAnimationSequenceFactoryNew() {}
// Cross Module References
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UCameraAnimationSequenceFactoryNew();
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_TemplateSequenceEditor();
// End Cross Module References
	void UCameraAnimationSequenceFactoryNew::StaticRegisterNativesUCameraAnimationSequenceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraAnimationSequenceFactoryNew);
	UClass* Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_NoRegister()
	{
		return UCameraAnimationSequenceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UCameraAnimationSequence objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/CameraAnimationSequenceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/CameraAnimationSequenceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UCameraAnimationSequence objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraAnimationSequenceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::ClassParams = {
		&UCameraAnimationSequenceFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraAnimationSequenceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UCameraAnimationSequenceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraAnimationSequenceFactoryNew.OuterSingleton, Z_Construct_UClass_UCameraAnimationSequenceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraAnimationSequenceFactoryNew.OuterSingleton;
	}
	template<> TEMPLATESEQUENCEEDITOR_API UClass* StaticClass<UCameraAnimationSequenceFactoryNew>()
	{
		return UCameraAnimationSequenceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraAnimationSequenceFactoryNew);
	UCameraAnimationSequenceFactoryNew::~UCameraAnimationSequenceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraAnimationSequenceFactoryNew, UCameraAnimationSequenceFactoryNew::StaticClass, TEXT("UCameraAnimationSequenceFactoryNew"), &Z_Registration_Info_UClass_UCameraAnimationSequenceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraAnimationSequenceFactoryNew), 2448043226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_623784429(TEXT("/Script/TemplateSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_CameraAnimationSequenceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
