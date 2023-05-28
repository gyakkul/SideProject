// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimSequenceConverterFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequenceConverterFactory() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimSequenceConverterFactory();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UAnimSequenceConverterFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnimSequenceFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UAnimSequenceConverterFactory::StaticRegisterNativesUAnimSequenceConverterFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequenceConverterFactory);
	UClass* Z_Construct_UClass_UAnimSequenceConverterFactory_NoRegister()
	{
		return UAnimSequenceConverterFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequenceConverterFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimSequenceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimSequenceConverterFactory.h" },
		{ "ModuleRelativePath", "Private/AnimSequenceConverterFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequenceConverterFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::ClassParams = {
		&UAnimSequenceConverterFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequenceConverterFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimSequenceConverterFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequenceConverterFactory.OuterSingleton, Z_Construct_UClass_UAnimSequenceConverterFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequenceConverterFactory.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UAnimSequenceConverterFactory>()
	{
		return UAnimSequenceConverterFactory::StaticClass();
	}
	UAnimSequenceConverterFactory::UAnimSequenceConverterFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequenceConverterFactory);
	UAnimSequenceConverterFactory::~UAnimSequenceConverterFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequenceConverterFactory, UAnimSequenceConverterFactory::StaticClass, TEXT("UAnimSequenceConverterFactory"), &Z_Registration_Info_UClass_UAnimSequenceConverterFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequenceConverterFactory), 3018478806U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_3371845144(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_AnimSequenceConverterFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
