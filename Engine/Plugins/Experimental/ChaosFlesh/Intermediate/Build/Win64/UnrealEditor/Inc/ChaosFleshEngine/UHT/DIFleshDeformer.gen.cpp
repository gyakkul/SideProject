// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterfaces/DIFleshDeformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDIFleshDeformer() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDIFleshDeformer();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDIFleshDeformer_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDIFleshDeformerDataProvider();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDIFleshDeformerDataProvider_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshComponent_NoRegister();
	CHAOSFLESHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFleshDeformerParameters();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FleshDeformerParameters;
class UScriptStruct* FFleshDeformerParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FleshDeformerParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FleshDeformerParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFleshDeformerParameters, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("FleshDeformerParameters"));
	}
	return Z_Registration_Info_UScriptStruct_FleshDeformerParameters.OuterSingleton;
}
template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<FFleshDeformerParameters>()
{
	return FFleshDeformerParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFleshDeformerParameters>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		nullptr,
		&NewStructOps,
		"FleshDeformerParameters",
		sizeof(FFleshDeformerParameters),
		alignof(FFleshDeformerParameters),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFleshDeformerParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_FleshDeformerParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FleshDeformerParameters.InnerSingleton, Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FleshDeformerParameters.InnerSingleton;
	}
	void UDIFleshDeformer::StaticRegisterNativesUDIFleshDeformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDIFleshDeformer);
	UClass* Z_Construct_UClass_UDIFleshDeformer_NoRegister()
	{
		return UDIFleshDeformer::StaticClass();
	}
	struct Z_Construct_UClass_UDIFleshDeformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshDeformerParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FleshDeformerParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDIFleshDeformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformer_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/**\n* Compute Framework Data Interface for reading skeletal mesh and tetrahedral mesh bindings.\n*/" },
		{ "IncludePath", "DataInterfaces/DIFleshDeformer.h" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
		{ "ToolTip", "Compute Framework Data Interface for reading skeletal mesh and tetrahedral mesh bindings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformer_Statics::NewProp_FleshDeformerParameters_MetaData[] = {
		{ "Category", "Deformer" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDIFleshDeformer_Statics::NewProp_FleshDeformerParameters = { "FleshDeformerParameters", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIFleshDeformer, FleshDeformerParameters), Z_Construct_UScriptStruct_FFleshDeformerParameters, METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformer_Statics::NewProp_FleshDeformerParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformer_Statics::NewProp_FleshDeformerParameters_MetaData)) }; // 4122302795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDIFleshDeformer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDIFleshDeformer_Statics::NewProp_FleshDeformerParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDIFleshDeformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDIFleshDeformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDIFleshDeformer_Statics::ClassParams = {
		&UDIFleshDeformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDIFleshDeformer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformer_Statics::PropPointers),
		0,
		0x000100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDIFleshDeformer()
	{
		if (!Z_Registration_Info_UClass_UDIFleshDeformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDIFleshDeformer.OuterSingleton, Z_Construct_UClass_UDIFleshDeformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDIFleshDeformer.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UDIFleshDeformer>()
	{
		return UDIFleshDeformer::StaticClass();
	}
	UDIFleshDeformer::UDIFleshDeformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDIFleshDeformer);
	UDIFleshDeformer::~UDIFleshDeformer() {}
	void UDIFleshDeformerDataProvider::StaticRegisterNativesUDIFleshDeformerDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDIFleshDeformerDataProvider);
	UClass* Z_Construct_UClass_UDIFleshDeformerDataProvider_NoRegister()
	{
		return UDIFleshDeformerDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkinnedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FleshMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FleshDeformerParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FleshDeformerParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for reading skeletal mesh. */" },
		{ "IncludePath", "DataInterfaces/DIFleshDeformer.h" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
		{ "ToolTip", "Compute Framework Data Provider for reading skeletal mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIFleshDeformerDataProvider, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_SkinnedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIFleshDeformerDataProvider, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshMesh_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshMesh = { "FleshMesh", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIFleshDeformerDataProvider, FleshMesh), Z_Construct_UClass_UFleshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshDeformerParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataInterfaces/DIFleshDeformer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshDeformerParameters = { "FleshDeformerParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDIFleshDeformerDataProvider, FleshDeformerParameters), Z_Construct_UScriptStruct_FFleshDeformerParameters, METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshDeformerParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshDeformerParameters_MetaData)) }; // 4122302795
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_SkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::NewProp_FleshDeformerParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDIFleshDeformerDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::ClassParams = {
		&UDIFleshDeformerDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDIFleshDeformerDataProvider()
	{
		if (!Z_Registration_Info_UClass_UDIFleshDeformerDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDIFleshDeformerDataProvider.OuterSingleton, Z_Construct_UClass_UDIFleshDeformerDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDIFleshDeformerDataProvider.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UDIFleshDeformerDataProvider>()
	{
		return UDIFleshDeformerDataProvider::StaticClass();
	}
	UDIFleshDeformerDataProvider::UDIFleshDeformerDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDIFleshDeformerDataProvider);
	UDIFleshDeformerDataProvider::~UDIFleshDeformerDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ScriptStructInfo[] = {
		{ FFleshDeformerParameters::StaticStruct, Z_Construct_UScriptStruct_FFleshDeformerParameters_Statics::NewStructOps, TEXT("FleshDeformerParameters"), &Z_Registration_Info_UScriptStruct_FleshDeformerParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFleshDeformerParameters), 4122302795U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDIFleshDeformer, UDIFleshDeformer::StaticClass, TEXT("UDIFleshDeformer"), &Z_Registration_Info_UClass_UDIFleshDeformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDIFleshDeformer), 1860639582U) },
		{ Z_Construct_UClass_UDIFleshDeformerDataProvider, UDIFleshDeformerDataProvider::StaticClass, TEXT("UDIFleshDeformerDataProvider"), &Z_Registration_Info_UClass_UDIFleshDeformerDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDIFleshDeformerDataProvider), 3653063273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_14004396(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_DataInterfaces_DIFleshDeformer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
