// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DMXControlConsoleFixturePatchMatrixCell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFixturePatchMatrixCell() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	void UDMXControlConsoleFixturePatchMatrixCell::StaticRegisterNativesUDMXControlConsoleFixturePatchMatrixCell()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFixturePatchMatrixCell);
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_NoRegister()
	{
		return UDMXControlConsoleFixturePatchMatrixCell::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CellY;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CellAttributeFaders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellAttributeFaders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CellAttributeFaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A fader matching a Fixture Patch Matrix Cell in the DMX Control Console. */" },
		{ "IncludePath", "DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ToolTip", "A fader matching a Fixture Patch Matrix Cell in the DMX Control Console." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellID_MetaData[] = {
		{ "Category", "DMX Matrix Cell" },
		{ "Comment", "/** Cell Index ID */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ToolTip", "Cell Index ID" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellID = { "CellID", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchMatrixCell, CellID), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellX_MetaData[] = {
		{ "Category", "DMX Matrix Cell" },
		{ "Comment", "/** Cell X coordinate */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ToolTip", "Cell X coordinate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellX = { "CellX", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchMatrixCell, CellX), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellY_MetaData[] = {
		{ "Category", "DMX Matrix Cell" },
		{ "Comment", "/** Cell Y coordinate */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ToolTip", "Cell Y coordinate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellY = { "CellY", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchMatrixCell, CellY), METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellY_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders_Inner = { "CellAttributeFaders", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXControlConsoleFaderBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders_MetaData[] = {
		{ "Category", "DMX Matrix Cell" },
		{ "Comment", "/** Faders array of this Fader Group */" },
		{ "ModuleRelativePath", "Private/DMXControlConsoleFixturePatchMatrixCell.h" },
		{ "ToolTip", "Faders array of this Fader Group" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders = { "CellAttributeFaders", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXControlConsoleFixturePatchMatrixCell, CellAttributeFaders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::NewProp_CellAttributeFaders,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDMXControlConsoleFaderGroupElement_NoRegister, (int32)VTABLE_OFFSET(UDMXControlConsoleFixturePatchMatrixCell, IDMXControlConsoleFaderGroupElement), false },  // 1668677735
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFixturePatchMatrixCell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::ClassParams = {
		&UDMXControlConsoleFixturePatchMatrixCell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchMatrixCell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchMatrixCell.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchMatrixCell.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFixturePatchMatrixCell>()
	{
		return UDMXControlConsoleFixturePatchMatrixCell::StaticClass();
	}
	UDMXControlConsoleFixturePatchMatrixCell::UDMXControlConsoleFixturePatchMatrixCell(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFixturePatchMatrixCell);
	UDMXControlConsoleFixturePatchMatrixCell::~UDMXControlConsoleFixturePatchMatrixCell() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchMatrixCell_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchMatrixCell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFixturePatchMatrixCell, UDMXControlConsoleFixturePatchMatrixCell::StaticClass, TEXT("UDMXControlConsoleFixturePatchMatrixCell"), &Z_Registration_Info_UClass_UDMXControlConsoleFixturePatchMatrixCell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFixturePatchMatrixCell), 640558972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchMatrixCell_h_2285424008(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchMatrixCell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Private_DMXControlConsoleFixturePatchMatrixCell_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
