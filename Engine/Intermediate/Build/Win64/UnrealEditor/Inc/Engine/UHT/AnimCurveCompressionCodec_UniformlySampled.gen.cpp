// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCurveCompressionCodec_UniformlySampled() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimCurveCompressionCodec_UniformlySampled::StaticRegisterNativesUAnimCurveCompressionCodec_UniformlySampled()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCurveCompressionCodec_UniformlySampled);
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_NoRegister()
	{
		return UAnimCurveCompressionCodec_UniformlySampled::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAnimSequenceSampleRate_MetaData[];
#endif
		static void NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAnimSequenceSampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimCurveCompressionCodec,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Uniformly Sampled" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Whether to use the animation sequence sample rate or an explicit value */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ToolTip", "Whether to use the animation sequence sample rate or an explicit value" },
	};
#endif
	void Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_SetBit(void* Obj)
	{
		((UAnimCurveCompressionCodec_UniformlySampled*)Obj)->UseAnimSequenceSampleRate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate = { "UseAnimSequenceSampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimCurveCompressionCodec_UniformlySampled), &Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Sample rate to use when uniformly sampling */" },
		{ "EditCondition", "!UseAnimSequenceSampleRate" },
		{ "ModuleRelativePath", "Classes/Animation/AnimCurveCompressionCodec_UniformlySampled.h" },
		{ "ToolTip", "Sample rate to use when uniformly sampling" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimCurveCompressionCodec_UniformlySampled, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_UseAnimSequenceSampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::NewProp_SampleRate,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCurveCompressionCodec_UniformlySampled>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::ClassParams = {
		&UAnimCurveCompressionCodec_UniformlySampled::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::PropPointers), 0),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled()
	{
		if (!Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.OuterSingleton, Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimCurveCompressionCodec_UniformlySampled>()
	{
		return UAnimCurveCompressionCodec_UniformlySampled::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCurveCompressionCodec_UniformlySampled);
	UAnimCurveCompressionCodec_UniformlySampled::~UAnimCurveCompressionCodec_UniformlySampled() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCurveCompressionCodec_UniformlySampled, UAnimCurveCompressionCodec_UniformlySampled::StaticClass, TEXT("UAnimCurveCompressionCodec_UniformlySampled"), &Z_Registration_Info_UClass_UAnimCurveCompressionCodec_UniformlySampled, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCurveCompressionCodec_UniformlySampled), 1403155423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h_3563540919(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimCurveCompressionCodec_UniformlySampled_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
