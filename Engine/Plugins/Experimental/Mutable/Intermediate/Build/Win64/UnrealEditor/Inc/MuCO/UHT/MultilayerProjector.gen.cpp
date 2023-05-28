// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/MultilayerProjector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultilayerProjector() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjector();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorLayer();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer;
class UScriptStruct* FMultilayerProjectorLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultilayerProjectorLayer, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MultilayerProjectorLayer"));
	}
	return Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMultilayerProjectorLayer>()
{
	return FMultilayerProjectorLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data structure representing a Multilayer Projector Layer.\n *\n * This struct is not actually saved, its values are obtained from the Instance Parameters. */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Data structure representing a Multilayer Projector Layer.\n\nThis struct is not actually saved, its values are obtained from the Instance Parameters." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultilayerProjectorLayer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MultilayerProjectorLayer",
		sizeof(FMultilayerProjectorLayer),
		alignof(FMultilayerProjectorLayer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.InnerSingleton, Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMultilayerProjectorVirtualLayer>() == std::is_polymorphic<FMultilayerProjectorLayer>(), "USTRUCT FMultilayerProjectorVirtualLayer cannot be polymorphic unless super FMultilayerProjectorLayer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer;
class UScriptStruct* FMultilayerProjectorVirtualLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MultilayerProjectorVirtualLayer"));
	}
	return Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMultilayerProjectorVirtualLayer>()
{
	return FMultilayerProjectorVirtualLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Data structure representing a Multilayer Projector Virtual Layer. */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Data structure representing a Multilayer Projector Virtual Layer." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultilayerProjectorVirtualLayer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		Z_Construct_UScriptStruct_FMultilayerProjectorLayer,
		&NewStructOps,
		"MultilayerProjectorVirtualLayer",
		sizeof(FMultilayerProjectorVirtualLayer),
		alignof(FMultilayerProjectorVirtualLayer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.InnerSingleton, Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultilayerProjector;
class UScriptStruct* FMultilayerProjector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultilayerProjector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultilayerProjector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultilayerProjector, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("MultilayerProjector"));
	}
	return Z_Registration_Info_UScriptStruct_MultilayerProjector.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FMultilayerProjector>()
{
	return FMultilayerProjector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMultilayerProjector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualLayersMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualLayersMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualLayersMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VirtualLayersMapping;
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualLayersOrder_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualLayersOrder_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualLayersOrder_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VirtualLayersOrder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableVirtualLayers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisableVirtualLayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableVirtualLayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DisableVirtualLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjector_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Multilayer Projector Helper. Eases the management of Layers and Virtual Layers.\n *\n * Layer: Management of Multilayer Projector Layers by index.\n * All layers indices has to be consecutive.\n * \n * Virtual Layer: Management of Multilayer Projector Layers by name.\n * - Allows to enabled and disabled layers.\n * - Allows to sort layers.\n */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Multilayer Projector Helper. Eases the management of Layers and Virtual Layers.\n\nLayer: Management of Multilayer Projector Layers by index.\nAll layers indices has to be consecutive.\n\nVirtual Layer: Management of Multilayer Projector Layers by name.\n- Allows to enabled and disabled layers.\n- Allows to sort layers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultilayerProjector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_ParamName_MetaData[] = {
		{ "Comment", "/** Multilayer Projector Parameter name. */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Multilayer Projector Parameter name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultilayerProjector, ParamName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_ValueProp = { "VirtualLayersMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_Key_KeyProp = { "VirtualLayersMapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_MetaData[] = {
		{ "Comment", "/** Maps a Virtual Layer to a Layer.\n\x09 *\n \x09 * All enabled Virtual Layers must have an entry pointing to the Layer index.\n \x09 * Disabled layers should have VIRTUAL_LAYER_DISABLED as value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Maps a Virtual Layer to a Layer.\n\nAll enabled Virtual Layers must have an entry pointing to the Layer index.\nDisabled layers should have VIRTUAL_LAYER_DISABLED as value." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping = { "VirtualLayersMapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultilayerProjector, VirtualLayersMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_ValueProp = { "VirtualLayersOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_Key_KeyProp = { "VirtualLayersOrder_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_MetaData[] = {
		{ "Comment", "/** Maps a Virtual Layer to a Layer.\n\x09 *\n\x09 * All created Virtual Layers (enabled or disabled) must have an entry to this map.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Maps a Virtual Layer to a Layer.\n\nAll created Virtual Layers (enabled or disabled) must have an entry to this map." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder = { "VirtualLayersOrder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultilayerProjector, VirtualLayersOrder), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_ValueProp = { "DisableVirtualLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMultilayerProjectorLayer, METADATA_PARAMS(nullptr, 0) }; // 1631463628
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_Key_KeyProp = { "DisableVirtualLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_MetaData[] = {
		{ "Comment", "/** Since disabling a Virtual Layers removes the Layer, its values are no longer on the Instance Parameters.\n\x09 * Instead, they are saved in this data structure to be able to reenable it later. */" },
		{ "ModuleRelativePath", "Public/MuCO/MultilayerProjector.h" },
		{ "ToolTip", "Since disabling a Virtual Layers removes the Layer, its values are no longer on the Instance Parameters.\nInstead, they are saved in this data structure to be able to reenable it later." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers = { "DisableVirtualLayers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMultilayerProjector, DisableVirtualLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_MetaData)) }; // 1631463628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultilayerProjector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_VirtualLayersOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewProp_DisableVirtualLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultilayerProjector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"MultilayerProjector",
		sizeof(FMultilayerProjector),
		alignof(FMultilayerProjector),
		Z_Construct_UScriptStruct_FMultilayerProjector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultilayerProjector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjector()
	{
		if (!Z_Registration_Info_UScriptStruct_MultilayerProjector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultilayerProjector.InnerSingleton, Z_Construct_UScriptStruct_FMultilayerProjector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MultilayerProjector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h_Statics::ScriptStructInfo[] = {
		{ FMultilayerProjectorLayer::StaticStruct, Z_Construct_UScriptStruct_FMultilayerProjectorLayer_Statics::NewStructOps, TEXT("MultilayerProjectorLayer"), &Z_Registration_Info_UScriptStruct_MultilayerProjectorLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultilayerProjectorLayer), 1631463628U) },
		{ FMultilayerProjectorVirtualLayer::StaticStruct, Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer_Statics::NewStructOps, TEXT("MultilayerProjectorVirtualLayer"), &Z_Registration_Info_UScriptStruct_MultilayerProjectorVirtualLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultilayerProjectorVirtualLayer), 2879365485U) },
		{ FMultilayerProjector::StaticStruct, Z_Construct_UScriptStruct_FMultilayerProjector_Statics::NewStructOps, TEXT("MultilayerProjector"), &Z_Registration_Info_UScriptStruct_MultilayerProjector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultilayerProjector), 3527378634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h_1052104859(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_MultilayerProjector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
