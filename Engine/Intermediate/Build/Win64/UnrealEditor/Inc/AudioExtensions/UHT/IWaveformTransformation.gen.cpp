// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IWaveformTransformation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIWaveformTransformation() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationChain();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_UWaveformTransformationChain_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void UWaveformTransformationBase::StaticRegisterNativesUWaveformTransformationBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationBase);
	UClass* Z_Construct_UClass_UWaveformTransformationBase_NoRegister()
	{
		return UWaveformTransformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformTransformationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformTransformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class to hold editor configurable properties for an arbitrary transformation of audio waveform data\n" },
		{ "IncludePath", "IWaveformTransformation.h" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
		{ "ToolTip", "Base class to hold editor configurable properties for an arbitrary transformation of audio waveform data" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformTransformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationBase_Statics::ClassParams = {
		&UWaveformTransformationBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformTransformationBase()
	{
		if (!Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton, Z_Construct_UClass_UWaveformTransformationBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformTransformationBase.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UWaveformTransformationBase>()
	{
		return UWaveformTransformationBase::StaticClass();
	}
	UWaveformTransformationBase::UWaveformTransformationBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationBase);
	UWaveformTransformationBase::~UWaveformTransformationBase() {}
	void UWaveformTransformationChain::StaticRegisterNativesUWaveformTransformationChain()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveformTransformationChain);
	UClass* Z_Construct_UClass_UWaveformTransformationChain_NoRegister()
	{
		return UWaveformTransformationChain::StaticClass();
	}
	struct Z_Construct_UClass_UWaveformTransformationChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Transformations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transformations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transformations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveformTransformationChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationChain_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Object that holds an ordered list of transformations to perform on a sound wave\n" },
		{ "IncludePath", "IWaveformTransformation.h" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
		{ "ToolTip", "Object that holds an ordered list of transformations to perform on a sound wave" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner_MetaData[] = {
		{ "Category", "Transformations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner = { "Transformations", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaveformTransformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_MetaData[] = {
		{ "Category", "Transformations" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/IWaveformTransformation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations = { "Transformations", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveformTransformationChain, Transformations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveformTransformationChain_Statics::NewProp_Transformations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveformTransformationChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveformTransformationChain>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveformTransformationChain_Statics::ClassParams = {
		&UWaveformTransformationChain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveformTransformationChain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveformTransformationChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveformTransformationChain()
	{
		if (!Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton, Z_Construct_UClass_UWaveformTransformationChain_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveformTransformationChain.OuterSingleton;
	}
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<UWaveformTransformationChain>()
	{
		return UWaveformTransformationChain::StaticClass();
	}
	UWaveformTransformationChain::UWaveformTransformationChain(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveformTransformationChain);
	UWaveformTransformationChain::~UWaveformTransformationChain() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveformTransformationBase, UWaveformTransformationBase::StaticClass, TEXT("UWaveformTransformationBase"), &Z_Registration_Info_UClass_UWaveformTransformationBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationBase), 2983781854U) },
		{ Z_Construct_UClass_UWaveformTransformationChain, UWaveformTransformationChain::StaticClass, TEXT("UWaveformTransformationChain"), &Z_Registration_Info_UClass_UWaveformTransformationChain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveformTransformationChain), 3348263228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_3677111940(TEXT("/Script/AudioExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
