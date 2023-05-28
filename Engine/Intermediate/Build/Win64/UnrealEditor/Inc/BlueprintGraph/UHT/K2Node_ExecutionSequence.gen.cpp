// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_ExecutionSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_ExecutionSequence() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ExecutionSequence_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_ExecutionSequence::StaticRegisterNativesUK2Node_ExecutionSequence()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_ExecutionSequence);
	UClass* Z_Construct_UClass_UK2Node_ExecutionSequence_NoRegister()
	{
		return UK2Node_ExecutionSequence::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_ExecutionSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_ExecutionSequence.h" },
		{ "Keywords", "sequence" },
		{ "ModuleRelativePath", "Classes/K2Node_ExecutionSequence.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_ExecutionSequence, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_ExecutionSequence>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::ClassParams = {
		&UK2Node_ExecutionSequence::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_ExecutionSequence()
	{
		if (!Z_Registration_Info_UClass_UK2Node_ExecutionSequence.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_ExecutionSequence.OuterSingleton, Z_Construct_UClass_UK2Node_ExecutionSequence_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_ExecutionSequence.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_ExecutionSequence>()
	{
		return UK2Node_ExecutionSequence::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_ExecutionSequence);
	UK2Node_ExecutionSequence::~UK2Node_ExecutionSequence() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ExecutionSequence_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ExecutionSequence_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_ExecutionSequence, UK2Node_ExecutionSequence::StaticClass, TEXT("UK2Node_ExecutionSequence"), &Z_Registration_Info_UClass_UK2Node_ExecutionSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_ExecutionSequence), 2930902290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ExecutionSequence_h_1207789934(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ExecutionSequence_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_ExecutionSequence_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
