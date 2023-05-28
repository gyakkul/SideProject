// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SequencerTrackInstanceBP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerTrackInstanceBP() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerSectionBP_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackInstanceBP();
	CUSTOMIZABLESEQUENCERTRACKS_API UClass* Z_Construct_UClass_USequencerTrackInstanceBP_NoRegister();
	CUSTOMIZABLESEQUENCERTRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FSequencerTrackInstanceInput();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrackInstance();
	UPackage* Z_Construct_UPackage__Script_CustomizableSequencerTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput;
class UScriptStruct* FSequencerTrackInstanceInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput, (UObject*)Z_Construct_UPackage__Script_CustomizableSequencerTracks(), TEXT("SequencerTrackInstanceInput"));
	}
	return Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.OuterSingleton;
}
template<> CUSTOMIZABLESEQUENCERTRACKS_API UScriptStruct* StaticStruct<FSequencerTrackInstanceInput>()
{
	return FSequencerTrackInstanceInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Section_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Section;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequencerTrackInstanceInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewProp_Section_MetaData[] = {
		{ "Category", "Sequencer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewProp_Section = { "Section", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequencerTrackInstanceInput, Section), Z_Construct_UClass_USequencerSectionBP_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewProp_Section_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewProp_Section_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewProp_Section,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableSequencerTracks,
		nullptr,
		&NewStructOps,
		"SequencerTrackInstanceInput",
		sizeof(FSequencerTrackInstanceInput),
		alignof(FSequencerTrackInstanceInput),
		Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequencerTrackInstanceInput()
	{
		if (!Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.InnerSingleton, Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput.InnerSingleton;
	}
	DEFINE_FUNCTION(USequencerTrackInstanceBP::execGetInput)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSequencerTrackInstanceInput*)Z_Param__Result=P_THIS->GetInput(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerTrackInstanceBP::execGetNumInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerTrackInstanceBP::execGetInputs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSequencerTrackInstanceInput>*)Z_Param__Result=P_THIS->GetInputs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequencerTrackInstanceBP::execGetAnimatedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetAnimatedObject();
		P_NATIVE_END;
	}
	struct SequencerTrackInstanceBP_eventK2_OnInputAdded_Parms
	{
		FSequencerTrackInstanceInput Input;
	};
	struct SequencerTrackInstanceBP_eventK2_OnInputRemoved_Parms
	{
		FSequencerTrackInstanceInput Input;
	};
	static FName NAME_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs = FName(TEXT("K2_OnBeginUpdateInputs"));
	void USequencerTrackInstanceBP::K2_OnBeginUpdateInputs()
	{
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs),NULL);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnDestroyed = FName(TEXT("K2_OnDestroyed"));
	void USequencerTrackInstanceBP::K2_OnDestroyed()
	{
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnDestroyed),NULL);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnEndUpdateInputs = FName(TEXT("K2_OnEndUpdateInputs"));
	void USequencerTrackInstanceBP::K2_OnEndUpdateInputs()
	{
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnEndUpdateInputs),NULL);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnInitialize = FName(TEXT("K2_OnInitialize"));
	void USequencerTrackInstanceBP::K2_OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnInitialize),NULL);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnInputAdded = FName(TEXT("K2_OnInputAdded"));
	void USequencerTrackInstanceBP::K2_OnInputAdded(FSequencerTrackInstanceInput Input)
	{
		SequencerTrackInstanceBP_eventK2_OnInputAdded_Parms Parms;
		Parms.Input=Input;
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnInputAdded),&Parms);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnInputRemoved = FName(TEXT("K2_OnInputRemoved"));
	void USequencerTrackInstanceBP::K2_OnInputRemoved(FSequencerTrackInstanceInput Input)
	{
		SequencerTrackInstanceBP_eventK2_OnInputRemoved_Parms Parms;
		Parms.Input=Input;
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnInputRemoved),&Parms);
	}
	static FName NAME_USequencerTrackInstanceBP_K2_OnUpdate = FName(TEXT("K2_OnUpdate"));
	void USequencerTrackInstanceBP::K2_OnUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_USequencerTrackInstanceBP_K2_OnUpdate),NULL);
	}
	void USequencerTrackInstanceBP::StaticRegisterNativesUSequencerTrackInstanceBP()
	{
		UClass* Class = USequencerTrackInstanceBP::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimatedObject", &USequencerTrackInstanceBP::execGetAnimatedObject },
			{ "GetInput", &USequencerTrackInstanceBP::execGetInput },
			{ "GetInputs", &USequencerTrackInstanceBP::execGetInputs },
			{ "GetNumInputs", &USequencerTrackInstanceBP::execGetNumInputs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics
	{
		struct SequencerTrackInstanceBP_eventGetAnimatedObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventGetAnimatedObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "GetAnimatedObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::SequencerTrackInstanceBP_eventGetAnimatedObject_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics
	{
		struct SequencerTrackInstanceBP_eventGetInput_Parms
		{
			int32 Index;
			FSequencerTrackInstanceInput ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventGetInput_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventGetInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FSequencerTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 814201439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "GetInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::SequencerTrackInstanceBP_eventGetInput_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics
	{
		struct SequencerTrackInstanceBP_eventGetInputs_Parms
		{
			TArray<FSequencerTrackInstanceInput> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSequencerTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 814201439
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventGetInputs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 814201439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "GetInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::SequencerTrackInstanceBP_eventGetInputs_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics
	{
		struct SequencerTrackInstanceBP_eventGetNumInputs_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventGetNumInputs_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequencer" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "GetNumInputs", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::SequencerTrackInstanceBP_eventGetNumInputs_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnBeginUpdateInputs" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnBeginUpdateInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnDestroyed" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnDestroyed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnEndUpdateInputs" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnEndUpdateInputs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "Comment", "/*~ Implementable interface */" },
		{ "DisplayName", "OnInitialize" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventK2_OnInputAdded_Parms, Input), Z_Construct_UScriptStruct_FSequencerTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 814201439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnInputAdded" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnInputAdded", nullptr, nullptr, sizeof(SequencerTrackInstanceBP_eventK2_OnInputAdded_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequencerTrackInstanceBP_eventK2_OnInputRemoved_Parms, Input), Z_Construct_UScriptStruct_FSequencerTrackInstanceInput, METADATA_PARAMS(nullptr, 0) }; // 814201439
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::NewProp_Input,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnInputRemoved" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnInputRemoved", nullptr, nullptr, sizeof(SequencerTrackInstanceBP_eventK2_OnInputRemoved_Parms), Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "TRUE" },
		{ "Category", "Sequencer" },
		{ "DisplayName", "OnUpdate" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequencerTrackInstanceBP, nullptr, "K2_OnUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequencerTrackInstanceBP);
	UClass* Z_Construct_UClass_USequencerTrackInstanceBP_NoRegister()
	{
		return USequencerTrackInstanceBP::StaticClass();
	}
	struct Z_Construct_UClass_USequencerTrackInstanceBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerTrackInstanceBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneTrackInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableSequencerTracks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequencerTrackInstanceBP_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_GetAnimatedObject, "GetAnimatedObject" }, // 949830231
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_GetInput, "GetInput" }, // 102319707
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_GetInputs, "GetInputs" }, // 2738445895
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_GetNumInputs, "GetNumInputs" }, // 656360259
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnBeginUpdateInputs, "K2_OnBeginUpdateInputs" }, // 3167806963
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnDestroyed, "K2_OnDestroyed" }, // 3199255919
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnEndUpdateInputs, "K2_OnEndUpdateInputs" }, // 3768201438
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInitialize, "K2_OnInitialize" }, // 404889280
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputAdded, "K2_OnInputAdded" }, // 883313633
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnInputRemoved, "K2_OnInputRemoved" }, // 515222405
		{ &Z_Construct_UFunction_USequencerTrackInstanceBP_K2_OnUpdate, "K2_OnUpdate" }, // 2878741845
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerTrackInstanceBP_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "SequencerTrackInstance" },
		{ "IncludePath", "SequencerTrackInstanceBP.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SequencerTrackInstanceBP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerTrackInstanceBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequencerTrackInstanceBP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequencerTrackInstanceBP_Statics::ClassParams = {
		&USequencerTrackInstanceBP::StaticClass,
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
		0x009000A9u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerTrackInstanceBP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerTrackInstanceBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerTrackInstanceBP()
	{
		if (!Z_Registration_Info_UClass_USequencerTrackInstanceBP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequencerTrackInstanceBP.OuterSingleton, Z_Construct_UClass_USequencerTrackInstanceBP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequencerTrackInstanceBP.OuterSingleton;
	}
	template<> CUSTOMIZABLESEQUENCERTRACKS_API UClass* StaticClass<USequencerTrackInstanceBP>()
	{
		return USequencerTrackInstanceBP::StaticClass();
	}
	USequencerTrackInstanceBP::USequencerTrackInstanceBP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerTrackInstanceBP);
	USequencerTrackInstanceBP::~USequencerTrackInstanceBP() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ScriptStructInfo[] = {
		{ FSequencerTrackInstanceInput::StaticStruct, Z_Construct_UScriptStruct_FSequencerTrackInstanceInput_Statics::NewStructOps, TEXT("SequencerTrackInstanceInput"), &Z_Registration_Info_UScriptStruct_SequencerTrackInstanceInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequencerTrackInstanceInput), 814201439U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequencerTrackInstanceBP, USequencerTrackInstanceBP::StaticClass, TEXT("USequencerTrackInstanceBP"), &Z_Registration_Info_UClass_USequencerTrackInstanceBP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequencerTrackInstanceBP), 957815160U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_2395741405(TEXT("/Script/CustomizableSequencerTracks"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_CustomizableSequencerTracks_Source_CustomizableSequencerTracks_Public_SequencerTrackInstanceBP_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
