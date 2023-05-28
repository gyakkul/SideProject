// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h"
#include "MuCOE/CustomizableObjectLayout.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeLayoutBlocks() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectLayout_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeLayoutBlocks::StaticRegisterNativesUCustomizableObjectNodeLayoutBlocks()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeLayoutBlocks);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_NoRegister()
	{
		return UCustomizableObjectNodeLayoutBlocks::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGridSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxGridSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PackingStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackingStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PackingStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Layout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeLayoutBlocks, GridSize_DEPRECATED), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_MaxGridSize_MetaData[] = {
		{ "Comment", "/** Used with the fixed layout strategy. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
		{ "ToolTip", "Used with the fixed layout strategy." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_MaxGridSize = { "MaxGridSize", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeLayoutBlocks, MaxGridSize_DEPRECATED), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_MaxGridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_MaxGridSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectLayoutBlock, METADATA_PARAMS(nullptr, 0) }; // 1084952981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeLayoutBlocks, Blocks_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks_MetaData)) }; // 1084952981
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy = { "PackingStrategy", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeLayoutBlocks, PackingStrategy_DEPRECATED), Z_Construct_UEnum_CustomizableObjectEditor_ECustomizableObjectTextureLayoutPackingStrategy, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy_MetaData)) }; // 3394997217
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Layout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeLayoutBlocks.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeLayoutBlocks, Layout), Z_Construct_UClass_UCustomizableObjectLayout_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Layout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Layout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_GridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_MaxGridSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_PackingStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::NewProp_Layout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeLayoutBlocks>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::ClassParams = {
		&UCustomizableObjectNodeLayoutBlocks::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeLayoutBlocks.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeLayoutBlocks.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeLayoutBlocks.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeLayoutBlocks>()
	{
		return UCustomizableObjectNodeLayoutBlocks::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeLayoutBlocks);
	UCustomizableObjectNodeLayoutBlocks::~UCustomizableObjectNodeLayoutBlocks() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeLayoutBlocks)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeLayoutBlocks_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeLayoutBlocks_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeLayoutBlocks, UCustomizableObjectNodeLayoutBlocks::StaticClass, TEXT("UCustomizableObjectNodeLayoutBlocks"), &Z_Registration_Info_UClass_UCustomizableObjectNodeLayoutBlocks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeLayoutBlocks), 2792098813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeLayoutBlocks_h_1471769201(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeLayoutBlocks_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeLayoutBlocks_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
