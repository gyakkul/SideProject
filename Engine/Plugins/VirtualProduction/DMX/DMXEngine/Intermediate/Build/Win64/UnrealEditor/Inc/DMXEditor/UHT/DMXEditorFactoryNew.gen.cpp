// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Factories/DMXEditorFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEditorFactoryNew() {}
// Cross Module References
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorFactoryNew();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXEditorFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXEditorFactoryNew::StaticRegisterNativesUDMXEditorFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEditorFactoryNew);
	UClass* Z_Construct_UClass_UDMXEditorFactoryNew_NoRegister()
	{
		return UDMXEditorFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEditorFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEditorFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEditorFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/DMXEditorFactoryNew.h" },
		{ "ModuleRelativePath", "Public/Factories/DMXEditorFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEditorFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEditorFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEditorFactoryNew_Statics::ClassParams = {
		&UDMXEditorFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXEditorFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEditorFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEditorFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UDMXEditorFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEditorFactoryNew.OuterSingleton, Z_Construct_UClass_UDMXEditorFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEditorFactoryNew.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXEditorFactoryNew>()
	{
		return UDMXEditorFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEditorFactoryNew);
	UDMXEditorFactoryNew::~UDMXEditorFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEditorFactoryNew, UDMXEditorFactoryNew::StaticClass, TEXT("UDMXEditorFactoryNew"), &Z_Registration_Info_UClass_UDMXEditorFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEditorFactoryNew), 2729991546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_1381386236(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_Factories_DMXEditorFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
