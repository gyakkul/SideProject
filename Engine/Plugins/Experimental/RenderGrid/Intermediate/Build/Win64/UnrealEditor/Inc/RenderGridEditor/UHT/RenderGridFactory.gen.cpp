// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/RenderGridFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridBlueprintFactory();
	RENDERGRIDEDITOR_API UClass* Z_Construct_UClass_URenderGridBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RenderGridEditor();
// End Cross Module References
	void URenderGridBlueprintFactory::StaticRegisterNativesURenderGridBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridBlueprintFactory);
	UClass* Z_Construct_UClass_URenderGridBlueprintFactory_NoRegister()
	{
		return URenderGridBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGridEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The factory that creates URenderGridBlueprint (render grid) instances.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/RenderGridFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/RenderGridFactory.h" },
		{ "ToolTip", "The factory that creates URenderGridBlueprint (render grid) instances." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Render Grid Factory" },
		{ "Comment", "/** The parent class of the created blueprint. */" },
		{ "ModuleRelativePath", "Private/Factories/RenderGridFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URenderGridBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URenderGrid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridBlueprintFactory_Statics::ClassParams = {
		&URenderGridBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_URenderGridBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridBlueprintFactory.OuterSingleton, Z_Construct_UClass_URenderGridBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridBlueprintFactory.OuterSingleton;
	}
	template<> RENDERGRIDEDITOR_API UClass* StaticClass<URenderGridBlueprintFactory>()
	{
		return URenderGridBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridBlueprintFactory);
	URenderGridBlueprintFactory::~URenderGridBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridBlueprintFactory, URenderGridBlueprintFactory::StaticClass, TEXT("URenderGridBlueprintFactory"), &Z_Registration_Info_UClass_URenderGridBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridBlueprintFactory), 1397599068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridFactory_h_1919775280(TEXT("/Script/RenderGridEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGridEditor_Private_Factories_RenderGridFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
