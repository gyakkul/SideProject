// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_EnhancedInput.h"
#include "InputAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_EnhancedInput() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionInstance();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_EnhancedInput();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	DEFINE_FUNCTION(UMLAdapterSensor_EnhancedInput::execOnInputAction)
	{
		P_GET_STRUCT_REF(FInputActionInstance,Z_Param_Out_ActionInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputAction(Z_Param_Out_ActionInstance);
		P_NATIVE_END;
	}
	void UMLAdapterSensor_EnhancedInput::StaticRegisterNativesUMLAdapterSensor_EnhancedInput()
	{
		UClass* Class = UMLAdapterSensor_EnhancedInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInputAction", &UMLAdapterSensor_EnhancedInput::execOnInputAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics
	{
		struct MLAdapterSensor_EnhancedInput_eventOnInputAction_Parms
		{
			FInputActionInstance ActionInstance;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActionInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::NewProp_ActionInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::NewProp_ActionInstance = { "ActionInstance", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MLAdapterSensor_EnhancedInput_eventOnInputAction_Parms, ActionInstance), Z_Construct_UScriptStruct_FInputActionInstance, METADATA_PARAMS(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::NewProp_ActionInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::NewProp_ActionInstance_MetaData)) }; // 1544263722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::NewProp_ActionInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_EnhancedInput.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMLAdapterSensor_EnhancedInput, nullptr, "OnInputAction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::MLAdapterSensor_EnhancedInput_eventOnInputAction_Parms), Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_EnhancedInput);
	UClass* Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_NoRegister()
	{
		return UMLAdapterSensor_EnhancedInput::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedActions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMLAdapterSensor_EnhancedInput_OnInputAction, "OnInputAction" }, // 2532810877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Sensors/MLAdapterSensor_EnhancedInput.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_EnhancedInput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions_Inner = { "TrackedActions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_EnhancedInput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions = { "TrackedActions", nullptr, (EPropertyFlags)0x0024080000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_EnhancedInput, TrackedActions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_InputComponent_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_EnhancedInput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x002408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_EnhancedInput, InputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_InputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_TrackedActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::NewProp_InputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_EnhancedInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::ClassParams = {
		&UMLAdapterSensor_EnhancedInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_EnhancedInput()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_EnhancedInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_EnhancedInput.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_EnhancedInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_EnhancedInput.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_EnhancedInput>()
	{
		return UMLAdapterSensor_EnhancedInput::StaticClass();
	}
	UMLAdapterSensor_EnhancedInput::UMLAdapterSensor_EnhancedInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_EnhancedInput);
	UMLAdapterSensor_EnhancedInput::~UMLAdapterSensor_EnhancedInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_EnhancedInput, UMLAdapterSensor_EnhancedInput::StaticClass, TEXT("UMLAdapterSensor_EnhancedInput"), &Z_Registration_Info_UClass_UMLAdapterSensor_EnhancedInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_EnhancedInput), 3643925945U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_2430641538(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_EnhancedInput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
