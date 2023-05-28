// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "../../Source/Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UNodeMappingContainer::StaticRegisterNativesUNodeMappingContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeMappingContainer);
	UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister()
	{
		return UNodeMappingContainer::StaticClass();
	}
	struct Z_Construct_UClass_UNodeMappingContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceItems_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceItems_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceItems_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SourceItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetItems_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetItems_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetItems_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TargetItems;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceToTarget_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceToTarget_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SourceToTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeMappingContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Animation" },
		{ "Comment", "/* Node Mapping Container Class\n * This saves source items, and target items, and mapping between\n * Used by Retargeting, Control Rig mapping. Will need to improve interface better\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/NodeMappingContainer.h" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "Node Mapping Container Class\n* This saves source items, and target items, and mapping between\n* Used by Retargeting, Control Rig mapping. Will need to improve interface better" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp = { "SourceItems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(nullptr, 0) }; // 739985359
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp = { "SourceItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems = { "SourceItems", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_MetaData)) }; // 739985359
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp = { "TargetItems", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNodeItem, METADATA_PARAMS(nullptr, 0) }; // 739985359
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp = { "TargetItems_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems = { "TargetItems", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodeMappingContainer, TargetItems), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_MetaData)) }; // 739985359
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp = { "SourceToTarget", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp = { "SourceToTarget_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData[] = {
		{ "Category", "Mapping" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget = { "SourceToTarget", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceToTarget), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// source asset that is used to create source\n// should be UNodeMappingProviderInterface\n" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create source\nshould be UNodeMappingProviderInterface" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodeMappingContainer, SourceAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// source asset that is used to create target\n// should be UNodeMappingProviderInterface\n" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingContainer.h" },
		{ "ToolTip", "source asset that is used to create target\nshould be UNodeMappingProviderInterface" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodeMappingContainer, TargetAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceToTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_SourceAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeMappingContainer_Statics::NewProp_TargetAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeMappingContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodeMappingContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams = {
		&UNodeMappingContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeMappingContainer()
	{
		if (!Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton, Z_Construct_UClass_UNodeMappingContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNodeMappingContainer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNodeMappingContainer>()
	{
		return UNodeMappingContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingContainer);
	UNodeMappingContainer::~UNodeMappingContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNodeMappingContainer, UNodeMappingContainer::StaticClass, TEXT("UNodeMappingContainer"), &Z_Registration_Info_UClass_UNodeMappingContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeMappingContainer), 3147530920U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_2930704102(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
