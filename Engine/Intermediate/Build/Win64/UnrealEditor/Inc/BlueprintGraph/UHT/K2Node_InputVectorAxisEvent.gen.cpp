// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_InputVectorAxisEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputVectorAxisEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputAxisKeyEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_InputVectorAxisEvent::StaticRegisterNativesUK2Node_InputVectorAxisEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputVectorAxisEvent);
	UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent_NoRegister()
	{
		return UK2Node_InputVectorAxisEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_InputAxisKeyEvent,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputVectorAxisEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputVectorAxisEvent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputVectorAxisEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::ClassParams = {
		&UK2Node_InputVectorAxisEvent::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputVectorAxisEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputVectorAxisEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputVectorAxisEvent.OuterSingleton, Z_Construct_UClass_UK2Node_InputVectorAxisEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputVectorAxisEvent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputVectorAxisEvent>()
	{
		return UK2Node_InputVectorAxisEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputVectorAxisEvent);
	UK2Node_InputVectorAxisEvent::~UK2Node_InputVectorAxisEvent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_InputVectorAxisEvent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputVectorAxisEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputVectorAxisEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputVectorAxisEvent, UK2Node_InputVectorAxisEvent::StaticClass, TEXT("UK2Node_InputVectorAxisEvent"), &Z_Registration_Info_UClass_UK2Node_InputVectorAxisEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputVectorAxisEvent), 548370939U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputVectorAxisEvent_h_231223194(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputVectorAxisEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputVectorAxisEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
