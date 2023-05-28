// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ParametricMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParametricMovement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UParametricMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UParametricMovementComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleParametricMotion();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleParametricMotion;
class UScriptStruct* FSimpleParametricMotion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleParametricMotion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleParametricMotion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleParametricMotion, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("SimpleParametricMotion"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleParametricMotion.OuterSingleton;
}
template<> NETWORKPREDICTIONEXTRAS_API UScriptStruct* StaticStruct<FSimpleParametricMotion>()
{
	return FSimpleParametricMotion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametricDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParametricDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Extremely simple struct for defining parametric motion. This is editable in UParametricMovementComponent's defaults, and also used by the simulation code. \n" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
		{ "ToolTip", "Extremely simple struct for defining parametric motion. This is editable in UParametricMovementComponent's defaults, and also used by the simulation code." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleParametricMotion>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_ParametricDelta_MetaData[] = {
		{ "Category", "ParametricMovement" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_ParametricDelta = { "ParametricDelta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleParametricMotion, ParametricDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_ParametricDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_ParametricDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MinTime_MetaData[] = {
		{ "Category", "ParametricMovement" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MinTime = { "MinTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleParametricMotion, MinTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MinTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MaxTime_MetaData[] = {
		{ "Category", "ParametricMovement" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MaxTime = { "MaxTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleParametricMotion, MaxTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MaxTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_ParametricDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MinTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewProp_MaxTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		&NewStructOps,
		"SimpleParametricMotion",
		sizeof(FSimpleParametricMotion),
		alignof(FSimpleParametricMotion),
		Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleParametricMotion()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleParametricMotion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleParametricMotion.InnerSingleton, Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleParametricMotion.InnerSingleton;
	}
	DEFINE_FUNCTION(UParametricMovementComponent::execEnableInterpolationMode)
	{
		P_GET_UBOOL(Z_Param_bValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableInterpolationMode(Z_Param_bValue);
		P_NATIVE_END;
	}
	void UParametricMovementComponent::StaticRegisterNativesUParametricMovementComponent()
	{
		UClass* Class = UParametricMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableInterpolationMode", &UParametricMovementComponent::execEnableInterpolationMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics
	{
		struct ParametricMovementComponent_eventEnableInterpolationMode_Parms
		{
			bool bValue;
		};
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((ParametricMovementComponent_eventEnableInterpolationMode_Parms*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ParametricMovementComponent_eventEnableInterpolationMode_Parms), &Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Networking" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UParametricMovementComponent, nullptr, "EnableInterpolationMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::ParametricMovementComponent_eventEnableInterpolationMode_Parms), Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParametricMovementComponent);
	UClass* Z_Construct_UClass_UParametricMovementComponent_NoRegister()
	{
		return UParametricMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UParametricMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableParametricMovementSimulation_MetaData[];
#endif
		static void NewProp_bDisableParametricMovementSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableParametricMovementSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametricMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParametricMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDependentSimulation_MetaData[];
#endif
		static void NewProp_bEnableDependentSimulation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDependentSimulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInterpolation_MetaData[];
#endif
		static void NewProp_bEnableInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableForceNetUpdate_MetaData[];
#endif
		static void NewProp_bEnableForceNetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableForceNetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentNetUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParentNetUpdateFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParametricMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UParametricMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UParametricMovementComponent_EnableInterpolationMode, "EnableInterpolationMode" }, // 4050897947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n//\x09""ActorComponent for running basic Parametric movement. \n//\x09Parametric movement could be anything that takes a Time and returns an FTransform.\n//\x09\n//\x09Initially, we will support pushing (ie, we sweep as we update the mover's position).\n//\x09""But we will not allow a parametric mover from being blocked. \n//\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "ParametricMovement.h" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
		{ "ToolTip", "ActorComponent for running basic Parametric movement.\nParametric movement could be anything that takes a Time and returns an FTransform.\n\nInitially, we will support pushing (ie, we sweep as we update the mover's position).\nBut we will not allow a parametric mover from being blocked." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation_MetaData[] = {
		{ "Category", "ParametricMovement" },
		{ "Comment", "/** Disables starting the simulation. For development/testing ease of use */" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
		{ "ToolTip", "Disables starting the simulation. For development/testing ease of use" },
	};
#endif
	void Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation_SetBit(void* Obj)
	{
		((UParametricMovementComponent*)Obj)->bDisableParametricMovementSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation = { "bDisableParametricMovementSimulation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParametricMovementComponent), &Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParametricMotion_MetaData[] = {
		{ "Category", "ParametricMovement" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParametricMotion = { "ParametricMotion", nullptr, (EPropertyFlags)0x0021080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricMovementComponent, ParametricMotion), Z_Construct_UScriptStruct_FSimpleParametricMotion, METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParametricMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParametricMotion_MetaData)) }; // 920830538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation_MetaData[] = {
		{ "Category", "ParametricMovementNetworking" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	void Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation_SetBit(void* Obj)
	{
		((UParametricMovementComponent*)Obj)->bEnableDependentSimulation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation = { "bEnableDependentSimulation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParametricMovementComponent), &Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation_MetaData[] = {
		{ "Category", "ParametricMovementNetworking" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
	};
#endif
	void Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation_SetBit(void* Obj)
	{
		((UParametricMovementComponent*)Obj)->bEnableInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation = { "bEnableInterpolation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParametricMovementComponent), &Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate_MetaData[] = {
		{ "Category", "ParametricMovementNetworking" },
		{ "Comment", "/** Calls ForceNetUpdate every frame. Has slightly different behavior than a very high NetUpdateFrequency */" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
		{ "ToolTip", "Calls ForceNetUpdate every frame. Has slightly different behavior than a very high NetUpdateFrequency" },
	};
#endif
	void Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate_SetBit(void* Obj)
	{
		((UParametricMovementComponent*)Obj)->bEnableForceNetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate = { "bEnableForceNetUpdate", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UParametricMovementComponent), &Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParentNetUpdateFrequency_MetaData[] = {
		{ "Category", "ParametricMovementNetworking" },
		{ "Comment", "/** Sets NetUpdateFrequency on parent. This is editable on the component and really just meant for use during development/test maps */" },
		{ "ModuleRelativePath", "Public/ParametricMovement.h" },
		{ "ToolTip", "Sets NetUpdateFrequency on parent. This is editable on the component and really just meant for use during development/test maps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParentNetUpdateFrequency = { "ParentNetUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParametricMovementComponent, ParentNetUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParentNetUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParentNetUpdateFrequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParametricMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bDisableParametricMovementSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParametricMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableDependentSimulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_bEnableForceNetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParametricMovementComponent_Statics::NewProp_ParentNetUpdateFrequency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParametricMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParametricMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParametricMovementComponent_Statics::ClassParams = {
		&UParametricMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UParametricMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UParametricMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParametricMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParametricMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UParametricMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParametricMovementComponent.OuterSingleton, Z_Construct_UClass_UParametricMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParametricMovementComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UParametricMovementComponent>()
	{
		return UParametricMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParametricMovementComponent);
	UParametricMovementComponent::~UParametricMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ScriptStructInfo[] = {
		{ FSimpleParametricMotion::StaticStruct, Z_Construct_UScriptStruct_FSimpleParametricMotion_Statics::NewStructOps, TEXT("SimpleParametricMotion"), &Z_Registration_Info_UScriptStruct_SimpleParametricMotion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleParametricMotion), 920830538U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParametricMovementComponent, UParametricMovementComponent::StaticClass, TEXT("UParametricMovementComponent"), &Z_Registration_Info_UClass_UParametricMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParametricMovementComponent), 1503557001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_685556339(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_ParametricMovement_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
