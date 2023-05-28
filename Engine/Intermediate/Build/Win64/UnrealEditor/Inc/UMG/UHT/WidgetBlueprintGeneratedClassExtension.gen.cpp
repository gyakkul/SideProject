// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Extensions/WidgetBlueprintGeneratedClassExtension.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClassExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UWidgetBlueprintGeneratedClassExtension::StaticRegisterNativesUWidgetBlueprintGeneratedClassExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintGeneratedClassExtension);
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister()
	{
		return UWidgetBlueprintGeneratedClassExtension::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * WidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets.\n */" },
		{ "IncludePath", "Extensions/WidgetBlueprintGeneratedClassExtension.h" },
		{ "ModuleRelativePath", "Public/Extensions/WidgetBlueprintGeneratedClassExtension.h" },
		{ "ToolTip", "WidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintGeneratedClassExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::ClassParams = {
		&UWidgetBlueprintGeneratedClassExtension::StaticClass,
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
		0x003000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetBlueprintGeneratedClassExtension>()
	{
		return UWidgetBlueprintGeneratedClassExtension::StaticClass();
	}
	UWidgetBlueprintGeneratedClassExtension::UWidgetBlueprintGeneratedClassExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintGeneratedClassExtension);
	UWidgetBlueprintGeneratedClassExtension::~UWidgetBlueprintGeneratedClassExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension, UWidgetBlueprintGeneratedClassExtension::StaticClass, TEXT("UWidgetBlueprintGeneratedClassExtension"), &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClassExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintGeneratedClassExtension), 834391094U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_4272741119(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_WidgetBlueprintGeneratedClassExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
