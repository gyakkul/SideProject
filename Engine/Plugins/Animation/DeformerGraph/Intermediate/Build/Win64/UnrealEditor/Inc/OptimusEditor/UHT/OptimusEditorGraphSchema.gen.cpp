// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OptimusEditorGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusEditorGraphSchema() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusEditorGraphSchema();
	OPTIMUSEDITOR_API UClass* Z_Construct_UClass_UOptimusEditorGraphSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusEditor();
// End Cross Module References
	void UOptimusEditorGraphSchema::StaticRegisterNativesUOptimusEditorGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusEditorGraphSchema);
	UClass* Z_Construct_UClass_UOptimusEditorGraphSchema_NoRegister()
	{
		return UOptimusEditorGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusEditorGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusEditorGraphSchema.h" },
		{ "ModuleRelativePath", "Private/OptimusEditorGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusEditorGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::ClassParams = {
		&UOptimusEditorGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusEditorGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UOptimusEditorGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusEditorGraphSchema.OuterSingleton, Z_Construct_UClass_UOptimusEditorGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusEditorGraphSchema.OuterSingleton;
	}
	template<> OPTIMUSEDITOR_API UClass* StaticClass<UOptimusEditorGraphSchema>()
	{
		return UOptimusEditorGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusEditorGraphSchema);
	UOptimusEditorGraphSchema::~UOptimusEditorGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchema_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusEditorGraphSchema, UOptimusEditorGraphSchema::StaticClass, TEXT("UOptimusEditorGraphSchema"), &Z_Registration_Info_UClass_UOptimusEditorGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusEditorGraphSchema), 114575116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchema_h_624718343(TEXT("/Script/OptimusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusEditor_Private_OptimusEditorGraphSchema_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
