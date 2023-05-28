// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParameterizationOps/UVLayoutOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutOp() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutOperatorFactory();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	void UUVLayoutOperatorFactory::StaticRegisterNativesUUVLayoutOperatorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutOperatorFactory);
	UClass* Z_Construct_UClass_UUVLayoutOperatorFactory_NoRegister()
	{
		return UUVLayoutOperatorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutOperatorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Layout operations.\n *\n * Inherits from UObject so that it can hold a strong pointer to the settings UObject, which\n * needs to be a UObject to be displayed in the details panel.\n */" },
		{ "IncludePath", "ParameterizationOps/UVLayoutOp.h" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/UVLayoutOp.h" },
		{ "ToolTip", "Can be hooked up to a UMeshOpPreviewWithBackgroundCompute to perform UV Layout operations.\n\nInherits from UObject so that it can hold a strong pointer to the settings UObject, which\nneeds to be a UObject to be displayed in the details panel." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ParameterizationOps/UVLayoutOp.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutOperatorFactory, Settings), Z_Construct_UClass_UUVLayoutProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::NewProp_Settings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutOperatorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::ClassParams = {
		&UUVLayoutOperatorFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutOperatorFactory()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutOperatorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutOperatorFactory.OuterSingleton, Z_Construct_UClass_UUVLayoutOperatorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutOperatorFactory.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UClass* StaticClass<UUVLayoutOperatorFactory>()
	{
		return UUVLayoutOperatorFactory::StaticClass();
	}
	UUVLayoutOperatorFactory::UUVLayoutOperatorFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutOperatorFactory);
	UUVLayoutOperatorFactory::~UUVLayoutOperatorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVLayoutOp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVLayoutOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutOperatorFactory, UUVLayoutOperatorFactory::StaticClass, TEXT("UUVLayoutOperatorFactory"), &Z_Registration_Info_UClass_UUVLayoutOperatorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutOperatorFactory), 393460730U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVLayoutOp_h_2137900759(TEXT("/Script/ModelingOperators"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVLayoutOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVLayoutOp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
