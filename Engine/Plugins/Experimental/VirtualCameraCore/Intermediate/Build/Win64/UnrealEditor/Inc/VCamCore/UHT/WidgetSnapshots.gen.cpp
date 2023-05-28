// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/WidgetSnapshots.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetSnapshots() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshot();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetTreeSnapshot();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetSnapshot;
class UScriptStruct* FWidgetSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetSnapshot, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("WidgetSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetSnapshot.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FWidgetSnapshot>()
{
	return FWidgetSnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedBinaryData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedBinaryData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedBinaryData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Saves a subset of properties of a widget. */" },
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
		{ "ToolTip", "Saves a subset of properties of a widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetSnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshot, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_WidgetClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData_Inner = { "SavedBinaryData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData_MetaData[] = {
		{ "Comment", "/** Can be empty in case no properties were saved */" },
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
		{ "ToolTip", "Can be empty in case no properties were saved" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData = { "SavedBinaryData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetSnapshot, SavedBinaryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewProp_SavedBinaryData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"WidgetSnapshot",
		sizeof(FWidgetSnapshot),
		alignof(FWidgetSnapshot),
		Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetSnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetSnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetSnapshot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot;
class UScriptStruct* FWidgetTreeSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetTreeSnapshot, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("WidgetTreeSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FWidgetTreeSnapshot>()
{
	return FWidgetTreeSnapshot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootWidget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetSnapshots_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetSnapshots_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetSnapshots_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetSnapshots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Saves properties from widgets within a widget tree. */" },
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
		{ "ToolTip", "Saves properties from widgets within a widget tree." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetTreeSnapshot>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_RootWidget_MetaData[] = {
		{ "Comment", "/**\n\x09 * The name of the root widget if it was saved (may not have passed filters).\n\x09 * The root widget may be re-instanced (and thus renamed).\n\x09 */" },
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
		{ "ToolTip", "The name of the root widget if it was saved (may not have passed filters).\nThe root widget may be re-instanced (and thus renamed)." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_RootWidget = { "RootWidget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTreeSnapshot, RootWidget), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_RootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_RootWidget_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_ValueProp = { "WidgetSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWidgetSnapshot, METADATA_PARAMS(nullptr, 0) }; // 3444864967
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_Key_KeyProp = { "WidgetSnapshots_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_MetaData[] = {
		{ "Comment", "/** Stores every widget in the hierarchy which passed filters, even if there are no properties to save. */" },
		{ "ModuleRelativePath", "Public/UI/WidgetSnapshots.h" },
		{ "ToolTip", "Stores every widget in the hierarchy which passed filters, even if there are no properties to save." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots = { "WidgetSnapshots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetTreeSnapshot, WidgetSnapshots), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_MetaData)) }; // 3444864967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_RootWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewProp_WidgetSnapshots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"WidgetTreeSnapshot",
		sizeof(FWidgetTreeSnapshot),
		alignof(FWidgetTreeSnapshot),
		Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetTreeSnapshot()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_WidgetSnapshots_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_WidgetSnapshots_h_Statics::ScriptStructInfo[] = {
		{ FWidgetSnapshot::StaticStruct, Z_Construct_UScriptStruct_FWidgetSnapshot_Statics::NewStructOps, TEXT("WidgetSnapshot"), &Z_Registration_Info_UScriptStruct_WidgetSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetSnapshot), 3444864967U) },
		{ FWidgetTreeSnapshot::StaticStruct, Z_Construct_UScriptStruct_FWidgetTreeSnapshot_Statics::NewStructOps, TEXT("WidgetTreeSnapshot"), &Z_Registration_Info_UScriptStruct_WidgetTreeSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetTreeSnapshot), 3386165244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_WidgetSnapshots_h_3830601827(TEXT("/Script/VCamCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_WidgetSnapshots_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_UI_WidgetSnapshots_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
