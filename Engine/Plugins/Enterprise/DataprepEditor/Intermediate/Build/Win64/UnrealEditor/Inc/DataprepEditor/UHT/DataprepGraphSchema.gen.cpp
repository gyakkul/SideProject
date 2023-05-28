// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepGraph/DataprepGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepGraphSchema() {}
// Cross Module References
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphSchema();
	DATAPREPEDITOR_API UClass* Z_Construct_UClass_UDataprepGraphSchema_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	UPackage* Z_Construct_UPackage__Script_DataprepEditor();
// End Cross Module References
	void UDataprepGraphSchema::StaticRegisterNativesUDataprepGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepGraphSchema);
	UClass* Z_Construct_UClass_UDataprepGraphSchema_NoRegister()
	{
		return UDataprepGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataprepGraph/DataprepGraphSchema.h" },
		{ "ModuleRelativePath", "Private/DataprepGraph/DataprepGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepGraphSchema_Statics::ClassParams = {
		&UDataprepGraphSchema::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UDataprepGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepGraphSchema.OuterSingleton, Z_Construct_UClass_UDataprepGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepGraphSchema.OuterSingleton;
	}
	template<> DATAPREPEDITOR_API UClass* StaticClass<UDataprepGraphSchema>()
	{
		return UDataprepGraphSchema::StaticClass();
	}
	UDataprepGraphSchema::UDataprepGraphSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepGraphSchema);
	UDataprepGraphSchema::~UDataprepGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepGraphSchema, UDataprepGraphSchema::StaticClass, TEXT("UDataprepGraphSchema"), &Z_Registration_Info_UClass_UDataprepGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepGraphSchema), 146592151U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphSchema_h_2688912836(TEXT("/Script/DataprepEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepEditor_Private_DataprepGraph_DataprepGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
