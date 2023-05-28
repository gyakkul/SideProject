// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RichTextBlockDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichTextBlockDecorator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void URichTextBlockDecorator::StaticRegisterNativesURichTextBlockDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichTextBlockDecorator);
	UClass* Z_Construct_UClass_URichTextBlockDecorator_NoRegister()
	{
		return URichTextBlockDecorator::StaticClass();
	}
	struct Z_Construct_UClass_URichTextBlockDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichTextBlockDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Components/RichTextBlockDecorator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/RichTextBlockDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichTextBlockDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichTextBlockDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URichTextBlockDecorator_Statics::ClassParams = {
		&URichTextBlockDecorator::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichTextBlockDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichTextBlockDecorator()
	{
		if (!Z_Registration_Info_UClass_URichTextBlockDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichTextBlockDecorator.OuterSingleton, Z_Construct_UClass_URichTextBlockDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URichTextBlockDecorator.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<URichTextBlockDecorator>()
	{
		return URichTextBlockDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichTextBlockDecorator);
	URichTextBlockDecorator::~URichTextBlockDecorator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URichTextBlockDecorator, URichTextBlockDecorator::StaticClass, TEXT("URichTextBlockDecorator"), &Z_Registration_Info_UClass_URichTextBlockDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichTextBlockDecorator), 2846274321U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockDecorator_h_3946666451(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RichTextBlockDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
