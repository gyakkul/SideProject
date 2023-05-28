// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MIDIDeviceControllerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDeviceControllerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase();
	MIDIDEVICE_API UClass* Z_Construct_UClass_UMIDIDeviceControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MIDIDevice();
// End Cross Module References
	void UMIDIDeviceControllerBase::StaticRegisterNativesUMIDIDeviceControllerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMIDIDeviceControllerBase);
	UClass* Z_Construct_UClass_UMIDIDeviceControllerBase_NoRegister()
	{
		return UMIDIDeviceControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UMIDIDeviceControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MIDIDevice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common functionality for the different MIDI Device Controllers. */" },
		{ "IncludePath", "MIDIDeviceControllerBase.h" },
		{ "ModuleRelativePath", "Public/MIDIDeviceControllerBase.h" },
		{ "ToolTip", "Common functionality for the different MIDI Device Controllers." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMIDIDeviceControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::ClassParams = {
		&UMIDIDeviceControllerBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMIDIDeviceControllerBase()
	{
		if (!Z_Registration_Info_UClass_UMIDIDeviceControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMIDIDeviceControllerBase.OuterSingleton, Z_Construct_UClass_UMIDIDeviceControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMIDIDeviceControllerBase.OuterSingleton;
	}
	template<> MIDIDEVICE_API UClass* StaticClass<UMIDIDeviceControllerBase>()
	{
		return UMIDIDeviceControllerBase::StaticClass();
	}
	UMIDIDeviceControllerBase::UMIDIDeviceControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMIDIDeviceControllerBase);
	UMIDIDeviceControllerBase::~UMIDIDeviceControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMIDIDeviceControllerBase, UMIDIDeviceControllerBase::StaticClass, TEXT("UMIDIDeviceControllerBase"), &Z_Registration_Info_UClass_UMIDIDeviceControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMIDIDeviceControllerBase), 1842248180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_454441850(TEXT("/Script/MIDIDevice"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MIDIDevice_Source_MIDIDevice_Public_MIDIDeviceControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
