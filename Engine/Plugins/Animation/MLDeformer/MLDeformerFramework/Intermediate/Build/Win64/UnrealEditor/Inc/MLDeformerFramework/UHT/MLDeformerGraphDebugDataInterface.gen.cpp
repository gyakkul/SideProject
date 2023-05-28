// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MLDeformerGraphDebugDataInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLDeformerGraphDebugDataInterface() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerAsset_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerComponent_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataInterface();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_NoRegister();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataProvider();
	MLDEFORMERFRAMEWORK_API UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_MLDeformerFramework();
// End Cross Module References
	void UMLDeformerGraphDebugDataInterface::StaticRegisterNativesUMLDeformerGraphDebugDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerGraphDebugDataInterface);
	UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_NoRegister()
	{
		return UMLDeformerGraphDebugDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** \n * Compute Framework Data Interface for MLDeformer debugging data. \n * This interfaces to editor only data, and so will only give valid results in that context.\n */" },
		{ "IncludePath", "MLDeformerGraphDebugDataInterface.h" },
		{ "ModuleRelativePath", "Public/MLDeformerGraphDebugDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Interface for MLDeformer debugging data.\nThis interfaces to editor only data, and so will only give valid results in that context." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerGraphDebugDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::ClassParams = {
		&UMLDeformerGraphDebugDataInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataInterface()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerGraphDebugDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerGraphDebugDataInterface.OuterSingleton, Z_Construct_UClass_UMLDeformerGraphDebugDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerGraphDebugDataInterface.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerGraphDebugDataInterface>()
	{
		return UMLDeformerGraphDebugDataInterface::StaticClass();
	}
	UMLDeformerGraphDebugDataInterface::UMLDeformerGraphDebugDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerGraphDebugDataInterface);
	UMLDeformerGraphDebugDataInterface::~UMLDeformerGraphDebugDataInterface() {}
	void UMLDeformerGraphDebugDataProvider::StaticRegisterNativesUMLDeformerGraphDebugDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLDeformerGraphDebugDataProvider);
	UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_NoRegister()
	{
		return UMLDeformerGraphDebugDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics
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
	UObject* (*const Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_MLDeformerFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for MLDeformer debugging data. */" },
		{ "IncludePath", "MLDeformerGraphDebugDataInterface.h" },
		{ "ModuleRelativePath", "Public/MLDeformerGraphDebugDataInterface.h" },
		{ "ToolTip", "Compute Framework Data Provider for MLDeformer debugging data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MLDeformerGraphDebugDataInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerComponent = { "DeformerComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerGraphDebugDataProvider, DeformerComponent), Z_Construct_UClass_UMLDeformerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/MLDeformerGraphDebugDataInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerAsset = { "DeformerAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLDeformerGraphDebugDataProvider, DeformerAsset), Z_Construct_UClass_UMLDeformerAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::NewProp_DeformerAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLDeformerGraphDebugDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::ClassParams = {
		&UMLDeformerGraphDebugDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLDeformerGraphDebugDataProvider()
	{
		if (!Z_Registration_Info_UClass_UMLDeformerGraphDebugDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLDeformerGraphDebugDataProvider.OuterSingleton, Z_Construct_UClass_UMLDeformerGraphDebugDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLDeformerGraphDebugDataProvider.OuterSingleton;
	}
	template<> MLDEFORMERFRAMEWORK_API UClass* StaticClass<UMLDeformerGraphDebugDataProvider>()
	{
		return UMLDeformerGraphDebugDataProvider::StaticClass();
	}
	UMLDeformerGraphDebugDataProvider::UMLDeformerGraphDebugDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLDeformerGraphDebugDataProvider);
	UMLDeformerGraphDebugDataProvider::~UMLDeformerGraphDebugDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGraphDebugDataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGraphDebugDataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLDeformerGraphDebugDataInterface, UMLDeformerGraphDebugDataInterface::StaticClass, TEXT("UMLDeformerGraphDebugDataInterface"), &Z_Registration_Info_UClass_UMLDeformerGraphDebugDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerGraphDebugDataInterface), 1165562694U) },
		{ Z_Construct_UClass_UMLDeformerGraphDebugDataProvider, UMLDeformerGraphDebugDataProvider::StaticClass, TEXT("UMLDeformerGraphDebugDataProvider"), &Z_Registration_Info_UClass_UMLDeformerGraphDebugDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLDeformerGraphDebugDataProvider), 200137540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGraphDebugDataInterface_h_2413834507(TEXT("/Script/MLDeformerFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGraphDebugDataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_MLDeformerFramework_Source_MLDeformerFramework_Public_MLDeformerGraphDebugDataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
