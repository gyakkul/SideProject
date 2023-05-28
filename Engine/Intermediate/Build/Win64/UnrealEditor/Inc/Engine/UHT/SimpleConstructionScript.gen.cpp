// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleConstructionScript() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USCS_Node_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript();
	ENGINE_API UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USimpleConstructionScript::StaticRegisterNativesUSimpleConstructionScript()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleConstructionScript);
	UClass* Z_Construct_UClass_USimpleConstructionScript_NoRegister()
	{
		return USimpleConstructionScript::StaticClass();
	}
	struct Z_Construct_UClass_USimpleConstructionScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AllNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSceneRootNode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorComponentNodes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorComponentNodes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorComponentNodes;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleConstructionScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/SimpleConstructionScript.h" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData[] = {
		{ "Comment", "/** Root nodes of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Root nodes of the construction script" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData[] = {
		{ "Comment", "/** All nodes that exist in the hierarchy of this SimpleConstructionScript */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "All nodes that exist in the hierarchy of this SimpleConstructionScript" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleConstructionScript, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData[] = {
		{ "Comment", "/** Default scene root node; used when no other nodes are available to use as the root */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "Default scene root node; used when no other nodes are available to use as the root" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode = { "DefaultSceneRootNode", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleConstructionScript, DefaultSceneRootNode), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Root node of the construction script */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Root node of the construction script" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleConstructionScript, RootNode_DEPRECATED), Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USCS_Node_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy */" },
		{ "ModuleRelativePath", "Classes/Engine/SimpleConstructionScript.h" },
		{ "ToolTip", "(DEPRECATED) Actor Component based nodes are stored here.  They cannot be in the tree hierarchy" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes = { "ActorComponentNodes", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USimpleConstructionScript, ActorComponentNodes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_AllNodes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_DefaultSceneRootNode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_RootNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleConstructionScript_Statics::NewProp_ActorComponentNodes,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleConstructionScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleConstructionScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams = {
		&USimpleConstructionScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleConstructionScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleConstructionScript()
	{
		if (!Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton, Z_Construct_UClass_USimpleConstructionScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleConstructionScript.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USimpleConstructionScript>()
	{
		return USimpleConstructionScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleConstructionScript);
	USimpleConstructionScript::~USimpleConstructionScript() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USimpleConstructionScript)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleConstructionScript, USimpleConstructionScript::StaticClass, TEXT("USimpleConstructionScript"), &Z_Registration_Info_UClass_USimpleConstructionScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleConstructionScript), 1327463362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_2362758412(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SimpleConstructionScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
