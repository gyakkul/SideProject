// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGrid/RenderGridManager.h"
#include "RenderGrid/RenderGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGridManager() {}
// Cross Module References
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropRemoteControl_NoRegister();
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues();
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues;
class UScriptStruct* FRenderGridManagerPreviousPropValues::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues, (UObject*)Z_Construct_UPackage__Script_RenderGrid(), TEXT("RenderGridManagerPreviousPropValues"));
	}
	return Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.OuterSingleton;
}
template<> RENDERGRID_API UScriptStruct* StaticStruct<FRenderGridManagerPreviousPropValues>()
{
	return FRenderGridManagerPreviousPropValues::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteControlData_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RemoteControlData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RemoteControlData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This struct keeps track of the values of the properties before new values were applied, so we can rollback to the previous state.\n */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridManager.h" },
		{ "ToolTip", "This struct keeps track of the values of the properties before new values were applied, so we can rollback to the previous state." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderGridManagerPreviousPropValues>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_ValueProp = { "RemoteControlData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData, METADATA_PARAMS(nullptr, 0) }; // 1660536410
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_Key_KeyProp = { "RemoteControlData_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridPropRemoteControl_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_MetaData[] = {
		{ "Comment", "/** The previous values of the remote control properties. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGridManager.h" },
		{ "ToolTip", "The previous values of the remote control properties." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData = { "RemoteControlData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderGridManagerPreviousPropValues, RemoteControlData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_MetaData)) }; // 1660536410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewProp_RemoteControlData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
		nullptr,
		&NewStructOps,
		"RenderGridManagerPreviousPropValues",
		sizeof(FRenderGridManagerPreviousPropValues),
		alignof(FRenderGridManagerPreviousPropValues),
		Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.InnerSingleton, Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridManager_h_Statics::ScriptStructInfo[] = {
		{ FRenderGridManagerPreviousPropValues::StaticStruct, Z_Construct_UScriptStruct_FRenderGridManagerPreviousPropValues_Statics::NewStructOps, TEXT("RenderGridManagerPreviousPropValues"), &Z_Registration_Info_UScriptStruct_RenderGridManagerPreviousPropValues, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderGridManagerPreviousPropValues), 2026890833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridManager_h_1566917429(TEXT("/Script/RenderGrid"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGridManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
