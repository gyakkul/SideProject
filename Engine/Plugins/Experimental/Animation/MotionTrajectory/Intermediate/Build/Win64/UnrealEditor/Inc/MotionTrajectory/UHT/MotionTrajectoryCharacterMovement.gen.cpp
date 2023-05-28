// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionTrajectoryCharacterMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionTrajectoryCharacterMovement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterMovementTrajectoryComponent();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UCharacterMovementTrajectoryComponent_NoRegister();
	MOTIONTRAJECTORY_API UClass* Z_Construct_UClass_UMotionTrajectoryComponent();
	UPackage* Z_Construct_UPackage__Script_MotionTrajectory();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterMovementTrajectoryComponent::execOnMovementUpdated)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_GET_STRUCT(FVector,Z_Param_OldLocation);
		P_GET_STRUCT(FVector,Z_Param_OldVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMovementUpdated(Z_Param_DeltaSeconds,Z_Param_OldLocation,Z_Param_OldVelocity);
		P_NATIVE_END;
	}
	void UCharacterMovementTrajectoryComponent::StaticRegisterNativesUCharacterMovementTrajectoryComponent()
	{
		UClass* Class = UCharacterMovementTrajectoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMovementUpdated", &UCharacterMovementTrajectoryComponent::execOnMovementUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics
	{
		struct CharacterMovementTrajectoryComponent_eventOnMovementUpdated_Parms
		{
			float DeltaSeconds;
			FVector OldLocation;
			FVector OldVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterMovementTrajectoryComponent_eventOnMovementUpdated_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldLocation = { "OldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterMovementTrajectoryComponent_eventOnMovementUpdated_Parms, OldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldVelocity = { "OldVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CharacterMovementTrajectoryComponent_eventOnMovementUpdated_Parms, OldVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_DeltaSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::NewProp_OldVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// End UMotionTrajectoryComponent Interface\n" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryCharacterMovement.h" },
		{ "ToolTip", "End UMotionTrajectoryComponent Interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterMovementTrajectoryComponent, nullptr, "OnMovementUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::CharacterMovementTrajectoryComponent_eventOnMovementUpdated_Parms), Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterMovementTrajectoryComponent);
	UClass* Z_Construct_UClass_UCharacterMovementTrajectoryComponent_NoRegister()
	{
		return UCharacterMovementTrajectoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastDesiredControlRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastDesiredControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredControlRotationVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredControlRotationVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMotionTrajectoryComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionTrajectory,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterMovementTrajectoryComponent_OnMovementUpdated, "OnMovementUpdated" }, // 3949083869
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Category", "Motion Trajectory" },
		{ "Comment", "// Example motion trajectory component implementation for encapsulating: Character Movement ground locomotion\n" },
		{ "IncludePath", "MotionTrajectoryCharacterMovement.h" },
		{ "ModuleRelativePath", "Public/MotionTrajectoryCharacterMovement.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Example motion trajectory component implementation for encapsulating: Character Movement ground locomotion" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_LastDesiredControlRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionTrajectoryCharacterMovement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_LastDesiredControlRotation = { "LastDesiredControlRotation", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterMovementTrajectoryComponent, LastDesiredControlRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_LastDesiredControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_LastDesiredControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_DesiredControlRotationVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/MotionTrajectoryCharacterMovement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_DesiredControlRotationVelocity = { "DesiredControlRotationVelocity", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCharacterMovementTrajectoryComponent, DesiredControlRotationVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_DesiredControlRotationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_DesiredControlRotationVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_LastDesiredControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::NewProp_DesiredControlRotationVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterMovementTrajectoryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::ClassParams = {
		&UCharacterMovementTrajectoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterMovementTrajectoryComponent()
	{
		if (!Z_Registration_Info_UClass_UCharacterMovementTrajectoryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterMovementTrajectoryComponent.OuterSingleton, Z_Construct_UClass_UCharacterMovementTrajectoryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCharacterMovementTrajectoryComponent.OuterSingleton;
	}
	template<> MOTIONTRAJECTORY_API UClass* StaticClass<UCharacterMovementTrajectoryComponent>()
	{
		return UCharacterMovementTrajectoryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterMovementTrajectoryComponent);
	UCharacterMovementTrajectoryComponent::~UCharacterMovementTrajectoryComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryCharacterMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryCharacterMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterMovementTrajectoryComponent, UCharacterMovementTrajectoryComponent::StaticClass, TEXT("UCharacterMovementTrajectoryComponent"), &Z_Registration_Info_UClass_UCharacterMovementTrajectoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterMovementTrajectoryComponent), 485863828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryCharacterMovement_h_2528789844(TEXT("/Script/MotionTrajectory"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryCharacterMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_MotionTrajectory_Source_MotionTrajectory_Public_MotionTrajectoryCharacterMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
