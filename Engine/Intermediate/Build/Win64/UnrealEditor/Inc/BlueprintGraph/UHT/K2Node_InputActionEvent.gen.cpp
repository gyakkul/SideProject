// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_InputActionEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputActionEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputActionEvent();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_InputActionEvent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_InputActionEvent::StaticRegisterNativesUK2Node_InputActionEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputActionEvent);
	UClass* Z_Construct_UClass_UK2Node_InputActionEvent_NoRegister()
	{
		return UK2Node_InputActionEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputActionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputActionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
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
	UObject* (*const Z_Construct_UClass_UK2Node_InputActionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputActionEvent.h" },
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName = { "InputActionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputActionEvent, InputActionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputActionEvent, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bConsumeInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput = { "bConsumeInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_InputActionEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_SetBit(void* Obj)
	{
		((UK2Node_InputActionEvent*)Obj)->bOverrideParentBinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding = { "bOverrideParentBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_InputActionEvent), &Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputActionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_InputKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bConsumeInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bExecuteWhenPaused,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputActionEvent_Statics::NewProp_bOverrideParentBinding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputActionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputActionEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputActionEvent_Statics::ClassParams = {
		&UK2Node_InputActionEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputActionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputActionEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputActionEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputActionEvent.OuterSingleton, Z_Construct_UClass_UK2Node_InputActionEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputActionEvent.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_InputActionEvent>()
	{
		return UK2Node_InputActionEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputActionEvent);
	UK2Node_InputActionEvent::~UK2Node_InputActionEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputActionEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputActionEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputActionEvent, UK2Node_InputActionEvent::StaticClass, TEXT("UK2Node_InputActionEvent"), &Z_Registration_Info_UClass_UK2Node_InputActionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputActionEvent), 2264133817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputActionEvent_h_3266066418(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputActionEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_InputActionEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
