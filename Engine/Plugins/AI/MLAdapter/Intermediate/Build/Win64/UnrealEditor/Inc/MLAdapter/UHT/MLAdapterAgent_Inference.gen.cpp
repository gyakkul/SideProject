// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Agents/MLAdapterAgent_Inference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterAgent_Inference() {}
// Cross Module References
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_Inference();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgent_Inference_NoRegister();
	NNECORE_API UClass* Z_Construct_UClass_UNNEModelData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterAgent_Inference::StaticRegisterNativesUMLAdapterAgent_Inference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterAgent_Inference);
	UClass* Z_Construct_UClass_UMLAdapterAgent_Inference_NoRegister()
	{
		return UMLAdapterAgent_Inference::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterAgent_Inference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModelData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterAgent,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Inference agents have a neural network that can process senses and output actuations via their Think method. You \n * can create a blueprint of this class to easily wire-up an agent that functions entirely inside the Unreal Engine.\n * @see UMLAdapterNoRPCManager - we do not usually need to open the RPC interface if we are exclusively using inference agents.\n */" },
		{ "IncludePath", "Agents/MLAdapterAgent_Inference.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent_Inference.h" },
		{ "ToolTip", "Inference agents have a neural network that can process senses and output actuations via their Think method. You\ncan create a blueprint of this class to easily wire-up an agent that functions entirely inside the Unreal Engine.\n@see UMLAdapterNoRPCManager - we do not usually need to open the RPC interface if we are exclusively using inference agents." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::NewProp_ModelData_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "/** Reference to neural network asset data. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgent_Inference.h" },
		{ "ToolTip", "Reference to neural network asset data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::NewProp_ModelData = { "ModelData", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgent_Inference, ModelData), Z_Construct_UClass_UNNEModelData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::NewProp_ModelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::NewProp_ModelData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::NewProp_ModelData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterAgent_Inference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::ClassParams = {
		&UMLAdapterAgent_Inference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterAgent_Inference()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterAgent_Inference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterAgent_Inference.OuterSingleton, Z_Construct_UClass_UMLAdapterAgent_Inference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterAgent_Inference.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterAgent_Inference>()
	{
		return UMLAdapterAgent_Inference::StaticClass();
	}
	UMLAdapterAgent_Inference::UMLAdapterAgent_Inference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterAgent_Inference);
	UMLAdapterAgent_Inference::~UMLAdapterAgent_Inference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_Inference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_Inference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterAgent_Inference, UMLAdapterAgent_Inference::StaticClass, TEXT("UMLAdapterAgent_Inference"), &Z_Registration_Info_UClass_UMLAdapterAgent_Inference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterAgent_Inference), 2537166686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_Inference_h_3567939242(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_Inference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgent_Inference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
