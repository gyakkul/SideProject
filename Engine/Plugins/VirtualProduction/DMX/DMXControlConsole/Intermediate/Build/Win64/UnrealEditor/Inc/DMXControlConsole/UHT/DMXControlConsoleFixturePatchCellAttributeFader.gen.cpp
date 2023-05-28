// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFixturePatchCellAttributeFader.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFixturePatchCellAttributeFader() {}
// Cross Module References
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFixturePatchCellAttributeFader::StaticRegisterNativesUDMXControlConsoleFixturePatchCellAttributeFader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFixturePatchCellAttributeFader);
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_NoRegister()
	{
		return UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniverseID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UniverseID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAddress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLSBMode_MetaData[];
#endif
		static void NewProp_bUseLSBMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLSBMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXControlConsoleFaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX Fader DMX Fader|Oscillator" },
		{ "Comment", "/** A fader matching a Fixture Cell Attribute in the DMX Control Console. */" },
		{ "IncludePath", "DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "A fader matching a Fixture Cell Attribute in the DMX Control Console." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_UniverseID_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The universe DMX data should be send to */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "The universe DMX data should be send to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_UniverseID = { "UniverseID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchCellAttributeFader, UniverseID), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_UniverseID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_UniverseID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_StartingAddress_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** The starting channel Address to send DMX to */" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "The starting channel Address to send DMX to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_StartingAddress = { "StartingAddress", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchCellAttributeFader, StartingAddress), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_StartingAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_StartingAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness). */" },
		{ "DisplayPriority", "9" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "Use Least Significant Byte mode. Individual bytes(channels) be interpreted with the first bytes being the lowest part of the number(endianness)." },
	};
#endif
	void Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode_SetBit(void* Obj)
	{
		((UDMXControlConsoleFixturePatchCellAttributeFader*)Obj)->bUseLSBMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode = { "bUseLSBMode", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXControlConsoleFixturePatchCellAttributeFader), &Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData[] = {
		{ "Category", "DMX Fader" },
		{ "Comment", "/** Name of the attribute mapped to this Fader */" },
		{ "DisplayName", "Attribute Mapping" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchCellAttributeFader.h" },
		{ "ToolTip", "Name of the attribute mapped to this Fader" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchCellAttributeFader, Attribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_UniverseID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_StartingAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_bUseLSBMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::NewProp_Attribute,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFixturePatchCellAttributeFader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::ClassParams = {
		&UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFixturePatchCellAttributeFader>()
	{
		return UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFixturePatchCellAttributeFader);
	UDMXControlConsoleFixturePatchCellAttributeFader::~UDMXControlConsoleFixturePatchCellAttributeFader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFixturePatchCellAttributeFader, UDMXControlConsoleFixturePatchCellAttributeFader::StaticClass, TEXT("UDMXControlConsoleFixturePatchCellAttributeFader"), &Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchCellAttributeFader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFixturePatchCellAttributeFader), 3768164666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_3329100767(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchCellAttributeFader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
