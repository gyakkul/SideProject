// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_UpdateVirtualSubjectDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_UpdateVirtualSubjectDataBase() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	LIVELINKGRAPHNODE_API UClass* Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase();
	LIVELINKGRAPHNODE_API UClass* Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkGraphNode();
// End Cross Module References
	void UK2Node_UpdateVirtualSubjectDataBase::StaticRegisterNativesUK2Node_UpdateVirtualSubjectDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_UpdateVirtualSubjectDataBase);
	UClass* Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_NoRegister()
	{
		return UK2Node_UpdateVirtualSubjectDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkGraphNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_UpdateVirtualSubjectDataBase.h" },
		{ "ModuleRelativePath", "Public/K2Node_UpdateVirtualSubjectDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_UpdateVirtualSubjectDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::ClassParams = {
		&UK2Node_UpdateVirtualSubjectDataBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase()
	{
		if (!Z_Registration_Info_UClass_UK2Node_UpdateVirtualSubjectDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_UpdateVirtualSubjectDataBase.OuterSingleton, Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_UpdateVirtualSubjectDataBase.OuterSingleton;
	}
	template<> LIVELINKGRAPHNODE_API UClass* StaticClass<UK2Node_UpdateVirtualSubjectDataBase>()
	{
		return UK2Node_UpdateVirtualSubjectDataBase::StaticClass();
	}
	UK2Node_UpdateVirtualSubjectDataBase::UK2Node_UpdateVirtualSubjectDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_UpdateVirtualSubjectDataBase);
	UK2Node_UpdateVirtualSubjectDataBase::~UK2Node_UpdateVirtualSubjectDataBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkGraphNode_Public_K2Node_UpdateVirtualSubjectDataBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkGraphNode_Public_K2Node_UpdateVirtualSubjectDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_UpdateVirtualSubjectDataBase, UK2Node_UpdateVirtualSubjectDataBase::StaticClass, TEXT("UK2Node_UpdateVirtualSubjectDataBase"), &Z_Registration_Info_UClass_UK2Node_UpdateVirtualSubjectDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_UpdateVirtualSubjectDataBase), 1600698076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkGraphNode_Public_K2Node_UpdateVirtualSubjectDataBase_h_865080980(TEXT("/Script/LiveLinkGraphNode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkGraphNode_Public_K2Node_UpdateVirtualSubjectDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkGraphNode_Public_K2Node_UpdateVirtualSubjectDataBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
