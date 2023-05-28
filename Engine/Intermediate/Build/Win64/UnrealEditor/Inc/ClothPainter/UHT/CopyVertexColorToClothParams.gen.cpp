// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CopyVertexColorToClothParams.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopyVertexColorToClothParams() {}
// Cross Module References
	CLOTHPAINTER_API UEnum* Z_Construct_UEnum_ClothPainter_ESourceColorChannel();
	CLOTHPAINTER_API UScriptStruct* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams();
	UPackage* Z_Construct_UPackage__Script_ClothPainter();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceColorChannel;
	static UEnum* ESourceColorChannel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceColorChannel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceColorChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ClothPainter_ESourceColorChannel, (UObject*)Z_Construct_UPackage__Script_ClothPainter(), TEXT("ESourceColorChannel"));
		}
		return Z_Registration_Info_UEnum_ESourceColorChannel.OuterSingleton;
	}
	template<> CLOTHPAINTER_API UEnum* StaticEnum<ESourceColorChannel>()
	{
		return ESourceColorChannel_StaticEnum();
	}
	struct Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enumerators[] = {
		{ "ESourceColorChannel::Red", (int64)ESourceColorChannel::Red },
		{ "ESourceColorChannel::Green", (int64)ESourceColorChannel::Green },
		{ "ESourceColorChannel::Blue", (int64)ESourceColorChannel::Blue },
		{ "ESourceColorChannel::Alpha", (int64)ESourceColorChannel::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "ESourceColorChannel::Alpha" },
		{ "Blue.Name", "ESourceColorChannel::Blue" },
		{ "Comment", "/** Enum for selecting color channel to copy */" },
		{ "Green.Name", "ESourceColorChannel::Green" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "Red.Name", "ESourceColorChannel::Red" },
		{ "ToolTip", "Enum for selecting color channel to copy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ClothPainter,
		nullptr,
		"ESourceColorChannel",
		"ESourceColorChannel",
		Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ClothPainter_ESourceColorChannel()
	{
		if (!Z_Registration_Info_UEnum_ESourceColorChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceColorChannel.InnerSingleton, Z_Construct_UEnum_ClothPainter_ESourceColorChannel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceColorChannel.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams;
class UScriptStruct* FCopyVertexColorToClothParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams, (UObject*)Z_Construct_UPackage__Script_ClothPainter(), TEXT("CopyVertexColorToClothParams"));
	}
	return Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.OuterSingleton;
}
template<> CLOTHPAINTER_API UScriptStruct* StaticStruct<FCopyVertexColorToClothParams>()
{
	return FCopyVertexColorToClothParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper struct used for specifying options when copying vertex colors */" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Helper struct used for specifying options when copying vertex colors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCopyVertexColorToClothParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData[] = {
		{ "Category", "Copy Vertex Colors" },
		{ "Comment", "/** Color channel to copy from vertex colors. */" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Color channel to copy from vertex colors." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel = { "ColorChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCopyVertexColorToClothParams, ColorChannel), Z_Construct_UEnum_ClothPainter_ESourceColorChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_MetaData)) }; // 2865664211
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData[] = {
		{ "Category", "Copy Vertex Colors" },
		{ "Comment", "/** Scaling factor applied to vertex colours (in range 0-1) before applying to mask.  */" },
		{ "ModuleRelativePath", "Public/CopyVertexColorToClothParams.h" },
		{ "ToolTip", "Scaling factor applied to vertex colours (in range 0-1) before applying to mask." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCopyVertexColorToClothParams, ScalingFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ColorChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewProp_ScalingFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothPainter,
		nullptr,
		&NewStructOps,
		"CopyVertexColorToClothParams",
		sizeof(FCopyVertexColorToClothParams),
		alignof(FCopyVertexColorToClothParams),
		Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCopyVertexColorToClothParams()
	{
		if (!Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.InnerSingleton, Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::EnumInfo[] = {
		{ ESourceColorChannel_StaticEnum, TEXT("ESourceColorChannel"), &Z_Registration_Info_UEnum_ESourceColorChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2865664211U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::ScriptStructInfo[] = {
		{ FCopyVertexColorToClothParams::StaticStruct, Z_Construct_UScriptStruct_FCopyVertexColorToClothParams_Statics::NewStructOps, TEXT("CopyVertexColorToClothParams"), &Z_Registration_Info_UScriptStruct_CopyVertexColorToClothParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCopyVertexColorToClothParams), 382392579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_2731553971(TEXT("/Script/ClothPainter"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ClothPainter_Public_CopyVertexColorToClothParams_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
