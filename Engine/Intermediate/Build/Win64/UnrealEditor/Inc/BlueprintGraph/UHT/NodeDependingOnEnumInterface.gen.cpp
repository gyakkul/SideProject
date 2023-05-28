// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodeDependingOnEnumInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeDependingOnEnumInterface() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UNodeDependingOnEnumInterface::StaticRegisterNativesUNodeDependingOnEnumInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodeDependingOnEnumInterface);
	UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister()
	{
		return UNodeDependingOnEnumInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/NodeDependingOnEnumInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INodeDependingOnEnumInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::ClassParams = {
		&UNodeDependingOnEnumInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface()
	{
		if (!Z_Registration_Info_UClass_UNodeDependingOnEnumInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeDependingOnEnumInterface.OuterSingleton, Z_Construct_UClass_UNodeDependingOnEnumInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNodeDependingOnEnumInterface.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UNodeDependingOnEnumInterface>()
	{
		return UNodeDependingOnEnumInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeDependingOnEnumInterface);
	UNodeDependingOnEnumInterface::~UNodeDependingOnEnumInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNodeDependingOnEnumInterface, UNodeDependingOnEnumInterface::StaticClass, TEXT("UNodeDependingOnEnumInterface"), &Z_Registration_Info_UClass_UNodeDependingOnEnumInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeDependingOnEnumInterface), 2360955649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_4009106325(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_NodeDependingOnEnumInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
