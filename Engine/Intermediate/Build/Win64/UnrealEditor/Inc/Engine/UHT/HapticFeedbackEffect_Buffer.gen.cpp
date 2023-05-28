// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Buffer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHapticFeedbackEffect_Buffer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHapticFeedbackEffect_Buffer::StaticRegisterNativesUHapticFeedbackEffect_Buffer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHapticFeedbackEffect_Buffer);
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer_NoRegister()
	{
		return UHapticFeedbackEffect_Buffer::StaticClass();
	}
	struct Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Amplitudes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Amplitudes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Amplitudes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHapticFeedbackEffect_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Haptics/HapticFeedbackEffect_Buffer.h" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner = { "Amplitudes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes = { "Amplitudes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, Amplitudes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "HapticFeedbackEffect_Buffer" },
		{ "ModuleRelativePath", "Classes/Haptics/HapticFeedbackEffect_Buffer.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHapticFeedbackEffect_Buffer, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_Amplitudes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::NewProp_SampleRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHapticFeedbackEffect_Buffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams = {
		&UHapticFeedbackEffect_Buffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHapticFeedbackEffect_Buffer()
	{
		if (!Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton, Z_Construct_UClass_UHapticFeedbackEffect_Buffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHapticFeedbackEffect_Buffer>()
	{
		return UHapticFeedbackEffect_Buffer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHapticFeedbackEffect_Buffer);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHapticFeedbackEffect_Buffer, UHapticFeedbackEffect_Buffer::StaticClass, TEXT("UHapticFeedbackEffect_Buffer"), &Z_Registration_Info_UClass_UHapticFeedbackEffect_Buffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHapticFeedbackEffect_Buffer), 2378141979U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_1337034448(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Haptics_HapticFeedbackEffect_Buffer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
