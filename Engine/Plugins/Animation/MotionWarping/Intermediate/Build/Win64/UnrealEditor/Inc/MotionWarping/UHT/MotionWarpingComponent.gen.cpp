// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionWarpingComponent.h"
#include "RootMotionModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionWarpingComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingUtilities_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_NoRegister();
	MOTIONWARPING_API UFunction* Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingTarget();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingWindowData();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionWarpingWindowData;
class UScriptStruct* FMotionWarpingWindowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingWindowData, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionWarpingWindowData"));
	}
	return Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.OuterSingleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionWarpingWindowData>()
{
	return FMotionWarpingWindowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNotify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AnimNotify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionWarpingWindowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_AnimNotify_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_AnimNotify = { "AnimNotify", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingWindowData, AnimNotify), Z_Construct_UClass_UAnimNotifyState_MotionWarping_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_AnimNotify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_AnimNotify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingWindowData, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_EndTime_MetaData[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionWarpingWindowData, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_EndTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_AnimNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewProp_EndTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionWarpingWindowData",
		sizeof(FMotionWarpingWindowData),
		alignof(FMotionWarpingWindowData),
		Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionWarpingWindowData()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.InnerSingleton, Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionWarpingWindowData.InnerSingleton;
	}
	DEFINE_FUNCTION(UMotionWarpingUtilities::execGetMotionWarpingWindowsForWarpTargetFromAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_TARRAY_REF(FMotionWarpingWindowData,Z_Param_Out_OutWindows);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(Z_Param_Animation,Z_Param_WarpTargetName,Z_Param_Out_OutWindows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingUtilities::execGetMotionWarpingWindowsFromAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_TARRAY_REF(FMotionWarpingWindowData,Z_Param_Out_OutWindows);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(Z_Param_Animation,Z_Param_Out_OutWindows);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingUtilities::execExtractRootMotionFromAnimation)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_Animation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UMotionWarpingUtilities::ExtractRootMotionFromAnimation(Z_Param_Animation,Z_Param_StartTime,Z_Param_EndTime);
		P_NATIVE_END;
	}
	void UMotionWarpingUtilities::StaticRegisterNativesUMotionWarpingUtilities()
	{
		UClass* Class = UMotionWarpingUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractRootMotionFromAnimation", &UMotionWarpingUtilities::execExtractRootMotionFromAnimation },
			{ "GetMotionWarpingWindowsForWarpTargetFromAnimation", &UMotionWarpingUtilities::execGetMotionWarpingWindowsForWarpTargetFromAnimation },
			{ "GetMotionWarpingWindowsFromAnimation", &UMotionWarpingUtilities::execGetMotionWarpingWindowsFromAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics
	{
		struct MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms
		{
			const UAnimSequenceBase* Animation;
			float StartTime;
			float EndTime;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, StartTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Extract Root Motion transform from a contiguous position range */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Extract Root Motion transform from a contiguous position range" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "ExtractRootMotionFromAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::MotionWarpingUtilities_eventExtractRootMotionFromAnimation_Parms), Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics
	{
		struct MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms
		{
			const UAnimSequenceBase* Animation;
			FName WarpTargetName;
			TArray<FMotionWarpingWindowData> OutWindows;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWindows_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWindows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_OutWindows_Inner = { "OutWindows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotionWarpingWindowData, METADATA_PARAMS(nullptr, 0) }; // 3172476744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_OutWindows = { "OutWindows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms, OutWindows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3172476744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_OutWindows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::NewProp_OutWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** @return All the MotionWarping windows within the supplied animation for a given Warp Target */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "@return All the MotionWarping windows within the supplied animation for a given Warp Target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "GetMotionWarpingWindowsForWarpTargetFromAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::MotionWarpingUtilities_eventGetMotionWarpingWindowsForWarpTargetFromAnimation_Parms), Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics
	{
		struct MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms
		{
			const UAnimSequenceBase* Animation;
			TArray<FMotionWarpingWindowData> OutWindows;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutWindows_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutWindows;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_Animation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_Animation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_OutWindows_Inner = { "OutWindows", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotionWarpingWindowData, METADATA_PARAMS(nullptr, 0) }; // 3172476744
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_OutWindows = { "OutWindows", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms, OutWindows), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3172476744
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_OutWindows_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::NewProp_OutWindows,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** @return All the MotionWarping windows within the supplied animation */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "@return All the MotionWarping windows within the supplied animation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingUtilities, nullptr, "GetMotionWarpingWindowsFromAnimation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::MotionWarpingUtilities_eventGetMotionWarpingWindowsFromAnimation_Parms), Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionWarpingUtilities);
	UClass* Z_Construct_UClass_UMotionWarpingUtilities_NoRegister()
	{
		return UMotionWarpingUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UMotionWarpingUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionWarpingUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionWarpingUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_ExtractRootMotionFromAnimation, "ExtractRootMotionFromAnimation" }, // 359100772
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation, "GetMotionWarpingWindowsForWarpTargetFromAnimation" }, // 2353984221
		{ &Z_Construct_UFunction_UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation, "GetMotionWarpingWindowsFromAnimation" }, // 1391650819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionWarpingUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingUtilities>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionWarpingUtilities_Statics::ClassParams = {
		&UMotionWarpingUtilities::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionWarpingUtilities()
	{
		if (!Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton, Z_Construct_UClass_UMotionWarpingUtilities_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionWarpingUtilities.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<UMotionWarpingUtilities>()
	{
		return UMotionWarpingUtilities::StaticClass();
	}
	UMotionWarpingUtilities::UMotionWarpingUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionWarpingUtilities);
	UMotionWarpingUtilities::~UMotionWarpingUtilities() {}
	struct Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics
	{
		struct _Script_MotionWarping_eventMotionWarpingPreUpdate_Parms
		{
			UMotionWarpingComponent* MotionWarpingComp;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionWarpingComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::NewProp_MotionWarpingComp = { "MotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms, MotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::NewProp_MotionWarpingComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::NewProp_MotionWarpingComp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MotionWarping, nullptr, "MotionWarpingPreUpdate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms), Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMotionWarpingPreUpdate_DelegateWrapper(const FMulticastScriptDelegate& MotionWarpingPreUpdate, UMotionWarpingComponent* MotionWarpingComp)
{
	struct _Script_MotionWarping_eventMotionWarpingPreUpdate_Parms
	{
		UMotionWarpingComponent* MotionWarpingComp;
	};
	_Script_MotionWarping_eventMotionWarpingPreUpdate_Parms Parms;
	Parms.MotionWarpingComp=MotionWarpingComp;
	MotionWarpingPreUpdate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMotionWarpingComponent::execRemoveWarpTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveWarpTarget(Z_Param_WarpTargetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_GET_STRUCT(FRotator,Z_Param_TargetRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateWarpTargetFromLocationAndRotation(Z_Param_WarpTargetName,Z_Param_TargetLocation,Z_Param_TargetRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocation)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_STRUCT(FVector,Z_Param_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateWarpTargetFromLocation(Z_Param_WarpTargetName,Z_Param_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromComponent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_OBJECT(USceneComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bFollowComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateWarpTargetFromComponent(Z_Param_WarpTargetName,Z_Param_Component,Z_Param_BoneName,Z_Param_bFollowComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTargetFromTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_STRUCT(FTransform,Z_Param_TargetTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateWarpTargetFromTransform(Z_Param_WarpTargetName,Z_Param_TargetTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execAddOrUpdateWarpTarget)
	{
		P_GET_STRUCT_REF(FMotionWarpingTarget,Z_Param_Out_WarpTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateWarpTarget(Z_Param_Out_WarpTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionWarpingComponent::execDisableAllRootMotionModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableAllRootMotionModifiers();
		P_NATIVE_END;
	}
	void UMotionWarpingComponent::StaticRegisterNativesUMotionWarpingComponent()
	{
		UClass* Class = UMotionWarpingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateWarpTarget", &UMotionWarpingComponent::execAddOrUpdateWarpTarget },
			{ "AddOrUpdateWarpTargetFromComponent", &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromComponent },
			{ "AddOrUpdateWarpTargetFromLocation", &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocation },
			{ "AddOrUpdateWarpTargetFromLocationAndRotation", &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromLocationAndRotation },
			{ "AddOrUpdateWarpTargetFromTransform", &UMotionWarpingComponent::execAddOrUpdateWarpTargetFromTransform },
			{ "DisableAllRootMotionModifiers", &UMotionWarpingComponent::execDisableAllRootMotionModifiers },
			{ "RemoveWarpTarget", &UMotionWarpingComponent::execRemoveWarpTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics
	{
		struct MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms
		{
			FMotionWarpingTarget WarpTarget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::NewProp_WarpTarget_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::NewProp_WarpTarget = { "WarpTarget", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms, WarpTarget), Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::NewProp_WarpTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::NewProp_WarpTarget_MetaData)) }; // 493938223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::NewProp_WarpTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Adds or update a warp target */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Adds or update a warp target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::MotionWarpingComponent_eventAddOrUpdateWarpTarget_Parms), Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics
	{
		struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms
		{
			FName WarpTargetName;
			const USceneComponent* Component;
			FName BoneName;
			bool bFollowComponent;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_bFollowComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_bFollowComponent_SetBit(void* Obj)
	{
		((MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms*)Obj)->bFollowComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_bFollowComponent = { "bFollowComponent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms), &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_bFollowComponent_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::NewProp_bFollowComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param Component Scene Component used to get the target transform\n\x09 * @param BoneName Optional bone or socket in the component used to get the target transform. \n\x09 * @param bFollowComponent Whether the target transform should update while the warping is active. Useful for tracking moving targets.\n\x09 *\x09\x09  Note that this will be one frame off if our owner ticks before the target actor. Add tick pre-requisites to avoid this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param Component Scene Component used to get the target transform\n@param BoneName Optional bone or socket in the component used to get the target transform.\n@param bFollowComponent Whether the target transform should update while the warping is active. Useful for tracking moving targets.\n               Note that this will be one frame off if our owner ticks before the target actor. Add tick pre-requisites to avoid this." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromComponent_Parms), Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics
	{
		struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms
		{
			FName WarpTargetName;
			FVector TargetLocation;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::NewProp_TargetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetLocation Location for the warp target\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetLocation Location for the warp target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocation_Parms), Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics
	{
		struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms
		{
			FName WarpTargetName;
			FVector TargetLocation;
			FRotator TargetRotation;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::NewProp_TargetRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/**\n\x09 * Create and adds or update a target associated with a specified name\n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetLocation Location for the warp target\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetLocation Location for the warp target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromLocationAndRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromLocationAndRotation_Parms), Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics
	{
		struct MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms
		{
			FName WarpTargetName;
			FTransform TargetTransform;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::NewProp_TargetTransform = { "TargetTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms, TargetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::NewProp_TargetTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** \n\x09 * Create and adds or update a target associated with a specified name \n\x09 * @param WarpTargetName Warp target identifier\n\x09 * @param TargetTransform Transform used to set the location and rotation for the warp target\n\x09 */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Create and adds or update a target associated with a specified name\n@param WarpTargetName Warp target identifier\n@param TargetTransform Transform used to set the location and rotation for the warp target" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "AddOrUpdateWarpTargetFromTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::MotionWarpingComponent_eventAddOrUpdateWarpTargetFromTransform_Parms), Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Mark all the modifiers as Disable */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Mark all the modifiers as Disable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "DisableAllRootMotionModifiers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics
	{
		struct MotionWarpingComponent_eventRemoveWarpTarget_Parms
		{
			FName WarpTargetName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTarget_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionWarpingComponent_eventRemoveWarpTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Removes the warp target associated with the specified key  */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Removes the warp target associated with the specified key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionWarpingComponent, nullptr, "RemoveWarpTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::MotionWarpingComponent_eventRemoveWarpTarget_Parms), Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionWarpingComponent);
	UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister()
	{
		return UMotionWarpingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMotionWarpingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData[];
#endif
		static void NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchForWindowsInAnimsWithinMontages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterOwner_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CharacterOwner;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionWarpingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionWarpingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTarget, "AddOrUpdateWarpTarget" }, // 1571036055
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent, "AddOrUpdateWarpTargetFromComponent" }, // 3390674636
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation, "AddOrUpdateWarpTargetFromLocation" }, // 447590605
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation, "AddOrUpdateWarpTargetFromLocationAndRotation" }, // 2040509940
		{ &Z_Construct_UFunction_UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform, "AddOrUpdateWarpTargetFromTransform" }, // 2481444824
		{ &Z_Construct_UFunction_UMotionWarpingComponent_DisableAllRootMotionModifiers, "DisableAllRootMotionModifiers" }, // 2152772339
		{ &Z_Construct_UFunction_UMotionWarpingComponent_RemoveWarpTarget, "RemoveWarpTarget" }, // 1318575244
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "IncludePath", "MotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/** Whether to look inside animations within montage when looking for warping windows */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Whether to look inside animations within montage when looking for warping windows" },
	};
#endif
	void Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit(void* Obj)
	{
		((UMotionWarpingComponent*)Obj)->bSearchForWindowsInAnimsWithinMontages = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages = { "bSearchForWindowsInAnimsWithinMontages", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionWarpingComponent), &Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_OnPreUpdate_MetaData[] = {
		{ "Category", "Motion Warping" },
		{ "Comment", "/** Event called before Root Motion Modifiers are updated */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Event called before Root Motion Modifiers are updated" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_OnPreUpdate = { "OnPreUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionWarpingComponent, OnPreUpdate), Z_Construct_UDelegateFunction_MotionWarping_MotionWarpingPreUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_OnPreUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_OnPreUpdate_MetaData)) }; // 66238233
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_CharacterOwner_MetaData[] = {
		{ "Comment", "/** Character this component belongs to */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "Character this component belongs to" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_CharacterOwner = { "CharacterOwner", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionWarpingComponent, CharacterOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_CharacterOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_CharacterOwner_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URootMotionModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Comment", "/** List of root motion modifiers */" },
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
		{ "ToolTip", "List of root motion modifiers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionWarpingComponent, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets_Inner = { "WarpTargets", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotionWarpingTarget, METADATA_PARAMS(nullptr, 0) }; // 493938223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets = { "WarpTargets", nullptr, (EPropertyFlags)0x0020088000002020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionWarpingComponent, WarpTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets_MetaData)) }; // 493938223
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionWarpingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_bSearchForWindowsInAnimsWithinMontages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_OnPreUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_CharacterOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_Modifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionWarpingComponent_Statics::NewProp_WarpTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionWarpingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionWarpingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionWarpingComponent_Statics::ClassParams = {
		&UMotionWarpingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMotionWarpingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionWarpingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionWarpingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionWarpingComponent()
	{
		if (!Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton, Z_Construct_UClass_UMotionWarpingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionWarpingComponent.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<UMotionWarpingComponent>()
	{
		return UMotionWarpingComponent::StaticClass();
	}

	void UMotionWarpingComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_WarpTargets(TEXT("WarpTargets"));

		const bool bIsValid = true
			&& Name_WarpTargets == ClassReps[(int32)ENetFields_Private::WarpTargets].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMotionWarpingComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionWarpingComponent);
	UMotionWarpingComponent::~UMotionWarpingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ScriptStructInfo[] = {
		{ FMotionWarpingWindowData::StaticStruct, Z_Construct_UScriptStruct_FMotionWarpingWindowData_Statics::NewStructOps, TEXT("MotionWarpingWindowData"), &Z_Registration_Info_UScriptStruct_MotionWarpingWindowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionWarpingWindowData), 3172476744U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionWarpingUtilities, UMotionWarpingUtilities::StaticClass, TEXT("UMotionWarpingUtilities"), &Z_Registration_Info_UClass_UMotionWarpingUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingUtilities), 2183326860U) },
		{ Z_Construct_UClass_UMotionWarpingComponent, UMotionWarpingComponent::StaticClass, TEXT("UMotionWarpingComponent"), &Z_Registration_Info_UClass_UMotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionWarpingComponent), 353415516U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_3963250051(TEXT("/Script/MotionWarping"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_MotionWarpingComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
