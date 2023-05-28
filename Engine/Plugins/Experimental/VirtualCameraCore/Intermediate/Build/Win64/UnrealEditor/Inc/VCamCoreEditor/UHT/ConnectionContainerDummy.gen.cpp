// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Customizations/OutputProvider/ConnectionContainerDummy.h"
#include "UI/VCamConnectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConnectionContainerDummy() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnection();
	VCAMCOREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FConnectionContainerDummy();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConnectionContainerDummy;
class UScriptStruct* FConnectionContainerDummy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConnectionContainerDummy, (UObject*)Z_Construct_UPackage__Script_VCamCoreEditor(), TEXT("ConnectionContainerDummy"));
	}
	return Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.OuterSingleton;
}
template<> VCAMCOREEDITOR_API UScriptStruct* StaticStruct<FConnectionContainerDummy>()
{
	return FConnectionContainerDummy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This dummy is needed so that the FConnectionTargetSettingsTypeCustomization can access FVCamConnection and use\n * RequiredInterfaces, etc. for filtering suggestions.\n * \n * The detail customization systems implementation requires a valid parent handle to whatever contains the FVCamConnection,\n * which is FConnectionContainerDummy's task.\n */" },
		{ "ModuleRelativePath", "Private/Customizations/OutputProvider/ConnectionContainerDummy.h" },
		{ "ToolTip", "This dummy is needed so that the FConnectionTargetSettingsTypeCustomization can access FVCamConnection and use\nRequiredInterfaces, etc. for filtering suggestions.\n\nThe detail customization systems implementation requires a valid parent handle to whatever contains the FVCamConnection,\nwhich is FConnectionContainerDummy's task." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConnectionContainerDummy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewProp_Connection_MetaData[] = {
		{ "Category", "Dummy" },
		{ "ModuleRelativePath", "Private/Customizations/OutputProvider/ConnectionContainerDummy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConnectionContainerDummy, Connection), Z_Construct_UScriptStruct_FVCamConnection, METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewProp_Connection_MetaData)) }; // 1271561758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewProp_Connection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
		nullptr,
		&NewStructOps,
		"ConnectionContainerDummy",
		sizeof(FConnectionContainerDummy),
		alignof(FConnectionContainerDummy),
		Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConnectionContainerDummy()
	{
		if (!Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.InnerSingleton, Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConnectionContainerDummy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Customizations_OutputProvider_ConnectionContainerDummy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Customizations_OutputProvider_ConnectionContainerDummy_h_Statics::ScriptStructInfo[] = {
		{ FConnectionContainerDummy::StaticStruct, Z_Construct_UScriptStruct_FConnectionContainerDummy_Statics::NewStructOps, TEXT("ConnectionContainerDummy"), &Z_Registration_Info_UScriptStruct_ConnectionContainerDummy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConnectionContainerDummy), 3090511852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Customizations_OutputProvider_ConnectionContainerDummy_h_2919784812(TEXT("/Script/VCamCoreEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Customizations_OutputProvider_ConnectionContainerDummy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Private_Customizations_OutputProvider_ConnectionContainerDummy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
