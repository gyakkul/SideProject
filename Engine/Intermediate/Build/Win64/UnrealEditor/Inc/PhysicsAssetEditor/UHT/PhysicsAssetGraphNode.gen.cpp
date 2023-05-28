// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetGraph/PhysicsAssetGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGraphNode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetGraphNode::StaticRegisterNativesUPhysicsAssetGraphNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetGraphNode);
	UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_NoRegister()
	{
		return UPhysicsAssetGraphNode::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGraphNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGraph/PhysicsAssetGraphNode.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetGraph/PhysicsAssetGraphNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGraphNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::ClassParams = {
		&UPhysicsAssetGraphNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGraphNode()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetGraphNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetGraphNode.OuterSingleton, Z_Construct_UClass_UPhysicsAssetGraphNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetGraphNode.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetGraphNode>()
	{
		return UPhysicsAssetGraphNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGraphNode);
	UPhysicsAssetGraphNode::~UPhysicsAssetGraphNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetGraphNode, UPhysicsAssetGraphNode::StaticClass, TEXT("UPhysicsAssetGraphNode"), &Z_Registration_Info_UClass_UPhysicsAssetGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetGraphNode), 10789303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_3414799795(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
