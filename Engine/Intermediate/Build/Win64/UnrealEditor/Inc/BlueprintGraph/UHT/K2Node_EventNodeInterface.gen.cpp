// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_EventNodeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EventNodeInterface() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_EventNodeInterface::StaticRegisterNativesUK2Node_EventNodeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EventNodeInterface);
	UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister()
	{
		return UK2Node_EventNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EventNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/K2Node_EventNodeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IK2Node_EventNodeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::ClassParams = {
		&UK2Node_EventNodeInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EventNodeInterface()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EventNodeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EventNodeInterface.OuterSingleton, Z_Construct_UClass_UK2Node_EventNodeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EventNodeInterface.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_EventNodeInterface>()
	{
		return UK2Node_EventNodeInterface::StaticClass();
	}
	UK2Node_EventNodeInterface::UK2Node_EventNodeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EventNodeInterface);
	UK2Node_EventNodeInterface::~UK2Node_EventNodeInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EventNodeInterface, UK2Node_EventNodeInterface::StaticClass, TEXT("UK2Node_EventNodeInterface"), &Z_Registration_Info_UClass_UK2Node_EventNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EventNodeInterface), 152586591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_2466177406(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_EventNodeInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
