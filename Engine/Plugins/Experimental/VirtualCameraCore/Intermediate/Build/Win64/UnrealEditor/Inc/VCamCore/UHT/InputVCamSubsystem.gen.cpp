// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/InputVCamSubsystem.h"
#include "VCamComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputVCamSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem();
	VCAMCORE_API UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamPlayerInput_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamGamepadInputMode();
// End Cross Module References
	DEFINE_FUNCTION(UInputVCamSubsystem::execSetShouldConsumeGamepadInput)
	{
		P_GET_ENUM(EVCamGamepadInputMode,Z_Param_GamepadInputMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldConsumeGamepadInput(EVCamGamepadInputMode(Z_Param_GamepadInputMode));
		P_NATIVE_END;
	}
	void UInputVCamSubsystem::StaticRegisterNativesUInputVCamSubsystem()
	{
		UClass* Class = UInputVCamSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetShouldConsumeGamepadInput", &UInputVCamSubsystem::execSetShouldConsumeGamepadInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics
	{
		struct InputVCamSubsystem_eventSetShouldConsumeGamepadInput_Parms
		{
			EVCamGamepadInputMode GamepadInputMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_GamepadInputMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GamepadInputMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_GamepadInputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_GamepadInputMode = { "GamepadInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InputVCamSubsystem_eventSetShouldConsumeGamepadInput_Parms, GamepadInputMode), Z_Construct_UEnum_VCamCore_EVCamGamepadInputMode, METADATA_PARAMS(nullptr, 0) }; // 575378023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_GamepadInputMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::NewProp_GamepadInputMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInputVCamSubsystem, nullptr, "SetShouldConsumeGamepadInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::InputVCamSubsystem_eventSetShouldConsumeGamepadInput_Parms), Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputVCamSubsystem);
	UClass* Z_Construct_UClass_UInputVCamSubsystem_NoRegister()
	{
		return UInputVCamSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UInputVCamSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerInput;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentInputStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentInputStack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputVCamSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVCamSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInputVCamSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInputVCamSubsystem_SetShouldConsumeGamepadInput, "SetShouldConsumeGamepadInput" }, // 1580918102
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles all input for UVCamComponent.\n * Essentially maps input devices to UVCamComponents, similar like APlayerController does for gameplay code.\n */" },
		{ "IncludePath", "Input/InputVCamSubsystem.h" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
		{ "ToolTip", "Handles all input for UVCamComponent.\nEssentially maps input devices to UVCamComponents, similar like APlayerController does for gameplay code." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0046000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputVCamSubsystem, PlayerInput), Z_Construct_UClass_UVCamPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_Inner = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData[] = {
		{ "Comment", "/** Internal. This is the current stack of InputComponents that is being processed by the PlayerInput. */" },
		{ "ModuleRelativePath", "Public/Input/InputVCamSubsystem.h" },
		{ "ToolTip", "Internal. This is the current stack of InputComponents that is being processed by the PlayerInput." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack = { "CurrentInputStack", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputVCamSubsystem, CurrentInputStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_PlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputVCamSubsystem_Statics::NewProp_CurrentInputStack,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInputVCamSubsystem_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnhancedInputSubsystemInterface_NoRegister, (int32)VTABLE_OFFSET(UInputVCamSubsystem, IEnhancedInputSubsystemInterface), false },  // 2254447060
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputVCamSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputVCamSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputVCamSubsystem_Statics::ClassParams = {
		&UInputVCamSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputVCamSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputVCamSubsystem()
	{
		if (!Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton, Z_Construct_UClass_UInputVCamSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputVCamSubsystem.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UInputVCamSubsystem>()
	{
		return UInputVCamSubsystem::StaticClass();
	}
	UInputVCamSubsystem::UInputVCamSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputVCamSubsystem);
	UInputVCamSubsystem::~UInputVCamSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputVCamSubsystem, UInputVCamSubsystem::StaticClass, TEXT("UInputVCamSubsystem"), &Z_Registration_Info_UClass_UInputVCamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputVCamSubsystem), 1789541935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_3750254666(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Input_InputVCamSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
