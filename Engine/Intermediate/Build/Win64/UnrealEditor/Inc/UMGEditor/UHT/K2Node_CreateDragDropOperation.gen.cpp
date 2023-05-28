// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/K2Node_CreateDragDropOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CreateDragDropOperation() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_ConstructObjectFromClass();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateDragDropOperation();
	UMGEDITOR_API UClass* Z_Construct_UClass_UK2Node_CreateDragDropOperation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UK2Node_CreateDragDropOperation::StaticRegisterNativesUK2Node_CreateDragDropOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CreateDragDropOperation);
	UClass* Z_Construct_UClass_UK2Node_CreateDragDropOperation_NoRegister()
	{
		return UK2Node_CreateDragDropOperation::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_ConstructObjectFromClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/K2Node_CreateDragDropOperation.h" },
		{ "ModuleRelativePath", "Private/Nodes/K2Node_CreateDragDropOperation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CreateDragDropOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::ClassParams = {
		&UK2Node_CreateDragDropOperation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CreateDragDropOperation()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CreateDragDropOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CreateDragDropOperation.OuterSingleton, Z_Construct_UClass_UK2Node_CreateDragDropOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CreateDragDropOperation.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UK2Node_CreateDragDropOperation>()
	{
		return UK2Node_CreateDragDropOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CreateDragDropOperation);
	UK2Node_CreateDragDropOperation::~UK2Node_CreateDragDropOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateDragDropOperation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateDragDropOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CreateDragDropOperation, UK2Node_CreateDragDropOperation::StaticClass, TEXT("UK2Node_CreateDragDropOperation"), &Z_Registration_Info_UClass_UK2Node_CreateDragDropOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CreateDragDropOperation), 2971474876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateDragDropOperation_h_1666641782(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateDragDropOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Nodes_K2Node_CreateDragDropOperation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
