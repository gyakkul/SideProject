// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/TextureShareBlueprintContainersBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShareBlueprintContainersBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareCustomData();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareObjectDesc();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareSendTextureDesc();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareTexturesDesc();
	UPackage* Z_Construct_UPackage__Script_TextureShare();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc;
class UScriptStruct* FTextureShareSendTextureDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareSendTextureDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareSendTextureDesc>()
{
	return FTextureShareSendTextureDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Texture with name for sending\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Texture with name for sending" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareSendTextureDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Resource name (used for IPC)\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Resource name (used for IPC)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareSendTextureDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Resource to send\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Resource to send" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareSendTextureDesc, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareSendTextureDesc",
		sizeof(FTextureShareSendTextureDesc),
		alignof(FTextureShareSendTextureDesc),
		Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareSendTextureDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc;
class UScriptStruct* FTextureShareReceiveTextureDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareReceiveTextureDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareReceiveTextureDesc>()
{
	return FTextureShareReceiveTextureDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Texture with name for receive\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Texture with name for receive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareReceiveTextureDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Resource name (used for IPC)\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Resource name (used for IPC)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareReceiveTextureDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Resource to receive\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Resource to receive" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareReceiveTextureDesc, Texture), Z_Construct_UClass_UTextureRenderTarget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareReceiveTextureDesc",
		sizeof(FTextureShareReceiveTextureDesc),
		alignof(FTextureShareReceiveTextureDesc),
		Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc;
class UScriptStruct* FTextureShareTexturesDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareTexturesDesc, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareTexturesDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareTexturesDesc>()
{
	return FTextureShareTexturesDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SendTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SendTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReceiveTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReceiveTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom textures for sharing\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Custom textures for sharing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareTexturesDesc>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures_Inner = { "SendTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureShareSendTextureDesc, METADATA_PARAMS(nullptr, 0) }; // 2222537927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Send all this textures\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Send all this textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures = { "SendTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareTexturesDesc, SendTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures_MetaData)) }; // 2222537927
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures_Inner = { "ReceiveTextures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc, METADATA_PARAMS(nullptr, 0) }; // 575622569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Receive all this textures\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Receive all this textures" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures = { "ReceiveTextures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareTexturesDesc, ReceiveTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures_MetaData)) }; // 575622569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_SendTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewProp_ReceiveTextures,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareTexturesDesc",
		sizeof(FTextureShareTexturesDesc),
		alignof(FTextureShareTexturesDesc),
		Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareTexturesDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareCustomData;
class UScriptStruct* FTextureShareCustomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareCustomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareCustomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareCustomData, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareCustomData"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareCustomData.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareCustomData>()
{
	return FTextureShareCustomData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareCustomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SendParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SendParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SendParameters;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceivedParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceivedParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceivedParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReceivedParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Custom data for sharing\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Custom data for sharing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareCustomData>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_ValueProp = { "SendParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_Key_KeyProp = { "SendParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// These custom data will be sent to remote processes.\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "These custom data will be sent to remote processes." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters = { "SendParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareCustomData, SendParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_ValueProp = { "ReceivedParameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_Key_KeyProp = { "ReceivedParameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// This user data is received from remote processes. Updated every frame tick\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "This user data is received from remote processes. Updated every frame tick" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters = { "ReceivedParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareCustomData, ReceivedParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_SendParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewProp_ReceivedParameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareCustomData",
		sizeof(FTextureShareCustomData),
		alignof(FTextureShareCustomData),
		Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareCustomData()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareCustomData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareCustomData.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareCustomData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings;
class UScriptStruct* FTextureShareObjectSyncSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareObjectSyncSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareObjectSyncSettings>()
{
	return FTextureShareObjectSyncSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSyncTimeOut_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameSyncTimeOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameConnectTimeOut_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameConnectTimeOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Sync settings\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Sync settings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareObjectSyncSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameSyncTimeOut_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// MaxMillisecondsToWait for sync. 0 -infinite\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "MaxMillisecondsToWait for sync. 0 -infinite" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameSyncTimeOut = { "FrameSyncTimeOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareObjectSyncSettings, FrameSyncTimeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameSyncTimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameSyncTimeOut_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameConnectTimeOut_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// MaxMillisecondsToWait for first connection. 0 -infinite\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "MaxMillisecondsToWait for first connection. 0 -infinite" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameConnectTimeOut = { "FrameConnectTimeOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareObjectSyncSettings, FrameConnectTimeOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameConnectTimeOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameConnectTimeOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameSyncTimeOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewProp_FrameConnectTimeOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareObjectSyncSettings",
		sizeof(FTextureShareObjectSyncSettings),
		alignof(FTextureShareObjectSyncSettings),
		Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureShareObjectDesc;
class UScriptStruct* FTextureShareObjectDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureShareObjectDesc, (UObject*)Z_Construct_UPackage__Script_TextureShare(), TEXT("TextureShareObjectDesc"));
	}
	return Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.OuterSingleton;
}
template<> TEXTURESHARE_API UScriptStruct* StaticStruct<FTextureShareObjectDesc>()
{
	return FTextureShareObjectDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShareName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShareName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Object descriptor\n */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Object descriptor" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureShareObjectDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_ShareName_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Unique share name (case insensitive). When empty, used default name\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Unique share name (case insensitive). When empty, used default name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_ShareName = { "ShareName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareObjectDesc, ShareName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_ShareName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_ShareName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Settings\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainersBase.h" },
		{ "ToolTip", "Settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureShareObjectDesc, Settings), Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_Settings_MetaData)) }; // 1434671839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_ShareName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewProp_Settings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
		nullptr,
		&NewStructOps,
		"TextureShareObjectDesc",
		sizeof(FTextureShareObjectDesc),
		alignof(FTextureShareObjectDesc),
		Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureShareObjectDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.InnerSingleton, Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureShareObjectDesc.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainersBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainersBase_h_Statics::ScriptStructInfo[] = {
		{ FTextureShareSendTextureDesc::StaticStruct, Z_Construct_UScriptStruct_FTextureShareSendTextureDesc_Statics::NewStructOps, TEXT("TextureShareSendTextureDesc"), &Z_Registration_Info_UScriptStruct_TextureShareSendTextureDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareSendTextureDesc), 2222537927U) },
		{ FTextureShareReceiveTextureDesc::StaticStruct, Z_Construct_UScriptStruct_FTextureShareReceiveTextureDesc_Statics::NewStructOps, TEXT("TextureShareReceiveTextureDesc"), &Z_Registration_Info_UScriptStruct_TextureShareReceiveTextureDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareReceiveTextureDesc), 575622569U) },
		{ FTextureShareTexturesDesc::StaticStruct, Z_Construct_UScriptStruct_FTextureShareTexturesDesc_Statics::NewStructOps, TEXT("TextureShareTexturesDesc"), &Z_Registration_Info_UScriptStruct_TextureShareTexturesDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareTexturesDesc), 1772187601U) },
		{ FTextureShareCustomData::StaticStruct, Z_Construct_UScriptStruct_FTextureShareCustomData_Statics::NewStructOps, TEXT("TextureShareCustomData"), &Z_Registration_Info_UScriptStruct_TextureShareCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareCustomData), 2362314987U) },
		{ FTextureShareObjectSyncSettings::StaticStruct, Z_Construct_UScriptStruct_FTextureShareObjectSyncSettings_Statics::NewStructOps, TEXT("TextureShareObjectSyncSettings"), &Z_Registration_Info_UScriptStruct_TextureShareObjectSyncSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareObjectSyncSettings), 1434671839U) },
		{ FTextureShareObjectDesc::StaticStruct, Z_Construct_UScriptStruct_FTextureShareObjectDesc_Statics::NewStructOps, TEXT("TextureShareObjectDesc"), &Z_Registration_Info_UScriptStruct_TextureShareObjectDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureShareObjectDesc), 1434858546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainersBase_h_4037846221(TEXT("/Script/TextureShare"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainersBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainersBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
