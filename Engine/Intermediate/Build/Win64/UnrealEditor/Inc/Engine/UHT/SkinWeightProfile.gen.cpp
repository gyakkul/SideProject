// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinWeightProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo;
class UScriptStruct* FSkinWeightProfileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkinWeightProfileInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkinWeightProfileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkinWeightProfileInfo>()
{
	return FSkinWeightProfileInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultProfileFromLODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultProfileFromLODIndex;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerLODSourceFiles_ValueProp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PerLODSourceFiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerLODSourceFiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerLODSourceFiles;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Structure storing user facing properties, and is used to identify profiles at the SkeletalMesh level" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkinWeightProfileInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Name of the Skin Weight Profile*/" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Name of the Skin Weight Profile" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkinWeightProfileInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh */" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "Whether or not this Profile should be considered the Default loaded for specific LODs rather than the original Skin Weights of the Skeletal Mesh" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile = { "DefaultProfile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfile), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile */" },
		{ "DisplayName", "Default Profile from LOD Index" },
		{ "EditCondition", "DefaultProfile" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
		{ "ToolTip", "When DefaultProfile is set any LOD below this LOD Index will override the Skin Weights of the Skeletal Mesh with the Skin Weights from this Profile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex = { "DefaultProfileFromLODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkinWeightProfileInfo, DefaultProfileFromLODIndex), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex_MetaData)) }; // 1463691826
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp = { "PerLODSourceFiles_Key", nullptr, (EPropertyFlags)0x0000000800020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "ModuleRelativePath", "Public/Animation/SkinWeightProfile.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles = { "PerLODSourceFiles", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkinWeightProfileInfo, PerLODSourceFiles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_DefaultProfileFromLODIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewProp_PerLODSourceFiles,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkinWeightProfileInfo",
		sizeof(FSkinWeightProfileInfo),
		alignof(FSkinWeightProfileInfo),
		Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton, Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics::ScriptStructInfo[] = {
		{ FSkinWeightProfileInfo::StaticStruct, Z_Construct_UScriptStruct_FSkinWeightProfileInfo_Statics::NewStructOps, TEXT("SkinWeightProfileInfo"), &Z_Registration_Info_UScriptStruct_SkinWeightProfileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkinWeightProfileInfo), 408249956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_3494642696(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_SkinWeightProfile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
