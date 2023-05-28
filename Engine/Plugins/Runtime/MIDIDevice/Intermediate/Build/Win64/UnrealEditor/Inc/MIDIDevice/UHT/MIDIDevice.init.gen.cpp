// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMIDIDevice_init() {}
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature();
	MIDIDEVICE_API UFunction* Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MIDIDevice;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MIDIDevice()
	{
		if (!Z_Registration_Info_UPackage__Script_MIDIDevice.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIAftertouch__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIChannelAftertouch__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIControlChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOff__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDINoteOn__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIPitchBend__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MIDIDevice_OnMIDIProgramChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MIDIDevice",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x7A78E530,
				0x19F0949A,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MIDIDevice.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MIDIDevice.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MIDIDevice(Z_Construct_UPackage__Script_MIDIDevice, TEXT("/Script/MIDIDevice"), Z_Registration_Info_UPackage__Script_MIDIDevice, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7A78E530, 0x19F0949A));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
