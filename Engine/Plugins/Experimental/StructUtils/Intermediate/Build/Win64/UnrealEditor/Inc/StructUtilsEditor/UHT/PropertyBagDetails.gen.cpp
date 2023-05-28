// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyBagDetails.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBagDetails() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UEdGraphSchema_K2();
	STRUCTUTILSEDITOR_API UClass* Z_Construct_UClass_UPropertyBagSchema();
	STRUCTUTILSEDITOR_API UClass* Z_Construct_UClass_UPropertyBagSchema_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StructUtilsEditor();
// End Cross Module References
	void UPropertyBagSchema::StaticRegisterNativesUPropertyBagSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBagSchema);
	UClass* Z_Construct_UClass_UPropertyBagSchema_NoRegister()
	{
		return UPropertyBagSchema::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyBagSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyBagSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphSchema_K2,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtilsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBagSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Specific property bag schema to allow customizing the requirements (e.g. supported containers).\n */" },
		{ "IncludePath", "PropertyBagDetails.h" },
		{ "ModuleRelativePath", "Public/PropertyBagDetails.h" },
		{ "ToolTip", "Specific property bag schema to allow customizing the requirements (e.g. supported containers)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyBagSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBagSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBagSchema_Statics::ClassParams = {
		&UPropertyBagSchema::StaticClass,
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
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyBagSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBagSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyBagSchema()
	{
		if (!Z_Registration_Info_UClass_UPropertyBagSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBagSchema.OuterSingleton, Z_Construct_UClass_UPropertyBagSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyBagSchema.OuterSingleton;
	}
	template<> STRUCTUTILSEDITOR_API UClass* StaticClass<UPropertyBagSchema>()
	{
		return UPropertyBagSchema::StaticClass();
	}
	UPropertyBagSchema::UPropertyBagSchema(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBagSchema);
	UPropertyBagSchema::~UPropertyBagSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEditor_Public_PropertyBagDetails_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEditor_Public_PropertyBagDetails_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyBagSchema, UPropertyBagSchema::StaticClass, TEXT("UPropertyBagSchema"), &Z_Registration_Info_UClass_UPropertyBagSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBagSchema), 1121119227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEditor_Public_PropertyBagDetails_h_2218546322(TEXT("/Script/StructUtilsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEditor_Public_PropertyBagDetails_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtilsEditor_Public_PropertyBagDetails_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
