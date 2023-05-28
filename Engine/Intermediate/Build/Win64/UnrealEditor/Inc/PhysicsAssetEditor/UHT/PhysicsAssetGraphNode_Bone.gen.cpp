// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetGraph/PhysicsAssetGraphNode_Bone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGraphNode_Bone() {}
// Cross Module References
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_Bone();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetGraphNode_Bone::StaticRegisterNativesUPhysicsAssetGraphNode_Bone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetGraphNode_Bone);
	UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_NoRegister()
	{
		return UPhysicsAssetGraphNode_Bone::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPhysicsAssetGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGraph/PhysicsAssetGraphNode_Bone.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetGraph/PhysicsAssetGraphNode_Bone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGraphNode_Bone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::ClassParams = {
		&UPhysicsAssetGraphNode_Bone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGraphNode_Bone()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetGraphNode_Bone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetGraphNode_Bone.OuterSingleton, Z_Construct_UClass_UPhysicsAssetGraphNode_Bone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetGraphNode_Bone.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetGraphNode_Bone>()
	{
		return UPhysicsAssetGraphNode_Bone::StaticClass();
	}
	UPhysicsAssetGraphNode_Bone::UPhysicsAssetGraphNode_Bone(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGraphNode_Bone);
	UPhysicsAssetGraphNode_Bone::~UPhysicsAssetGraphNode_Bone() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Bone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Bone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetGraphNode_Bone, UPhysicsAssetGraphNode_Bone::StaticClass, TEXT("UPhysicsAssetGraphNode_Bone"), &Z_Registration_Info_UClass_UPhysicsAssetGraphNode_Bone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetGraphNode_Bone), 627643524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Bone_h_1291962193(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Bone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphNode_Bone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
