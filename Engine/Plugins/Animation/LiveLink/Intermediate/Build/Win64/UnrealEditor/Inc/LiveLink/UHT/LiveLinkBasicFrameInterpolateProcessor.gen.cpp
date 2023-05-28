// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBasicFrameInterpolateProcessor() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	void ULiveLinkBasicFrameInterpolationProcessor::StaticRegisterNativesULiveLinkBasicFrameInterpolationProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBasicFrameInterpolationProcessor);
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_NoRegister()
	{
		return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatePropertyValues_MetaData[];
#endif
		static void NewProp_bInterpolatePropertyValues_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatePropertyValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default blending method for any type of frames.\n * It will interpolate numerical properties that are mark with \"Interp\".\n */" },
		{ "DisplayName", "Base Interpolation" },
		{ "IncludePath", "InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
		{ "ToolTip", "Default blending method for any type of frames.\nIt will interpolate numerical properties that are mark with \"Interp\"." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/InterpolationProcessor/LiveLinkBasicFrameInterpolateProcessor.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit(void* Obj)
	{
		((ULiveLinkBasicFrameInterpolationProcessor*)Obj)->bInterpolatePropertyValues = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues = { "bInterpolatePropertyValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkBasicFrameInterpolationProcessor), &Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::NewProp_bInterpolatePropertyValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBasicFrameInterpolationProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams = {
		&ULiveLinkBasicFrameInterpolationProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkBasicFrameInterpolationProcessor>()
	{
		return ULiveLinkBasicFrameInterpolationProcessor::StaticClass();
	}
	ULiveLinkBasicFrameInterpolationProcessor::ULiveLinkBasicFrameInterpolationProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBasicFrameInterpolationProcessor);
	ULiveLinkBasicFrameInterpolationProcessor::~ULiveLinkBasicFrameInterpolationProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBasicFrameInterpolationProcessor, ULiveLinkBasicFrameInterpolationProcessor::StaticClass, TEXT("ULiveLinkBasicFrameInterpolationProcessor"), &Z_Registration_Info_UClass_ULiveLinkBasicFrameInterpolationProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBasicFrameInterpolationProcessor), 2075197111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_1020650662(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_InterpolationProcessor_LiveLinkBasicFrameInterpolateProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
