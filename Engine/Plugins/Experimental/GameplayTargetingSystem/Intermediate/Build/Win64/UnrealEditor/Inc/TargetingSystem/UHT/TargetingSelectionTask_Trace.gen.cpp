// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingSelectionTask_Trace.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSelectionTask_Trace() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_Trace();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_Trace_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	TARGETINGSYSTEM_API UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingTraceType();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetingTraceType;
	static UEnum* ETargetingTraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetingTraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetingTraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetingSystem_ETargetingTraceType, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("ETargetingTraceType"));
		}
		return Z_Registration_Info_UEnum_ETargetingTraceType.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingTraceType>()
	{
		return ETargetingTraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enumerators[] = {
		{ "ETargetingTraceType::Line", (int64)ETargetingTraceType::Line },
		{ "ETargetingTraceType::Sweep", (int64)ETargetingTraceType::Sweep },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09@enum ETargetingAOEShape\x09\n*/" },
		{ "Line.Name", "ETargetingTraceType::Line" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "Sweep.Name", "ETargetingTraceType::Sweep" },
		{ "ToolTip", "@enum ETargetingAOEShape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		"ETargetingTraceType",
		"ETargetingTraceType",
		Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingTraceType()
	{
		if (!Z_Registration_Info_UEnum_ETargetingTraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetingTraceType.InnerSingleton, Z_Construct_UEnum_TargetingSystem_ETargetingTraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetingTraceType.InnerSingleton;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetAdditionalActorsToIgnore)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutAdditionalActorsToIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAdditionalActorsToIgnore_Implementation(Z_Param_Out_TargetingHandle,Z_Param_Out_OutAdditionalActorsToIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetSweptTraceRadius)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSweptTraceRadius_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetTraceLength)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTraceLength_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetTraceDirection)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTraceDirection_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetSourceOffset)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceOffset_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_Trace::execGetSourceLocation)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceLocation_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	struct TargetingSelectionTask_Trace_eventGetAdditionalActorsToIgnore_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		TArray<AActor*> OutAdditionalActorsToIgnore;
	};
	struct TargetingSelectionTask_Trace_eventGetSourceLocation_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_Trace_eventGetSourceLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct TargetingSelectionTask_Trace_eventGetSourceOffset_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_Trace_eventGetSourceOffset_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct TargetingSelectionTask_Trace_eventGetTraceDirection_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_Trace_eventGetTraceDirection_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct TargetingSelectionTask_Trace_eventGetTraceLength_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_Trace_eventGetTraceLength_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore = FName(TEXT("GetAdditionalActorsToIgnore"));
	void UTargetingSelectionTask_Trace::GetAdditionalActorsToIgnore(FTargetingRequestHandle const& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore) const
	{
		TargetingSelectionTask_Trace_eventGetAdditionalActorsToIgnore_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		Parms.OutAdditionalActorsToIgnore=OutAdditionalActorsToIgnore;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore),&Parms);
		OutAdditionalActorsToIgnore=Parms.OutAdditionalActorsToIgnore;
	}
	static FName NAME_UTargetingSelectionTask_Trace_GetSourceLocation = FName(TEXT("GetSourceLocation"));
	FVector UTargetingSelectionTask_Trace::GetSourceLocation(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_Trace_eventGetSourceLocation_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetSourceLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetingSelectionTask_Trace_GetSourceOffset = FName(TEXT("GetSourceOffset"));
	FVector UTargetingSelectionTask_Trace::GetSourceOffset(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_Trace_eventGetSourceOffset_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetSourceOffset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetingSelectionTask_Trace_GetSweptTraceRadius = FName(TEXT("GetSweptTraceRadius"));
	float UTargetingSelectionTask_Trace::GetSweptTraceRadius(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetSweptTraceRadius),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetingSelectionTask_Trace_GetTraceDirection = FName(TEXT("GetTraceDirection"));
	FVector UTargetingSelectionTask_Trace::GetTraceDirection(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_Trace_eventGetTraceDirection_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetTraceDirection),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetingSelectionTask_Trace_GetTraceLength = FName(TEXT("GetTraceLength"));
	float UTargetingSelectionTask_Trace::GetTraceLength(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_Trace_eventGetTraceLength_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_Trace*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_Trace_GetTraceLength),&Parms);
		return Parms.ReturnValue;
	}
	void UTargetingSelectionTask_Trace::StaticRegisterNativesUTargetingSelectionTask_Trace()
	{
		UClass* Class = UTargetingSelectionTask_Trace::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAdditionalActorsToIgnore", &UTargetingSelectionTask_Trace::execGetAdditionalActorsToIgnore },
			{ "GetSourceLocation", &UTargetingSelectionTask_Trace::execGetSourceLocation },
			{ "GetSourceOffset", &UTargetingSelectionTask_Trace::execGetSourceOffset },
			{ "GetSweptTraceRadius", &UTargetingSelectionTask_Trace::execGetSweptTraceRadius },
			{ "GetTraceDirection", &UTargetingSelectionTask_Trace::execGetTraceDirection },
			{ "GetTraceLength", &UTargetingSelectionTask_Trace::execGetTraceLength },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutAdditionalActorsToIgnore_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAdditionalActorsToIgnore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetAdditionalActorsToIgnore_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_OutAdditionalActorsToIgnore_Inner = { "OutAdditionalActorsToIgnore", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_OutAdditionalActorsToIgnore = { "OutAdditionalActorsToIgnore", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetAdditionalActorsToIgnore_Parms, OutAdditionalActorsToIgnore), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_OutAdditionalActorsToIgnore_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::NewProp_OutAdditionalActorsToIgnore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get additional actors the Trace should ignore */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get additional actors the Trace should ignore" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetAdditionalActorsToIgnore", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetAdditionalActorsToIgnore_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSourceLocation_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get the source location for the Trace */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get the source location for the Trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetSourceLocation", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetSourceLocation_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSourceOffset_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSourceOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get a source location offset for the Trace */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get a source location offset for the Trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetSourceOffset", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetSourceOffset_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get the swept trace radius (only called if bSweptTrace is true) */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get the swept trace radius (only called if bSweptTrace is true)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetSweptTraceRadius", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetSweptTraceRadius_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetTraceDirection_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetTraceDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get the direction for the Trace */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get the direction for the Trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetTraceDirection", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetTraceDirection_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetTraceLength_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_Trace_eventGetTraceLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Trace Selection" },
		{ "Comment", "/** Native Event to get the length for the Trace */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Native Event to get the length for the Trace" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_Trace, nullptr, "GetTraceLength", nullptr, nullptr, sizeof(TargetingSelectionTask_Trace_eventGetTraceLength_Parms), Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSelectionTask_Trace);
	UClass* Z_Construct_UClass_UTargetingSelectionTask_Trace_NoRegister()
	{
		return UTargetingSelectionTask_Trace::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSweptTraceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSweptTraceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSourceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitTraceDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExplicitTraceDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComplexTrace_MetaData[];
#endif
		static void NewProp_bComplexTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplexTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[];
#endif
		static void NewProp_bIgnoreSourceActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstigatorActor_MetaData[];
#endif
		static void NewProp_bIgnoreInstigatorActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstigatorActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetAdditionalActorsToIgnore, "GetAdditionalActorsToIgnore" }, // 2169854863
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceLocation, "GetSourceLocation" }, // 2170057351
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSourceOffset, "GetSourceOffset" }, // 1872138560
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetSweptTraceRadius, "GetSweptTraceRadius" }, // 1972864682
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceDirection, "GetTraceDirection" }, // 1520918438
		{ &Z_Construct_UFunction_UTargetingSelectionTask_Trace_GetTraceLength, "GetTraceLength" }, // 1665580500
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@class UTargetingSelectionTask_Trace\n*\n*\x09Selection task that can perform a synchronous or asynchronous trace (line/sweep)\n*\x09to find all targets up to the first blocking hit (or its end point).\n*/" },
		{ "IncludePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingSelectionTask_Trace\n\nSelection task that can perform a synchronous or asynchronous trace (line/sweep)\nto find all targets up to the first blocking hit (or its end point)." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType_MetaData[] = {
		{ "Category", "Target Trace Selection | Collision Data" },
		{ "Comment", "/** The trace type to use */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The trace type to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType = { "TraceType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, TraceType), Z_Construct_UEnum_TargetingSystem_ETargetingTraceType, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType_MetaData)) }; // 377161672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Target Trace Selection | Collision Data" },
		{ "Comment", "/** The trace channel to use */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The trace channel to use" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Target Trace Selection | Collision Data" },
		{ "Comment", "/** The collision profile name to use instead of trace channel (does not work for async traces) */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The collision profile name to use instead of trace channel (does not work for async traces)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, CollisionProfileName), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_CollisionProfileName_MetaData)) }; // 2816100078
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSweptTraceRadius_MetaData[] = {
		{ "Category", "Target Trace Selection | Swept Data" },
		{ "Comment", "/** The default swept trace radius used by GetSweptTraceRadius when the trace type is set to Sweep */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The default swept trace radius used by GetSweptTraceRadius when the trace type is set to Sweep" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSweptTraceRadius = { "DefaultSweptTraceRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, DefaultSweptTraceRadius), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSweptTraceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSweptTraceRadius_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultTraceLength_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** The default trace length to use if GetTraceLength is not overridden by a child */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The default trace length to use if GetTraceLength is not overridden by a child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultTraceLength = { "DefaultTraceLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, DefaultTraceLength), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultTraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultTraceLength_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSourceOffset_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** The default source location offset used by GetSourceOffset */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "The default source location offset used by GetSourceOffset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSourceOffset = { "DefaultSourceOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, DefaultSourceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSourceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSourceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_ExplicitTraceDirection_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** An explicit trace direction to use (default uses pawn control rotation or actor forward vector in GetTraceDirection) */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "An explicit trace direction to use (default uses pawn control rotation or actor forward vector in GetTraceDirection)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_ExplicitTraceDirection = { "ExplicitTraceDirection", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_Trace, ExplicitTraceDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_ExplicitTraceDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_ExplicitTraceDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** Indicates the trace should perform a complex trace */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Indicates the trace should perform a complex trace" },
	};
#endif
	void Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace_SetBit(void* Obj)
	{
		((UTargetingSelectionTask_Trace*)Obj)->bComplexTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace = { "bComplexTrace", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSelectionTask_Trace), &Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
	};
#endif
	void Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor_SetBit(void* Obj)
	{
		((UTargetingSelectionTask_Trace*)Obj)->bIgnoreSourceActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor = { "bIgnoreSourceActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSelectionTask_Trace), &Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor_MetaData[] = {
		{ "Category", "Target Trace Selection | Trace Data" },
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_Trace.h" },
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
	};
#endif
	void Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor_SetBit(void* Obj)
	{
		((UTargetingSelectionTask_Trace*)Obj)->bIgnoreInstigatorActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor = { "bIgnoreInstigatorActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSelectionTask_Trace), &Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSweptTraceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultTraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_DefaultSourceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_ExplicitTraceDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bComplexTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::NewProp_bIgnoreInstigatorActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSelectionTask_Trace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::ClassParams = {
		&UTargetingSelectionTask_Trace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingSelectionTask_Trace()
	{
		if (!Z_Registration_Info_UClass_UTargetingSelectionTask_Trace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSelectionTask_Trace.OuterSingleton, Z_Construct_UClass_UTargetingSelectionTask_Trace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingSelectionTask_Trace.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingSelectionTask_Trace>()
	{
		return UTargetingSelectionTask_Trace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSelectionTask_Trace);
	UTargetingSelectionTask_Trace::~UTargetingSelectionTask_Trace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::EnumInfo[] = {
		{ ETargetingTraceType_StaticEnum, TEXT("ETargetingTraceType"), &Z_Registration_Info_UEnum_ETargetingTraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 377161672U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSelectionTask_Trace, UTargetingSelectionTask_Trace::StaticClass, TEXT("UTargetingSelectionTask_Trace"), &Z_Registration_Info_UClass_UTargetingSelectionTask_Trace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSelectionTask_Trace), 1895752731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_2449750338(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_Trace_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
