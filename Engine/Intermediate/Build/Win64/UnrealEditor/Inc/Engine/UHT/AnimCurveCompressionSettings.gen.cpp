// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionSettings::StaticRegisterNativesUAnimCurveCompressionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionSettings);
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettings_NoRegister()
	{
		return UAnimCurveCompressionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Codec_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Codec;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This object is used to wrap a curve compression codec. It allows a clean integration in the editor by avoiding the need\n * to create asset types and factory wrappers for every codec.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "* This object is used to wrap a curve compression codec. It allows a clean integration in the editor by avoiding the need\n* to create asset types and factory wrappers for every codec." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** An animation curve compression codec. */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionSettings.h" },
		{ "ToolTip", "An animation curve compression codec." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec = { "Codec", nullptr, (EPropertyFlags)0x0014000002000009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveCompressionSettings, Codec), Z_Construct_UClass_UAnimCurveCompressionCodec_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::NewProp_Codec,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams = {
		&UAnimCurveCompressionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCurveCompressionSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionSettings>()
	{
		return UAnimCurveCompressionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionSettings);
	UAnimCurveCompressionSettings::~UAnimCurveCompressionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionSettings, UAnimCurveCompressionSettings::StaticClass, TEXT("UAnimCurveCompressionSettings"), &Z_Registration_Info_UClass_UAnimCurveCompressionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionSettings), 3581665361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_1631129501(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
