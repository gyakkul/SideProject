// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier_SkewWarp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_SkewWarp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_UMotionWarpingComponent_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType();
	MOTIONWARPING_API UEnum* Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
// End Cross Module References
	DEFINE_FUNCTION(URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp)
	{
		P_GET_OBJECT(UMotionWarpingComponent,Z_Param_InMotionWarpingComp);
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_InAnimation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStartTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InEndTime);
		P_GET_PROPERTY(FNameProperty,Z_Param_InWarpTargetName);
		P_GET_ENUM(EWarpPointAnimProvider,Z_Param_InWarpPointAnimProvider);
		P_GET_STRUCT(FTransform,Z_Param_InWarpPointAnimTransform);
		P_GET_PROPERTY(FNameProperty,Z_Param_InWarpPointAnimBoneName);
		P_GET_UBOOL(Z_Param_bInWarpTranslation);
		P_GET_UBOOL(Z_Param_bInIgnoreZAxis);
		P_GET_UBOOL(Z_Param_bInWarpRotation);
		P_GET_ENUM(EMotionWarpRotationType,Z_Param_InRotationType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWarpRotationTimeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URootMotionModifier_SkewWarp**)Z_Param__Result=URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(Z_Param_InMotionWarpingComp,Z_Param_InAnimation,Z_Param_InStartTime,Z_Param_InEndTime,Z_Param_InWarpTargetName,EWarpPointAnimProvider(Z_Param_InWarpPointAnimProvider),Z_Param_InWarpPointAnimTransform,Z_Param_InWarpPointAnimBoneName,Z_Param_bInWarpTranslation,Z_Param_bInIgnoreZAxis,Z_Param_bInWarpRotation,EMotionWarpRotationType(Z_Param_InRotationType),Z_Param_InWarpRotationTimeMultiplier);
		P_NATIVE_END;
	}
	void URootMotionModifier_SkewWarp::StaticRegisterNativesURootMotionModifier_SkewWarp()
	{
		UClass* Class = URootMotionModifier_SkewWarp::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRootMotionModifierSkewWarp", &URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics
	{
		struct RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms
		{
			UMotionWarpingComponent* InMotionWarpingComp;
			const UAnimSequenceBase* InAnimation;
			float InStartTime;
			float InEndTime;
			FName InWarpTargetName;
			EWarpPointAnimProvider InWarpPointAnimProvider;
			FTransform InWarpPointAnimTransform;
			FName InWarpPointAnimBoneName;
			bool bInWarpTranslation;
			bool bInIgnoreZAxis;
			bool bInWarpRotation;
			EMotionWarpRotationType InRotationType;
			float InWarpRotationTimeMultiplier;
			URootMotionModifier_SkewWarp* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InMotionWarpingComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMotionWarpingComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWarpTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWarpTargetName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InWarpPointAnimProvider_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimProvider_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InWarpPointAnimProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InWarpPointAnimTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWarpPointAnimBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InWarpPointAnimBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInWarpTranslation_MetaData[];
#endif
		static void NewProp_bInWarpTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWarpTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInIgnoreZAxis_MetaData[];
#endif
		static void NewProp_bInIgnoreZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIgnoreZAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInWarpRotation_MetaData[];
#endif
		static void NewProp_bInWarpRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWarpRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InRotationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InRotationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InRotationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWarpRotationTimeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWarpRotationTimeMultiplier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData[] = {
		{ "DisplayName", "Motion Warping Comp" },
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp = { "InMotionWarpingComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InMotionWarpingComp), Z_Construct_UClass_UMotionWarpingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData[] = {
		{ "DisplayName", "Animation" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation = { "InAnimation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InAnimation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData[] = {
		{ "DisplayName", "Start Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime = { "InStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InStartTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData[] = {
		{ "DisplayName", "End Time" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime = { "InEndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InEndTime), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData[] = {
		{ "DisplayName", "Warp Target Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName = { "InWarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpTargetName), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Provider" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider = { "InWarpPointAnimProvider", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimProvider), Z_Construct_UEnum_MotionWarping_EWarpPointAnimProvider, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_MetaData)) }; // 2956236487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform = { "InWarpPointAnimTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData[] = {
		{ "DisplayName", "Warp Point Anim Bone Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName = { "InWarpPointAnimBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpPointAnimBoneName), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData[] = {
		{ "DisplayName", "Warp Translation" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation = { "bInWarpTranslation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData[] = {
		{ "DisplayName", "Ignore Z Axis" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInIgnoreZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis = { "bInIgnoreZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData[] = {
		{ "DisplayName", "Warp Rotation" },
	};
#endif
	void Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_SetBit(void* Obj)
	{
		((RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms*)Obj)->bInWarpRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation = { "bInWarpRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData[] = {
		{ "DisplayName", "Rotation Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType = { "InRotationType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InRotationType), Z_Construct_UEnum_MotionWarping_EMotionWarpRotationType, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_MetaData)) }; // 2756714592
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData[] = {
		{ "DisplayName", "Warp Rotation Time Multiplier" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier = { "InWarpRotationTimeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, InWarpRotationTimeMultiplier), METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms, ReturnValue), Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InMotionWarpingComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpPointAnimBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInIgnoreZAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_bInWarpRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InRotationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_InWarpRotationTimeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Warping" },
		{ "CPP_Default_bInIgnoreZAxis", "true" },
		{ "CPP_Default_bInWarpRotation", "true" },
		{ "CPP_Default_bInWarpTranslation", "true" },
		{ "CPP_Default_InRotationType", "Default" },
		{ "CPP_Default_InWarpRotationTimeMultiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URootMotionModifier_SkewWarp, nullptr, "AddRootMotionModifierSkewWarp", nullptr, nullptr, sizeof(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::RootMotionModifier_SkewWarp_eventAddRootMotionModifierSkewWarp_Parms), Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier_SkewWarp);
	UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp_NoRegister()
	{
		return URootMotionModifier_SkewWarp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp, "AddRootMotionModifierSkewWarp" }, // 4100380973
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Skew Warp" },
		{ "IncludePath", "RootMotionModifier_SkewWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_SkewWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_SkewWarp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::ClassParams = {
		&URootMotionModifier_SkewWarp::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_SkewWarp()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton, Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_SkewWarp>()
	{
		return URootMotionModifier_SkewWarp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_SkewWarp);
	URootMotionModifier_SkewWarp::~URootMotionModifier_SkewWarp() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_SkewWarp, URootMotionModifier_SkewWarp::StaticClass, TEXT("URootMotionModifier_SkewWarp"), &Z_Registration_Info_UClass_URootMotionModifier_SkewWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_SkewWarp), 1388522183U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_1730634906(TEXT("/Script/MotionWarping"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_SkewWarp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
