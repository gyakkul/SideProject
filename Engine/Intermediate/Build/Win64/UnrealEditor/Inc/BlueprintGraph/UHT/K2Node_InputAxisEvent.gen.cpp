// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_InputAxisEvent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputAxisEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputAxisEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputAxisEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_InputAxisEvent::StaticRegisterNativesUK2Node_InputAxisEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputAxisEvent);
	UClass* Z_Construct_UClass_UK2Node_InputAxisEvent_NoRegister()
	{
		return UK2Node_InputAxisEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputAxisEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAxisName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputAxisName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeInput_MetaData[];
#endif
		static void NewProp_bConsumeInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideParentBinding_MetaData[];
#endif
		static void NewProp_bOverrideParentBinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideParentBinding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputAxisEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputAxisEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_InputAxisName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputAxisEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_InputAxisName = { "InputAxisName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputAxisEvent, InputAxisName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_InputAxisName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_InputAxisName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Prevents actors with lower priority from handling this input\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputAxisEvent.h" },
		{ "ToolTip", "Prevents actors with lower priority from handling this input" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_InputAxisEvent*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputAxisEvent), &Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should the binding execute even when the game is paused\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputAxisEvent.h" },
		{ "ToolTip", "Should the binding execute even when the game is paused" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputAxisEvent*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputAxisEvent), &Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "// Should any bindings to this event in parent classes be removed\n" },
		{ "ModuleRelativePath", "Classes/K2Node_InputAxisEvent.h" },
		{ "ToolTip", "Should any bindings to this event in parent classes be removed" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((UK2Node_InputAxisEvent*)Obj)->bOverrideParentBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputAxisEvent), &Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_InputAxisName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bExecuteWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::NewProp_bOverrideParentBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputAxisEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::ClassParams = {
		&UK2Node_InputAxisEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputAxisEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputAxisEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputAxisEvent.OuterSingleton, Z_Construct_UClass_UK2Node_InputAxisEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputAxisEvent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputAxisEvent>()
	{
		return UK2Node_InputAxisEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputAxisEvent);
	UK2Node_InputAxisEvent::~UK2Node_InputAxisEvent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_InputAxisEvent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputAxisEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputAxisEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputAxisEvent, UK2Node_InputAxisEvent::StaticClass, TEXT("UK2Node_InputAxisEvent"), &Z_Registration_Info_UClass_UK2Node_InputAxisEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputAxisEvent), 2251924112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputAxisEvent_h_2262087334(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputAxisEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputAxisEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
