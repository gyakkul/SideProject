// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaveTableBank.h"
#include "WaveTableTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveTableBank() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WaveTable();
	WAVETABLE_API UClass* Z_Construct_UClass_UWaveTableBank();
	WAVETABLE_API UClass* Z_Construct_UClass_UWaveTableBank_NoRegister();
	WAVETABLE_API UEnum* Z_Construct_UEnum_WaveTable_EWaveTableResolution();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableBankEntry();
	WAVETABLE_API UScriptStruct* Z_Construct_UScriptStruct_FWaveTableTransform();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WaveTableBankEntry;
class UScriptStruct* FWaveTableBankEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWaveTableBankEntry, (UObject*)Z_Construct_UPackage__Script_WaveTable(), TEXT("WaveTableBankEntry"));
	}
	return Z_Registration_Info_UScriptStruct_WaveTableBankEntry.OuterSingleton;
}
template<> WAVETABLE_API UScriptStruct* StaticStruct<FWaveTableBankEntry>()
{
	return FWaveTableBankEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWaveTableBankEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Table" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWaveTableBankEntry, Transform), Z_Construct_UScriptStruct_FWaveTableTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform_MetaData)) }; // 1121844760
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
		nullptr,
		&NewStructOps,
		"WaveTableBankEntry",
		sizeof(FWaveTableBankEntry),
		alignof(FWaveTableBankEntry),
		Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWaveTableBankEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton, Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WaveTableBankEntry.InnerSingleton;
	}
	void UWaveTableBank::StaticRegisterNativesUWaveTableBank()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveTableBank);
	UClass* Z_Construct_UClass_UWaveTableBank_NoRegister()
	{
		return UWaveTableBank::StaticClass();
	}
	struct Z_Construct_UClass_UWaveTableBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBipolar_MetaData[];
#endif
		static void NewProp_bBipolar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBipolar;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableSizeMB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTableSizeMB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveTableLengthSec_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveTableLengthSec;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveTableBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WaveTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WaveTableBank.h" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Number of samples cached for each curve in the given bank.\n" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Number of samples cached for each curve in the given bank." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveTableBank, Resolution), Z_Construct_UEnum_WaveTable_EWaveTableResolution, METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_MetaData)) }; // 2544383181
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Determines if output from curve/wavetable are to be clamped between \n// [-1.0f, 1.0f] (i.e. for waveform generation, oscillation, etc.)\n// or [0.0f, 1.0f] (i.e. for enveloping) when sampling curve/wavetable\n" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Determines if output from curve/wavetable are to be clamped between\n[-1.0f, 1.0f] (i.e. for waveform generation, oscillation, etc.)\nor [0.0f, 1.0f] (i.e. for enveloping) when sampling curve/wavetable" },
	};
#endif
	void Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_SetBit(void* Obj)
	{
		((UWaveTableBank*)Obj)->bBipolar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar = { "bBipolar", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaveTableBank), &Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Sum total size of all WaveTable data within the given bank\n" },
		{ "DisplayName", "WaveTable Size (MB)" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Sum total size of all WaveTable data within the given bank" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB = { "WaveTableSizeMB", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveTableBank, WaveTableSizeMB), METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableLengthSec_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// Length of all WaveTable samples in bank in seconds (at 48kHz)\n" },
		{ "DisplayName", "WaveTable Length (sec)" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Length of all WaveTable samples in bank in seconds (at 48kHz)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableLengthSec = { "WaveTableLengthSec", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveTableBank, WaveTableLengthSec), METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableLengthSec_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableLengthSec_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWaveTableBankEntry, METADATA_PARAMS(nullptr, 0) }; // 3507114486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Tables within the given bank */" },
		{ "ModuleRelativePath", "Public/WaveTableBank.h" },
		{ "ToolTip", "Tables within the given bank" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveTableBank, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_MetaData)) }; // 3507114486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveTableBank_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_bBipolar,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableSizeMB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_WaveTableLengthSec,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveTableBank_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveTableBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveTableBank>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveTableBank_Statics::ClassParams = {
		&UWaveTableBank::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveTableBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveTableBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveTableBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveTableBank()
	{
		if (!Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton, Z_Construct_UClass_UWaveTableBank_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveTableBank.OuterSingleton;
	}
	template<> WAVETABLE_API UClass* StaticClass<UWaveTableBank>()
	{
		return UWaveTableBank::StaticClass();
	}
	UWaveTableBank::UWaveTableBank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveTableBank);
	UWaveTableBank::~UWaveTableBank() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ScriptStructInfo[] = {
		{ FWaveTableBankEntry::StaticStruct, Z_Construct_UScriptStruct_FWaveTableBankEntry_Statics::NewStructOps, TEXT("WaveTableBankEntry"), &Z_Registration_Info_UScriptStruct_WaveTableBankEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWaveTableBankEntry), 3507114486U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveTableBank, UWaveTableBank::StaticClass, TEXT("UWaveTableBank"), &Z_Registration_Info_UClass_UWaveTableBank, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveTableBank), 2672215547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_4210225460(TEXT("/Script/WaveTable"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WaveTable_Source_WaveTable_Public_WaveTableBank_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
