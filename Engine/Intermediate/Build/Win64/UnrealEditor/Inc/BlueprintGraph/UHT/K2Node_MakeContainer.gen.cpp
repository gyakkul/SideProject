// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MakeContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MakeContainer() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeContainer();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MakeContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MakeContainer::StaticRegisterNativesUK2Node_MakeContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MakeContainer);
	UClass* Z_Construct_UClass_UK2Node_MakeContainer_NoRegister()
	{
		return UK2Node_MakeContainer::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MakeContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MakeContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MakeContainer.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MakeContainer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MakeContainer_Statics::NewProp_NumInputs_MetaData[] = {
		{ "Comment", "/** The number of input pins to generate for this node */" },
		{ "ModuleRelativePath", "Classes/K2Node_MakeContainer.h" },
		{ "ToolTip", "The number of input pins to generate for this node" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UK2Node_MakeContainer_Statics::NewProp_NumInputs = { "NumInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MakeContainer, NumInputs), METADATA_PARAMS(Z_Construct_UClass_UK2Node_MakeContainer_Statics::NewProp_NumInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeContainer_Statics::NewProp_NumInputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MakeContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MakeContainer_Statics::NewProp_NumInputs,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_MakeContainer_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_AddPinInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_MakeContainer, IK2Node_AddPinInterface), false },  // 1388788643
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MakeContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MakeContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MakeContainer_Statics::ClassParams = {
		&UK2Node_MakeContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MakeContainer_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeContainer_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MakeContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MakeContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MakeContainer()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MakeContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MakeContainer.OuterSingleton, Z_Construct_UClass_UK2Node_MakeContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MakeContainer.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MakeContainer>()
	{
		return UK2Node_MakeContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MakeContainer);
	UK2Node_MakeContainer::~UK2Node_MakeContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MakeContainer, UK2Node_MakeContainer::StaticClass, TEXT("UK2Node_MakeContainer"), &Z_Registration_Info_UClass_UK2Node_MakeContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MakeContainer), 3999341379U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeContainer_h_2688475761(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MakeContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
