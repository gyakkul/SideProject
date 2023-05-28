// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosVehicleMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h
#error "ChaosVehicleMovementComponent.generated.h already included, missing '#pragma once' in ChaosVehicleMovementComponent.h"
#endif
#define CHAOSVEHICLES_ChaosVehicleMovementComponent_generated_h

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleReplicatedState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleReplicatedState>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_194_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTorqueControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleTorqueControlConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_269_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleTargetRotationControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleTargetRotationControlConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleStabilizeControlConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleStabilizeControlConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_478_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleInputRateConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleInputRateConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_585_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleAerofoilConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleAerofoilConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_661_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleThrustConfig_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleThrustConfig>();

#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_SPARSE_DATA
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 , float , float , float ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execEnableSelfRighting); \
	DECLARE_FUNCTION(execResetVehicle); \
	DECLARE_FUNCTION(execIsParked); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetForwardSpeedMPH); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetRequiresControllerForInputs); \
	DECLARE_FUNCTION(execSetUseAutomaticGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetChangeDownInput); \
	DECLARE_FUNCTION(execSetChangeUpInput); \
	DECLARE_FUNCTION(execSetSleeping); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetYawInput); \
	DECLARE_FUNCTION(execSetRollInput); \
	DECLARE_FUNCTION(execSetPitchInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execDecreaseThrottleInput); \
	DECLARE_FUNCTION(execIncreaseThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 , float , float , float ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 InCurrentGear, float InRollInput, float InPitchInput, float InYawInput); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execEnableSelfRighting); \
	DECLARE_FUNCTION(execResetVehicle); \
	DECLARE_FUNCTION(execIsParked); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execGetHandbrakeInput); \
	DECLARE_FUNCTION(execGetBrakeInput); \
	DECLARE_FUNCTION(execGetThrottleInput); \
	DECLARE_FUNCTION(execGetForwardSpeedMPH); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execSetRequiresControllerForInputs); \
	DECLARE_FUNCTION(execSetUseAutomaticGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetChangeDownInput); \
	DECLARE_FUNCTION(execSetChangeUpInput); \
	DECLARE_FUNCTION(execSetSleeping); \
	DECLARE_FUNCTION(execSetParked); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetYawInput); \
	DECLARE_FUNCTION(execSetRollInput); \
	DECLARE_FUNCTION(execSetPitchInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execDecreaseThrottleInput); \
	DECLARE_FUNCTION(execIncreaseThrottleInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ACCESSORS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UChaosVehicleMovementComponent, NO_API)


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosVehicleMovementComponent) \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_INCLASS \
private: \
	static void StaticRegisterNativesUChaosVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UChaosVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UChaosVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosVehicles"), NO_API) \
	DECLARE_SERIALIZER(UChaosVehicleMovementComponent) \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ARCHIVESERIALIZER \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosVehicleMovementComponent(UChaosVehicleMovementComponent&&); \
	NO_API UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&); \
public: \
	NO_API virtual ~UChaosVehicleMovementComponent();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosVehicleMovementComponent(UChaosVehicleMovementComponent&&); \
	NO_API UChaosVehicleMovementComponent(const UChaosVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosVehicleMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosVehicleMovementComponent); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosVehicleMovementComponent) \
	NO_API virtual ~UChaosVehicleMovementComponent();


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_806_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_RPC_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_INCLASS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_SPARSE_DATA \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ACCESSORS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h_812_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ChaosVehicleMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSVEHICLES_API UClass* StaticClass<class UChaosVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehicles_Public_ChaosVehicleMovementComponent_h


#define FOREACH_ENUM_EINPUTFUNCTIONTYPE(op) \
	op(EInputFunctionType::LinearFunction) \
	op(EInputFunctionType::SquaredFunction) \
	op(EInputFunctionType::CustomCurve) 

enum class EInputFunctionType : uint8;
template<> struct TIsUEnumClass<EInputFunctionType> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EInputFunctionType>();

#define FOREACH_ENUM_EVEHICLEAEROFOILTYPE(op) \
	op(EVehicleAerofoilType::Fixed) \
	op(EVehicleAerofoilType::Wing) \
	op(EVehicleAerofoilType::Rudder) \
	op(EVehicleAerofoilType::Elevator) 

enum class EVehicleAerofoilType : uint8;
template<> struct TIsUEnumClass<EVehicleAerofoilType> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleAerofoilType>();

#define FOREACH_ENUM_EVEHICLETHRUSTTYPE(op) \
	op(EVehicleThrustType::Fixed) \
	op(EVehicleThrustType::Wing) \
	op(EVehicleThrustType::Rudder) \
	op(EVehicleThrustType::Elevator) 

enum class EVehicleThrustType : uint8;
template<> struct TIsUEnumClass<EVehicleThrustType> { enum { Value = true }; };
template<> CHAOSVEHICLES_API UEnum* StaticEnum<EVehicleThrustType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
