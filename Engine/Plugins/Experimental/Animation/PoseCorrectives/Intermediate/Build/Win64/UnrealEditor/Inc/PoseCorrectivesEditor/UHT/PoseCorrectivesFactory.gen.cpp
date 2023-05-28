// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseCorrectivesFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseCorrectivesFactory() {}
// Cross Module References
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesFactory();
	POSECORRECTIVESEDITOR_API UClass* Z_Construct_UClass_UPoseCorrectivesFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PoseCorrectivesEditor();
// End Cross Module References
	void UPoseCorrectivesFactory::StaticRegisterNativesUPoseCorrectivesFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseCorrectivesFactory);
	UClass* Z_Construct_UClass_UPoseCorrectivesFactory_NoRegister()
	{
		return UPoseCorrectivesFactory::StaticClass();
	}
	struct Z_Construct_UClass_UPoseCorrectivesFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseCorrectivesFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseCorrectivesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseCorrectivesFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PoseCorrectivesFactory.h" },
		{ "ModuleRelativePath", "Public/PoseCorrectivesFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseCorrectivesFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseCorrectivesFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseCorrectivesFactory_Statics::ClassParams = {
		&UPoseCorrectivesFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPoseCorrectivesFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseCorrectivesFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseCorrectivesFactory()
	{
		if (!Z_Registration_Info_UClass_UPoseCorrectivesFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseCorrectivesFactory.OuterSingleton, Z_Construct_UClass_UPoseCorrectivesFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseCorrectivesFactory.OuterSingleton;
	}
	template<> POSECORRECTIVESEDITOR_API UClass* StaticClass<UPoseCorrectivesFactory>()
	{
		return UPoseCorrectivesFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseCorrectivesFactory);
	UPoseCorrectivesFactory::~UPoseCorrectivesFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseCorrectivesFactory, UPoseCorrectivesFactory::StaticClass, TEXT("UPoseCorrectivesFactory"), &Z_Registration_Info_UClass_UPoseCorrectivesFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseCorrectivesFactory), 1544258826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesFactory_h_1756678001(TEXT("/Script/PoseCorrectivesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseCorrectives_Source_PoseCorrectivesEditor_Public_PoseCorrectivesFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
