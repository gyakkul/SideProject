// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/K2Node_InputDebugKeyEvent.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_InputDebugKeyEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInputEvent();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputDebugKeyEvent();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_InputDebugKeyEvent_NoRegister();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_InputBlueprintNodes();
// End Cross Module References
	void UK2Node_InputDebugKeyEvent::StaticRegisterNativesUK2Node_InputDebugKeyEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_InputDebugKeyEvent);
	UClass* Z_Construct_UClass_UK2Node_InputDebugKeyEvent_NoRegister()
	{
		return UK2Node_InputDebugKeyEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChord_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputChord;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputKeyEvent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputKeyEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecuteWhenPaused_MetaData[];
#endif
		static void NewProp_bExecuteWhenPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecuteWhenPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_InputDebugKeyEvent.h" },
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKeyEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputChord_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKeyEvent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputDebugKeyEvent, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputChord_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputChord_MetaData)) }; // 2392822822
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputKeyEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKeyEvent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputKeyEvent = { "InputKeyEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_InputDebugKeyEvent, InputKeyEvent), Z_Construct_UEnum_Engine_EInputEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputKeyEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputKeyEvent_MetaData)) }; // 1054153585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_InputDebugKeyEvent.h" },
	};
#endif
	void Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused_SetBit(void* Obj)
	{
		((UK2Node_InputDebugKeyEvent*)Obj)->bExecuteWhenPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused = { "bExecuteWhenPaused", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_InputDebugKeyEvent), &Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputChord,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_InputKeyEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::NewProp_bExecuteWhenPaused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_InputDebugKeyEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::ClassParams = {
		&UK2Node_InputDebugKeyEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_InputDebugKeyEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_InputDebugKeyEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_InputDebugKeyEvent.OuterSingleton, Z_Construct_UClass_UK2Node_InputDebugKeyEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_InputDebugKeyEvent.OuterSingleton;
	}
	template<> INPUTBLUEPRINTNODES_API UClass* StaticClass<UK2Node_InputDebugKeyEvent>()
	{
		return UK2Node_InputDebugKeyEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_InputDebugKeyEvent);
	UK2Node_InputDebugKeyEvent::~UK2Node_InputDebugKeyEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_InputDebugKeyEvent, UK2Node_InputDebugKeyEvent::StaticClass, TEXT("UK2Node_InputDebugKeyEvent"), &Z_Registration_Info_UClass_UK2Node_InputDebugKeyEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_InputDebugKeyEvent), 873185090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_1643378662(TEXT("/Script/InputBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_InputDebugKeyEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
