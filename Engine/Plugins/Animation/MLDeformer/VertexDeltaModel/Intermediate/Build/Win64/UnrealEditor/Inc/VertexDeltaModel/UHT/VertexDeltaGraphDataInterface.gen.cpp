// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VertexDeltaGraphDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVertexDeltaGraphDataInterface() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_VertexDeltaModel();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaGraphDataInterface();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaGraphDataInterface_NoRegister();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaGraphDataProvider();
	VERTEXDELTAMODEL_API UClass* Z_Construct_UClass_UVertexDeltaGraphDataProvider_NoRegister();
// End Cross Module References
	void UVertexDeltaGraphDataInterface::StaticRegisterNativesUVertexDeltaGraphDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaGraphDataInterface);
	UClass* Z_Construct_UClass_UVertexDeltaGraphDataInterface_NoRegister()
	{
		return UVertexDeltaGraphDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for MLDefomer data. */" },
		{ "IncludePath", "VertexDeltaGraphDataInterface.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Interface for MLDefomer data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaGraphDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::ClassParams = {
		&UVertexDeltaGraphDataInterface::StaticClass,
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
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaGraphDataInterface()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaGraphDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaGraphDataInterface.OuterSingleton, Z_Construct_UClass_UVertexDeltaGraphDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaGraphDataInterface.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UVertexDeltaGraphDataInterface>()
	{
		return UVertexDeltaGraphDataInterface::StaticClass();
	}
	UVertexDeltaGraphDataInterface::UVertexDeltaGraphDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaGraphDataInterface);
	UVertexDeltaGraphDataInterface::~UVertexDeltaGraphDataInterface() {}
	void UVertexDeltaGraphDataProvider::StaticRegisterNativesUVertexDeltaGraphDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVertexDeltaGraphDataProvider);
	UClass* Z_Construct_UClass_UVertexDeltaGraphDataProvider_NoRegister()
	{
		return UVertexDeltaGraphDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeformerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeformerComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_VertexDeltaModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for MLDeformer data. */" },
		{ "IncludePath", "VertexDeltaGraphDataInterface.h" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Provider for MLDeformer data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::NewProp_DeformerComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** The deformer component that this data provider works on. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VertexDeltaGraphDataInterface.h" },
		{ "ToolTip", "The deformer component that this data provider works on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::NewProp_DeformerComponent = { "DeformerComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVertexDeltaGraphDataProvider, DeformerComponent), Z_Construct_UClass_UMLDeformerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::NewProp_DeformerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::NewProp_DeformerComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::NewProp_DeformerComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVertexDeltaGraphDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::ClassParams = {
		&UVertexDeltaGraphDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVertexDeltaGraphDataProvider()
	{
		if (!Z_Registration_Info_UClass_UVertexDeltaGraphDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVertexDeltaGraphDataProvider.OuterSingleton, Z_Construct_UClass_UVertexDeltaGraphDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVertexDeltaGraphDataProvider.OuterSingleton;
	}
	template<> VERTEXDELTAMODEL_API UClass* StaticClass<UVertexDeltaGraphDataProvider>()
	{
		return UVertexDeltaGraphDataProvider::StaticClass();
	}
	UVertexDeltaGraphDataProvider::UVertexDeltaGraphDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVertexDeltaGraphDataProvider);
	UVertexDeltaGraphDataProvider::~UVertexDeltaGraphDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVertexDeltaGraphDataInterface, UVertexDeltaGraphDataInterface::StaticClass, TEXT("UVertexDeltaGraphDataInterface"), &Z_Registration_Info_UClass_UVertexDeltaGraphDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaGraphDataInterface), 65057520U) },
		{ Z_Construct_UClass_UVertexDeltaGraphDataProvider, UVertexDeltaGraphDataProvider::StaticClass, TEXT("UVertexDeltaGraphDataProvider"), &Z_Registration_Info_UClass_UVertexDeltaGraphDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVertexDeltaGraphDataProvider), 1097827969U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDataInterface_h_910980915(TEXT("/Script/VertexDeltaModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_VertexDeltaModel_Source_VertexDeltaModel_Public_VertexDeltaGraphDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
