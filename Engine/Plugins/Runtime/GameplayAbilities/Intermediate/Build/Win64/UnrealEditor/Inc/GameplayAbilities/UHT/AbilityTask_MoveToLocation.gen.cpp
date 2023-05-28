// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Abilities/Tasks/AbilityTask_MoveToLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilityTask_MoveToLocation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_MoveToLocation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	GAMEPLAYABILITIES_API UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilities();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayAbilities, nullptr, "MoveToLocationDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoveToLocationDelegate_DelegateWrapper(const FMulticastScriptDelegate& MoveToLocationDelegate)
{
	MoveToLocationDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAbilityTask_MoveToLocation::execMoveToLocation)
	{
		P_GET_OBJECT(UGameplayAbility,Z_Param_OwningAbility);
		P_GET_PROPERTY(FNameProperty,Z_Param_TaskInstanceName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_OBJECT(UCurveFloat,Z_Param_OptionalInterpolationCurve);
		P_GET_OBJECT(UCurveVector,Z_Param_OptionalVectorInterpolationCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAbilityTask_MoveToLocation**)Z_Param__Result=UAbilityTask_MoveToLocation::MoveToLocation(Z_Param_OwningAbility,Z_Param_TaskInstanceName,Z_Param_Location,Z_Param_Duration,Z_Param_OptionalInterpolationCurve,Z_Param_OptionalVectorInterpolationCurve);
		P_NATIVE_END;
	}
	void UAbilityTask_MoveToLocation::StaticRegisterNativesUAbilityTask_MoveToLocation()
	{
		UClass* Class = UAbilityTask_MoveToLocation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveToLocation", &UAbilityTask_MoveToLocation::execMoveToLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics
	{
		struct AbilityTask_MoveToLocation_eventMoveToLocation_Parms
		{
			UGameplayAbility* OwningAbility;
			FName TaskInstanceName;
			FVector Location;
			float Duration;
			UCurveFloat* OptionalInterpolationCurve;
			UCurveVector* OptionalVectorInterpolationCurve;
			UAbilityTask_MoveToLocation* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningAbility;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TaskInstanceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalInterpolationCurve;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalVectorInterpolationCurve;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OwningAbility = { "OwningAbility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, OwningAbility), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_TaskInstanceName = { "TaskInstanceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, TaskInstanceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OptionalInterpolationCurve = { "OptionalInterpolationCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, OptionalInterpolationCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OptionalVectorInterpolationCurve = { "OptionalVectorInterpolationCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, OptionalVectorInterpolationCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AbilityTask_MoveToLocation_eventMoveToLocation_Parms, ReturnValue), Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OwningAbility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_TaskInstanceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OptionalInterpolationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_OptionalVectorInterpolationCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "Ability|Tasks" },
		{ "Comment", "/** Move to the specified location, using the vector curve (range 0 - 1) if specified, otherwise the float curve (range 0 - 1) or fallback to linear interpolation */" },
		{ "DefaultToSelf", "OwningAbility" },
		{ "HidePin", "OwningAbility" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
		{ "ToolTip", "Move to the specified location, using the vector curve (range 0 - 1) if specified, otherwise the float curve (range 0 - 1) or fallback to linear interpolation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilityTask_MoveToLocation, nullptr, "MoveToLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::AbilityTask_MoveToLocation_eventMoveToLocation_Parms), Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilityTask_MoveToLocation);
	UClass* Z_Construct_UClass_UAbilityTask_MoveToLocation_NoRegister()
	{
		return UAbilityTask_MoveToLocation::StaticClass();
	}
	struct Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTargetLocationReached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTargetLocationReached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationOfMovement_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationOfMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LerpCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LerpCurveVector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LerpCurveVector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilityTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilityTask_MoveToLocation_MoveToLocation, "MoveToLocation" }, // 2300887364
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Move to a location, ignoring clipping, over a given length of time. Ends when the TargetLocation is reached.\n *\x09This will RESET your character's current movement mode! If you wish to maintain PHYS_Flying or PHYS_Custom, you must\n *\x09reset it on completion.!\n */" },
		{ "IncludePath", "Abilities/Tasks/AbilityTask_MoveToLocation.h" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
		{ "ToolTip", "Move to a location, ignoring clipping, over a given length of time. Ends when the TargetLocation is reached.\nThis will RESET your character's current movement mode! If you wish to maintain PHYS_Flying or PHYS_Custom, you must\nreset it on completion.!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_OnTargetLocationReached_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_OnTargetLocationReached = { "OnTargetLocationReached", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, OnTargetLocationReached), Z_Construct_UDelegateFunction_GameplayAbilities_MoveToLocationDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_OnTargetLocationReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_OnTargetLocationReached_MetaData)) }; // 2819261498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Comment", "//FVector \n" },
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
		{ "ToolTip", "FVector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_DurationOfMovement_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_DurationOfMovement = { "DurationOfMovement", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, DurationOfMovement), METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_DurationOfMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_DurationOfMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurve = { "LerpCurve", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, LerpCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurveVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/Abilities/Tasks/AbilityTask_MoveToLocation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurveVector = { "LerpCurveVector", nullptr, (EPropertyFlags)0x0024080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAbilityTask_MoveToLocation, LerpCurveVector), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurveVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurveVector_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_OnTargetLocationReached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_DurationOfMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::NewProp_LerpCurveVector,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilityTask_MoveToLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::ClassParams = {
		&UAbilityTask_MoveToLocation::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilityTask_MoveToLocation()
	{
		if (!Z_Registration_Info_UClass_UAbilityTask_MoveToLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilityTask_MoveToLocation.OuterSingleton, Z_Construct_UClass_UAbilityTask_MoveToLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilityTask_MoveToLocation.OuterSingleton;
	}
	template<> GAMEPLAYABILITIES_API UClass* StaticClass<UAbilityTask_MoveToLocation>()
	{
		return UAbilityTask_MoveToLocation::StaticClass();
	}

	void UAbilityTask_MoveToLocation::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_StartLocation(TEXT("StartLocation"));
		static const FName Name_TargetLocation(TEXT("TargetLocation"));
		static const FName Name_DurationOfMovement(TEXT("DurationOfMovement"));
		static const FName Name_LerpCurve(TEXT("LerpCurve"));
		static const FName Name_LerpCurveVector(TEXT("LerpCurveVector"));

		const bool bIsValid = true
			&& Name_StartLocation == ClassReps[(int32)ENetFields_Private::StartLocation].Property->GetFName()
			&& Name_TargetLocation == ClassReps[(int32)ENetFields_Private::TargetLocation].Property->GetFName()
			&& Name_DurationOfMovement == ClassReps[(int32)ENetFields_Private::DurationOfMovement].Property->GetFName()
			&& Name_LerpCurve == ClassReps[(int32)ENetFields_Private::LerpCurve].Property->GetFName()
			&& Name_LerpCurveVector == ClassReps[(int32)ENetFields_Private::LerpCurveVector].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAbilityTask_MoveToLocation"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilityTask_MoveToLocation);
	UAbilityTask_MoveToLocation::~UAbilityTask_MoveToLocation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilityTask_MoveToLocation, UAbilityTask_MoveToLocation::StaticClass, TEXT("UAbilityTask_MoveToLocation"), &Z_Registration_Info_UClass_UAbilityTask_MoveToLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilityTask_MoveToLocation), 1678895513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_1447395634(TEXT("/Script/GameplayAbilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilities_Public_Abilities_Tasks_AbilityTask_MoveToLocation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
