// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeMappingProviderInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeItem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeItem;
class UScriptStruct* FNodeItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeItem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NodeItem"));
	}
	return Z_Registration_Info_UScriptStruct_NodeItem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNodeItem>()
{
	return FNodeItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Node Information to save with */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Node Information to save with" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData[] = {
		{ "Comment", "/* Parent Name. If NAME_None, it will consider no parent */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Parent Name. If NAME_None, it will consider no parent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeItem, ParentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData[] = {
		{ "Comment", "/* Space transform (Not based on parent). Used by control rig system */" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
		{ "ToolTip", "Space transform (Not based on parent). Used by control rig system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeItem, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeItem_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NodeItem",
		sizeof(FNodeItem),
		alignof(FNodeItem),
		Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeItem()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton, Z_Construct_UScriptStruct_FNodeItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeItem.InnerSingleton;
	}
	void UNodeMappingProviderInterface::StaticRegisterNativesUNodeMappingProviderInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeMappingProviderInterface);
	UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister()
	{
		return UNodeMappingProviderInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNodeMappingProviderInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeMappingProviderInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Animation/NodeMappingProviderInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeMappingProviderInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeMappingProviderInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams = {
		&UNodeMappingProviderInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeMappingProviderInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeMappingProviderInterface()
	{
		if (!Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton, Z_Construct_UClass_UNodeMappingProviderInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNodeMappingProviderInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UNodeMappingProviderInterface>()
	{
		return UNodeMappingProviderInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeMappingProviderInterface);
	UNodeMappingProviderInterface::~UNodeMappingProviderInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ScriptStructInfo[] = {
		{ FNodeItem::StaticStruct, Z_Construct_UScriptStruct_FNodeItem_Statics::NewStructOps, TEXT("NodeItem"), &Z_Registration_Info_UScriptStruct_NodeItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeItem), 739985359U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNodeMappingProviderInterface, UNodeMappingProviderInterface::StaticClass, TEXT("UNodeMappingProviderInterface"), &Z_Registration_Info_UClass_UNodeMappingProviderInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeMappingProviderInterface), 3118747077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_3515398262(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_NodeMappingProviderInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
