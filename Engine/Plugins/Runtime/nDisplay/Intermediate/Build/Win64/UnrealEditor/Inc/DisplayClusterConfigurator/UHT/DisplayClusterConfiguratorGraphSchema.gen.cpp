// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfiguratorGraphSchema() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema();
	DISPLAYCLUSTERCONFIGURATOR_API UClass* Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_NoRegister();
	DISPLAYCLUSTERCONFIGURATOR_API UEnum* Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType();
	DISPLAYCLUSTERCONFIGURATOR_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfigurator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClusterItemType;
	static UEnum* EClusterItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClusterItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClusterItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfigurator(), TEXT("EClusterItemType"));
		}
		return Z_Registration_Info_UEnum_EClusterItemType.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UEnum* StaticEnum<EClusterItemType>()
	{
		return EClusterItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enumerators[] = {
		{ "EClusterItemType::ClusterNode", (int64)EClusterItemType::ClusterNode },
		{ "EClusterItemType::Viewport", (int64)EClusterItemType::Viewport },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enum_MetaDataParams[] = {
		{ "ClusterNode.Name", "EClusterItemType::ClusterNode" },
		{ "ModuleRelativePath", "Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
		{ "Viewport.Name", "EClusterItemType::Viewport" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
		nullptr,
		"EClusterItemType",
		"EClusterItemType",
		Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType()
	{
		if (!Z_Registration_Info_UEnum_EClusterItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClusterItemType.InnerSingleton, Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClusterItemType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfiguratorSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDisplayClusterConfiguratorSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode;
class UScriptStruct* FDisplayClusterConfiguratorSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfigurator(), TEXT("DisplayClusterConfiguratorSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATOR_API UScriptStruct* StaticStruct<FDisplayClusterConfiguratorSchemaAction_NewNode>()
{
	return FDisplayClusterConfiguratorSchemaAction_NewNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfiguratorSchemaAction_NewNode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfiguratorSchemaAction_NewNode, ItemType), Z_Construct_UEnum_DisplayClusterConfigurator_EClusterItemType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType_MetaData)) }; // 677329798
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_PresetSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_PresetSize = { "PresetSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfiguratorSchemaAction_NewNode, PresetSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_PresetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_PresetSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_ItemType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewProp_PresetSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"DisplayClusterConfiguratorSchemaAction_NewNode",
		sizeof(FDisplayClusterConfiguratorSchemaAction_NewNode),
		alignof(FDisplayClusterConfiguratorSchemaAction_NewNode),
		Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode.InnerSingleton;
	}
	void UDisplayClusterConfiguratorGraphSchema::StaticRegisterNativesUDisplayClusterConfiguratorGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterConfiguratorGraphSchema);
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_NoRegister()
	{
		return UDisplayClusterConfiguratorGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfigurator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
		{ "ModuleRelativePath", "Private/Views/OutputMapping/DisplayClusterConfiguratorGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterConfiguratorGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::ClassParams = {
		&UDisplayClusterConfiguratorGraphSchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterConfiguratorGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterConfiguratorGraphSchema.OuterSingleton, Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterConfiguratorGraphSchema.OuterSingleton;
	}
	template<> DISPLAYCLUSTERCONFIGURATOR_API UClass* StaticClass<UDisplayClusterConfiguratorGraphSchema>()
	{
		return UDisplayClusterConfiguratorGraphSchema::StaticClass();
	}
	UDisplayClusterConfiguratorGraphSchema::UDisplayClusterConfiguratorGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterConfiguratorGraphSchema);
	UDisplayClusterConfiguratorGraphSchema::~UDisplayClusterConfiguratorGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::EnumInfo[] = {
		{ EClusterItemType_StaticEnum, TEXT("EClusterItemType"), &Z_Registration_Info_UEnum_EClusterItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 677329798U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfiguratorSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfiguratorSchemaAction_NewNode_Statics::NewStructOps, TEXT("DisplayClusterConfiguratorSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfiguratorSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfiguratorSchemaAction_NewNode), 3517799570U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterConfiguratorGraphSchema, UDisplayClusterConfiguratorGraphSchema::StaticClass, TEXT("UDisplayClusterConfiguratorGraphSchema"), &Z_Registration_Info_UClass_UDisplayClusterConfiguratorGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterConfiguratorGraphSchema), 2932756743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_517144329(TEXT("/Script/DisplayClusterConfigurator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfigurator_Private_Views_OutputMapping_DisplayClusterConfiguratorGraphSchema_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
