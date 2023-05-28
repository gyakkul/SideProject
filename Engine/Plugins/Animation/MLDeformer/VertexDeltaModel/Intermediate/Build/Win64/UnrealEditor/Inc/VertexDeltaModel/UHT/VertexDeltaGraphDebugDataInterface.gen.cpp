// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaGraphDebugDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaGraphDebugDataInterface() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_NoRegister();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_NoRegister();
// End Cross Module References
	void UDEPRECATED_VertexDeltaGraphDebugDataInterface::StaticRegisterNativesUDEPRECATED_VertexDeltaGraphDebugDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_VertexDeltaGraphDebugDataInterface);
	UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_NoRegister()
	{
		return UDEPRECATED_VertexDeltaGraphDebugDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** \n * Compute Framework Data Interface for MLDeformer debugging data. \n * This interfaces to editor only data, and so will only give valid results in that context.\n */" },
		{ "DeprecationMessage", "Please use UMLDeformerGraphDebugDataInterface instead." },
		{ "IncludePath", "VertexDeltaGraphDebugDataInterface.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDebugDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Interface for MLDeformer debugging data.\nThis interfaces to editor only data, and so will only give valid results in that context." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_VertexDeltaGraphDebugDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::ClassParams = {
		&UDEPRECATED_VertexDeltaGraphDebugDataInterface::StaticClass,
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
		0x021102A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface.OuterSingleton, Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UDEPRECATED_VertexDeltaGraphDebugDataInterface>()
	{
		return UDEPRECATED_VertexDeltaGraphDebugDataInterface::StaticClass();
	}
	UDEPRECATED_VertexDeltaGraphDebugDataInterface::UDEPRECATED_VertexDeltaGraphDebugDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_VertexDeltaGraphDebugDataInterface);
	UDEPRECATED_VertexDeltaGraphDebugDataInterface::~UDEPRECATED_VertexDeltaGraphDebugDataInterface() {}
	void UDEPRECATED_VertexDeltaGraphDebugDataProvider::StaticRegisterNativesUDEPRECATED_VertexDeltaGraphDebugDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_VertexDeltaGraphDebugDataProvider);
	UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_NoRegister()
	{
		return UDEPRECATED_VertexDeltaGraphDebugDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformerAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for MLDeformer debugging data. */" },
		{ "DeprecationMessage", "Please use UMLDeformerGraphDebugDataProvider instead." },
		{ "IncludePath", "VertexDeltaGraphDebugDataInterface.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDebugDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Provider for MLDeformer debugging data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDebugDataInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerComponent = { "DeformerComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VertexDeltaGraphDebugDataProvider, DeformerComponent), Z_Construct_UClass_UMLDeformerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDebugDataInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerAsset = { "DeformerAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VertexDeltaGraphDebugDataProvider, DeformerAsset), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::NewProp_DeformerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_VertexDeltaGraphDebugDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::ClassParams = {
		&UDEPRECATED_VertexDeltaGraphDebugDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::PropPointers),
		0,
		0x029012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider.OuterSingleton, Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UDEPRECATED_VertexDeltaGraphDebugDataProvider>()
	{
		return UDEPRECATED_VertexDeltaGraphDebugDataProvider::StaticClass();
	}
	UDEPRECATED_VertexDeltaGraphDebugDataProvider::UDEPRECATED_VertexDeltaGraphDebugDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_VertexDeltaGraphDebugDataProvider);
	UDEPRECATED_VertexDeltaGraphDebugDataProvider::~UDEPRECATED_VertexDeltaGraphDebugDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDebugDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDebugDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface, UDEPRECATED_VertexDeltaGraphDebugDataInterface::StaticClass, TEXT("UDEPRECATED_VertexDeltaGraphDebugDataInterface"), &Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_VertexDeltaGraphDebugDataInterface), 2512576641U) },
		{ Z_Construct_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider, UDEPRECATED_VertexDeltaGraphDebugDataProvider::StaticClass, TEXT("UDEPRECATED_VertexDeltaGraphDebugDataProvider"), &Z_Registration_Info_UClass_UDEPRECATED_VertexDeltaGraphDebugDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_VertexDeltaGraphDebugDataProvider), 3965315122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDebugDataInterface_h_1418322460(TEXT("/Script/VertexDeltaModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDebugDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDebugDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
