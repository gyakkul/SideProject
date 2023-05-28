// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Binding/WidgetFieldNotificationExtension.h"
#include "Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetFieldNotificationExtension() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
	UMG_API UClass* Z_Construct_UClass_UWidgetFieldNotificationExtension();
	UMG_API UClass* Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UWidgetFieldNotificationExtension::StaticRegisterNativesUWidgetFieldNotificationExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetFieldNotificationExtension);
	UClass* Z_Construct_UClass_UWidgetFieldNotificationExtension_NoRegister()
	{
		return UWidgetFieldNotificationExtension::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidgetExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/WidgetFieldNotificationExtension.h" },
		{ "ModuleRelativePath", "Private/Binding/WidgetFieldNotificationExtension.h" },
		{ "NotBlueprintType", "true" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetFieldNotificationExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::ClassParams = {
		&UWidgetFieldNotificationExtension::StaticClass,
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
		0x002800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetFieldNotificationExtension()
	{
		if (!Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton, Z_Construct_UClass_UWidgetFieldNotificationExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetFieldNotificationExtension.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetFieldNotificationExtension>()
	{
		return UWidgetFieldNotificationExtension::StaticClass();
	}
	UWidgetFieldNotificationExtension::UWidgetFieldNotificationExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetFieldNotificationExtension);
	UWidgetFieldNotificationExtension::~UWidgetFieldNotificationExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetFieldNotificationExtension, UWidgetFieldNotificationExtension::StaticClass, TEXT("UWidgetFieldNotificationExtension"), &Z_Registration_Info_UClass_UWidgetFieldNotificationExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetFieldNotificationExtension), 2032219971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h_3391857027(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Private_Binding_WidgetFieldNotificationExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
