// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/K2Node_EnhancedInputActionEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_EnhancedInputActionEvent() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Event();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UEnum* Z_Construct_UEnum_EnhancedInput_ETriggerEvent();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_EnhancedInputActionEvent();
	INPUTBLUEPRINTNODES_API UClass* Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InputBlueprintNodes();
// End Cross Module References
	void UK2Node_EnhancedInputActionEvent::StaticRegisterNativesUK2Node_EnhancedInputActionEvent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_EnhancedInputActionEvent);
	UClass* Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_NoRegister()
	{
		return UK2Node_EnhancedInputActionEvent::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TriggerEvent_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerEvent_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TriggerEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Event,
		(UObject* (*)())Z_Construct_UPackage__Script_InputBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_EnhancedInputActionEvent.h" },
		{ "ModuleRelativePath", "Private/K2Node_EnhancedInputActionEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_InputAction_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_EnhancedInputActionEvent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_EnhancedInputActionEvent, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_InputAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_InputAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent_MetaData[] = {
		{ "ModuleRelativePath", "Private/K2Node_EnhancedInputActionEvent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent = { "TriggerEvent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_EnhancedInputActionEvent, TriggerEvent), Z_Construct_UEnum_EnhancedInput_ETriggerEvent, METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent_MetaData)) }; // 983997710
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::NewProp_TriggerEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_EnhancedInputActionEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::ClassParams = {
		&UK2Node_EnhancedInputActionEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_EnhancedInputActionEvent()
	{
		if (!Z_Registration_Info_UClass_UK2Node_EnhancedInputActionEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_EnhancedInputActionEvent.OuterSingleton, Z_Construct_UClass_UK2Node_EnhancedInputActionEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_EnhancedInputActionEvent.OuterSingleton;
	}
	template<> INPUTBLUEPRINTNODES_API UClass* StaticClass<UK2Node_EnhancedInputActionEvent>()
	{
		return UK2Node_EnhancedInputActionEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_EnhancedInputActionEvent);
	UK2Node_EnhancedInputActionEvent::~UK2Node_EnhancedInputActionEvent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_EnhancedInputActionEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_EnhancedInputActionEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_EnhancedInputActionEvent, UK2Node_EnhancedInputActionEvent::StaticClass, TEXT("UK2Node_EnhancedInputActionEvent"), &Z_Registration_Info_UClass_UK2Node_EnhancedInputActionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_EnhancedInputActionEvent), 72908486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_EnhancedInputActionEvent_h_2294411237(TEXT("/Script/InputBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_EnhancedInputActionEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputBlueprintNodes_Private_K2Node_EnhancedInputActionEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
