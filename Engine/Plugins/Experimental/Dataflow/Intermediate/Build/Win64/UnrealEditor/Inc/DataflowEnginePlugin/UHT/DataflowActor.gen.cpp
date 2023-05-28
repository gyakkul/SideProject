// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowActor() {}
// Cross Module References
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_ADataflowActor();
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_ADataflowActor_NoRegister();
	DATAFLOWENGINEPLUGIN_API UClass* Z_Construct_UClass_UDataflowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DataflowEnginePlugin();
// End Cross Module References
	void ADataflowActor::StaticRegisterNativesADataflowActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADataflowActor);
	UClass* Z_Construct_UClass_ADataflowActor_NoRegister()
	{
		return ADataflowActor::StaticClass();
	}
	struct Z_Construct_UClass_ADataflowActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataflowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataflowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADataflowActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEnginePlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataflowActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowActor.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Destruction" },
		{ "Comment", "/* DataflowComponent */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Components|Dataflow" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowActor.h" },
		{ "ToolTip", "DataflowComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent = { "DataflowComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADataflowActor, DataflowComponent), Z_Construct_UClass_UDataflowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADataflowActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADataflowActor_Statics::NewProp_DataflowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADataflowActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADataflowActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADataflowActor_Statics::ClassParams = {
		&ADataflowActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADataflowActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADataflowActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADataflowActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADataflowActor()
	{
		if (!Z_Registration_Info_UClass_ADataflowActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADataflowActor.OuterSingleton, Z_Construct_UClass_ADataflowActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADataflowActor.OuterSingleton;
	}
	template<> DATAFLOWENGINEPLUGIN_API UClass* StaticClass<ADataflowActor>()
	{
		return ADataflowActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADataflowActor);
	ADataflowActor::~ADataflowActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADataflowActor, ADataflowActor::StaticClass, TEXT("ADataflowActor"), &Z_Registration_Info_UClass_ADataflowActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADataflowActor), 4127006386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_1410398246(TEXT("/Script/DataflowEnginePlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEnginePlugin_Public_Dataflow_DataflowActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
