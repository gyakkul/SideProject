// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WidgetGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGraphSchema() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetGraphSchema();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetGraphSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	void UWidgetGraphSchema::StaticRegisterNativesUWidgetGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetGraphSchema);
	UClass* Z_Construct_UClass_UWidgetGraphSchema_NoRegister()
	{
		return UWidgetGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetGraphSchema.h" },
		{ "ModuleRelativePath", "Classes/WidgetGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetGraphSchema_Statics::ClassParams = {
		&UWidgetGraphSchema::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UWidgetGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetGraphSchema.OuterSingleton, Z_Construct_UClass_UWidgetGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetGraphSchema.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetGraphSchema>()
	{
		return UWidgetGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetGraphSchema);
	UWidgetGraphSchema::~UWidgetGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetGraphSchema, UWidgetGraphSchema::StaticClass, TEXT("UWidgetGraphSchema"), &Z_Registration_Info_UClass_UWidgetGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetGraphSchema), 2691480195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_3571174349(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Classes_WidgetGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
