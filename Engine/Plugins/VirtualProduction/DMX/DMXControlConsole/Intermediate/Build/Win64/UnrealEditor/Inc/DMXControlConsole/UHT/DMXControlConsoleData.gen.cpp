// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleData();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleData_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleData::StaticRegisterNativesUDMXControlConsoleData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleData);
	UClass* Z_Construct_UClass_UDMXControlConsoleData_NoRegister()
	{
		return UDMXControlConsoleData::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DMXLibrary;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FaderGroupRows_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaderGroupRows_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FaderGroupRows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The DMX Control Console */" },
		{ "IncludePath", "DMXControlConsoleData.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleData.h" },
		{ "ToolTip", "The DMX Control Console" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** Library used to generate Fader Groups */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleData.h" },
		{ "ToolTip", "Library used to generate Fader Groups" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleData, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_DMXLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows_Inner = { "FaderGroupRows", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXControlConsoleFaderGroupRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows_MetaData[] = {
		{ "Category", "DMX Control Console" },
		{ "Comment", "/** DMX Control Console's Fader Group Rows array */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleData.h" },
		{ "ToolTip", "DMX Control Console's Fader Group Rows array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows = { "FaderGroupRows", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleData, FaderGroupRows), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleData_Statics::NewProp_FaderGroupRows,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleData_Statics::ClassParams = {
		&UDMXControlConsoleData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleData()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleData.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleData.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleData>()
	{
		return UDMXControlConsoleData::StaticClass();
	}
	UDMXControlConsoleData::UDMXControlConsoleData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleData);
	UDMXControlConsoleData::~UDMXControlConsoleData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleData, UDMXControlConsoleData::StaticClass, TEXT("UDMXControlConsoleData"), &Z_Registration_Info_UClass_UDMXControlConsoleData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleData), 3339219146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleData_h_2071248929(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
