// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Retargeter/IKRetargetProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRetargetProcessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor();
	IKRIG_API UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	void UIKRetargetProcessor::StaticRegisterNativesUIKRetargetProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRetargetProcessor);
	UClass* Z_Construct_UClass_UIKRetargetProcessor_NoRegister()
	{
		return UIKRetargetProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UIKRetargetProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRigProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IKRigProcessor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRetargetProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The runtime processor that converts an input pose from a source skeleton into an output pose on a target skeleton.\n * To use:\n * 1. Initialize a processor with a Source/Target skeletal mesh and a UIKRetargeter asset.\n * 2. Call RunRetargeter and pass in a source pose as an array of global-space transforms\n * 3. RunRetargeter returns an array of global space transforms for the target skeleton.\n */" },
		{ "IncludePath", "Retargeter/IKRetargetProcessor.h" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProcessor.h" },
		{ "ToolTip", "The runtime processor that converts an input pose from a source skeleton into an output pose on a target skeleton.\nTo use:\n1. Initialize a processor with a Source/Target skeletal mesh and a UIKRetargeter asset.\n2. Call RunRetargeter and pass in a source pose as an array of global-space transforms\n3. RunRetargeter returns an array of global space transforms for the target skeleton." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor_MetaData[] = {
		{ "Comment", "/** The IK Rig processor for running IK on the target */// must be property to keep from being GC'd\n" },
		{ "ModuleRelativePath", "Public/Retargeter/IKRetargetProcessor.h" },
		{ "ToolTip", "The IK Rig processor for running IK on the target // must be property to keep from being GC'd" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor = { "IKRigProcessor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRetargetProcessor, IKRigProcessor), Z_Construct_UClass_UIKRigProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRetargetProcessor_Statics::NewProp_IKRigProcessor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRetargetProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRetargetProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRetargetProcessor_Statics::ClassParams = {
		&UIKRetargetProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRetargetProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRetargetProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRetargetProcessor()
	{
		if (!Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton, Z_Construct_UClass_UIKRetargetProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRetargetProcessor.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKRetargetProcessor>()
	{
		return UIKRetargetProcessor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRetargetProcessor);
	UIKRetargetProcessor::~UIKRetargetProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRetargetProcessor, UIKRetargetProcessor::StaticClass, TEXT("UIKRetargetProcessor"), &Z_Registration_Info_UClass_UIKRetargetProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRetargetProcessor), 3763036669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_120546295(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_Retargeter_IKRetargetProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
