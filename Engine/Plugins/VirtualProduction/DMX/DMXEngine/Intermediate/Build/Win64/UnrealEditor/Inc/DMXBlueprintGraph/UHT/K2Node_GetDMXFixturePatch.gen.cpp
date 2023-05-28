// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_GetDMXFixturePatch.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_GetDMXFixturePatch() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetDMXFixturePatch();
	DMXBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_GetDMXFixturePatch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXBlueprintGraph();
// End Cross Module References
	void UK2Node_GetDMXFixturePatch::StaticRegisterNativesUK2Node_GetDMXFixturePatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_GetDMXFixturePatch);
	UClass* Z_Construct_UClass_UK2Node_GetDMXFixturePatch_NoRegister()
	{
		return UK2Node_GetDMXFixturePatch::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_GetDMXFixturePatch.h" },
		{ "ModuleRelativePath", "Public/K2Node_GetDMXFixturePatch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_GetDMXFixturePatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::ClassParams = {
		&UK2Node_GetDMXFixturePatch::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_GetDMXFixturePatch()
	{
		if (!Z_Registration_Info_UClass_UK2Node_GetDMXFixturePatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_GetDMXFixturePatch.OuterSingleton, Z_Construct_UClass_UK2Node_GetDMXFixturePatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_GetDMXFixturePatch.OuterSingleton;
	}
	template<> DMXBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_GetDMXFixturePatch>()
	{
		return UK2Node_GetDMXFixturePatch::StaticClass();
	}
	UK2Node_GetDMXFixturePatch::UK2Node_GetDMXFixturePatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_GetDMXFixturePatch);
	UK2Node_GetDMXFixturePatch::~UK2Node_GetDMXFixturePatch() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_GetDMXFixturePatch)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXFixturePatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXFixturePatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_GetDMXFixturePatch, UK2Node_GetDMXFixturePatch::StaticClass, TEXT("UK2Node_GetDMXFixturePatch"), &Z_Registration_Info_UClass_UK2Node_GetDMXFixturePatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_GetDMXFixturePatch), 3468169271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXFixturePatch_h_122374215(TEXT("/Script/DMXBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXFixturePatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXBlueprintGraph_Public_K2Node_GetDMXFixturePatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
