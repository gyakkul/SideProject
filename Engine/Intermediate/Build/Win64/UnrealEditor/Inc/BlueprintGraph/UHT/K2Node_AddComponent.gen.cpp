// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AddComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AddComponent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddComponent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_AddComponent_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_AddComponent::StaticRegisterNativesUK2Node_AddComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AddComponent);
	UClass* Z_Construct_UClass_UK2Node_AddComponent_NoRegister()
	{
		return UK2Node_AddComponent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AddComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasExposedVariable_MetaData[];
#endif
		static void NewProp_bHasExposedVariable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasExposedVariable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_TemplateType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AddComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AddComponent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_SetBit(void* Obj)
	{
		((UK2Node_AddComponent*)Obj)->bHasExposedVariable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable = { "bHasExposedVariable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_AddComponent), &Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData[] = {
		{ "Comment", "/** The blueprint name we came from, so we can lookup the template after a paste */" },
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
		{ "ToolTip", "The blueprint name we came from, so we can lookup the template after a paste" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint = { "TemplateBlueprint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AddComponent, TemplateBlueprint), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_AddComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType = { "TemplateType", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AddComponent, TemplateType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_bHasExposedVariable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AddComponent_Statics::NewProp_TemplateType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AddComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AddComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AddComponent_Statics::ClassParams = {
		&UK2Node_AddComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AddComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AddComponent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AddComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AddComponent.OuterSingleton, Z_Construct_UClass_UK2Node_AddComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AddComponent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_AddComponent>()
	{
		return UK2Node_AddComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AddComponent);
	UK2Node_AddComponent::~UK2Node_AddComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_AddComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AddComponent, UK2Node_AddComponent::StaticClass, TEXT("UK2Node_AddComponent"), &Z_Registration_Info_UClass_UK2Node_AddComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AddComponent), 4159728859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddComponent_h_368935164(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_AddComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
