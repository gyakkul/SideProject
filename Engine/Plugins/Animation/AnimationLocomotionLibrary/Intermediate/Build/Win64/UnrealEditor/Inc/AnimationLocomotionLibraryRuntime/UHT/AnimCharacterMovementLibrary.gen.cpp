// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimCharacterMovementLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimCharacterMovementLibrary() {}
// Cross Module References
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimCharacterMovementLibrary();
	ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UAnimCharacterMovementLibrary::execPredictGroundMovementPivotLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GroundFriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(Z_Param_Out_Acceleration,Z_Param_Out_Velocity,Z_Param_GroundFriction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimCharacterMovementLibrary::execPredictGroundMovementStopLocation)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Velocity);
		P_GET_UBOOL(Z_Param_bUseSeparateBrakingFriction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakingFriction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GroundFriction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakingFrictionFactor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BrakingDecelerationWalking);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(Z_Param_Out_Velocity,Z_Param_bUseSeparateBrakingFriction,Z_Param_BrakingFriction,Z_Param_GroundFriction,Z_Param_BrakingFrictionFactor,Z_Param_BrakingDecelerationWalking);
		P_NATIVE_END;
	}
	void UAnimCharacterMovementLibrary::StaticRegisterNativesUAnimCharacterMovementLibrary()
	{
		UClass* Class = UAnimCharacterMovementLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PredictGroundMovementPivotLocation", &UAnimCharacterMovementLibrary::execPredictGroundMovementPivotLocation },
			{ "PredictGroundMovementStopLocation", &UAnimCharacterMovementLibrary::execPredictGroundMovementStopLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics
	{
		struct AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms
		{
			FVector Acceleration;
			FVector Velocity;
			float GroundFriction;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Acceleration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms, GroundFriction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_GroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation Character Movement" },
		{ "Comment", "/**\n\x09 * Predict where the character will change direction during a pivot based on its current movement properties and parameters from the movement component.\n\x09 * This uses prediction logic that is heavily tied to the UCharacterMovementComponent.\n\x09 * Each parameter corresponds to a value from the UCharacterMovementComponent with the same name.\n\x09 * Because this is a thread safe function, it's\x09recommended to populate these fields via the Property Access system.\n\x09 * @return The predicted pivot position in local space to the character. The size of this vector will be the distance to the pivot.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimCharacterMovementLibrary.h" },
		{ "ToolTip", "Predict where the character will change direction during a pivot based on its current movement properties and parameters from the movement component.\nThis uses prediction logic that is heavily tied to the UCharacterMovementComponent.\nEach parameter corresponds to a value from the UCharacterMovementComponent with the same name.\nBecause this is a thread safe function, it's recommended to populate these fields via the Property Access system.\n@return The predicted pivot position in local space to the character. The size of this vector will be the distance to the pivot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimCharacterMovementLibrary, nullptr, "PredictGroundMovementPivotLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::AnimCharacterMovementLibrary_eventPredictGroundMovementPivotLocation_Parms), Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics
	{
		struct AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms
		{
			FVector Velocity;
			bool bUseSeparateBrakingFriction;
			float BrakingFriction;
			float GroundFriction;
			float BrakingFrictionFactor;
			float BrakingDecelerationWalking;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static void NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSeparateBrakingFriction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFriction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingFrictionFactor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakingDecelerationWalking;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_Velocity_MetaData)) };
	void Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_bUseSeparateBrakingFriction_SetBit(void* Obj)
	{
		((AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms*)Obj)->bUseSeparateBrakingFriction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_bUseSeparateBrakingFriction = { "bUseSeparateBrakingFriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms), &Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_bUseSeparateBrakingFriction_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingFriction = { "BrakingFriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, BrakingFriction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, GroundFriction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingFrictionFactor = { "BrakingFrictionFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, BrakingFrictionFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingDecelerationWalking = { "BrakingDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, BrakingDecelerationWalking), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_bUseSeparateBrakingFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_GroundFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingFrictionFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_BrakingDecelerationWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Animation Character Movement" },
		{ "Comment", "/**\n\x09 * Predict where the character will stop based on its current movement properties and parameters from the movement component.\n\x09 * This uses prediction logic that is heavily tied to the UCharacterMovementComponent.\n\x09 * Each parameter corresponds to a value from the UCharacterMovementComponent with the same name.\n\x09 * Because this is a thread safe function, it's\x09recommended to populate these fields via the Property Access system.\n\x09 * @return The predicted stop position in local space to the character. The size of this vector will be the distance to the stop location.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimCharacterMovementLibrary.h" },
		{ "ToolTip", "Predict where the character will stop based on its current movement properties and parameters from the movement component.\nThis uses prediction logic that is heavily tied to the UCharacterMovementComponent.\nEach parameter corresponds to a value from the UCharacterMovementComponent with the same name.\nBecause this is a thread safe function, it's recommended to populate these fields via the Property Access system.\n@return The predicted stop position in local space to the character. The size of this vector will be the distance to the stop location." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimCharacterMovementLibrary, nullptr, "PredictGroundMovementStopLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::AnimCharacterMovementLibrary_eventPredictGroundMovementStopLocation_Parms), Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimCharacterMovementLibrary);
	UClass* Z_Construct_UClass_UAnimCharacterMovementLibrary_NoRegister()
	{
		return UAnimCharacterMovementLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationLocomotionLibraryRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation, "PredictGroundMovementPivotLocation" }, // 1681316598
		{ &Z_Construct_UFunction_UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation, "PredictGroundMovementStopLocation" }, // 1041830965
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n  * Library of common techniques for driving character locomotion animations. \n  */" },
		{ "IncludePath", "AnimCharacterMovementLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimCharacterMovementLibrary.h" },
		{ "ToolTip", "Library of common techniques for driving character locomotion animations." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimCharacterMovementLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::ClassParams = {
		&UAnimCharacterMovementLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimCharacterMovementLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton, Z_Construct_UClass_UAnimCharacterMovementLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimCharacterMovementLibrary.OuterSingleton;
	}
	template<> ANIMATIONLOCOMOTIONLIBRARYRUNTIME_API UClass* StaticClass<UAnimCharacterMovementLibrary>()
	{
		return UAnimCharacterMovementLibrary::StaticClass();
	}
	UAnimCharacterMovementLibrary::UAnimCharacterMovementLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimCharacterMovementLibrary);
	UAnimCharacterMovementLibrary::~UAnimCharacterMovementLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimCharacterMovementLibrary, UAnimCharacterMovementLibrary::StaticClass, TEXT("UAnimCharacterMovementLibrary"), &Z_Registration_Info_UClass_UAnimCharacterMovementLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimCharacterMovementLibrary), 4211017210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_2451268470(TEXT("/Script/AnimationLocomotionLibraryRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationLocomotionLibrary_Source_Runtime_Public_AnimCharacterMovementLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
