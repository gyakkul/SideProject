// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBBaseUITab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBBaseUITab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBDefaultUITemplate();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBDefaultUITemplate_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBPaletteTabUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBPaletteTabUI_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBToolBarTabUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBToolBarTabUI_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBVerticalToolBarTabUI();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBVerticalToolBarTabUI_NoRegister();
// End Cross Module References
	void UUTBDefaultUITemplate::StaticRegisterNativesUUTBDefaultUITemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBDefaultUITemplate);
	UClass* Z_Construct_UClass_UUTBDefaultUITemplate_NoRegister()
	{
		return UUTBDefaultUITemplate::StaticClass();
	}
	struct Z_Construct_UClass_UUTBDefaultUITemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBDefaultUITemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBDefaultUITemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UTBBaseUITab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUITab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBDefaultUITemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBDefaultUITemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBDefaultUITemplate_Statics::ClassParams = {
		&UUTBDefaultUITemplate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUTBDefaultUITemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBDefaultUITemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBDefaultUITemplate()
	{
		if (!Z_Registration_Info_UClass_UUTBDefaultUITemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBDefaultUITemplate.OuterSingleton, Z_Construct_UClass_UUTBDefaultUITemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBDefaultUITemplate.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBDefaultUITemplate>()
	{
		return UUTBDefaultUITemplate::StaticClass();
	}
	UUTBDefaultUITemplate::UUTBDefaultUITemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBDefaultUITemplate);
	UUTBDefaultUITemplate::~UUTBDefaultUITemplate() {}
	void UUTBToolBarTabUI::StaticRegisterNativesUUTBToolBarTabUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBToolBarTabUI);
	UClass* Z_Construct_UClass_UUTBToolBarTabUI_NoRegister()
	{
		return UUTBToolBarTabUI::StaticClass();
	}
	struct Z_Construct_UClass_UUTBToolBarTabUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBToolBarTabUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBDefaultUITemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBToolBarTabUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseUITab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUITab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBToolBarTabUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBToolBarTabUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBToolBarTabUI_Statics::ClassParams = {
		&UUTBToolBarTabUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUTBToolBarTabUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBToolBarTabUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBToolBarTabUI()
	{
		if (!Z_Registration_Info_UClass_UUTBToolBarTabUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBToolBarTabUI.OuterSingleton, Z_Construct_UClass_UUTBToolBarTabUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBToolBarTabUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBToolBarTabUI>()
	{
		return UUTBToolBarTabUI::StaticClass();
	}
	UUTBToolBarTabUI::UUTBToolBarTabUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBToolBarTabUI);
	UUTBToolBarTabUI::~UUTBToolBarTabUI() {}
	void UUTBPaletteTabUI::StaticRegisterNativesUUTBPaletteTabUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBPaletteTabUI);
	UClass* Z_Construct_UClass_UUTBPaletteTabUI_NoRegister()
	{
		return UUTBPaletteTabUI::StaticClass();
	}
	struct Z_Construct_UClass_UUTBPaletteTabUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBPaletteTabUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBToolBarTabUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBPaletteTabUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseUITab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUITab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBPaletteTabUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBPaletteTabUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBPaletteTabUI_Statics::ClassParams = {
		&UUTBPaletteTabUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUTBPaletteTabUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBPaletteTabUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBPaletteTabUI()
	{
		if (!Z_Registration_Info_UClass_UUTBPaletteTabUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBPaletteTabUI.OuterSingleton, Z_Construct_UClass_UUTBPaletteTabUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBPaletteTabUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBPaletteTabUI>()
	{
		return UUTBPaletteTabUI::StaticClass();
	}
	UUTBPaletteTabUI::UUTBPaletteTabUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBPaletteTabUI);
	UUTBPaletteTabUI::~UUTBPaletteTabUI() {}
	void UUTBVerticalToolBarTabUI::StaticRegisterNativesUUTBVerticalToolBarTabUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBVerticalToolBarTabUI);
	UClass* Z_Construct_UClass_UUTBVerticalToolBarTabUI_NoRegister()
	{
		return UUTBVerticalToolBarTabUI::StaticClass();
	}
	struct Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBToolBarTabUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseUITab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUITab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBVerticalToolBarTabUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::ClassParams = {
		&UUTBVerticalToolBarTabUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBVerticalToolBarTabUI()
	{
		if (!Z_Registration_Info_UClass_UUTBVerticalToolBarTabUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBVerticalToolBarTabUI.OuterSingleton, Z_Construct_UClass_UUTBVerticalToolBarTabUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBVerticalToolBarTabUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBVerticalToolBarTabUI>()
	{
		return UUTBVerticalToolBarTabUI::StaticClass();
	}
	UUTBVerticalToolBarTabUI::UUTBVerticalToolBarTabUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBVerticalToolBarTabUI);
	UUTBVerticalToolBarTabUI::~UUTBVerticalToolBarTabUI() {}
	void UUTBSlimHorizontalToolBarTabUI::StaticRegisterNativesUUTBSlimHorizontalToolBarTabUI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBSlimHorizontalToolBarTabUI);
	UClass* Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_NoRegister()
	{
		return UUTBSlimHorizontalToolBarTabUI::StaticClass();
	}
	struct Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBToolBarTabUI,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseUITab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseUITab.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBSlimHorizontalToolBarTabUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::ClassParams = {
		&UUTBSlimHorizontalToolBarTabUI::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI()
	{
		if (!Z_Registration_Info_UClass_UUTBSlimHorizontalToolBarTabUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBSlimHorizontalToolBarTabUI.OuterSingleton, Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBSlimHorizontalToolBarTabUI.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBSlimHorizontalToolBarTabUI>()
	{
		return UUTBSlimHorizontalToolBarTabUI::StaticClass();
	}
	UUTBSlimHorizontalToolBarTabUI::UUTBSlimHorizontalToolBarTabUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBSlimHorizontalToolBarTabUI);
	UUTBSlimHorizontalToolBarTabUI::~UUTBSlimHorizontalToolBarTabUI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUITab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUITab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBDefaultUITemplate, UUTBDefaultUITemplate::StaticClass, TEXT("UUTBDefaultUITemplate"), &Z_Registration_Info_UClass_UUTBDefaultUITemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBDefaultUITemplate), 256721083U) },
		{ Z_Construct_UClass_UUTBToolBarTabUI, UUTBToolBarTabUI::StaticClass, TEXT("UUTBToolBarTabUI"), &Z_Registration_Info_UClass_UUTBToolBarTabUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBToolBarTabUI), 624108436U) },
		{ Z_Construct_UClass_UUTBPaletteTabUI, UUTBPaletteTabUI::StaticClass, TEXT("UUTBPaletteTabUI"), &Z_Registration_Info_UClass_UUTBPaletteTabUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBPaletteTabUI), 3329171999U) },
		{ Z_Construct_UClass_UUTBVerticalToolBarTabUI, UUTBVerticalToolBarTabUI::StaticClass, TEXT("UUTBVerticalToolBarTabUI"), &Z_Registration_Info_UClass_UUTBVerticalToolBarTabUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBVerticalToolBarTabUI), 1523115541U) },
		{ Z_Construct_UClass_UUTBSlimHorizontalToolBarTabUI, UUTBSlimHorizontalToolBarTabUI::StaticClass, TEXT("UUTBSlimHorizontalToolBarTabUI"), &Z_Registration_Info_UClass_UUTBSlimHorizontalToolBarTabUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBSlimHorizontalToolBarTabUI), 2748189394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUITab_h_2287158118(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUITab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseUITab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
