// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonVisibilitySwitcherSlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonVisibilitySwitcherSlot() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisibilitySwitcherSlot();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonVisibilitySwitcherSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlaySlot();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonVisibilitySwitcherSlot::StaticRegisterNativesUCommonVisibilitySwitcherSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonVisibilitySwitcherSlot);
	UClass* Z_Construct_UClass_UCommonVisibilitySwitcherSlot_NoRegister()
	{
		return UCommonVisibilitySwitcherSlot::StaticClass();
	}
	struct Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOverlaySlot,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonVisibilitySwitcherSlot.h" },
		{ "ModuleRelativePath", "Public/CommonVisibilitySwitcherSlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonVisibilitySwitcherSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::ClassParams = {
		&UCommonVisibilitySwitcherSlot::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonVisibilitySwitcherSlot()
	{
		if (!Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.OuterSingleton, Z_Construct_UClass_UCommonVisibilitySwitcherSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonVisibilitySwitcherSlot>()
	{
		return UCommonVisibilitySwitcherSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonVisibilitySwitcherSlot);
	UCommonVisibilitySwitcherSlot::~UCommonVisibilitySwitcherSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcherSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcherSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonVisibilitySwitcherSlot, UCommonVisibilitySwitcherSlot::StaticClass, TEXT("UCommonVisibilitySwitcherSlot"), &Z_Registration_Info_UClass_UCommonVisibilitySwitcherSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonVisibilitySwitcherSlot), 521884548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcherSlot_h_663365854(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcherSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonVisibilitySwitcherSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
