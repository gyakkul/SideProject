// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowObject.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow();
	DATAFLOWENGINE_API UClass* Z_Construct_UClass_UDataflow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DataflowEngine();
// End Cross Module References
	void UDataflow::StaticRegisterNativesUDataflow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflow);
	UClass* Z_Construct_UClass_UDataflow_NoRegister()
	{
		return UDataflow::StaticClass();
	}
	struct Z_Construct_UClass_UDataflow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* UDataflow (UObject)\n*\n* UObject wrapper for the Dataflow::FGraph\n*\n*/" },
		{ "IncludePath", "Dataflow/DataflowObject.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UDataflow (UObject)\n\nUObject wrapper for the Dataflow::FGraph" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
#endif
	void Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((UDataflow*)Obj)->bActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataflow), &Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::NewProp_bActive_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflow, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflow_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Render" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataflow_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflow, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataflow_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_bActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflow_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflow_Statics::ClassParams = {
		&UDataflow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataflow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflow()
	{
		if (!Z_Registration_Info_UClass_UDataflow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflow.OuterSingleton, Z_Construct_UClass_UDataflow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflow.OuterSingleton;
	}
	template<> DATAFLOWENGINE_API UClass* StaticClass<UDataflow>()
	{
		return UDataflow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflow);
	UDataflow::~UDataflow() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDataflow)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflow, UDataflow::StaticClass, TEXT("UDataflow"), &Z_Registration_Info_UClass_UDataflow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflow), 593665359U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_387891587(TEXT("/Script/DataflowEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Engine_Public_Dataflow_DataflowObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
