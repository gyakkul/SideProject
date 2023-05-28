// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/K2Node_SnapContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_SnapContainer() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Composite();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_NoRegister();
	BLUEPRINTSNAPNODES_API UClass* Z_Construct_UClass_UK2Node_SnapContainer();
	BLUEPRINTSNAPNODES_API UClass* Z_Construct_UClass_UK2Node_SnapContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintSnapNodes();
// End Cross Module References
	void UK2Node_SnapContainer::StaticRegisterNativesUK2Node_SnapContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_SnapContainer);
	UClass* Z_Construct_UClass_UK2Node_SnapContainer_NoRegister()
	{
		return UK2Node_SnapContainer::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_SnapContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_SnapContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Composite,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintSnapNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SnapContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//@TODO: Write a comment\n" },
		{ "IncludePath", "K2Node_SnapContainer.h" },
		{ "ModuleRelativePath", "Private/K2Node_SnapContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@TODO: Write a comment" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_SnapContainer_Statics::NewProp_RootNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_SnapContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_SnapContainer_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_SnapContainer, RootNode), Z_Construct_UClass_UK2Node_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_SnapContainer_Statics::NewProp_RootNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SnapContainer_Statics::NewProp_RootNode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_SnapContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_SnapContainer_Statics::NewProp_RootNode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_SnapContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_SnapContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_SnapContainer_Statics::ClassParams = {
		&UK2Node_SnapContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_SnapContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SnapContainer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_SnapContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_SnapContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_SnapContainer()
	{
		if (!Z_Registration_Info_UClass_UK2Node_SnapContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_SnapContainer.OuterSingleton, Z_Construct_UClass_UK2Node_SnapContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_SnapContainer.OuterSingleton;
	}
	template<> BLUEPRINTSNAPNODES_API UClass* StaticClass<UK2Node_SnapContainer>()
	{
		return UK2Node_SnapContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_SnapContainer);
	UK2Node_SnapContainer::~UK2Node_SnapContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_BlueprintSnapNodes_Source_BlueprintSnapNodes_Private_K2Node_SnapContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_BlueprintSnapNodes_Source_BlueprintSnapNodes_Private_K2Node_SnapContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_SnapContainer, UK2Node_SnapContainer::StaticClass, TEXT("UK2Node_SnapContainer"), &Z_Registration_Info_UClass_UK2Node_SnapContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_SnapContainer), 1999618665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_BlueprintSnapNodes_Source_BlueprintSnapNodes_Private_K2Node_SnapContainer_h_1690046086(TEXT("/Script/BlueprintSnapNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_BlueprintSnapNodes_Source_BlueprintSnapNodes_Private_K2Node_SnapContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_BlueprintSnapNodes_Source_BlueprintSnapNodes_Private_K2Node_SnapContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
