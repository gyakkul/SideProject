// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Factories/DMXGDTFFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXGDTFFactory() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXGDTFFactory();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXGDTFFactory_NoRegister();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXGDTFImportUI_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXGDTFFactory::StaticRegisterNativesUDMXGDTFFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXGDTFFactory);
	UClass* Z_Construct_UClass_UDMXGDTFFactory_NoRegister()
	{
		return UDMXGDTFFactory::StaticClass();
	}
	struct Z_Construct_UClass_UDMXGDTFFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportUI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXGDTFFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DMXGDTFFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXGDTFFactory_Statics::NewProp_ImportUI_MetaData[] = {
		{ "ModuleRelativePath", "Private/Factories/DMXGDTFFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXGDTFFactory_Statics::NewProp_ImportUI = { "ImportUI", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXGDTFFactory, ImportUI), Z_Construct_UClass_UDMXGDTFImportUI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXGDTFFactory_Statics::NewProp_ImportUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFFactory_Statics::NewProp_ImportUI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXGDTFFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXGDTFFactory_Statics::NewProp_ImportUI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXGDTFFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXGDTFFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXGDTFFactory_Statics::ClassParams = {
		&UDMXGDTFFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXGDTFFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFFactory_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXGDTFFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXGDTFFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXGDTFFactory()
	{
		if (!Z_Registration_Info_UClass_UDMXGDTFFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXGDTFFactory.OuterSingleton, Z_Construct_UClass_UDMXGDTFFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXGDTFFactory.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXGDTFFactory>()
	{
		return UDMXGDTFFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXGDTFFactory);
	UDMXGDTFFactory::~UDMXGDTFFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXGDTFFactory, UDMXGDTFFactory::StaticClass, TEXT("UDMXGDTFFactory"), &Z_Registration_Info_UClass_UDMXGDTFFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXGDTFFactory), 3858760662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFFactory_h_3030151076(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Private_Factories_DMXGDTFFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
