// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMDTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusHMDTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OculusSplashDesc;
class UScriptStruct* FOculusSplashDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OculusSplashDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OculusSplashDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusSplashDesc, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("OculusSplashDesc"));
	}
	return Z_Registration_Info_UScriptStruct_OculusSplashDesc.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FOculusSplashDesc>()
{
	return FOculusSplashDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOculusSplashDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TexturePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSizeInMeters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuadSizeInMeters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams[] = {
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusSplashDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture" },
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture to display" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath = { "TexturePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, TexturePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "transform of center of quad (meters)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters = { "TransformInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, TransformInMeters), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Dimensions in meters." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters = { "QuadSizeInMeters", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, QuadSizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "A delta rotation that will be added each rendering frame (half rate of full vsync)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, DeltaRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture offset amount from the top left corner." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset = { "TextureOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, TextureOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Texture scale." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOculusSplashDesc, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusHMDTypes.h" },
		{ "ToolTip", "Whether the splash layer uses it's alpha channel." },
	};
#endif
	void Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((FOculusSplashDesc*)Obj)->bNoAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOculusSplashDesc), &Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TexturePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TransformInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_QuadSizeInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_TextureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewProp_bNoAlphaChannel,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"OculusSplashDesc",
		sizeof(FOculusSplashDesc),
		alignof(FOculusSplashDesc),
		Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusSplashDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_OculusSplashDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OculusSplashDesc.InnerSingleton, Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OculusSplashDesc.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDTypes_h_Statics::ScriptStructInfo[] = {
		{ FOculusSplashDesc::StaticStruct, Z_Construct_UScriptStruct_FOculusSplashDesc_Statics::NewStructOps, TEXT("OculusSplashDesc"), &Z_Registration_Info_UScriptStruct_OculusSplashDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOculusSplashDesc), 506150912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDTypes_h_2245409909(TEXT("/Script/OculusHMD"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusHMDTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
