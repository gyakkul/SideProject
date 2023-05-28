// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FunctionalTestUtilityLibrary.h"
#include "TraceQueryTestResults.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestUtilityLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister();
	FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UTraceQueryTestResults_NoRegister();
	FUNCTIONALTESTING_API UScriptStruct* Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions();
	UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References
	DEFINE_FUNCTION(UFunctionalTestUtilityLibrary::execTraceChannelTestUtil)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FTraceChannelTestBatchOptions,Z_Param_Out_BatchOptions);
		P_GET_STRUCT(FVector,Z_Param_Start);
		P_GET_STRUCT(FVector,Z_Param_End);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SphereCapsuleRadius);
		P_GET_PROPERTY(FFloatProperty,Z_Param_CapsuleHalfHeight);
		P_GET_STRUCT(FVector,Z_Param_BoxHalfSize);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_TARRAY(TEnumAsByte<EObjectTypeQuery>,Z_Param_ObjectTypes);
		P_GET_PROPERTY(FNameProperty,Z_Param_ProfileName);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore);
		P_GET_UBOOL(Z_Param_bIgnoreSelf);
		P_GET_PROPERTY(FByteProperty,Z_Param_DrawDebugType);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceColor);
		P_GET_STRUCT(FLinearColor,Z_Param_TraceHitColor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTraceQueryTestResults**)Z_Param__Result=UFunctionalTestUtilityLibrary::TraceChannelTestUtil(Z_Param_WorldContextObject,Z_Param_Out_BatchOptions,Z_Param_Start,Z_Param_End,Z_Param_SphereCapsuleRadius,Z_Param_CapsuleHalfHeight,Z_Param_BoxHalfSize,Z_Param_Orientation,ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_ObjectTypes,Z_Param_ProfileName,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bIgnoreSelf,EDrawDebugTrace::Type(Z_Param_DrawDebugType),Z_Param_TraceColor,Z_Param_TraceHitColor,Z_Param_DrawTime);
		P_NATIVE_END;
	}
	void UFunctionalTestUtilityLibrary::StaticRegisterNativesUFunctionalTestUtilityLibrary()
	{
		UClass* Class = UFunctionalTestUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TraceChannelTestUtil", &UFunctionalTestUtilityLibrary::execTraceChannelTestUtil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics
	{
		struct FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms
		{
			UObject* WorldContextObject;
			FTraceChannelTestBatchOptions BatchOptions;
			FVector Start;
			FVector End;
			float SphereCapsuleRadius;
			float CapsuleHalfHeight;
			FVector BoxHalfSize;
			FRotator Orientation;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			FName ProfileName;
			bool bTraceComplex;
			TArray<AActor*> ActorsToIgnore;
			bool bIgnoreSelf;
			TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
			FLinearColor TraceColor;
			FLinearColor TraceHitColor;
			float DrawTime;
			UTraceQueryTestResults* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BatchOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BatchOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCapsuleRadius;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxHalfSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProfileName;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToIgnore_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToIgnore_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToIgnore;
		static void NewProp_bIgnoreSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDebugType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceHitColor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions = { "BatchOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, BatchOptions), Z_Construct_UScriptStruct_FTraceChannelTestBatchOptions, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions_MetaData)) }; // 3236230474
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_SphereCapsuleRadius = { "SphereCapsuleRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, SphereCapsuleRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, CapsuleHalfHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BoxHalfSize = { "BoxHalfSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, BoxHalfSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 2906040657
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3629342158
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ProfileName = { "ProfileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ProfileName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_Inner = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore = { "ActorsToIgnore", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_MetaData)) };
	void Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf_SetBit(void* Obj)
	{
		((FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms*)Obj)->bIgnoreSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf = { "bIgnoreSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawDebugType = { "DrawDebugType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, DrawDebugType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(nullptr, 0) }; // 2158289653
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceColor = { "TraceColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceHitColor = { "TraceHitColor", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, TraceHitColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawTime = { "DrawTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, DrawTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms, ReturnValue), Z_Construct_UClass_UTraceQueryTestResults_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BatchOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_SphereCapsuleRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_CapsuleHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_BoxHalfSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ActorsToIgnore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_bIgnoreSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawDebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_TraceHitColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_DrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TraceColor,TraceHitColor,DrawTime" },
		{ "AutoCreateRefTerm", "ActorsToIgnore" },
		{ "bIgnoreSelf", "true" },
		{ "Category", "Utilities|Collision" },
		{ "Comment", "/** Helper function to trace and permute many options at once */" },
		{ "CPP_Default_DrawTime", "5.000000" },
		{ "CPP_Default_TraceColor", "(R=1.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_TraceHitColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "Keywords", "sweep" },
		{ "ModuleRelativePath", "Classes/FunctionalTestUtilityLibrary.h" },
		{ "ToolTip", "Helper function to trace and permute many options at once" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestUtilityLibrary, nullptr, "TraceChannelTestUtil", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::FunctionalTestUtilityLibrary_eventTraceChannelTestUtil_Parms), Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionalTestUtilityLibrary);
	UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary_NoRegister()
	{
		return UFunctionalTestUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestUtilityLibrary_TraceChannelTestUtil, "TraceChannelTestUtil" }, // 2034848635
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Used to expose C++ functions to tests that we don't want to make BP accessible\n* in the engine itself.\n*/" },
		{ "IncludePath", "FunctionalTestUtilityLibrary.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestUtilityLibrary.h" },
		{ "ToolTip", "Used to expose C++ functions to tests that we don't want to make BP accessible\nin the engine itself." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::ClassParams = {
		&UFunctionalTestUtilityLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFunctionalTestUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton, Z_Construct_UClass_UFunctionalTestUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary.OuterSingleton;
	}
	template<> FUNCTIONALTESTING_API UClass* StaticClass<UFunctionalTestUtilityLibrary>()
	{
		return UFunctionalTestUtilityLibrary::StaticClass();
	}
	UFunctionalTestUtilityLibrary::UFunctionalTestUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestUtilityLibrary);
	UFunctionalTestUtilityLibrary::~UFunctionalTestUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionalTestUtilityLibrary, UFunctionalTestUtilityLibrary::StaticClass, TEXT("UFunctionalTestUtilityLibrary"), &Z_Registration_Info_UClass_UFunctionalTestUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionalTestUtilityLibrary), 3843982805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_3967840411(TEXT("/Script/FunctionalTesting"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestUtilityLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
