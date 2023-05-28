// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterConfigurationTypes_OutputRemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationTypes_OutputRemap() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource;
	static UEnum* EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("EDisplayClusterConfigurationFramePostProcess_OutputRemapSource"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATION_API UEnum* StaticEnum<EDisplayClusterConfigurationFramePostProcess_OutputRemapSource>()
	{
		return EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enumerators[] = {
		{ "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::StaticMesh", (int64)EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::StaticMesh },
		{ "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::ExternalFile", (int64)EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::ExternalFile },
		{ "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::MeshComponent", (int64)EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::MeshComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/* Source types of the output remapping */" },
		{ "ExternalFile.Comment", "/** Use an external .obj file for output remapping when the Data Source is set to File */" },
		{ "ExternalFile.DisplayName", "External File" },
		{ "ExternalFile.Name", "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::ExternalFile" },
		{ "ExternalFile.ToolTip", "Use an external .obj file for output remapping when the Data Source is set to File" },
		{ "MeshComponent.Comment", "/** Use a Mesh component reference for output remapping (ProceduralMeshComponent or StaticMeshComponent) */" },
		{ "MeshComponent.DisplayName", "Mesh Component" },
		{ "MeshComponent.Name", "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::MeshComponent" },
		{ "MeshComponent.ToolTip", "Use a Mesh component reference for output remapping (ProceduralMeshComponent or StaticMeshComponent)" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "StaticMesh.Comment", "/** Use a Static Mesh reference for output remapping when the Data Source is set to Mesh */" },
		{ "StaticMesh.DisplayName", "Static Mesh" },
		{ "StaticMesh.Name", "EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::StaticMesh" },
		{ "StaticMesh.ToolTip", "Use a Static Mesh reference for output remapping when the Data Source is set to Mesh" },
		{ "ToolTip", "Source types of the output remapping" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		"EDisplayClusterConfigurationFramePostProcess_OutputRemapSource",
		"EDisplayClusterConfigurationFramePostProcess_OutputRemapSource",
		Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap;
class UScriptStruct* FDisplayClusterConfigurationFramePostProcess_OutputRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationFramePostProcess_OutputRemap>()
{
	return FDisplayClusterConfigurationFramePostProcess_OutputRemap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* Screen space remapping of the final backbuffer output. Applied at the whole window */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "Screen space remapping of the final backbuffer output. Applied at the whole window" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationFramePostProcess_OutputRemap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "NDisplay OutputRemap" },
		{ "Comment", "/** Enables or disables output remapping */" },
		{ "DisplayName", "Enable Output Remapping" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "Enables or disables output remapping" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationFramePostProcess_OutputRemap*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource_MetaData[] = {
		{ "Category", "NDisplay OutputRemap" },
		{ "Comment", "/** Selects either the Static Mesh or External File setting as the source for output remapping */" },
		{ "EditCondition", "bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "Selects either the Static Mesh or External File setting as the source for output remapping" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap, DataSource), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource_MetaData)) }; // 2124543898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "NDisplay OutputRemap" },
		{ "Comment", "/** The Static Mesh reference to use for output remapping when the Data Source is set to Static Mesh */" },
		{ "EditCondition", "DataSource == EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::StaticMesh && bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "The Static Mesh reference to use for output remapping when the Data Source is set to Static Mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_MeshComponentName_MetaData[] = {
		{ "Category", "NDisplay OutputRemap" },
		{ "Comment", "/** The MeshComponent reference (ProceduralMeshComponent or StaticMeshComponent) to use for output remapping when the Data Source is set to Mesh Component */" },
		{ "EditCondition", "DataSource == EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::MeshComponent && bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "The MeshComponent reference (ProceduralMeshComponent or StaticMeshComponent) to use for output remapping when the Data Source is set to Mesh Component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_MeshComponentName = { "MeshComponentName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap, MeshComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_MeshComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_MeshComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_ExternalFile_MetaData[] = {
		{ "Category", "NDisplay OutputRemap" },
		{ "Comment", "/** The external .obj file to use for output remapping when the Data Source is set to File */" },
		{ "EditCondition", "DataSource == EDisplayClusterConfigurationFramePostProcess_OutputRemapSource::ExternalFile && bEnable" },
		{ "ModuleRelativePath", "Public/DisplayClusterConfigurationTypes_OutputRemap.h" },
		{ "ToolTip", "The external .obj file to use for output remapping when the Data Source is set to File" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_ExternalFile = { "ExternalFile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap, ExternalFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_ExternalFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_ExternalFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_DataSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_MeshComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewProp_ExternalFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationFramePostProcess_OutputRemap",
		sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap),
		alignof(FDisplayClusterConfigurationFramePostProcess_OutputRemap),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::EnumInfo[] = {
		{ EDisplayClusterConfigurationFramePostProcess_OutputRemapSource_StaticEnum, TEXT("EDisplayClusterConfigurationFramePostProcess_OutputRemapSource"), &Z_Registration_Info_UEnum_EDisplayClusterConfigurationFramePostProcess_OutputRemapSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2124543898U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationFramePostProcess_OutputRemap::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_Statics::NewStructOps, TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap), 3277286624U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_4214077321(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Public_DisplayClusterConfigurationTypes_OutputRemap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
