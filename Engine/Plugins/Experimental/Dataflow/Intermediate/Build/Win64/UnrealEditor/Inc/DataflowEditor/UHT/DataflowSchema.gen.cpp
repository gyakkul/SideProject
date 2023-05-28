// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSchema() {}
// Cross Module References
	DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowSchema();
	DATAFLOWEDITOR_API UClass* Z_Construct_UClass_UDataflowSchema_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DataflowEditor();
// End Cross Module References
	void UDataflowSchema::StaticRegisterNativesUDataflowSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSchema);
	UClass* Z_Construct_UClass_UDataflowSchema_NoRegister()
	{
		return UDataflowSchema::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dataflow/DataflowSchema.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSchema_Statics::ClassParams = {
		&UDataflowSchema::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflowSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowSchema()
	{
		if (!Z_Registration_Info_UClass_UDataflowSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSchema.OuterSingleton, Z_Construct_UClass_UDataflowSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowSchema.OuterSingleton;
	}
	template<> DATAFLOWEDITOR_API UClass* StaticClass<UDataflowSchema>()
	{
		return UDataflowSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSchema);
	UDataflowSchema::~UDataflowSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowSchema, UDataflowSchema::StaticClass, TEXT("UDataflowSchema"), &Z_Registration_Info_UClass_UDataflowSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSchema), 3884545303U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_1608391616(TEXT("/Script/DataflowEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Dataflow_Source_DataflowEditor_Public_Dataflow_DataflowSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
