// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Sequencer/ControlRigSequenceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSequenceFactory() {}
// Cross Module References
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSequenceFactory();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigSequenceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigSequenceFactory::StaticRegisterNativesUControlRigSequenceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigSequenceFactory);
	UClass* Z_Construct_UClass_UControlRigSequenceFactory_NoRegister()
	{
		return UControlRigSequenceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigSequenceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigSequenceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigSequenceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for UControlRigSequence objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Sequencer/ControlRigSequenceFactory.h" },
		{ "ModuleRelativePath", "Private/Sequencer/ControlRigSequenceFactory.h" },
		{ "ToolTip", "Implements a factory for UControlRigSequence objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigSequenceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigSequenceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigSequenceFactory_Statics::ClassParams = {
		&UControlRigSequenceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigSequenceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigSequenceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigSequenceFactory()
	{
		if (!Z_Registration_Info_UClass_UControlRigSequenceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigSequenceFactory.OuterSingleton, Z_Construct_UClass_UControlRigSequenceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigSequenceFactory.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigSequenceFactory>()
	{
		return UControlRigSequenceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigSequenceFactory);
	UControlRigSequenceFactory::~UControlRigSequenceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequenceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequenceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigSequenceFactory, UControlRigSequenceFactory::StaticClass, TEXT("UControlRigSequenceFactory"), &Z_Registration_Info_UClass_UControlRigSequenceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigSequenceFactory), 1981436230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequenceFactory_h_2139506791(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequenceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Sequencer_ControlRigSequenceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
