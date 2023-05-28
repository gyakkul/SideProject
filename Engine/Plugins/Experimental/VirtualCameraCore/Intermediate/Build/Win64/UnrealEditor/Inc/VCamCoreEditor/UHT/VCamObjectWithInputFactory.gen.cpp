// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/VCamObjectWithInputFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamObjectWithInputFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamObjectWithInputFactory();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamObjectWithInputFactory_NoRegister();
// End Cross Module References
	void UVCamObjectWithInputFactory::StaticRegisterNativesUVCamObjectWithInputFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamObjectWithInputFactory);
	UClass* Z_Construct_UClass_UVCamObjectWithInputFactory_NoRegister()
	{
		return UVCamObjectWithInputFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVCamObjectWithInputFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MappingPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MappingPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/VCamObjectWithInputFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/VCamObjectWithInputFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintVirtualSubjectFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/Factories/VCamObjectWithInputFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamObjectWithInputFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "VCam Modifier Factory" },
		{ "ModuleRelativePath", "Private/Factories/VCamObjectWithInputFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamObjectWithInputFactory, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_MappingPriority_MetaData[] = {
		{ "Category", "VCam Modifier Factory" },
		{ "ModuleRelativePath", "Private/Factories/VCamObjectWithInputFactory.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_MappingPriority = { "MappingPriority", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVCamObjectWithInputFactory, MappingPriority), METADATA_PARAMS(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_MappingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_MappingPriority_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::NewProp_MappingPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamObjectWithInputFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::ClassParams = {
		&UVCamObjectWithInputFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamObjectWithInputFactory()
	{
		if (!Z_Registration_Info_UClass_UVCamObjectWithInputFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamObjectWithInputFactory.OuterSingleton, Z_Construct_UClass_UVCamObjectWithInputFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamObjectWithInputFactory.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UVCamObjectWithInputFactory>()
	{
		return UVCamObjectWithInputFactory::StaticClass();
	}
	UVCamObjectWithInputFactory::UVCamObjectWithInputFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamObjectWithInputFactory);
	UVCamObjectWithInputFactory::~UVCamObjectWithInputFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamObjectWithInputFactory, UVCamObjectWithInputFactory::StaticClass, TEXT("UVCamObjectWithInputFactory"), &Z_Registration_Info_UClass_UVCamObjectWithInputFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamObjectWithInputFactory), 3008041046U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_1277097826(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Factories_VCamObjectWithInputFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
