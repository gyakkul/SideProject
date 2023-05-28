// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundControlBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundControlBus() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundModulatorBase();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundControlBus_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationGenerator_NoRegister();
	AUDIOMODULATION_API UClass* Z_Construct_UClass_USoundModulationParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AudioModulation();
// End Cross Module References
	void USoundControlBus::StaticRegisterNativesUSoundControlBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundControlBus);
	UClass* Z_Construct_UClass_USoundControlBus_NoRegister()
	{
		return USoundControlBus::StaticClass();
	}
	struct Z_Construct_UClass_USoundControlBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBypass_MetaData[];
#endif
		static void NewProp_bBypass_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBypass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAddress_MetaData[];
#endif
		static void NewProp_bOverrideAddress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAddress;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Generators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Generators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundControlBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundModulatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioModulation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundControlBus.h" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** If true, bypasses control bus from being modulated by parameters, patches, or mixed (control bus remains active and computed). */" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
		{ "ToolTip", "If true, bypasses control bus from being modulated by parameters, patches, or mixed (control bus remains active and computed)." },
	};
#endif
	void Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass_SetBit(void* Obj)
	{
		((USoundControlBus*)Obj)->bBypass = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass = { "bBypass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundControlBus), &Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** If true, Address field is used in place of object name for address used when applying mix changes using filtering. */" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
		{ "ToolTip", "If true, Address field is used in place of object name for address used when applying mix changes using filtering." },
	};
#endif
	void Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress_SetBit(void* Obj)
	{
		((USoundControlBus*)Obj)->bOverrideAddress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress = { "bOverrideAddress", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundControlBus), &Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::NewProp_Address_MetaData[] = {
		{ "Category", "Mix" },
		{ "Comment", "/** Address to use when applying mix changes. */" },
		{ "EditCondition", "bOverrideAddress" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
		{ "ToolTip", "Address to use when applying mix changes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundControlBus, Address), METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators_Inner = { "Generators", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundModulationGenerator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators_MetaData[] = {
		{ "Category", "Generators" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators = { "Generators", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundControlBus, Generators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundControlBus_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/SoundControlBus.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundControlBus_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundControlBus, Parameter), Z_Construct_UClass_USoundModulationParameter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::NewProp_Parameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundControlBus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_bBypass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_bOverrideAddress,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_Address,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_Generators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundControlBus_Statics::NewProp_Parameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundControlBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundControlBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundControlBus_Statics::ClassParams = {
		&USoundControlBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundControlBus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundControlBus_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundControlBus_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundControlBus()
	{
		if (!Z_Registration_Info_UClass_USoundControlBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundControlBus.OuterSingleton, Z_Construct_UClass_USoundControlBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundControlBus.OuterSingleton;
	}
	template<> AUDIOMODULATION_API UClass* StaticClass<USoundControlBus>()
	{
		return USoundControlBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundControlBus);
	USoundControlBus::~USoundControlBus() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundControlBus, USoundControlBus::StaticClass, TEXT("USoundControlBus"), &Z_Registration_Info_UClass_USoundControlBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundControlBus), 424290991U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_1991555031(TEXT("/Script/AudioModulation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AudioModulation_Source_AudioModulation_Public_SoundControlBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
