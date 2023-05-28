// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Actuators/MLAdapterActuator_EnhancedInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterActuator_EnhancedInput() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_EnhancedInput();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterActuator_EnhancedInput::StaticRegisterNativesUMLAdapterActuator_EnhancedInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterActuator_EnhancedInput);
	UClass* Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_NoRegister()
	{
		return UMLAdapterActuator_EnhancedInput::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearActionOnUse_MetaData[];
#endif
		static void NewProp_bClearActionOnUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearActionOnUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterActuator,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to simulate player input via the UEnhancedPlayerInput subsystem. */" },
		{ "IncludePath", "Actuators/MLAdapterActuator_EnhancedInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_EnhancedInput.h" },
		{ "ToolTip", "Allows an agent to simulate player input via the UEnhancedPlayerInput subsystem." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions_Inner = { "TrackedActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "Comment", "/**\n\x09* The actions that this actuator is allowed to inject data into. Modifying this list after using the actuator\n\x09* is unsupported because the InputData is injected into the actions based on the ordering in this array. Changing\n\x09* this could cause data to be injected incorrectly.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_EnhancedInput.h" },
		{ "ToolTip", "The actions that this actuator is allowed to inject data into. Modifying this list after using the actuator\nis unsupported because the InputData is injected into the actions based on the ordering in this array. Changing\nthis could cause data to be injected incorrectly." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions = { "TrackedActions", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterActuator_EnhancedInput, TrackedActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_EnhancedInput.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse_SetBit(void* Obj)
	{
		((UMLAdapterActuator_EnhancedInput*)Obj)->bClearActionOnUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse = { "bClearActionOnUse", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLAdapterActuator_EnhancedInput), &Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_TrackedActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::NewProp_bClearActionOnUse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterActuator_EnhancedInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::ClassParams = {
		&UMLAdapterActuator_EnhancedInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterActuator_EnhancedInput()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterActuator_EnhancedInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterActuator_EnhancedInput.OuterSingleton, Z_Construct_UClass_UMLAdapterActuator_EnhancedInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterActuator_EnhancedInput.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterActuator_EnhancedInput>()
	{
		return UMLAdapterActuator_EnhancedInput::StaticClass();
	}
	UMLAdapterActuator_EnhancedInput::UMLAdapterActuator_EnhancedInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterActuator_EnhancedInput);
	UMLAdapterActuator_EnhancedInput::~UMLAdapterActuator_EnhancedInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_EnhancedInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_EnhancedInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterActuator_EnhancedInput, UMLAdapterActuator_EnhancedInput::StaticClass, TEXT("UMLAdapterActuator_EnhancedInput"), &Z_Registration_Info_UClass_UMLAdapterActuator_EnhancedInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterActuator_EnhancedInput), 4125188351U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_EnhancedInput_h_358666235(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_EnhancedInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_EnhancedInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
