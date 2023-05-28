// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleRawFader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleRawFader() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleRawFader();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleRawFader_NoRegister();
	DMXPROTOCOL_API UEnum* Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleRawFader::StaticRegisterNativesUDMXControlConsoleRawFader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleRawFader);
	UClass* Z_Construct_UClass_UDMXControlConsoleRawFader_NoRegister()
	{
		return UDMXControlConsoleRawFader::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleRawFader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSBMode_MetaData[];
#endif
		static void NewProp_bUseLSBMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSBMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleFaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX Fader DMX Fader|Oscillator" },
		{ "Comment", "/** A fader matching that sends Raw DMX */" },
		{ "IncludePath", "DMXControlConsoleRawFader.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "A fader matching that sends Raw DMX" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_UniverseID_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The universe the should send to fader */" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "The universe the should send to fader" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_UniverseID = { "UniverseID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleRawFader, UniverseID), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_UniverseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_UniverseID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The number of channels this Fader uses */" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "The number of channels this Fader uses" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleRawFader, DataType), Z_Construct_UEnum_DMXProtocol_EDMXFixtureSignalFormat, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType_MetaData)) }; // 455975797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_StartingAddress_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The starting channel Address to send DMX to */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "The starting channel Address to send DMX to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_StartingAddress = { "StartingAddress", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleRawFader, StartingAddress), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_StartingAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_StartingAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness). */" },
		{ "DisplayPriority", "9" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleRawFader.h" },
		{ "ToolTip", "Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness)." },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode_SetBit(void* Obj)
	{
		((UDMXControlConsoleRawFader*)Obj)->bUseLSBMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode = { "bUseLSBMode", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXControlConsoleRawFader), &Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_UniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_StartingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::NewProp_bUseLSBMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleRawFader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::ClassParams = {
		&UDMXControlConsoleRawFader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleRawFader()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleRawFader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleRawFader.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleRawFader>()
	{
		return UDMXControlConsoleRawFader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleRawFader);
	UDMXControlConsoleRawFader::~UDMXControlConsoleRawFader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleRawFader, UDMXControlConsoleRawFader::StaticClass, TEXT("UDMXControlConsoleRawFader"), &Z_Registration_Info_UClass_UDMXControlConsoleRawFader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleRawFader), 39644441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_2565283907(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleRawFader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
