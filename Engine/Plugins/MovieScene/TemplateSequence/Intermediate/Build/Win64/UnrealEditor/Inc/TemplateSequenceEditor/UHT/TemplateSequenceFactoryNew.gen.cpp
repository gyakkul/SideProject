// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/TemplateSequenceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequenceFactoryNew() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceFactoryNew();
	TEMPLATESEQUENCEEDITOR_API UClass* Z_Construct_UClass_UTemplateSequenceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_TemplateSequenceEditor();
// End Cross Module References
	void UTemplateSequenceFactoryNew::StaticRegisterNativesUTemplateSequenceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTemplateSequenceFactoryNew);
	UClass* Z_Construct_UClass_UTemplateSequenceFactoryNew_NoRegister()
	{
		return UTemplateSequenceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BoundActorClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UTemplateSequence objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/TemplateSequenceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/Factories/TemplateSequenceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for UTemplateSequence objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::NewProp_BoundActorClass_MetaData[] = {
		{ "Category", "TemplateSequenceFactory" },
		{ "Comment", "// The root object binding class of the created template sequence.\n" },
		{ "ModuleRelativePath", "Private/Factories/TemplateSequenceFactoryNew.h" },
		{ "ToolTip", "The root object binding class of the created template sequence." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::NewProp_BoundActorClass = { "BoundActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTemplateSequenceFactoryNew, BoundActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::NewProp_BoundActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::NewProp_BoundActorClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::NewProp_BoundActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequenceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::ClassParams = {
		&UTemplateSequenceFactoryNew::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequenceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UTemplateSequenceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTemplateSequenceFactoryNew.OuterSingleton, Z_Construct_UClass_UTemplateSequenceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTemplateSequenceFactoryNew.OuterSingleton;
	}
	template<> TEMPLATESEQUENCEEDITOR_API UClass* StaticClass<UTemplateSequenceFactoryNew>()
	{
		return UTemplateSequenceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequenceFactoryNew);
	UTemplateSequenceFactoryNew::~UTemplateSequenceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTemplateSequenceFactoryNew, UTemplateSequenceFactoryNew::StaticClass, TEXT("UTemplateSequenceFactoryNew"), &Z_Registration_Info_UClass_UTemplateSequenceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTemplateSequenceFactoryNew), 3624520168U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_494663051(TEXT("/Script/TemplateSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequenceEditor_Private_Factories_TemplateSequenceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
