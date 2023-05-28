// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Oscillators/DMXControlConsoleFloatOscillator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXControlConsoleFloatOscillator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator();
	DMXCONTROLCONSOLE_API UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXControlConsole();
// End Cross Module References
	DEFINE_FUNCTION(UDMXControlConsoleFloatOscillator::execGetNormalizedValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNormalizedValue_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	struct DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms
	{
		float DeltaTime;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UDMXControlConsoleFloatOscillator_GetNormalizedValue = FName(TEXT("GetNormalizedValue"));
	float UDMXControlConsoleFloatOscillator::GetNormalizedValue(float DeltaTime)
	{
		DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UDMXControlConsoleFloatOscillator_GetNormalizedValue),&Parms);
		return Parms.ReturnValue;
	}
	void UDMXControlConsoleFloatOscillator::StaticRegisterNativesUDMXControlConsoleFloatOscillator()
	{
		UClass* Class = UDMXControlConsoleFloatOscillator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNormalizedValue", &UDMXControlConsoleFloatOscillator::execGetNormalizedValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Gets a normalized value that is sent as DMX */" },
		{ "ModuleRelativePath", "Public/Oscillators/DMXControlConsoleFloatOscillator.h" },
		{ "ToolTip", "Gets a normalized value that is sent as DMX" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXControlConsoleFloatOscillator, nullptr, "GetNormalizedValue", nullptr, nullptr, sizeof(DMXControlConsoleFloatOscillator_eventGetNormalizedValue_Parms), Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXControlConsoleFloatOscillator);
	UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator_NoRegister()
	{
		return UDMXControlConsoleFloatOscillator::StaticClass();
	}
	struct Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXControlConsole,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXControlConsoleFloatOscillator_GetNormalizedValue, "GetNormalizedValue" }, // 1389774745
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A value Oscillator that can be used in the DMX Control Console. Outputs float (normalized values) */" },
		{ "IncludePath", "Oscillators/DMXControlConsoleFloatOscillator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Oscillators/DMXControlConsoleFloatOscillator.h" },
		{ "ToolTip", "A value Oscillator that can be used in the DMX Control Console. Outputs float (normalized values)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXControlConsoleFloatOscillator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::ClassParams = {
		&UDMXControlConsoleFloatOscillator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXControlConsoleFloatOscillator()
	{
		if (!Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator.OuterSingleton, Z_Construct_UClass_UDMXControlConsoleFloatOscillator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator.OuterSingleton;
	}
	template<> DMXCONTROLCONSOLE_API UClass* StaticClass<UDMXControlConsoleFloatOscillator>()
	{
		return UDMXControlConsoleFloatOscillator::StaticClass();
	}
	UDMXControlConsoleFloatOscillator::UDMXControlConsoleFloatOscillator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXControlConsoleFloatOscillator);
	UDMXControlConsoleFloatOscillator::~UDMXControlConsoleFloatOscillator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Oscillators_DMXControlConsoleFloatOscillator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Oscillators_DMXControlConsoleFloatOscillator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXControlConsoleFloatOscillator, UDMXControlConsoleFloatOscillator::StaticClass, TEXT("UDMXControlConsoleFloatOscillator"), &Z_Registration_Info_UClass_UDMXControlConsoleFloatOscillator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXControlConsoleFloatOscillator), 2372493587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Oscillators_DMXControlConsoleFloatOscillator_h_2579311966(TEXT("/Script/DMXControlConsole"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Oscillators_DMXControlConsoleFloatOscillator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXControlConsole_Source_DMXControlConsole_Public_Oscillators_DMXControlConsoleFloatOscillator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
