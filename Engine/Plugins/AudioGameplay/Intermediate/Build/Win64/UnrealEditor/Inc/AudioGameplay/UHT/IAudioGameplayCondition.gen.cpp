// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/IAudioGameplayCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAudioGameplayCondition() {}
// Cross Module References
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayCondition();
	AUDIOGAMEPLAY_API UClass* Z_Construct_UClass_UAudioGameplayCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AudioGameplay();
// End Cross Module References
	DEFINE_FUNCTION(IAudioGameplayCondition::execConditionMet_Position)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConditionMet_Position_Implementation(Z_Param_Out_Position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAudioGameplayCondition::execConditionMet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConditionMet_Implementation();
		P_NATIVE_END;
	}
	struct AudioGameplayCondition_eventConditionMet_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AudioGameplayCondition_eventConditionMet_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct AudioGameplayCondition_eventConditionMet_Position_Parms
	{
		FVector Position;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		AudioGameplayCondition_eventConditionMet_Position_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IAudioGameplayCondition::ConditionMet() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConditionMet instead.");
		AudioGameplayCondition_eventConditionMet_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IAudioGameplayCondition::ConditionMet_Position(FVector const& Position) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ConditionMet_Position instead.");
		AudioGameplayCondition_eventConditionMet_Position_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAudioGameplayCondition::StaticRegisterNativesUAudioGameplayCondition()
	{
		UClass* Class = UAudioGameplayCondition::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConditionMet", &IAudioGameplayCondition::execConditionMet },
			{ "ConditionMet_Position", &IAudioGameplayCondition::execConditionMet_Position },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioGameplayCondition_eventConditionMet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioGameplayCondition_eventConditionMet_Parms), &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplayCondition" },
		{ "Comment", "/**\n\x09 * Basic condition check\n\x09 * \n\x09 * @returns true if condition is met\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayCondition.h" },
		{ "ToolTip", "Basic condition check\n\n@returns true if condition is met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioGameplayCondition, nullptr, "ConditionMet", nullptr, nullptr, sizeof(AudioGameplayCondition_eventConditionMet_Parms), Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioGameplayCondition_eventConditionMet_Position_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_Position_MetaData)) };
	void Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AudioGameplayCondition_eventConditionMet_Position_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AudioGameplayCondition_eventConditionMet_Position_Parms), &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams[] = {
		{ "Category", "AudioGameplayCondition" },
		{ "Comment", "/**\n\x09 * Allows testing a condition against a provided position.\n\x09 *\n\x09 * @param Position - The location to be considered\n\x09 * \n\x09 * @returns true if condition is met\n\x09 */" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayCondition.h" },
		{ "ToolTip", "Allows testing a condition against a provided position.\n\n@param Position - The location to be considered\n\n@returns true if condition is met" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioGameplayCondition, nullptr, "ConditionMet_Position", nullptr, nullptr, sizeof(AudioGameplayCondition_eventConditionMet_Position_Parms), Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5CC20C02, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioGameplayCondition);
	UClass* Z_Construct_UClass_UAudioGameplayCondition_NoRegister()
	{
		return UAudioGameplayCondition::StaticClass();
	}
	struct Z_Construct_UClass_UAudioGameplayCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioGameplayCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioGameplayCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet, "ConditionMet" }, // 2712513183
		{ &Z_Construct_UFunction_UAudioGameplayCondition_ConditionMet_Position, "ConditionMet_Position" }, // 2109643905
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioGameplayCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/IAudioGameplayCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioGameplayCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioGameplayCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioGameplayCondition_Statics::ClassParams = {
		&UAudioGameplayCondition::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAudioGameplayCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioGameplayCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioGameplayCondition()
	{
		if (!Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton, Z_Construct_UClass_UAudioGameplayCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioGameplayCondition.OuterSingleton;
	}
	template<> AUDIOGAMEPLAY_API UClass* StaticClass<UAudioGameplayCondition>()
	{
		return UAudioGameplayCondition::StaticClass();
	}
	UAudioGameplayCondition::UAudioGameplayCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioGameplayCondition);
	UAudioGameplayCondition::~UAudioGameplayCondition() {}
	static FName NAME_UAudioGameplayCondition_ConditionMet = FName(TEXT("ConditionMet"));
	bool IAudioGameplayCondition::Execute_ConditionMet(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioGameplayCondition::StaticClass()));
		AudioGameplayCondition_eventConditionMet_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAudioGameplayCondition_ConditionMet);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAudioGameplayCondition*)(O->GetNativeInterfaceAddress(UAudioGameplayCondition::StaticClass())))
		{
			Parms.ReturnValue = I->ConditionMet_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAudioGameplayCondition_ConditionMet_Position = FName(TEXT("ConditionMet_Position"));
	bool IAudioGameplayCondition::Execute_ConditionMet_Position(const UObject* O, FVector const& Position)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioGameplayCondition::StaticClass()));
		AudioGameplayCondition_eventConditionMet_Position_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAudioGameplayCondition_ConditionMet_Position);
		if (Func)
		{
			Parms.Position=Position;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAudioGameplayCondition*)(O->GetNativeInterfaceAddress(UAudioGameplayCondition::StaticClass())))
		{
			Parms.ReturnValue = I->ConditionMet_Position_Implementation(Position);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioGameplayCondition, UAudioGameplayCondition::StaticClass, TEXT("UAudioGameplayCondition"), &Z_Registration_Info_UClass_UAudioGameplayCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioGameplayCondition), 19927680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_3420043965(TEXT("/Script/AudioGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AudioGameplay_Source_AudioGameplay_Public_Interfaces_IAudioGameplayCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
