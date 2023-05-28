// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AssignDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AssignDelegate() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddDelegate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AssignDelegate();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AssignDelegate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_AssignDelegate::StaticRegisterNativesUK2Node_AssignDelegate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AssignDelegate);
	UClass* Z_Construct_UClass_UK2Node_AssignDelegate_NoRegister()
	{
		return UK2Node_AssignDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AssignDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AssignDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_AddDelegate,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AssignDelegate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Modeled after FEdGraphSchemaAction_K2AssignDelegate for the newer Blueprint\n * menu system. Acts simply as a UK2Node_AddDelegate with an attached custom-\n * event node (spawned in PostPlacedNewNode).\n */" },
		{ "IncludePath", "K2Node_AssignDelegate.h" },
		{ "ModuleRelativePath", "Classes/K2Node_AssignDelegate.h" },
		{ "ToolTip", "Modeled after FEdGraphSchemaAction_K2AssignDelegate for the newer Blueprint\nmenu system. Acts simply as a UK2Node_AddDelegate with an attached custom-\nevent node (spawned in PostPlacedNewNode)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AssignDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AssignDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AssignDelegate_Statics::ClassParams = {
		&UK2Node_AssignDelegate::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AssignDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AssignDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AssignDelegate()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AssignDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AssignDelegate.OuterSingleton, Z_Construct_UClass_UK2Node_AssignDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AssignDelegate.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_AssignDelegate>()
	{
		return UK2Node_AssignDelegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AssignDelegate);
	UK2Node_AssignDelegate::~UK2Node_AssignDelegate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignDelegate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AssignDelegate, UK2Node_AssignDelegate::StaticClass, TEXT("UK2Node_AssignDelegate"), &Z_Registration_Info_UClass_UK2Node_AssignDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AssignDelegate), 1032626805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignDelegate_h_2249796496(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AssignDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
