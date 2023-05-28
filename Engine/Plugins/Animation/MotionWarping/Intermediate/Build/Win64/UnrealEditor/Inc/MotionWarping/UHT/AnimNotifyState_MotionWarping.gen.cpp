// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifyState_MotionWarping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MotionWarping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierDeactivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierUpdate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(URootMotionModifier,Z_Param_Modifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRootMotionModifierActivate(Z_Param_MotionWarpingComp,Z_Param_Modifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimNotifyState_MotionWarping::execAddRootMotionModifier)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_MotionWarpingComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URootMotionModifier**)Z_Param__Result=P_THIS->AddRootMotionModifier_Implementation(Z_Param_MotionWarpingComp,Z_Param_Animation,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	struct AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		const UAnimSequenceBase* Animation;
		float StartTime;
		float EndTime;
		URootMotionModifier* ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
	struct AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
	struct AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
		URootMotionModifier* Modifier;
	};
	static FName NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier = FName(TEXT("AddRootMotionModifier"));
	URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(UMotionWarpingComponent* MotionWarpingComp, const UAnimSequenceBase* Animation, float StartTime, float EndTime) const
	{
		AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Animation=Animation;
		Parms.StartTime=StartTime;
		Parms.EndTime=EndTime;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_AddRootMotionModifier),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpBegin = FName(TEXT("OnWarpBegin"));
	void UAnimNotifyState_MotionWarping::OnWarpBegin(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpBegin),&Parms);
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpEnd = FName(TEXT("OnWarpEnd"));
	void UAnimNotifyState_MotionWarping::OnWarpEnd(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpEnd),&Parms);
	}
	static FName NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate = FName(TEXT("OnWarpUpdate"));
	void UAnimNotifyState_MotionWarping::OnWarpUpdate(UMotionWarpingComponent* MotionWarpingComp, URootMotionModifier* Modifier) const
	{
		AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms Parms;
		Parms.MotionWarpingComp=MotionWarpingComp;
		Parms.Modifier=Modifier;
		const_cast<UAnimNotifyState_MotionWarping*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_MotionWarping_OnWarpUpdate),&Parms);
	}
	void UAnimNotifyState_MotionWarping::StaticRegisterNativesUAnimNotifyState_MotionWarping()
	{
		UClass* Class = UAnimNotifyState_MotionWarping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRootMotionModifier", &UAnimNotifyState_MotionWarping::execAddRootMotionModifier },
			{ "OnRootMotionModifierActivate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierActivate },
			{ "OnRootMotionModifierDeactivate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierDeactivate },
			{ "OnRootMotionModifierUpdate", &UAnimNotifyState_MotionWarping::execOnRootMotionModifierUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Creates a root motion modifier from the config class defined in the notify */" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ToolTip", "Creates a root motion modifier from the config class defined in the notify" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "AddRootMotionModifier", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventAddRootMotionModifier_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierActivate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::AnimNotifyState_MotionWarping_eventOnRootMotionModifierActivate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierDeactivate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::AnimNotifyState_MotionWarping_eventOnRootMotionModifierDeactivate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics
	{
		struct AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
			URootMotionModifier* Modifier;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnRootMotionModifierUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::AnimNotifyState_MotionWarping_eventOnRootMotionModifierUpdate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpBegin", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpBegin_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpEnd", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpEnd_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Modifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms, Modifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_MotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::NewProp_Modifier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_MotionWarping, nullptr, "OnWarpUpdate", nullptr, nullptr, sizeof(AnimNotifyState_MotionWarping_eventOnWarpUpdate_Parms), Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_MotionWarping);
	UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister()
	{
		return UAnimNotifyState_MotionWarping::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMotionModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootMotionModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_AddRootMotionModifier, "AddRootMotionModifier" }, // 1203065195
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate, "OnRootMotionModifierActivate" }, // 17354390
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate, "OnRootMotionModifierDeactivate" }, // 1614819803
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate, "OnRootMotionModifierUpdate" }, // 219410706
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpBegin, "OnWarpBegin" }, // 4057616715
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpEnd, "OnWarpEnd" }, // 559637599
		{ &Z_Construct_UFunction_UAnimNotifyState_MotionWarping_OnWarpUpdate, "OnWarpUpdate" }, // 3609835596
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** AnimNotifyState used to define a motion warping window in the animation */" },
		{ "DisplayName", "Motion Warping" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_MotionWarping.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AnimNotifyState used to define a motion warping window in the animation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "//@TODO: Prevent notify callbacks and add comments explaining why we don't use those here.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_MotionWarping.h" },
		{ "ToolTip", "@TODO: Prevent notify callbacks and add comments explaining why we don't use those here." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier = { "RootMotionModifier", nullptr, (EPropertyFlags)0x001600000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_MotionWarping, RootMotionModifier), Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::NewProp_RootMotionModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MotionWarping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::ClassParams = {
		&UAnimNotifyState_MotionWarping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::PropPointers),
		0,
		0x009130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_MotionWarping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<UAnimNotifyState_MotionWarping>()
	{
		return UAnimNotifyState_MotionWarping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MotionWarping);
	UAnimNotifyState_MotionWarping::~UAnimNotifyState_MotionWarping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MotionWarping, UAnimNotifyState_MotionWarping::StaticClass, TEXT("UAnimNotifyState_MotionWarping"), &Z_Registration_Info_UClass_UAnimNotifyState_MotionWarping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MotionWarping), 3146581212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_2985786114(TEXT("/Script/MotionWarping"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_AnimNotifyState_MotionWarping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
