// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFaderGroupRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFaderGroupRow() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupRow();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFaderGroupRow::StaticRegisterNativesUDMXControlConsoleFaderGroupRow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFaderGroupRow);
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_NoRegister()
	{
		return UDMXControlConsoleFaderGroupRow::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FaderGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaderGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A Row of Fader Groups in the DMX Control Console */" },
		{ "IncludePath", "DMXControlConsoleFaderGroupRow.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroupRow.h" },
		{ "ToolTip", "A Row of Fader Groups in the DMX Control Console" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups_Inner = { "FaderGroups", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXControlConsoleFaderGroup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups_MetaData[] = {
		{ "Category", "DMX Fader Group Row" },
		{ "Comment", "/** Fader Groups array of this Fader Group Row */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFaderGroupRow.h" },
		{ "ToolTip", "Fader Groups array of this Fader Group Row" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups = { "FaderGroups", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFaderGroupRow, FaderGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::NewProp_FaderGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFaderGroupRow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::ClassParams = {
		&UDMXControlConsoleFaderGroupRow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupRow()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFaderGroupRow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFaderGroupRow.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFaderGroupRow.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFaderGroupRow>()
	{
		return UDMXControlConsoleFaderGroupRow::StaticClass();
	}
	UDMXControlConsoleFaderGroupRow::UDMXControlConsoleFaderGroupRow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFaderGroupRow);
	UDMXControlConsoleFaderGroupRow::~UDMXControlConsoleFaderGroupRow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroupRow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroupRow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFaderGroupRow, UDMXControlConsoleFaderGroupRow::StaticClass, TEXT("UDMXControlConsoleFaderGroupRow"), &Z_Registration_Info_UClass_UDMXControlConsoleFaderGroupRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFaderGroupRow), 3609002244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroupRow_h_3376036119(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroupRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFaderGroupRow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
