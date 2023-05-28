// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Extensions/UserWidgetExtension.h"
#include "Blueprint/UserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserWidgetExtension() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UUserWidgetExtension::StaticRegisterNativesUUserWidgetExtension()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserWidgetExtension);
	UClass* Z_Construct_UClass_UUserWidgetExtension_NoRegister()
	{
		return UUserWidgetExtension::StaticClass();
	}
	struct Z_Construct_UClass_UUserWidgetExtension_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserWidgetExtension_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UserWidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets.\n */" },
		{ "IncludePath", "Extensions/UserWidgetExtension.h" },
		{ "ModuleRelativePath", "Public/Extensions/UserWidgetExtension.h" },
		{ "ToolTip", "UserWidgetExtension is the base class for components that define reusable behavior that can be added to different types of Widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserWidgetExtension_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserWidgetExtension>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams = {
		&UUserWidgetExtension::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserWidgetExtension_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserWidgetExtension()
	{
		if (!Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton, Z_Construct_UClass_UUserWidgetExtension_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserWidgetExtension.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUserWidgetExtension>()
	{
		return UUserWidgetExtension::StaticClass();
	}
	UUserWidgetExtension::UUserWidgetExtension(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserWidgetExtension);
	UUserWidgetExtension::~UUserWidgetExtension() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserWidgetExtension, UUserWidgetExtension::StaticClass, TEXT("UUserWidgetExtension"), &Z_Registration_Info_UClass_UUserWidgetExtension, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserWidgetExtension), 2185181958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_2448822110(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Extensions_UserWidgetExtension_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
