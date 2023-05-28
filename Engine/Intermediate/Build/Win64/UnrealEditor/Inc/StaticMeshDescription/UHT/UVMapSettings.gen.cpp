// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVMapSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVMapSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	STATICMESHDESCRIPTION_API UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings();
	UPackage* Z_Construct_UPackage__Script_StaticMeshDescription();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UVMapSettings;
class UScriptStruct* FUVMapSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUVMapSettings, (UObject*)Z_Construct_UPackage__Script_StaticMeshDescription(), TEXT("UVMapSettings"));
	}
	return Z_Registration_Info_UScriptStruct_UVMapSettings.OuterSingleton;
}
template<> STATICMESHDESCRIPTION_API UScriptStruct* StaticStruct<FUVMapSettings>()
{
	return FUVMapSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUVMapSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UV map generation settings that are exposed to the user for scripting and through the editor */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "UV map generation settings that are exposed to the user for scripting and through the editor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUVMapSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Length, width, height of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Length, width, height of the UV mapping gizmo" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUVMapSettings, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData[] = {
		{ "Category", "UVMapSettings" },
		{ "Comment", "/** Tiling of the UV mapping */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Tiling of the UV mapping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile = { "UVTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUVMapSettings, UVTile), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Position of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Position of the UV mapping gizmo" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUVMapSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Rotation of the UV mapping gizmo (angles in degrees) */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Rotation of the UV mapping gizmo (angles in degrees)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUVMapSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "GizmoTransform" },
		{ "Comment", "/** Scale of the UV mapping gizmo */" },
		{ "ModuleRelativePath", "Public/UVMapSettings.h" },
		{ "ToolTip", "Scale of the UV mapping gizmo" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUVMapSettings, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_UVTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUVMapSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StaticMeshDescription,
		nullptr,
		&NewStructOps,
		"UVMapSettings",
		sizeof(FUVMapSettings),
		alignof(FUVMapSettings),
		Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUVMapSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUVMapSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton, Z_Construct_UScriptStruct_FUVMapSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UVMapSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics::ScriptStructInfo[] = {
		{ FUVMapSettings::StaticStruct, Z_Construct_UScriptStruct_FUVMapSettings_Statics::NewStructOps, TEXT("UVMapSettings"), &Z_Registration_Info_UScriptStruct_UVMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUVMapSettings), 3942893840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_2993810380(TEXT("/Script/StaticMeshDescription"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StaticMeshDescription_Public_UVMapSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
