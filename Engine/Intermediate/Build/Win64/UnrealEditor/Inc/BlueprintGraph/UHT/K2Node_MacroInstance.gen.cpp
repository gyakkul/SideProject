// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_MacroInstance.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MacroInstance() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MacroInstance();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_MacroInstance_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Tunnel();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGraphReference();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_MacroInstance::StaticRegisterNativesUK2Node_MacroInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MacroInstance);
	UClass* Z_Construct_UClass_UK2Node_MacroInstance_NoRegister()
	{
		return UK2Node_MacroInstance::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_MacroInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MacroGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MacroGraphReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MacroGraphReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolvedWildcardType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ResolvedWildcardType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_MacroInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Tunnel,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_MacroInstance.h" },
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData[] = {
		{ "Comment", "/** A macro is like a composite node, except that the associated graph lives\n\x09  * in another blueprint, and can be instanced multiple times. */" },
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
		{ "ToolTip", "A macro is like a composite node, except that the associated graph lives\nin another blueprint, and can be instanced multiple times." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph = { "MacroGraph", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MacroInstance, MacroGraph_DEPRECATED), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference = { "MacroGraphReference", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MacroInstance, MacroGraphReference), Z_Construct_UScriptStruct_FGraphReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference_MetaData)) }; // 2337831158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData[] = {
		{ "Comment", "/** Stored type info for what type the wildcard pins in this macro should become. */" },
		{ "ModuleRelativePath", "Classes/K2Node_MacroInstance.h" },
		{ "ToolTip", "Stored type info for what type the wildcard pins in this macro should become." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType = { "ResolvedWildcardType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_MacroInstance, ResolvedWildcardType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType_MetaData)) }; // 3943443458
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_MacroGraphReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_MacroInstance_Statics::NewProp_ResolvedWildcardType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_MacroInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MacroInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MacroInstance_Statics::ClassParams = {
		&UK2Node_MacroInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MacroInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_MacroInstance()
	{
		if (!Z_Registration_Info_UClass_UK2Node_MacroInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MacroInstance.OuterSingleton, Z_Construct_UClass_UK2Node_MacroInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_MacroInstance.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_MacroInstance>()
	{
		return UK2Node_MacroInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MacroInstance);
	UK2Node_MacroInstance::~UK2Node_MacroInstance() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_MacroInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MacroInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MacroInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MacroInstance, UK2Node_MacroInstance::StaticClass, TEXT("UK2Node_MacroInstance"), &Z_Registration_Info_UClass_UK2Node_MacroInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MacroInstance), 2800376946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MacroInstance_h_2473542171(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MacroInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_MacroInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
