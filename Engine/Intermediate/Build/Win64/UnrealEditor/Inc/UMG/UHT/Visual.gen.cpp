// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Visual.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisual() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_UVisual();
	UMG_API UClass* Z_Construct_UClass_UVisual_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UVisual::StaticRegisterNativesUVisual()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisual);
	UClass* Z_Construct_UClass_UVisual_NoRegister()
	{
		return UVisual::StaticClass();
	}
	struct Z_Construct_UClass_UVisual_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVisual_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The base class for elements in UMG: slots and widgets. */" },
		{ "IncludePath", "Components/Visual.h" },
		{ "ModuleRelativePath", "Public/Components/Visual.h" },
		{ "ToolTip", "The base class for elements in UMG: slots and widgets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVisual_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisual>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisual_Statics::ClassParams = {
		&UVisual::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVisual_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVisual()
	{
		if (!Z_Registration_Info_UClass_UVisual.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisual.OuterSingleton, Z_Construct_UClass_UVisual_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVisual.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UVisual>()
	{
		return UVisual::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVisual);
	UVisual::~UVisual() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVisual, UVisual::StaticClass, TEXT("UVisual"), &Z_Registration_Info_UClass_UVisual, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisual), 3429816360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_2083334530(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
