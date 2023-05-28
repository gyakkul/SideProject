// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetGraph/PhysicsAssetGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGraphSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphSchema();
	PHYSICSASSETEDITOR_API UClass* Z_Construct_UClass_UPhysicsAssetGraphSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References
	void UPhysicsAssetGraphSchema::StaticRegisterNativesUPhysicsAssetGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetGraphSchema);
	UClass* Z_Construct_UClass_UPhysicsAssetGraphSchema_NoRegister()
	{
		return UPhysicsAssetGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGraph/PhysicsAssetGraphSchema.h" },
		{ "ModuleRelativePath", "Private/PhysicsAssetGraph/PhysicsAssetGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::ClassParams = {
		&UPhysicsAssetGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetGraphSchema.OuterSingleton, Z_Construct_UClass_UPhysicsAssetGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetGraphSchema.OuterSingleton;
	}
	template<> PHYSICSASSETEDITOR_API UClass* StaticClass<UPhysicsAssetGraphSchema>()
	{
		return UPhysicsAssetGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGraphSchema);
	UPhysicsAssetGraphSchema::~UPhysicsAssetGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetGraphSchema, UPhysicsAssetGraphSchema::StaticClass, TEXT("UPhysicsAssetGraphSchema"), &Z_Registration_Info_UClass_UPhysicsAssetGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetGraphSchema), 2709390215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_4225319749(TEXT("/Script/PhysicsAssetEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetGraph_PhysicsAssetGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
